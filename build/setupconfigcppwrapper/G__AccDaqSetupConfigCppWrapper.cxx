// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__AccDaqSetupConfigCppWrapper

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
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfigcppwrapper/SetupConfiguration.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfigcppwrapper/ElectronicsChars.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_SetupConfiguration(void *p = 0);
   static void *newArray_SetupConfiguration(Long_t size, void *p);
   static void delete_SetupConfiguration(void *p);
   static void deleteArray_SetupConfiguration(void *p);
   static void destruct_SetupConfiguration(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SetupConfiguration*)
   {
      ::SetupConfiguration *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SetupConfiguration >(0);
      static ::ROOT::TGenericClassInfo 
         instance("SetupConfiguration", ::SetupConfiguration::Class_Version(), "SetupConfiguration.h", 23,
                  typeid(::SetupConfiguration), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SetupConfiguration::Dictionary, isa_proxy, 4,
                  sizeof(::SetupConfiguration) );
      instance.SetNew(&new_SetupConfiguration);
      instance.SetNewArray(&newArray_SetupConfiguration);
      instance.SetDelete(&delete_SetupConfiguration);
      instance.SetDeleteArray(&deleteArray_SetupConfiguration);
      instance.SetDestructor(&destruct_SetupConfiguration);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SetupConfiguration*)
   {
      return GenerateInitInstanceLocal((::SetupConfiguration*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SetupConfiguration*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ElectronicsChars(void *p = 0);
   static void *newArray_ElectronicsChars(Long_t size, void *p);
   static void delete_ElectronicsChars(void *p);
   static void deleteArray_ElectronicsChars(void *p);
   static void destruct_ElectronicsChars(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ElectronicsChars*)
   {
      ::ElectronicsChars *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ElectronicsChars >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ElectronicsChars", ::ElectronicsChars::Class_Version(), "ElectronicsChars.h", 27,
                  typeid(::ElectronicsChars), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ElectronicsChars::Dictionary, isa_proxy, 4,
                  sizeof(::ElectronicsChars) );
      instance.SetNew(&new_ElectronicsChars);
      instance.SetNewArray(&newArray_ElectronicsChars);
      instance.SetDelete(&delete_ElectronicsChars);
      instance.SetDeleteArray(&deleteArray_ElectronicsChars);
      instance.SetDestructor(&destruct_ElectronicsChars);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ElectronicsChars*)
   {
      return GenerateInitInstanceLocal((::ElectronicsChars*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ElectronicsChars*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr SetupConfiguration::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *SetupConfiguration::Class_Name()
{
   return "SetupConfiguration";
}

//______________________________________________________________________________
const char *SetupConfiguration::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SetupConfiguration*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int SetupConfiguration::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SetupConfiguration*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SetupConfiguration::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SetupConfiguration*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SetupConfiguration::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SetupConfiguration*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ElectronicsChars::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ElectronicsChars::Class_Name()
{
   return "ElectronicsChars";
}

//______________________________________________________________________________
const char *ElectronicsChars::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElectronicsChars*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ElectronicsChars::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ElectronicsChars*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ElectronicsChars::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElectronicsChars*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ElectronicsChars::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ElectronicsChars*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void SetupConfiguration::Streamer(TBuffer &R__b)
{
   // Stream an object of class SetupConfiguration.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SetupConfiguration::Class(),this);
   } else {
      R__b.WriteClassBuffer(SetupConfiguration::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SetupConfiguration(void *p) {
      return  p ? new(p) ::SetupConfiguration : new ::SetupConfiguration;
   }
   static void *newArray_SetupConfiguration(Long_t nElements, void *p) {
      return p ? new(p) ::SetupConfiguration[nElements] : new ::SetupConfiguration[nElements];
   }
   // Wrapper around operator delete
   static void delete_SetupConfiguration(void *p) {
      delete ((::SetupConfiguration*)p);
   }
   static void deleteArray_SetupConfiguration(void *p) {
      delete [] ((::SetupConfiguration*)p);
   }
   static void destruct_SetupConfiguration(void *p) {
      typedef ::SetupConfiguration current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SetupConfiguration

//______________________________________________________________________________
void ElectronicsChars::Streamer(TBuffer &R__b)
{
   // Stream an object of class ElectronicsChars.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ElectronicsChars::Class(),this);
   } else {
      R__b.WriteClassBuffer(ElectronicsChars::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ElectronicsChars(void *p) {
      return  p ? new(p) ::ElectronicsChars : new ::ElectronicsChars;
   }
   static void *newArray_ElectronicsChars(Long_t nElements, void *p) {
      return p ? new(p) ::ElectronicsChars[nElements] : new ::ElectronicsChars[nElements];
   }
   // Wrapper around operator delete
   static void delete_ElectronicsChars(void *p) {
      delete ((::ElectronicsChars*)p);
   }
   static void deleteArray_ElectronicsChars(void *p) {
      delete [] ((::ElectronicsChars*)p);
   }
   static void destruct_ElectronicsChars(void *p) {
      typedef ::ElectronicsChars current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ElectronicsChars

namespace ROOT {
   static TClass *maplETStringcOstc_elblockmUgR_Dictionary();
   static void maplETStringcOstc_elblockmUgR_TClassManip(TClass*);
   static void *new_maplETStringcOstc_elblockmUgR(void *p = 0);
   static void *newArray_maplETStringcOstc_elblockmUgR(Long_t size, void *p);
   static void delete_maplETStringcOstc_elblockmUgR(void *p);
   static void deleteArray_maplETStringcOstc_elblockmUgR(void *p);
   static void destruct_maplETStringcOstc_elblockmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<TString,stc_elblock*>*)
   {
      map<TString,stc_elblock*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<TString,stc_elblock*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<TString,stc_elblock*>", -2, "map", 96,
                  typeid(map<TString,stc_elblock*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplETStringcOstc_elblockmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<TString,stc_elblock*>) );
      instance.SetNew(&new_maplETStringcOstc_elblockmUgR);
      instance.SetNewArray(&newArray_maplETStringcOstc_elblockmUgR);
      instance.SetDelete(&delete_maplETStringcOstc_elblockmUgR);
      instance.SetDeleteArray(&deleteArray_maplETStringcOstc_elblockmUgR);
      instance.SetDestructor(&destruct_maplETStringcOstc_elblockmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<TString,stc_elblock*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<TString,stc_elblock*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplETStringcOstc_elblockmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<TString,stc_elblock*>*)0x0)->GetClass();
      maplETStringcOstc_elblockmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplETStringcOstc_elblockmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplETStringcOstc_elblockmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,stc_elblock*> : new map<TString,stc_elblock*>;
   }
   static void *newArray_maplETStringcOstc_elblockmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<TString,stc_elblock*>[nElements] : new map<TString,stc_elblock*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplETStringcOstc_elblockmUgR(void *p) {
      delete ((map<TString,stc_elblock*>*)p);
   }
   static void deleteArray_maplETStringcOstc_elblockmUgR(void *p) {
      delete [] ((map<TString,stc_elblock*>*)p);
   }
   static void destruct_maplETStringcOstc_elblockmUgR(void *p) {
      typedef map<TString,stc_elblock*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<TString,stc_elblock*>

namespace {
  void TriggerDictionaryInitialization_libAccDaqSetupConfigCppWrapper_Impl() {
    static const char* headers[] = {
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfigcppwrapper/SetupConfiguration.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfigcppwrapper/ElectronicsChars.h",
0
    };
    static const char* includePaths[] = {
"/home/daria/Documents/root-6.14.04/builddir/include",
"/home/daria/Documents/go4-5.3.0/include",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfigcppwrapper",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library",
"/home/daria/Documents/root-6.14.04/builddir/include",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/build/setupconfigcppwrapper/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libAccDaqSetupConfigCppWrapper dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfigcppwrapper/SetupConfiguration.h")))  SetupConfiguration;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfigcppwrapper/ElectronicsChars.h")))  ElectronicsChars;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libAccDaqSetupConfigCppWrapper dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfigcppwrapper/SetupConfiguration.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/setupconfigcppwrapper/ElectronicsChars.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"ElectronicsChars", payloadCode, "@",
"SetupConfiguration", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libAccDaqSetupConfigCppWrapper",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libAccDaqSetupConfigCppWrapper_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libAccDaqSetupConfigCppWrapper_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libAccDaqSetupConfigCppWrapper() {
  TriggerDictionaryInitialization_libAccDaqSetupConfigCppWrapper_Impl();
}
