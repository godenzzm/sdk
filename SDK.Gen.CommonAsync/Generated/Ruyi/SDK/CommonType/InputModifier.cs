/**
 * Autogenerated by Thrift Compiler (0.11.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.IO;
using System.Threading;
using System.Threading.Tasks;
using Thrift;
using Thrift.Collections;

using Thrift.Protocols;
using Thrift.Protocols.Entities;
using Thrift.Protocols.Utilities;
using Thrift.Transports;
using Thrift.Transports.Client;
using Thrift.Transports.Server;


namespace Ruyi.SDK.CommonType
{

  public partial class InputModifier : TBase
  {
    private range _DeadZone;
    private double _Scale;

    public range DeadZone
    {
      get
      {
        return _DeadZone;
      }
      set
      {
        __isset.DeadZone = true;
        this._DeadZone = value;
      }
    }

    public double Scale
    {
      get
      {
        return _Scale;
      }
      set
      {
        __isset.Scale = true;
        this._Scale = value;
      }
    }


    public Isset __isset;
    public struct Isset
    {
      public bool DeadZone;
      public bool Scale;
    }

    public InputModifier()
    {
    }

    public async Task ReadAsync(TProtocol iprot, CancellationToken cancellationToken)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        await iprot.ReadStructBeginAsync(cancellationToken);
        while (true)
        {
          field = await iprot.ReadFieldBeginAsync(cancellationToken);
          if (field.Type == TType.Stop)
          {
            break;
          }

          switch (field.ID)
          {
            case 1:
              if (field.Type == TType.Struct)
              {
                DeadZone = new range();
                await DeadZone.ReadAsync(iprot, cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 2:
              if (field.Type == TType.Double)
              {
                Scale = await iprot.ReadDoubleAsync(cancellationToken);
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            default: 
              await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              break;
          }

          await iprot.ReadFieldEndAsync(cancellationToken);
        }

        await iprot.ReadStructEndAsync(cancellationToken);
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public async Task WriteAsync(TProtocol oprot, CancellationToken cancellationToken)
    {
      oprot.IncrementRecursionDepth();
      try
      {
        var struc = new TStruct("InputModifier");
        await oprot.WriteStructBeginAsync(struc, cancellationToken);
        var field = new TField();
        if (DeadZone != null && __isset.DeadZone)
        {
          field.Name = "DeadZone";
          field.Type = TType.Struct;
          field.ID = 1;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await DeadZone.WriteAsync(oprot, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if (__isset.Scale)
        {
          field.Name = "Scale";
          field.Type = TType.Double;
          field.ID = 2;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteDoubleAsync(Scale, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        await oprot.WriteFieldStopAsync(cancellationToken);
        await oprot.WriteStructEndAsync(cancellationToken);
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString()
    {
      var sb = new StringBuilder("InputModifier(");
      bool __first = true;
      if (DeadZone != null && __isset.DeadZone)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("DeadZone: ");
        sb.Append(DeadZone== null ? "<null>" : DeadZone.ToString());
      }
      if (__isset.Scale)
      {
        if(!__first) { sb.Append(", "); }
        __first = false;
        sb.Append("Scale: ");
        sb.Append(Scale);
      }
      sb.Append(")");
      return sb.ToString();
    }
  }

}