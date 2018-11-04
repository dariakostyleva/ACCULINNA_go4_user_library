// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__AccDaqGo4pieces

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
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/go4pieces/TGo4CompositeEvent.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/go4pieces/TGo4EventElement.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/go4pieces/TGo4LockGuard.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/go4pieces/TGo4Log.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_TGo4EventElement(void *p = 0);
   static void *newArray_TGo4EventElement(Long_t size, void *p);
   static void delete_TGo4EventElement(void *p);
   static void deleteArray_TGo4EventElement(void *p);
   static void destruct_TGo4EventElement(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGo4EventElement*)
   {
      ::TGo4EventElement *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGo4EventElement >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGo4EventElement", ::TGo4EventElement::Class_Version(), "go4pieces/TGo4EventElement.h", 36,
                  typeid(::TGo4EventElement), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGo4EventElement::Dictionary, isa_proxy, 4,
                  sizeof(::TGo4EventElement) );
      instance.SetNew(&new_TGo4EventElement);
      instance.SetNewArray(&newArray_TGo4EventElement);
      instance.SetDelete(&delete_TGo4EventElement);
      instance.SetDeleteArray(&deleteArray_TGo4EventElement);
      instance.SetDestructor(&destruct_TGo4EventElement);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGo4EventElement*)
   {
      return GenerateInitInstanceLocal((::TGo4EventElement*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGo4EventElement*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGo4CompositeEvent(void *p = 0);
   static void *newArray_TGo4CompositeEvent(Long_t size, void *p);
   static void delete_TGo4CompositeEvent(void *p);
   static void deleteArray_TGo4CompositeEvent(void *p);
   static void destruct_TGo4CompositeEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGo4CompositeEvent*)
   {
      ::TGo4CompositeEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGo4CompositeEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGo4CompositeEvent", ::TGo4CompositeEvent::Class_Version(), "go4pieces/TGo4CompositeEvent.h", 23,
                  typeid(::TGo4CompositeEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGo4CompositeEvent::Dictionary, isa_proxy, 4,
                  sizeof(::TGo4CompositeEvent) );
      instance.SetNew(&new_TGo4CompositeEvent);
      instance.SetNewArray(&newArray_TGo4CompositeEvent);
      instance.SetDelete(&delete_TGo4CompositeEvent);
      instance.SetDeleteArray(&deleteArray_TGo4CompositeEvent);
      instance.SetDestructor(&destruct_TGo4CompositeEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGo4CompositeEvent*)
   {
      return GenerateInitInstanceLocal((::TGo4CompositeEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGo4CompositeEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TGo4LockGuard(void *p = 0);
   static void *newArray_TGo4LockGuard(Long_t size, void *p);
   static void delete_TGo4LockGuard(void *p);
   static void deleteArray_TGo4LockGuard(void *p);
   static void destruct_TGo4LockGuard(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGo4LockGuard*)
   {
      ::TGo4LockGuard *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGo4LockGuard >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGo4LockGuard", ::TGo4LockGuard::Class_Version(), "go4pieces/TGo4LockGuard.h", 40,
                  typeid(::TGo4LockGuard), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGo4LockGuard::Dictionary, isa_proxy, 4,
                  sizeof(::TGo4LockGuard) );
      instance.SetNew(&new_TGo4LockGuard);
      instance.SetNewArray(&newArray_TGo4LockGuard);
      instance.SetDelete(&delete_TGo4LockGuard);
      instance.SetDeleteArray(&deleteArray_TGo4LockGuard);
      instance.SetDestructor(&destruct_TGo4LockGuard);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGo4LockGuard*)
   {
      return GenerateInitInstanceLocal((::TGo4LockGuard*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGo4LockGuard*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_TGo4Log(void *p);
   static void deleteArray_TGo4Log(void *p);
   static void destruct_TGo4Log(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TGo4Log*)
   {
      ::TGo4Log *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TGo4Log >(0);
      static ::ROOT::TGenericClassInfo 
         instance("TGo4Log", ::TGo4Log::Class_Version(), "go4pieces/TGo4Log.h", 53,
                  typeid(::TGo4Log), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TGo4Log::Dictionary, isa_proxy, 4,
                  sizeof(::TGo4Log) );
      instance.SetDelete(&delete_TGo4Log);
      instance.SetDeleteArray(&deleteArray_TGo4Log);
      instance.SetDestructor(&destruct_TGo4Log);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TGo4Log*)
   {
      return GenerateInitInstanceLocal((::TGo4Log*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::TGo4Log*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TGo4EventElement::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGo4EventElement::Class_Name()
{
   return "TGo4EventElement";
}

//______________________________________________________________________________
const char *TGo4EventElement::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGo4EventElement*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGo4EventElement::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGo4EventElement*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGo4EventElement::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGo4EventElement*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGo4EventElement::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGo4EventElement*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGo4CompositeEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGo4CompositeEvent::Class_Name()
{
   return "TGo4CompositeEvent";
}

//______________________________________________________________________________
const char *TGo4CompositeEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGo4CompositeEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGo4CompositeEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGo4CompositeEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGo4CompositeEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGo4CompositeEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGo4CompositeEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGo4CompositeEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGo4LockGuard::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGo4LockGuard::Class_Name()
{
   return "TGo4LockGuard";
}

//______________________________________________________________________________
const char *TGo4LockGuard::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGo4LockGuard*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGo4LockGuard::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGo4LockGuard*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGo4LockGuard::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGo4LockGuard*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGo4LockGuard::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGo4LockGuard*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TGo4Log::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *TGo4Log::Class_Name()
{
   return "TGo4Log";
}

//______________________________________________________________________________
const char *TGo4Log::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGo4Log*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int TGo4Log::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TGo4Log*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TGo4Log::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGo4Log*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TGo4Log::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TGo4Log*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TGo4EventElement::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGo4EventElement.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGo4EventElement::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGo4EventElement::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGo4EventElement(void *p) {
      return  p ? new(p) ::TGo4EventElement : new ::TGo4EventElement;
   }
   static void *newArray_TGo4EventElement(Long_t nElements, void *p) {
      return p ? new(p) ::TGo4EventElement[nElements] : new ::TGo4EventElement[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGo4EventElement(void *p) {
      delete ((::TGo4EventElement*)p);
   }
   static void deleteArray_TGo4EventElement(void *p) {
      delete [] ((::TGo4EventElement*)p);
   }
   static void destruct_TGo4EventElement(void *p) {
      typedef ::TGo4EventElement current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGo4EventElement

//______________________________________________________________________________
void TGo4CompositeEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGo4CompositeEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGo4CompositeEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGo4CompositeEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGo4CompositeEvent(void *p) {
      return  p ? new(p) ::TGo4CompositeEvent : new ::TGo4CompositeEvent;
   }
   static void *newArray_TGo4CompositeEvent(Long_t nElements, void *p) {
      return p ? new(p) ::TGo4CompositeEvent[nElements] : new ::TGo4CompositeEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGo4CompositeEvent(void *p) {
      delete ((::TGo4CompositeEvent*)p);
   }
   static void deleteArray_TGo4CompositeEvent(void *p) {
      delete [] ((::TGo4CompositeEvent*)p);
   }
   static void destruct_TGo4CompositeEvent(void *p) {
      typedef ::TGo4CompositeEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGo4CompositeEvent

//______________________________________________________________________________
void TGo4LockGuard::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGo4LockGuard.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGo4LockGuard::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGo4LockGuard::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TGo4LockGuard(void *p) {
      return  p ? new(p) ::TGo4LockGuard : new ::TGo4LockGuard;
   }
   static void *newArray_TGo4LockGuard(Long_t nElements, void *p) {
      return p ? new(p) ::TGo4LockGuard[nElements] : new ::TGo4LockGuard[nElements];
   }
   // Wrapper around operator delete
   static void delete_TGo4LockGuard(void *p) {
      delete ((::TGo4LockGuard*)p);
   }
   static void deleteArray_TGo4LockGuard(void *p) {
      delete [] ((::TGo4LockGuard*)p);
   }
   static void destruct_TGo4LockGuard(void *p) {
      typedef ::TGo4LockGuard current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGo4LockGuard

//______________________________________________________________________________
void TGo4Log::Streamer(TBuffer &R__b)
{
   // Stream an object of class TGo4Log.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TGo4Log::Class(),this);
   } else {
      R__b.WriteClassBuffer(TGo4Log::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_TGo4Log(void *p) {
      delete ((::TGo4Log*)p);
   }
   static void deleteArray_TGo4Log(void *p) {
      delete [] ((::TGo4Log*)p);
   }
   static void destruct_TGo4Log(void *p) {
      typedef ::TGo4Log current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::TGo4Log

namespace {
  void TriggerDictionaryInitialization_libAccDaqGo4pieces_Impl() {
    static const char* headers[] = {
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/go4pieces/TGo4CompositeEvent.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/go4pieces/TGo4EventElement.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/go4pieces/TGo4LockGuard.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/go4pieces/TGo4Log.h",
0
    };
    static const char* includePaths[] = {
"/home/daria/Documents/root-6.14.04/builddir/include",
"/home/daria/Documents/go4-5.3.0/include",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/go4pieces",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library",
"/home/daria/Documents/root-6.14.04/builddir/include",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/build/go4pieces/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libAccDaqGo4pieces dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$TGo4EventElement.h")))  __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/go4pieces/TGo4CompositeEvent.h")))  TGo4EventElement;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/go4pieces/TGo4CompositeEvent.h")))  TGo4CompositeEvent;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/go4pieces/TGo4LockGuard.h")))  TGo4LockGuard;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/go4pieces/TGo4Log.h")))  TGo4Log;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libAccDaqGo4pieces dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/go4pieces/TGo4CompositeEvent.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/go4pieces/TGo4EventElement.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/go4pieces/TGo4LockGuard.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/go4pieces/TGo4Log.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"TGo4CompositeEvent", payloadCode, "@",
"TGo4EventElement", payloadCode, "@",
"TGo4LockGuard", payloadCode, "@",
"TGo4Log", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libAccDaqGo4pieces",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libAccDaqGo4pieces_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libAccDaqGo4pieces_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libAccDaqGo4pieces() {
  TriggerDictionaryInitialization_libAccDaqGo4pieces_Impl();
}
