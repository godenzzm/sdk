/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef InputManagerService_H
#define InputManagerService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "InputManagerSDKServices_types.h"

namespace Ruyi { namespace SDK { namespace InputManager {

#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class InputManagerServiceIf {
 public:
  virtual ~InputManagerServiceIf() {}

  /**
   * Get the gamepads that are connected corrently
   */
  virtual void GetConnectedGamepads(std::vector< ::Ruyi::SDK::InputManager::GamepadInfo> & _return) = 0;

  /**
   * Activate the vibration of gamepad
   * 
   * @param deviceId The deviceid of the gamepad
   * 
   * @param motor1Value
   * @param motor1Time
   * @param motor2Value
   * @param motor2Time
   */
  virtual bool SetGamepadVibration(const std::string& deviceId, const int8_t motor1Value, const int8_t motor1Time, const int8_t motor2Value, const int8_t motor2Time) = 0;

  /**
   * SetGamepadLight_desc
   * 
   * @param deviceId The device id of the gamepad
   * 
   * @param RValue
   * @param GValue
   * @param BValue
   */
  virtual bool SetGamepadLight(const std::string& deviceId, const int8_t RValue, const int8_t GValue, const int8_t BValue) = 0;

  /**
   * Obsolete. Temporary api the change the ruyi controller's state, will be removed later.
   * 
   * @param channel
   * @param enableR
   * @param enableG
   * @param enableB
   * @param enableMotor1
   * @param enableMotor2
   * @param shutdown
   * @param RValue
   * @param GValue
   * @param BValue
   * @param motor1Value
   * @param motor1Time
   * @param motor2Value
   * @param motor2Time
   */
  virtual bool SetRuyiControllerStatus(const int8_t channel, const bool enableR, const bool enableG, const bool enableB, const bool enableMotor1, const bool enableMotor2, const bool shutdown, const int8_t RValue, const int8_t GValue, const int8_t BValue, const int8_t motor1Value, const int8_t motor1Time, const int8_t motor2Value, const int8_t motor2Time) = 0;
};

class InputManagerServiceIfFactory {
 public:
  typedef InputManagerServiceIf Handler;

  virtual ~InputManagerServiceIfFactory() {}

  virtual InputManagerServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(InputManagerServiceIf* /* handler */) = 0;
};

class InputManagerServiceIfSingletonFactory : virtual public InputManagerServiceIfFactory {
 public:
  InputManagerServiceIfSingletonFactory(const ::apache::thrift::stdcxx::shared_ptr<InputManagerServiceIf>& iface) : iface_(iface) {}
  virtual ~InputManagerServiceIfSingletonFactory() {}

  virtual InputManagerServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(InputManagerServiceIf* /* handler */) {}

 protected:
  ::apache::thrift::stdcxx::shared_ptr<InputManagerServiceIf> iface_;
};

class InputManagerServiceNull : virtual public InputManagerServiceIf {
 public:
  virtual ~InputManagerServiceNull() {}
  void GetConnectedGamepads(std::vector< ::Ruyi::SDK::InputManager::GamepadInfo> & /* _return */) {
    return;
  }
  bool SetGamepadVibration(const std::string& /* deviceId */, const int8_t /* motor1Value */, const int8_t /* motor1Time */, const int8_t /* motor2Value */, const int8_t /* motor2Time */) {
    bool _return = false;
    return _return;
  }
  bool SetGamepadLight(const std::string& /* deviceId */, const int8_t /* RValue */, const int8_t /* GValue */, const int8_t /* BValue */) {
    bool _return = false;
    return _return;
  }
  bool SetRuyiControllerStatus(const int8_t /* channel */, const bool /* enableR */, const bool /* enableG */, const bool /* enableB */, const bool /* enableMotor1 */, const bool /* enableMotor2 */, const bool /* shutdown */, const int8_t /* RValue */, const int8_t /* GValue */, const int8_t /* BValue */, const int8_t /* motor1Value */, const int8_t /* motor1Time */, const int8_t /* motor2Value */, const int8_t /* motor2Time */) {
    bool _return = false;
    return _return;
  }
};


class InputManagerService_GetConnectedGamepads_args {
 public:

  InputManagerService_GetConnectedGamepads_args(const InputManagerService_GetConnectedGamepads_args&);
  InputManagerService_GetConnectedGamepads_args& operator=(const InputManagerService_GetConnectedGamepads_args&);
  InputManagerService_GetConnectedGamepads_args() {
  }

  virtual ~InputManagerService_GetConnectedGamepads_args() throw();

  bool operator == (const InputManagerService_GetConnectedGamepads_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const InputManagerService_GetConnectedGamepads_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InputManagerService_GetConnectedGamepads_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class InputManagerService_GetConnectedGamepads_pargs {
 public:


  virtual ~InputManagerService_GetConnectedGamepads_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _InputManagerService_GetConnectedGamepads_result__isset {
  _InputManagerService_GetConnectedGamepads_result__isset() : success(false) {}
  bool success :1;
} _InputManagerService_GetConnectedGamepads_result__isset;

class InputManagerService_GetConnectedGamepads_result {
 public:

  InputManagerService_GetConnectedGamepads_result(const InputManagerService_GetConnectedGamepads_result&);
  InputManagerService_GetConnectedGamepads_result& operator=(const InputManagerService_GetConnectedGamepads_result&);
  InputManagerService_GetConnectedGamepads_result() {
  }

  virtual ~InputManagerService_GetConnectedGamepads_result() throw();
  std::vector< ::Ruyi::SDK::InputManager::GamepadInfo>  success;

  _InputManagerService_GetConnectedGamepads_result__isset __isset;

  void __set_success(const std::vector< ::Ruyi::SDK::InputManager::GamepadInfo> & val);

  bool operator == (const InputManagerService_GetConnectedGamepads_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const InputManagerService_GetConnectedGamepads_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InputManagerService_GetConnectedGamepads_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _InputManagerService_GetConnectedGamepads_presult__isset {
  _InputManagerService_GetConnectedGamepads_presult__isset() : success(false) {}
  bool success :1;
} _InputManagerService_GetConnectedGamepads_presult__isset;

class InputManagerService_GetConnectedGamepads_presult {
 public:


  virtual ~InputManagerService_GetConnectedGamepads_presult() throw();
  std::vector< ::Ruyi::SDK::InputManager::GamepadInfo> * success;

  _InputManagerService_GetConnectedGamepads_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _InputManagerService_SetGamepadVibration_args__isset {
  _InputManagerService_SetGamepadVibration_args__isset() : deviceId(false), motor1Value(false), motor1Time(false), motor2Value(false), motor2Time(false) {}
  bool deviceId :1;
  bool motor1Value :1;
  bool motor1Time :1;
  bool motor2Value :1;
  bool motor2Time :1;
} _InputManagerService_SetGamepadVibration_args__isset;

class InputManagerService_SetGamepadVibration_args {
 public:

  InputManagerService_SetGamepadVibration_args(const InputManagerService_SetGamepadVibration_args&);
  InputManagerService_SetGamepadVibration_args& operator=(const InputManagerService_SetGamepadVibration_args&);
  InputManagerService_SetGamepadVibration_args() : deviceId(), motor1Value(0), motor1Time(0), motor2Value(0), motor2Time(0) {
  }

  virtual ~InputManagerService_SetGamepadVibration_args() throw();
  std::string deviceId;
  int8_t motor1Value;
  int8_t motor1Time;
  int8_t motor2Value;
  int8_t motor2Time;

  _InputManagerService_SetGamepadVibration_args__isset __isset;

  void __set_deviceId(const std::string& val);

  void __set_motor1Value(const int8_t val);

  void __set_motor1Time(const int8_t val);

  void __set_motor2Value(const int8_t val);

  void __set_motor2Time(const int8_t val);

  bool operator == (const InputManagerService_SetGamepadVibration_args & rhs) const
  {
    if (!(deviceId == rhs.deviceId))
      return false;
    if (!(motor1Value == rhs.motor1Value))
      return false;
    if (!(motor1Time == rhs.motor1Time))
      return false;
    if (!(motor2Value == rhs.motor2Value))
      return false;
    if (!(motor2Time == rhs.motor2Time))
      return false;
    return true;
  }
  bool operator != (const InputManagerService_SetGamepadVibration_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InputManagerService_SetGamepadVibration_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class InputManagerService_SetGamepadVibration_pargs {
 public:


  virtual ~InputManagerService_SetGamepadVibration_pargs() throw();
  const std::string* deviceId;
  const int8_t* motor1Value;
  const int8_t* motor1Time;
  const int8_t* motor2Value;
  const int8_t* motor2Time;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _InputManagerService_SetGamepadVibration_result__isset {
  _InputManagerService_SetGamepadVibration_result__isset() : success(false) {}
  bool success :1;
} _InputManagerService_SetGamepadVibration_result__isset;

class InputManagerService_SetGamepadVibration_result {
 public:

  InputManagerService_SetGamepadVibration_result(const InputManagerService_SetGamepadVibration_result&);
  InputManagerService_SetGamepadVibration_result& operator=(const InputManagerService_SetGamepadVibration_result&);
  InputManagerService_SetGamepadVibration_result() : success(0) {
  }

  virtual ~InputManagerService_SetGamepadVibration_result() throw();
  bool success;

  _InputManagerService_SetGamepadVibration_result__isset __isset;

  void __set_success(const bool val);

  bool operator == (const InputManagerService_SetGamepadVibration_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const InputManagerService_SetGamepadVibration_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InputManagerService_SetGamepadVibration_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _InputManagerService_SetGamepadVibration_presult__isset {
  _InputManagerService_SetGamepadVibration_presult__isset() : success(false) {}
  bool success :1;
} _InputManagerService_SetGamepadVibration_presult__isset;

class InputManagerService_SetGamepadVibration_presult {
 public:


  virtual ~InputManagerService_SetGamepadVibration_presult() throw();
  bool* success;

  _InputManagerService_SetGamepadVibration_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _InputManagerService_SetGamepadLight_args__isset {
  _InputManagerService_SetGamepadLight_args__isset() : deviceId(false), RValue(false), GValue(false), BValue(false) {}
  bool deviceId :1;
  bool RValue :1;
  bool GValue :1;
  bool BValue :1;
} _InputManagerService_SetGamepadLight_args__isset;

class InputManagerService_SetGamepadLight_args {
 public:

  InputManagerService_SetGamepadLight_args(const InputManagerService_SetGamepadLight_args&);
  InputManagerService_SetGamepadLight_args& operator=(const InputManagerService_SetGamepadLight_args&);
  InputManagerService_SetGamepadLight_args() : deviceId(), RValue(0), GValue(0), BValue(0) {
  }

  virtual ~InputManagerService_SetGamepadLight_args() throw();
  std::string deviceId;
  int8_t RValue;
  int8_t GValue;
  int8_t BValue;

  _InputManagerService_SetGamepadLight_args__isset __isset;

  void __set_deviceId(const std::string& val);

  void __set_RValue(const int8_t val);

  void __set_GValue(const int8_t val);

  void __set_BValue(const int8_t val);

  bool operator == (const InputManagerService_SetGamepadLight_args & rhs) const
  {
    if (!(deviceId == rhs.deviceId))
      return false;
    if (!(RValue == rhs.RValue))
      return false;
    if (!(GValue == rhs.GValue))
      return false;
    if (!(BValue == rhs.BValue))
      return false;
    return true;
  }
  bool operator != (const InputManagerService_SetGamepadLight_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InputManagerService_SetGamepadLight_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class InputManagerService_SetGamepadLight_pargs {
 public:


  virtual ~InputManagerService_SetGamepadLight_pargs() throw();
  const std::string* deviceId;
  const int8_t* RValue;
  const int8_t* GValue;
  const int8_t* BValue;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _InputManagerService_SetGamepadLight_result__isset {
  _InputManagerService_SetGamepadLight_result__isset() : success(false) {}
  bool success :1;
} _InputManagerService_SetGamepadLight_result__isset;

class InputManagerService_SetGamepadLight_result {
 public:

  InputManagerService_SetGamepadLight_result(const InputManagerService_SetGamepadLight_result&);
  InputManagerService_SetGamepadLight_result& operator=(const InputManagerService_SetGamepadLight_result&);
  InputManagerService_SetGamepadLight_result() : success(0) {
  }

  virtual ~InputManagerService_SetGamepadLight_result() throw();
  bool success;

  _InputManagerService_SetGamepadLight_result__isset __isset;

  void __set_success(const bool val);

  bool operator == (const InputManagerService_SetGamepadLight_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const InputManagerService_SetGamepadLight_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InputManagerService_SetGamepadLight_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _InputManagerService_SetGamepadLight_presult__isset {
  _InputManagerService_SetGamepadLight_presult__isset() : success(false) {}
  bool success :1;
} _InputManagerService_SetGamepadLight_presult__isset;

class InputManagerService_SetGamepadLight_presult {
 public:


  virtual ~InputManagerService_SetGamepadLight_presult() throw();
  bool* success;

  _InputManagerService_SetGamepadLight_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _InputManagerService_SetRuyiControllerStatus_args__isset {
  _InputManagerService_SetRuyiControllerStatus_args__isset() : channel(false), enableR(false), enableG(false), enableB(false), enableMotor1(false), enableMotor2(false), shutdown(false), RValue(false), GValue(false), BValue(false), motor1Value(false), motor1Time(false), motor2Value(false), motor2Time(false) {}
  bool channel :1;
  bool enableR :1;
  bool enableG :1;
  bool enableB :1;
  bool enableMotor1 :1;
  bool enableMotor2 :1;
  bool shutdown :1;
  bool RValue :1;
  bool GValue :1;
  bool BValue :1;
  bool motor1Value :1;
  bool motor1Time :1;
  bool motor2Value :1;
  bool motor2Time :1;
} _InputManagerService_SetRuyiControllerStatus_args__isset;

class InputManagerService_SetRuyiControllerStatus_args {
 public:

  InputManagerService_SetRuyiControllerStatus_args(const InputManagerService_SetRuyiControllerStatus_args&);
  InputManagerService_SetRuyiControllerStatus_args& operator=(const InputManagerService_SetRuyiControllerStatus_args&);
  InputManagerService_SetRuyiControllerStatus_args() : channel(0), enableR(0), enableG(0), enableB(0), enableMotor1(0), enableMotor2(0), shutdown(0), RValue(0), GValue(0), BValue(0), motor1Value(0), motor1Time(0), motor2Value(0), motor2Time(0) {
  }

  virtual ~InputManagerService_SetRuyiControllerStatus_args() throw();
  int8_t channel;
  bool enableR;
  bool enableG;
  bool enableB;
  bool enableMotor1;
  bool enableMotor2;
  bool shutdown;
  int8_t RValue;
  int8_t GValue;
  int8_t BValue;
  int8_t motor1Value;
  int8_t motor1Time;
  int8_t motor2Value;
  int8_t motor2Time;

  _InputManagerService_SetRuyiControllerStatus_args__isset __isset;

  void __set_channel(const int8_t val);

  void __set_enableR(const bool val);

  void __set_enableG(const bool val);

  void __set_enableB(const bool val);

  void __set_enableMotor1(const bool val);

  void __set_enableMotor2(const bool val);

  void __set_shutdown(const bool val);

  void __set_RValue(const int8_t val);

  void __set_GValue(const int8_t val);

  void __set_BValue(const int8_t val);

  void __set_motor1Value(const int8_t val);

  void __set_motor1Time(const int8_t val);

  void __set_motor2Value(const int8_t val);

  void __set_motor2Time(const int8_t val);

  bool operator == (const InputManagerService_SetRuyiControllerStatus_args & rhs) const
  {
    if (!(channel == rhs.channel))
      return false;
    if (!(enableR == rhs.enableR))
      return false;
    if (!(enableG == rhs.enableG))
      return false;
    if (!(enableB == rhs.enableB))
      return false;
    if (!(enableMotor1 == rhs.enableMotor1))
      return false;
    if (!(enableMotor2 == rhs.enableMotor2))
      return false;
    if (!(shutdown == rhs.shutdown))
      return false;
    if (!(RValue == rhs.RValue))
      return false;
    if (!(GValue == rhs.GValue))
      return false;
    if (!(BValue == rhs.BValue))
      return false;
    if (!(motor1Value == rhs.motor1Value))
      return false;
    if (!(motor1Time == rhs.motor1Time))
      return false;
    if (!(motor2Value == rhs.motor2Value))
      return false;
    if (!(motor2Time == rhs.motor2Time))
      return false;
    return true;
  }
  bool operator != (const InputManagerService_SetRuyiControllerStatus_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InputManagerService_SetRuyiControllerStatus_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class InputManagerService_SetRuyiControllerStatus_pargs {
 public:


  virtual ~InputManagerService_SetRuyiControllerStatus_pargs() throw();
  const int8_t* channel;
  const bool* enableR;
  const bool* enableG;
  const bool* enableB;
  const bool* enableMotor1;
  const bool* enableMotor2;
  const bool* shutdown;
  const int8_t* RValue;
  const int8_t* GValue;
  const int8_t* BValue;
  const int8_t* motor1Value;
  const int8_t* motor1Time;
  const int8_t* motor2Value;
  const int8_t* motor2Time;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _InputManagerService_SetRuyiControllerStatus_result__isset {
  _InputManagerService_SetRuyiControllerStatus_result__isset() : success(false) {}
  bool success :1;
} _InputManagerService_SetRuyiControllerStatus_result__isset;

class InputManagerService_SetRuyiControllerStatus_result {
 public:

  InputManagerService_SetRuyiControllerStatus_result(const InputManagerService_SetRuyiControllerStatus_result&);
  InputManagerService_SetRuyiControllerStatus_result& operator=(const InputManagerService_SetRuyiControllerStatus_result&);
  InputManagerService_SetRuyiControllerStatus_result() : success(0) {
  }

  virtual ~InputManagerService_SetRuyiControllerStatus_result() throw();
  bool success;

  _InputManagerService_SetRuyiControllerStatus_result__isset __isset;

  void __set_success(const bool val);

  bool operator == (const InputManagerService_SetRuyiControllerStatus_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const InputManagerService_SetRuyiControllerStatus_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const InputManagerService_SetRuyiControllerStatus_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _InputManagerService_SetRuyiControllerStatus_presult__isset {
  _InputManagerService_SetRuyiControllerStatus_presult__isset() : success(false) {}
  bool success :1;
} _InputManagerService_SetRuyiControllerStatus_presult__isset;

class InputManagerService_SetRuyiControllerStatus_presult {
 public:


  virtual ~InputManagerService_SetRuyiControllerStatus_presult() throw();
  bool* success;

  _InputManagerService_SetRuyiControllerStatus_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class InputManagerServiceClient : virtual public InputManagerServiceIf {
 public:
  InputManagerServiceClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  InputManagerServiceClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void GetConnectedGamepads(std::vector< ::Ruyi::SDK::InputManager::GamepadInfo> & _return);
  void send_GetConnectedGamepads();
  void recv_GetConnectedGamepads(std::vector< ::Ruyi::SDK::InputManager::GamepadInfo> & _return);
  bool SetGamepadVibration(const std::string& deviceId, const int8_t motor1Value, const int8_t motor1Time, const int8_t motor2Value, const int8_t motor2Time);
  void send_SetGamepadVibration(const std::string& deviceId, const int8_t motor1Value, const int8_t motor1Time, const int8_t motor2Value, const int8_t motor2Time);
  bool recv_SetGamepadVibration();
  bool SetGamepadLight(const std::string& deviceId, const int8_t RValue, const int8_t GValue, const int8_t BValue);
  void send_SetGamepadLight(const std::string& deviceId, const int8_t RValue, const int8_t GValue, const int8_t BValue);
  bool recv_SetGamepadLight();
  bool SetRuyiControllerStatus(const int8_t channel, const bool enableR, const bool enableG, const bool enableB, const bool enableMotor1, const bool enableMotor2, const bool shutdown, const int8_t RValue, const int8_t GValue, const int8_t BValue, const int8_t motor1Value, const int8_t motor1Time, const int8_t motor2Value, const int8_t motor2Time);
  void send_SetRuyiControllerStatus(const int8_t channel, const bool enableR, const bool enableG, const bool enableB, const bool enableMotor1, const bool enableMotor2, const bool shutdown, const int8_t RValue, const int8_t GValue, const int8_t BValue, const int8_t motor1Value, const int8_t motor1Time, const int8_t motor2Value, const int8_t motor2Time);
  bool recv_SetRuyiControllerStatus();
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class InputManagerServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::apache::thrift::stdcxx::shared_ptr<InputManagerServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (InputManagerServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_GetConnectedGamepads(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_SetGamepadVibration(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_SetGamepadLight(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_SetRuyiControllerStatus(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  InputManagerServiceProcessor(::apache::thrift::stdcxx::shared_ptr<InputManagerServiceIf> iface) :
    iface_(iface) {
    processMap_["GetConnectedGamepads"] = &InputManagerServiceProcessor::process_GetConnectedGamepads;
    processMap_["SetGamepadVibration"] = &InputManagerServiceProcessor::process_SetGamepadVibration;
    processMap_["SetGamepadLight"] = &InputManagerServiceProcessor::process_SetGamepadLight;
    processMap_["SetRuyiControllerStatus"] = &InputManagerServiceProcessor::process_SetRuyiControllerStatus;
  }

  virtual ~InputManagerServiceProcessor() {}
};

class InputManagerServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  InputManagerServiceProcessorFactory(const ::apache::thrift::stdcxx::shared_ptr< InputManagerServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::apache::thrift::stdcxx::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::apache::thrift::stdcxx::shared_ptr< InputManagerServiceIfFactory > handlerFactory_;
};

class InputManagerServiceMultiface : virtual public InputManagerServiceIf {
 public:
  InputManagerServiceMultiface(std::vector<apache::thrift::stdcxx::shared_ptr<InputManagerServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~InputManagerServiceMultiface() {}
 protected:
  std::vector<apache::thrift::stdcxx::shared_ptr<InputManagerServiceIf> > ifaces_;
  InputManagerServiceMultiface() {}
  void add(::apache::thrift::stdcxx::shared_ptr<InputManagerServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void GetConnectedGamepads(std::vector< ::Ruyi::SDK::InputManager::GamepadInfo> & _return) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->GetConnectedGamepads(_return);
    }
    ifaces_[i]->GetConnectedGamepads(_return);
    return;
  }

  bool SetGamepadVibration(const std::string& deviceId, const int8_t motor1Value, const int8_t motor1Time, const int8_t motor2Value, const int8_t motor2Time) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->SetGamepadVibration(deviceId, motor1Value, motor1Time, motor2Value, motor2Time);
    }
    return ifaces_[i]->SetGamepadVibration(deviceId, motor1Value, motor1Time, motor2Value, motor2Time);
  }

  bool SetGamepadLight(const std::string& deviceId, const int8_t RValue, const int8_t GValue, const int8_t BValue) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->SetGamepadLight(deviceId, RValue, GValue, BValue);
    }
    return ifaces_[i]->SetGamepadLight(deviceId, RValue, GValue, BValue);
  }

  bool SetRuyiControllerStatus(const int8_t channel, const bool enableR, const bool enableG, const bool enableB, const bool enableMotor1, const bool enableMotor2, const bool shutdown, const int8_t RValue, const int8_t GValue, const int8_t BValue, const int8_t motor1Value, const int8_t motor1Time, const int8_t motor2Value, const int8_t motor2Time) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->SetRuyiControllerStatus(channel, enableR, enableG, enableB, enableMotor1, enableMotor2, shutdown, RValue, GValue, BValue, motor1Value, motor1Time, motor2Value, motor2Time);
    }
    return ifaces_[i]->SetRuyiControllerStatus(channel, enableR, enableG, enableB, enableMotor1, enableMotor2, shutdown, RValue, GValue, BValue, motor1Value, motor1Time, motor2Value, motor2Time);
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class InputManagerServiceConcurrentClient : virtual public InputManagerServiceIf {
 public:
  InputManagerServiceConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  InputManagerServiceConcurrentClient(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void GetConnectedGamepads(std::vector< ::Ruyi::SDK::InputManager::GamepadInfo> & _return);
  int32_t send_GetConnectedGamepads();
  void recv_GetConnectedGamepads(std::vector< ::Ruyi::SDK::InputManager::GamepadInfo> & _return, const int32_t seqid);
  bool SetGamepadVibration(const std::string& deviceId, const int8_t motor1Value, const int8_t motor1Time, const int8_t motor2Value, const int8_t motor2Time);
  int32_t send_SetGamepadVibration(const std::string& deviceId, const int8_t motor1Value, const int8_t motor1Time, const int8_t motor2Value, const int8_t motor2Time);
  bool recv_SetGamepadVibration(const int32_t seqid);
  bool SetGamepadLight(const std::string& deviceId, const int8_t RValue, const int8_t GValue, const int8_t BValue);
  int32_t send_SetGamepadLight(const std::string& deviceId, const int8_t RValue, const int8_t GValue, const int8_t BValue);
  bool recv_SetGamepadLight(const int32_t seqid);
  bool SetRuyiControllerStatus(const int8_t channel, const bool enableR, const bool enableG, const bool enableB, const bool enableMotor1, const bool enableMotor2, const bool shutdown, const int8_t RValue, const int8_t GValue, const int8_t BValue, const int8_t motor1Value, const int8_t motor1Time, const int8_t motor2Value, const int8_t motor2Time);
  int32_t send_SetRuyiControllerStatus(const int8_t channel, const bool enableR, const bool enableG, const bool enableB, const bool enableMotor1, const bool enableMotor2, const bool shutdown, const int8_t RValue, const int8_t GValue, const int8_t BValue, const int8_t motor1Value, const int8_t motor1Time, const int8_t motor2Value, const int8_t motor2Time);
  bool recv_SetRuyiControllerStatus(const int32_t seqid);
 protected:
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  apache::thrift::stdcxx::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif

}}} // namespace

#endif