# BIOS

Similar to other devices, the Ruyi box has BIOS firmware.

## Version

__Checking BIOS version__

- When machine starts
    1. Press `F2` to enter BIOS setup
    1. Enter __Utility -> Main -> BIOS Version__

OR

- In Windows
    1. Run `msinfo32.exe`
    1. Inspect __System Summary -> BIOS Version/Date__ value  
    ![](/docs/img/msinfo32_bios.png)

The BIOS version __must__ match the [Ruyi OS](os.md) version because the BIOS must be paired with a compatible AMD driver.

| BIOS Version/Date | Ruyi OS Version | AMD Driver Stack Version/Date
|-|-|-
| | 0.6 (Scheduled for release 2018/3) | 0.0.9.0 2018/2/2
| [0.11](https://bitbucket.org/playruyi/support/raw/master/files/bios/DA220011.zip) | 0.5 | 0.0.7.4 2018/1/5 (23.20.785.0)
| [0.10](https://bitbucket.org/playruyi/support/raw/master/files/bios/DA220010.zip) 2018/1/15 | 0.4 | 0.0.7.4 2018/1/5 (23.20.785.0)
| [0.09](https://bitbucket.org/playruyi/support/raw/master/files/bios/DA220009.zip) 2018/1/8 | 0.3 | 0.0.7.2 2017/12/15 (23.20.785.0)
| 0.08 2018/1/2 | 0.3 | 0.0.7.2 2017/12/15 (23.20.785.0)

Also see:

- How to check the [Ruyi OS verison](os.md#Version)
- [OS Image download](http://dev.playruyi.com/uservices)

## Flashing the BIOS

__Flash under windows__ (available after 0.13)

_It is recommended to flash BIOS under windows unless you have difficulties or do not have a OS installed_

To do that,

1. Download the latest BIOS zip file
2. Extract the zip file and locate \Winflash\ folder
3. Run DA22XXXX.exe to flash BIOS

__Flash with EFI shell__

_CAUTION: Doing so will trigger bitlocker recovery mode next time you boot ruyiOS, you might have to reinstall OS to get the system working!!_
1. Format USB drive with FAT32 filesystem
1. Unzip [EFI shell files](https://bitbucket.org/playruyi/support/raw/master/files/bios/efi.zip) to root of USB drive
1. Unzip [BIOS binaries](https://bitbucket.org/playruyi/support/src/master/files/bios/) to root of USB drive

Resulting directory structure should be similar to the following:
```
<USB root>
│
├───Shell
│       DA220010.rom
│       flash.nsh
│       H2OFFT-Sx64.efi
│       PLATFORM.INI
│
└───efi
    └───boot
            BOOTX64.efi
```

__Next, On the Ruyi Box__

1. In [Command Prompt with administrator rights](https://technet.microsoft.com/en-us/library/cc947813(v=ws.10).aspx) run: `manage-bde.exe -protectors -disable c:`
    - This temporarily disables Bitlocker.  __Failure to do this results in an unbootable OS__ due to lost encryption data in TPM chip.
1. Plug USB flash drive into any USB port on the box and reboot the box
1. Wait for EFI Shell prompt to appear:

       Shell>

1. Consult the _Device mapping table_ for the name of the USB drive
    - It should be `fs0` or `fs1`
    - Type `fs0:` (or `fs1:`) and press `Enter` then run `dir` to locate the _Shell_ folder on the USB drive
1. Change to USB drive with `fs0:` (or `fs1:`), then enter _Shell_ folder with `cd shell`
1. Start flashing the BIOS by running `flash.nsh`
    - A progress bar should be displayed during the flashing process
1. Wait around 1 minute for the flashing to complete
1. Remove the USB stick and reboot machine

## Installing Ruyi OS

![](/docs/img/warning.png) Flash the correct BIOS version __before__ installing the corresponding OS version.

See [Ruyi OS installation instructions](os.md#Installation).

## Resources

- [Support files](https://bitbucket.org/playruyi/support/src/master/files/)