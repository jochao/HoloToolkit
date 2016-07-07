// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.1
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

namespace RakNet {

using System;
using System.Runtime.InteropServices;

public class RakNetListUnsignedShort : IDisposable {
  private HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal RakNetListUnsignedShort(IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new HandleRef(this, cPtr);
  }

  internal static HandleRef getCPtr(RakNetListUnsignedShort obj) {
    return (obj == null) ? new HandleRef(null, IntPtr.Zero) : obj.swigCPtr;
  }

  ~RakNetListUnsignedShort() {
    Dispose();
  }

  public virtual void Dispose() {
    lock(this) {
      if (swigCPtr.Handle != IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          RakNetPINVOKE.delete_RakNetListUnsignedShort(swigCPtr);
        }
        swigCPtr = new HandleRef(null, IntPtr.Zero);
      }
      GC.SuppressFinalize(this);
    }
  }

  public ushort Get(uint position) {
    SWIGTYPE_p_unsigned_short ret = GetHelper(position);
    return UnsignedShortPointer.frompointer(ret).value();
  }

  public ushort Pop() {
    SWIGTYPE_p_unsigned_short ret = PopHelper();
    return UnsignedShortPointer.frompointer(ret).value();
  }
    public ushort this[int index]  
    {  
        get   
        {
            return Get((uint)index); // use indexto retrieve and return another value.    
        }  
        set   
        {
            Replace(value, value, (uint)index, "Not used", 0);// use index and value to set the value somewhere.   
        }  
    } 

  public RakNetListUnsignedShort() : this(RakNetPINVOKE.new_RakNetListUnsignedShort__SWIG_0(), true) {
  }

  public RakNetListUnsignedShort(RakNetListUnsignedShort original_copy) : this(RakNetPINVOKE.new_RakNetListUnsignedShort__SWIG_1(RakNetListUnsignedShort.getCPtr(original_copy)), true) {
    if (RakNetPINVOKE.SWIGPendingException.Pending) throw RakNetPINVOKE.SWIGPendingException.Retrieve();
  }

  public RakNetListUnsignedShort CopyData(RakNetListUnsignedShort original_copy) {
    RakNetListUnsignedShort ret = new RakNetListUnsignedShort(RakNetPINVOKE.RakNetListUnsignedShort_CopyData(swigCPtr, RakNetListUnsignedShort.getCPtr(original_copy)), false);
    if (RakNetPINVOKE.SWIGPendingException.Pending) throw RakNetPINVOKE.SWIGPendingException.Retrieve();
    return ret;
  }

  private SWIGTYPE_p_unsigned_short GetHelper(uint position) {
    SWIGTYPE_p_unsigned_short ret = new SWIGTYPE_p_unsigned_short(RakNetPINVOKE.RakNetListUnsignedShort_GetHelper(swigCPtr, position), false);
    return ret;
  }

  public void Push(ushort input, string file, uint line) {
    RakNetPINVOKE.RakNetListUnsignedShort_Push(swigCPtr, input, file, line);
  }

  private SWIGTYPE_p_unsigned_short PopHelper() {
    SWIGTYPE_p_unsigned_short ret = new SWIGTYPE_p_unsigned_short(RakNetPINVOKE.RakNetListUnsignedShort_PopHelper(swigCPtr), false);
    return ret;
  }

  public void Insert(ushort input, uint position, string file, uint line) {
    RakNetPINVOKE.RakNetListUnsignedShort_Insert__SWIG_0(swigCPtr, input, position, file, line);
  }

  public void Insert(ushort input, string file, uint line) {
    RakNetPINVOKE.RakNetListUnsignedShort_Insert__SWIG_1(swigCPtr, input, file, line);
  }

  public void Replace(ushort input, ushort filler, uint position, string file, uint line) {
    RakNetPINVOKE.RakNetListUnsignedShort_Replace__SWIG_0(swigCPtr, input, filler, position, file, line);
  }

  public void Replace(ushort input) {
    RakNetPINVOKE.RakNetListUnsignedShort_Replace__SWIG_1(swigCPtr, input);
  }

  public void RemoveAtIndex(uint position) {
    RakNetPINVOKE.RakNetListUnsignedShort_RemoveAtIndex(swigCPtr, position);
  }

  public void RemoveAtIndexFast(uint position) {
    RakNetPINVOKE.RakNetListUnsignedShort_RemoveAtIndexFast(swigCPtr, position);
  }

  public void RemoveFromEnd(uint num) {
    RakNetPINVOKE.RakNetListUnsignedShort_RemoveFromEnd__SWIG_0(swigCPtr, num);
  }

  public void RemoveFromEnd() {
    RakNetPINVOKE.RakNetListUnsignedShort_RemoveFromEnd__SWIG_1(swigCPtr);
  }

  public uint GetIndexOf(ushort input) {
    uint ret = RakNetPINVOKE.RakNetListUnsignedShort_GetIndexOf(swigCPtr, input);
    return ret;
  }

  public uint Size() {
    uint ret = RakNetPINVOKE.RakNetListUnsignedShort_Size(swigCPtr);
    return ret;
  }

  public void Clear(bool doNotDeallocateSmallBlocks, string file, uint line) {
    RakNetPINVOKE.RakNetListUnsignedShort_Clear(swigCPtr, doNotDeallocateSmallBlocks, file, line);
  }

  public void Preallocate(uint countNeeded, string file, uint line) {
    RakNetPINVOKE.RakNetListUnsignedShort_Preallocate(swigCPtr, countNeeded, file, line);
  }

  public void Compress(string file, uint line) {
    RakNetPINVOKE.RakNetListUnsignedShort_Compress(swigCPtr, file, line);
  }

}

}
