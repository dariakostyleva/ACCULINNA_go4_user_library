// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__AccDaqReader

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
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/reader/Reader.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_Reader(void *p);
   static void deleteArray_Reader(void *p);
   static void destruct_Reader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Reader*)
   {
      ::Reader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Reader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Reader", ::Reader::Class_Version(), "Reader.h", 17,
                  typeid(::Reader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Reader::Dictionary, isa_proxy, 4,
                  sizeof(::Reader) );
      instance.SetDelete(&delete_Reader);
      instance.SetDeleteArray(&deleteArray_Reader);
      instance.SetDestructor(&destruct_Reader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Reader*)
   {
      return GenerateInitInstanceLocal((::Reader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Reader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Reader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Reader::Class_Name()
{
   return "Reader";
}

//______________________________________________________________________________
const char *Reader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Reader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Reader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Reader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Reader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Reader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Reader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Reader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Reader::Streamer(TBuffer &R__b)
{
   // Stream an object of class Reader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Reader::Class(),this);
   } else {
      R__b.WriteClassBuffer(Reader::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Reader(void *p) {
      delete ((::Reader*)p);
   }
   static void deleteArray_Reader(void *p) {
      delete [] ((::Reader*)p);
   }
   static void destruct_Reader(void *p) {
      typedef ::Reader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Reader

namespace {
  void TriggerDictionaryInitialization_libAccDaqReader_Impl() {
    static const char* headers[] = {
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/reader/Reader.h",
0
    };
    static const char* includePaths[] = {
"/home/daria/Documents/root-6.14.04/builddir/include",
"/home/daria/Documents/go4-5.3.0/include",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/reader",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library",
"/home/daria/Documents/root-6.14.04/builddir/include",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/build/reader/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libAccDaqReader dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/reader/Reader.h")))  Reader;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libAccDaqReader dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/reader/Reader.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Reader", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libAccDaqReader",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libAccDaqReader_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libAccDaqReader_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libAccDaqReader() {
  TriggerDictionaryInitialization_libAccDaqReader_Impl();
}
