// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__AccDaqSetupConfig

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
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/structs.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/structs_electr.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/functions.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/functions_electr.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/commonxml.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/xmlparsing.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/xmlparsing_electr.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_stc_mapping(void *p = 0);
   static void *newArray_stc_mapping(Long_t size, void *p);
   static void delete_stc_mapping(void *p);
   static void deleteArray_stc_mapping(void *p);
   static void destruct_stc_mapping(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::stc_mapping*)
   {
      ::stc_mapping *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::stc_mapping >(0);
      static ::ROOT::TGenericClassInfo 
         instance("stc_mapping", ::stc_mapping::Class_Version(), "structs.h", 13,
                  typeid(::stc_mapping), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::stc_mapping::Dictionary, isa_proxy, 4,
                  sizeof(::stc_mapping) );
      instance.SetNew(&new_stc_mapping);
      instance.SetNewArray(&newArray_stc_mapping);
      instance.SetDelete(&delete_stc_mapping);
      instance.SetDeleteArray(&deleteArray_stc_mapping);
      instance.SetDestructor(&destruct_stc_mapping);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::stc_mapping*)
   {
      return GenerateInitInstanceLocal((::stc_mapping*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::stc_mapping*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_stc_setup_config(void *p = 0);
   static void *newArray_stc_setup_config(Long_t size, void *p);
   static void delete_stc_setup_config(void *p);
   static void deleteArray_stc_setup_config(void *p);
   static void destruct_stc_setup_config(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::stc_setup_config*)
   {
      ::stc_setup_config *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::stc_setup_config >(0);
      static ::ROOT::TGenericClassInfo 
         instance("stc_setup_config", ::stc_setup_config::Class_Version(), "structs.h", 53,
                  typeid(::stc_setup_config), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::stc_setup_config::Dictionary, isa_proxy, 4,
                  sizeof(::stc_setup_config) );
      instance.SetNew(&new_stc_setup_config);
      instance.SetNewArray(&newArray_stc_setup_config);
      instance.SetDelete(&delete_stc_setup_config);
      instance.SetDeleteArray(&deleteArray_stc_setup_config);
      instance.SetDestructor(&destruct_stc_setup_config);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::stc_setup_config*)
   {
      return GenerateInitInstanceLocal((::stc_setup_config*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::stc_setup_config*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_stc_elblock(void *p = 0);
   static void *newArray_stc_elblock(Long_t size, void *p);
   static void delete_stc_elblock(void *p);
   static void deleteArray_stc_elblock(void *p);
   static void destruct_stc_elblock(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::stc_elblock*)
   {
      ::stc_elblock *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::stc_elblock >(0);
      static ::ROOT::TGenericClassInfo 
         instance("stc_elblock", ::stc_elblock::Class_Version(), "structs_electr.h", 13,
                  typeid(::stc_elblock), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::stc_elblock::Dictionary, isa_proxy, 4,
                  sizeof(::stc_elblock) );
      instance.SetNew(&new_stc_elblock);
      instance.SetNewArray(&newArray_stc_elblock);
      instance.SetDelete(&delete_stc_elblock);
      instance.SetDeleteArray(&deleteArray_stc_elblock);
      instance.SetDestructor(&destruct_stc_elblock);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::stc_elblock*)
   {
      return GenerateInitInstanceLocal((::stc_elblock*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::stc_elblock*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_stc_electr_chars(void *p = 0);
   static void *newArray_stc_electr_chars(Long_t size, void *p);
   static void delete_stc_electr_chars(void *p);
   static void deleteArray_stc_electr_chars(void *p);
   static void destruct_stc_electr_chars(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::stc_electr_chars*)
   {
      ::stc_electr_chars *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::stc_electr_chars >(0);
      static ::ROOT::TGenericClassInfo 
         instance("stc_electr_chars", ::stc_electr_chars::Class_Version(), "structs_electr.h", 44,
                  typeid(::stc_electr_chars), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::stc_electr_chars::Dictionary, isa_proxy, 4,
                  sizeof(::stc_electr_chars) );
      instance.SetNew(&new_stc_electr_chars);
      instance.SetNewArray(&newArray_stc_electr_chars);
      instance.SetDelete(&delete_stc_electr_chars);
      instance.SetDeleteArray(&deleteArray_stc_electr_chars);
      instance.SetDestructor(&destruct_stc_electr_chars);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::stc_electr_chars*)
   {
      return GenerateInitInstanceLocal((::stc_electr_chars*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::stc_electr_chars*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr stc_mapping::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *stc_mapping::Class_Name()
{
   return "stc_mapping";
}

//______________________________________________________________________________
const char *stc_mapping::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::stc_mapping*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int stc_mapping::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::stc_mapping*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *stc_mapping::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::stc_mapping*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *stc_mapping::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::stc_mapping*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr stc_setup_config::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *stc_setup_config::Class_Name()
{
   return "stc_setup_config";
}

//______________________________________________________________________________
const char *stc_setup_config::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::stc_setup_config*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int stc_setup_config::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::stc_setup_config*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *stc_setup_config::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::stc_setup_config*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *stc_setup_config::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::stc_setup_config*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr stc_elblock::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *stc_elblock::Class_Name()
{
   return "stc_elblock";
}

//______________________________________________________________________________
const char *stc_elblock::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::stc_elblock*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int stc_elblock::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::stc_elblock*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *stc_elblock::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::stc_elblock*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *stc_elblock::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::stc_elblock*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr stc_electr_chars::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *stc_electr_chars::Class_Name()
{
   return "stc_electr_chars";
}

//______________________________________________________________________________
const char *stc_electr_chars::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::stc_electr_chars*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int stc_electr_chars::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::stc_electr_chars*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *stc_electr_chars::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::stc_electr_chars*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *stc_electr_chars::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::stc_electr_chars*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void stc_mapping::Streamer(TBuffer &R__b)
{
   // Stream an object of class stc_mapping.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(stc_mapping::Class(),this);
   } else {
      R__b.WriteClassBuffer(stc_mapping::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_stc_mapping(void *p) {
      return  p ? new(p) ::stc_mapping : new ::stc_mapping;
   }
   static void *newArray_stc_mapping(Long_t nElements, void *p) {
      return p ? new(p) ::stc_mapping[nElements] : new ::stc_mapping[nElements];
   }
   // Wrapper around operator delete
   static void delete_stc_mapping(void *p) {
      delete ((::stc_mapping*)p);
   }
   static void deleteArray_stc_mapping(void *p) {
      delete [] ((::stc_mapping*)p);
   }
   static void destruct_stc_mapping(void *p) {
      typedef ::stc_mapping current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::stc_mapping

//______________________________________________________________________________
void stc_setup_config::Streamer(TBuffer &R__b)
{
   // Stream an object of class stc_setup_config.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(stc_setup_config::Class(),this);
   } else {
      R__b.WriteClassBuffer(stc_setup_config::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_stc_setup_config(void *p) {
      return  p ? new(p) ::stc_setup_config : new ::stc_setup_config;
   }
   static void *newArray_stc_setup_config(Long_t nElements, void *p) {
      return p ? new(p) ::stc_setup_config[nElements] : new ::stc_setup_config[nElements];
   }
   // Wrapper around operator delete
   static void delete_stc_setup_config(void *p) {
      delete ((::stc_setup_config*)p);
   }
   static void deleteArray_stc_setup_config(void *p) {
      delete [] ((::stc_setup_config*)p);
   }
   static void destruct_stc_setup_config(void *p) {
      typedef ::stc_setup_config current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::stc_setup_config

//______________________________________________________________________________
void stc_elblock::Streamer(TBuffer &R__b)
{
   // Stream an object of class stc_elblock.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(stc_elblock::Class(),this);
   } else {
      R__b.WriteClassBuffer(stc_elblock::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_stc_elblock(void *p) {
      return  p ? new(p) ::stc_elblock : new ::stc_elblock;
   }
   static void *newArray_stc_elblock(Long_t nElements, void *p) {
      return p ? new(p) ::stc_elblock[nElements] : new ::stc_elblock[nElements];
   }
   // Wrapper around operator delete
   static void delete_stc_elblock(void *p) {
      delete ((::stc_elblock*)p);
   }
   static void deleteArray_stc_elblock(void *p) {
      delete [] ((::stc_elblock*)p);
   }
   static void destruct_stc_elblock(void *p) {
      typedef ::stc_elblock current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::stc_elblock

//______________________________________________________________________________
void stc_electr_chars::Streamer(TBuffer &R__b)
{
   // Stream an object of class stc_electr_chars.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(stc_electr_chars::Class(),this);
   } else {
      R__b.WriteClassBuffer(stc_electr_chars::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_stc_electr_chars(void *p) {
      return  p ? new(p) ::stc_electr_chars : new ::stc_electr_chars;
   }
   static void *newArray_stc_electr_chars(Long_t nElements, void *p) {
      return p ? new(p) ::stc_electr_chars[nElements] : new ::stc_electr_chars[nElements];
   }
   // Wrapper around operator delete
   static void delete_stc_electr_chars(void *p) {
      delete ((::stc_electr_chars*)p);
   }
   static void deleteArray_stc_electr_chars(void *p) {
      delete [] ((::stc_electr_chars*)p);
   }
   static void destruct_stc_electr_chars(void *p) {
      typedef ::stc_electr_chars current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::stc_electr_chars

namespace {
  void TriggerDictionaryInitialization_libAccDaqSetupConfig_Impl() {
    static const char* headers[] = {
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/structs.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/structs_electr.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/functions.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/functions_electr.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/commonxml.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/xmlparsing.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/xmlparsing_electr.h",
0
    };
    static const char* includePaths[] = {
"/home/daria/Documents/root-6.14.04/builddir/include",
"/home/daria/Documents/go4-5.3.0/include",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library",
"/home/daria/Documents/root-6.14.04/builddir/include",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/build/setupconfig/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libAccDaqSetupConfig dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/structs.h")))  stc_mapping;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/structs.h")))  stc_setup_config;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/structs_electr.h")))  stc_elblock;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/structs_electr.h")))  stc_electr_chars;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libAccDaqSetupConfig dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/structs.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/structs_electr.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/functions.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/functions_electr.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/commonxml.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/xmlparsing.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfig/pureC/xmlparsing_electr.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"stc_elblock", payloadCode, "@",
"stc_electr_chars", payloadCode, "@",
"stc_mapping", payloadCode, "@",
"stc_setup_config", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libAccDaqSetupConfig",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libAccDaqSetupConfig_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libAccDaqSetupConfig_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libAccDaqSetupConfig() {
  TriggerDictionaryInitialization_libAccDaqSetupConfig_Impl();
}
