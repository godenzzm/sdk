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
using System.Threading.Tasks;
using Thrift;
using Thrift.Collections;
using System.Runtime.Serialization;
using Thrift.Protocol;
using Thrift.Transport;

namespace Ruyi.SDK.Http
{

  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class SubscribeRequest : TBase
  {
    private string _topic;
    private string _appid;
    private string _msgname;

    public string Topic
    {
      get
      {
        return _topic;
      }
      set
      {
        __isset.topic = true;
        this._topic = value;
      }
    }

    public string Appid
    {
      get
      {
        return _appid;
      }
      set
      {
        __isset.appid = true;
        this._appid = value;
      }
    }

    public string Msgname
    {
      get
      {
        return _msgname;
      }
      set
      {
        __isset.msgname = true;
        this._msgname = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool topic;
      public bool appid;
      public bool msgname;
    }

    public SubscribeRequest() {
    }

    public void Read (TProtocol iprot)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        TField field;
        iprot.ReadStructBegin();
        while (true)
        {
          field = iprot.ReadFieldBegin();
          if (field.Type == TType.Stop) { 
            break;
          }
          switch (field.ID)
          {
            case 1:
              if (field.Type == TType.String) {
                Topic = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 2:
              if (field.Type == TType.String) {
                Appid = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 3:
              if (field.Type == TType.String) {
                Msgname = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            default: 
              TProtocolUtil.Skip(iprot, field.Type);
              break;
          }
          iprot.ReadFieldEnd();
        }
        iprot.ReadStructEnd();
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public void Write(TProtocol oprot) {
      oprot.IncrementRecursionDepth();
      try
      {
        TStruct struc = new TStruct("SubscribeRequest");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (Topic != null && __isset.topic) {
          field.Name = "topic";
          field.Type = TType.String;
          field.ID = 1;
          oprot.WriteFieldBegin(field);
          oprot.WriteString(Topic);
          oprot.WriteFieldEnd();
        }
        if (Appid != null && __isset.appid) {
          field.Name = "appid";
          field.Type = TType.String;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          oprot.WriteString(Appid);
          oprot.WriteFieldEnd();
        }
        if (Msgname != null && __isset.msgname) {
          field.Name = "msgname";
          field.Type = TType.String;
          field.ID = 3;
          oprot.WriteFieldBegin(field);
          oprot.WriteString(Msgname);
          oprot.WriteFieldEnd();
        }
        oprot.WriteFieldStop();
        oprot.WriteStructEnd();
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override string ToString() {
      StringBuilder __sb = new StringBuilder("SubscribeRequest(");
      bool __first = true;
      if (Topic != null && __isset.topic) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Topic: ");
        __sb.Append(Topic);
      }
      if (Appid != null && __isset.appid) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Appid: ");
        __sb.Append(Appid);
      }
      if (Msgname != null && __isset.msgname) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("Msgname: ");
        __sb.Append(Msgname);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }

}