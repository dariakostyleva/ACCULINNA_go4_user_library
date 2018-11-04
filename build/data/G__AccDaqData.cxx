// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__AccDaqData

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/RawMessage.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/DetMessage.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/DetEventStation.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/DetEventDetector.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/DetEventCommon.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/DetEventFull.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_RawMessage(void *p = 0);
   static void *newArray_RawMessage(Long_t size, void *p);
   static void delete_RawMessage(void *p);
   static void deleteArray_RawMessage(void *p);
   static void destruct_RawMessage(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RawMessage*)
   {
      ::RawMessage *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RawMessage >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RawMessage", ::RawMessage::Class_Version(), "RawMessage.h", 12,
                  typeid(::RawMessage), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RawMessage::Dictionary, isa_proxy, 4,
                  sizeof(::RawMessage) );
      instance.SetNew(&new_RawMessage);
      instance.SetNewArray(&newArray_RawMessage);
      instance.SetDelete(&delete_RawMessage);
      instance.SetDeleteArray(&deleteArray_RawMessage);
      instance.SetDestructor(&destruct_RawMessage);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RawMessage*)
   {
      return GenerateInitInstanceLocal((::RawMessage*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RawMessage*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DetMessage(void *p = 0);
   static void *newArray_DetMessage(Long_t size, void *p);
   static void delete_DetMessage(void *p);
   static void deleteArray_DetMessage(void *p);
   static void destruct_DetMessage(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DetMessage*)
   {
      ::DetMessage *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DetMessage >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DetMessage", ::DetMessage::Class_Version(), "DetMessage.h", 12,
                  typeid(::DetMessage), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DetMessage::Dictionary, isa_proxy, 4,
                  sizeof(::DetMessage) );
      instance.SetNew(&new_DetMessage);
      instance.SetNewArray(&newArray_DetMessage);
      instance.SetDelete(&delete_DetMessage);
      instance.SetDeleteArray(&deleteArray_DetMessage);
      instance.SetDestructor(&destruct_DetMessage);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DetMessage*)
   {
      return GenerateInitInstanceLocal((::DetMessage*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DetMessage*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DetEventStation(void *p = 0);
   static void *newArray_DetEventStation(Long_t size, void *p);
   static void delete_DetEventStation(void *p);
   static void deleteArray_DetEventStation(void *p);
   static void destruct_DetEventStation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DetEventStation*)
   {
      ::DetEventStation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DetEventStation >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DetEventStation", ::DetEventStation::Class_Version(), "DetEventStation.h", 14,
                  typeid(::DetEventStation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DetEventStation::Dictionary, isa_proxy, 4,
                  sizeof(::DetEventStation) );
      instance.SetNew(&new_DetEventStation);
      instance.SetNewArray(&newArray_DetEventStation);
      instance.SetDelete(&delete_DetEventStation);
      instance.SetDeleteArray(&deleteArray_DetEventStation);
      instance.SetDestructor(&destruct_DetEventStation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DetEventStation*)
   {
      return GenerateInitInstanceLocal((::DetEventStation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DetEventStation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DetEventDetector(void *p = 0);
   static void *newArray_DetEventDetector(Long_t size, void *p);
   static void delete_DetEventDetector(void *p);
   static void deleteArray_DetEventDetector(void *p);
   static void destruct_DetEventDetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DetEventDetector*)
   {
      ::DetEventDetector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DetEventDetector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DetEventDetector", ::DetEventDetector::Class_Version(), "DetEventDetector.h", 19,
                  typeid(::DetEventDetector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DetEventDetector::Dictionary, isa_proxy, 4,
                  sizeof(::DetEventDetector) );
      instance.SetNew(&new_DetEventDetector);
      instance.SetNewArray(&newArray_DetEventDetector);
      instance.SetDelete(&delete_DetEventDetector);
      instance.SetDeleteArray(&deleteArray_DetEventDetector);
      instance.SetDestructor(&destruct_DetEventDetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DetEventDetector*)
   {
      return GenerateInitInstanceLocal((::DetEventDetector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DetEventDetector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DetEventCommon(void *p = 0);
   static void *newArray_DetEventCommon(Long_t size, void *p);
   static void delete_DetEventCommon(void *p);
   static void deleteArray_DetEventCommon(void *p);
   static void destruct_DetEventCommon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DetEventCommon*)
   {
      ::DetEventCommon *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DetEventCommon >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DetEventCommon", ::DetEventCommon::Class_Version(), "DetEventCommon.h", 12,
                  typeid(::DetEventCommon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DetEventCommon::Dictionary, isa_proxy, 4,
                  sizeof(::DetEventCommon) );
      instance.SetNew(&new_DetEventCommon);
      instance.SetNewArray(&newArray_DetEventCommon);
      instance.SetDelete(&delete_DetEventCommon);
      instance.SetDeleteArray(&deleteArray_DetEventCommon);
      instance.SetDestructor(&destruct_DetEventCommon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DetEventCommon*)
   {
      return GenerateInitInstanceLocal((::DetEventCommon*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DetEventCommon*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DetEventFull(void *p = 0);
   static void *newArray_DetEventFull(Long_t size, void *p);
   static void delete_DetEventFull(void *p);
   static void deleteArray_DetEventFull(void *p);
   static void destruct_DetEventFull(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DetEventFull*)
   {
      ::DetEventFull *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DetEventFull >(0);
      static ::ROOT::TGenericClassInfo 
         instance("DetEventFull", ::DetEventFull::Class_Version(), "DetEventFull.h", 25,
                  typeid(::DetEventFull), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DetEventFull::Dictionary, isa_proxy, 4,
                  sizeof(::DetEventFull) );
      instance.SetNew(&new_DetEventFull);
      instance.SetNewArray(&newArray_DetEventFull);
      instance.SetDelete(&delete_DetEventFull);
      instance.SetDeleteArray(&deleteArray_DetEventFull);
      instance.SetDestructor(&destruct_DetEventFull);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DetEventFull*)
   {
      return GenerateInitInstanceLocal((::DetEventFull*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DetEventFull*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr RawMessage::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RawMessage::Class_Name()
{
   return "RawMessage";
}

//______________________________________________________________________________
const char *RawMessage::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawMessage*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RawMessage::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RawMessage*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RawMessage::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawMessage*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RawMessage::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RawMessage*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DetMessage::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DetMessage::Class_Name()
{
   return "DetMessage";
}

//______________________________________________________________________________
const char *DetMessage::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DetMessage*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DetMessage::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DetMessage*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DetMessage::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DetMessage*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DetMessage::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DetMessage*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DetEventStation::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DetEventStation::Class_Name()
{
   return "DetEventStation";
}

//______________________________________________________________________________
const char *DetEventStation::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DetEventStation*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DetEventStation::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DetEventStation*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DetEventStation::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DetEventStation*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DetEventStation::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DetEventStation*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DetEventDetector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DetEventDetector::Class_Name()
{
   return "DetEventDetector";
}

//______________________________________________________________________________
const char *DetEventDetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DetEventDetector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DetEventDetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DetEventDetector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DetEventDetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DetEventDetector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DetEventDetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DetEventDetector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DetEventCommon::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DetEventCommon::Class_Name()
{
   return "DetEventCommon";
}

//______________________________________________________________________________
const char *DetEventCommon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DetEventCommon*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DetEventCommon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DetEventCommon*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DetEventCommon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DetEventCommon*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DetEventCommon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DetEventCommon*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DetEventFull::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *DetEventFull::Class_Name()
{
   return "DetEventFull";
}

//______________________________________________________________________________
const char *DetEventFull::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DetEventFull*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int DetEventFull::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DetEventFull*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DetEventFull::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DetEventFull*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DetEventFull::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DetEventFull*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void RawMessage::Streamer(TBuffer &R__b)
{
   // Stream an object of class RawMessage.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RawMessage::Class(),this);
   } else {
      R__b.WriteClassBuffer(RawMessage::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RawMessage(void *p) {
      return  p ? new(p) ::RawMessage : new ::RawMessage;
   }
   static void *newArray_RawMessage(Long_t nElements, void *p) {
      return p ? new(p) ::RawMessage[nElements] : new ::RawMessage[nElements];
   }
   // Wrapper around operator delete
   static void delete_RawMessage(void *p) {
      delete ((::RawMessage*)p);
   }
   static void deleteArray_RawMessage(void *p) {
      delete [] ((::RawMessage*)p);
   }
   static void destruct_RawMessage(void *p) {
      typedef ::RawMessage current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RawMessage

//______________________________________________________________________________
void DetMessage::Streamer(TBuffer &R__b)
{
   // Stream an object of class DetMessage.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DetMessage::Class(),this);
   } else {
      R__b.WriteClassBuffer(DetMessage::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DetMessage(void *p) {
      return  p ? new(p) ::DetMessage : new ::DetMessage;
   }
   static void *newArray_DetMessage(Long_t nElements, void *p) {
      return p ? new(p) ::DetMessage[nElements] : new ::DetMessage[nElements];
   }
   // Wrapper around operator delete
   static void delete_DetMessage(void *p) {
      delete ((::DetMessage*)p);
   }
   static void deleteArray_DetMessage(void *p) {
      delete [] ((::DetMessage*)p);
   }
   static void destruct_DetMessage(void *p) {
      typedef ::DetMessage current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DetMessage

//______________________________________________________________________________
void DetEventStation::Streamer(TBuffer &R__b)
{
   // Stream an object of class DetEventStation.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DetEventStation::Class(),this);
   } else {
      R__b.WriteClassBuffer(DetEventStation::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DetEventStation(void *p) {
      return  p ? new(p) ::DetEventStation : new ::DetEventStation;
   }
   static void *newArray_DetEventStation(Long_t nElements, void *p) {
      return p ? new(p) ::DetEventStation[nElements] : new ::DetEventStation[nElements];
   }
   // Wrapper around operator delete
   static void delete_DetEventStation(void *p) {
      delete ((::DetEventStation*)p);
   }
   static void deleteArray_DetEventStation(void *p) {
      delete [] ((::DetEventStation*)p);
   }
   static void destruct_DetEventStation(void *p) {
      typedef ::DetEventStation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DetEventStation

//______________________________________________________________________________
void DetEventDetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class DetEventDetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DetEventDetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(DetEventDetector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DetEventDetector(void *p) {
      return  p ? new(p) ::DetEventDetector : new ::DetEventDetector;
   }
   static void *newArray_DetEventDetector(Long_t nElements, void *p) {
      return p ? new(p) ::DetEventDetector[nElements] : new ::DetEventDetector[nElements];
   }
   // Wrapper around operator delete
   static void delete_DetEventDetector(void *p) {
      delete ((::DetEventDetector*)p);
   }
   static void deleteArray_DetEventDetector(void *p) {
      delete [] ((::DetEventDetector*)p);
   }
   static void destruct_DetEventDetector(void *p) {
      typedef ::DetEventDetector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DetEventDetector

//______________________________________________________________________________
void DetEventCommon::Streamer(TBuffer &R__b)
{
   // Stream an object of class DetEventCommon.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DetEventCommon::Class(),this);
   } else {
      R__b.WriteClassBuffer(DetEventCommon::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DetEventCommon(void *p) {
      return  p ? new(p) ::DetEventCommon : new ::DetEventCommon;
   }
   static void *newArray_DetEventCommon(Long_t nElements, void *p) {
      return p ? new(p) ::DetEventCommon[nElements] : new ::DetEventCommon[nElements];
   }
   // Wrapper around operator delete
   static void delete_DetEventCommon(void *p) {
      delete ((::DetEventCommon*)p);
   }
   static void deleteArray_DetEventCommon(void *p) {
      delete [] ((::DetEventCommon*)p);
   }
   static void destruct_DetEventCommon(void *p) {
      typedef ::DetEventCommon current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DetEventCommon

//______________________________________________________________________________
void DetEventFull::Streamer(TBuffer &R__b)
{
   // Stream an object of class DetEventFull.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DetEventFull::Class(),this);
   } else {
      R__b.WriteClassBuffer(DetEventFull::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DetEventFull(void *p) {
      return  p ? new(p) ::DetEventFull : new ::DetEventFull;
   }
   static void *newArray_DetEventFull(Long_t nElements, void *p) {
      return p ? new(p) ::DetEventFull[nElements] : new ::DetEventFull[nElements];
   }
   // Wrapper around operator delete
   static void delete_DetEventFull(void *p) {
      delete ((::DetEventFull*)p);
   }
   static void deleteArray_DetEventFull(void *p) {
      delete [] ((::DetEventFull*)p);
   }
   static void destruct_DetEventFull(void *p) {
      typedef ::DetEventFull current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DetEventFull

namespace {
  void TriggerDictionaryInitialization_libAccDaqData_Impl() {
    static const char* headers[] = {
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/RawMessage.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/DetMessage.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/DetEventStation.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/DetEventDetector.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/DetEventCommon.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/DetEventFull.h",
0
    };
    static const char* includePaths[] = {
"/home/daria/Documents/root-6.14.04/builddir/include",
"/home/daria/Documents/go4-5.3.0/include",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/data",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library",
"/home/daria/Documents/root-6.14.04/builddir/include",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/build/data/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libAccDaqData dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/RawMessage.h")))  RawMessage;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/DetMessage.h")))  DetMessage;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/DetEventStation.h")))  DetEventStation;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/DetEventDetector.h")))  DetEventDetector;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/DetEventCommon.h")))  DetEventCommon;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/DetEventFull.h")))  DetEventFull;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libAccDaqData dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/RawMessage.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/DetMessage.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/DetEventStation.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/DetEventDetector.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/DetEventCommon.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/data/DetEventFull.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"DetEventCommon", payloadCode, "@",
"DetEventDetector", payloadCode, "@",
"DetEventFull", payloadCode, "@",
"DetEventStation", payloadCode, "@",
"DetMessage", payloadCode, "@",
"RawMessage", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libAccDaqData",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libAccDaqData_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libAccDaqData_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libAccDaqData() {
  TriggerDictionaryInitialization_libAccDaqData_Impl();
}
