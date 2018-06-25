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

namespace Ruyi.SDK.BrainCloudApi
{

  #if !SILVERLIGHT
  [Serializable]
  #endif
  public partial class FileUploadFailedResult : TBase
  {
    private string _fileUploadId;
    private int _statusCode;
    private int _reasonCode;
    private string _jsonResponse;

    public string FileUploadId
    {
      get
      {
        return _fileUploadId;
      }
      set
      {
        __isset.fileUploadId = true;
        this._fileUploadId = value;
      }
    }

    public int StatusCode
    {
      get
      {
        return _statusCode;
      }
      set
      {
        __isset.statusCode = true;
        this._statusCode = value;
      }
    }

    public int ReasonCode
    {
      get
      {
        return _reasonCode;
      }
      set
      {
        __isset.reasonCode = true;
        this._reasonCode = value;
      }
    }

    public string JsonResponse
    {
      get
      {
        return _jsonResponse;
      }
      set
      {
        __isset.jsonResponse = true;
        this._jsonResponse = value;
      }
    }


    public Isset __isset;
    #if !SILVERLIGHT
    [Serializable]
    #endif
    public struct Isset {
      public bool fileUploadId;
      public bool statusCode;
      public bool reasonCode;
      public bool jsonResponse;
    }

    public FileUploadFailedResult() {
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
                FileUploadId = iprot.ReadString();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 2:
              if (field.Type == TType.I32) {
                StatusCode = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 3:
              if (field.Type == TType.I32) {
                ReasonCode = iprot.ReadI32();
              } else { 
                TProtocolUtil.Skip(iprot, field.Type);
              }
              break;
            case 4:
              if (field.Type == TType.String) {
                JsonResponse = iprot.ReadString();
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
        TStruct struc = new TStruct("FileUploadFailedResult");
        oprot.WriteStructBegin(struc);
        TField field = new TField();
        if (FileUploadId != null && __isset.fileUploadId) {
          field.Name = "fileUploadId";
          field.Type = TType.String;
          field.ID = 1;
          oprot.WriteFieldBegin(field);
          oprot.WriteString(FileUploadId);
          oprot.WriteFieldEnd();
        }
        if (__isset.statusCode) {
          field.Name = "statusCode";
          field.Type = TType.I32;
          field.ID = 2;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(StatusCode);
          oprot.WriteFieldEnd();
        }
        if (__isset.reasonCode) {
          field.Name = "reasonCode";
          field.Type = TType.I32;
          field.ID = 3;
          oprot.WriteFieldBegin(field);
          oprot.WriteI32(ReasonCode);
          oprot.WriteFieldEnd();
        }
        if (JsonResponse != null && __isset.jsonResponse) {
          field.Name = "jsonResponse";
          field.Type = TType.String;
          field.ID = 4;
          oprot.WriteFieldBegin(field);
          oprot.WriteString(JsonResponse);
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
      StringBuilder __sb = new StringBuilder("FileUploadFailedResult(");
      bool __first = true;
      if (FileUploadId != null && __isset.fileUploadId) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("FileUploadId: ");
        __sb.Append(FileUploadId);
      }
      if (__isset.statusCode) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("StatusCode: ");
        __sb.Append(StatusCode);
      }
      if (__isset.reasonCode) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("ReasonCode: ");
        __sb.Append(ReasonCode);
      }
      if (JsonResponse != null && __isset.jsonResponse) {
        if(!__first) { __sb.Append(", "); }
        __first = false;
        __sb.Append("JsonResponse: ");
        __sb.Append(JsonResponse);
      }
      __sb.Append(")");
      return __sb.ToString();
    }

  }

}
