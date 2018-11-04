// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__AccDaqUserAnalysis

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
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/UserAnalysis.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/UserParameter.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/mesh/MeshDummyEvent.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/mesh/MeshProviderProc.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/unpacking/UserEventUnpacking.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/unpacking/UserProcUnpacking.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/unpacking/UserHistosUnpacking.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/rawmonitoring/UserEventRawMonitoring.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/rawmonitoring/UserProcRawMonitoring.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/rawmonitoring/UserHistosRawMonitoring.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/repacking/UserProcRepacking.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/repacking/UserHistosRepacking.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/advmonitoring/UserEventAdvMonitoring.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/advmonitoring/UserProcAdvMonitoring.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/advmonitoring/UserHistosAdvMonitoring.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beamdetmonitoring/UserEventBeamDetMonitoring.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beamdetmonitoring/UserProcBeamDetMonitoring.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beamdetmonitoring/UserHistosBeamDetMonitoring.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beamdetmonitoring/UserParamBeamDetMonitoring.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beammonitoring2/UserParameterBeamDetector.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beammonitoring2/UserEventBeamMonitoring2.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beammonitoring2/UserProcBeamMonitoring2.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beammonitoring2/UserHistosBeamMonitoring2.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/learn/UserEventLearn.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/learn/UserProcLearn.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/digibuilding/UserEventDigiBuilding.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/digibuilding/UserProcDigiBuilding.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_UserAnalysis(void *p = 0);
   static void *newArray_UserAnalysis(Long_t size, void *p);
   static void delete_UserAnalysis(void *p);
   static void deleteArray_UserAnalysis(void *p);
   static void destruct_UserAnalysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserAnalysis*)
   {
      ::UserAnalysis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserAnalysis >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserAnalysis", ::UserAnalysis::Class_Version(), "UserAnalysis.h", 17,
                  typeid(::UserAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserAnalysis::Dictionary, isa_proxy, 4,
                  sizeof(::UserAnalysis) );
      instance.SetNew(&new_UserAnalysis);
      instance.SetNewArray(&newArray_UserAnalysis);
      instance.SetDelete(&delete_UserAnalysis);
      instance.SetDeleteArray(&deleteArray_UserAnalysis);
      instance.SetDestructor(&destruct_UserAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserAnalysis*)
   {
      return GenerateInitInstanceLocal((::UserAnalysis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserAnalysis*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserParameter(void *p = 0);
   static void *newArray_UserParameter(Long_t size, void *p);
   static void delete_UserParameter(void *p);
   static void deleteArray_UserParameter(void *p);
   static void destruct_UserParameter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserParameter*)
   {
      ::UserParameter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserParameter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserParameter", ::UserParameter::Class_Version(), "UserParameter.h", 23,
                  typeid(::UserParameter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserParameter::Dictionary, isa_proxy, 4,
                  sizeof(::UserParameter) );
      instance.SetNew(&new_UserParameter);
      instance.SetNewArray(&newArray_UserParameter);
      instance.SetDelete(&delete_UserParameter);
      instance.SetDeleteArray(&deleteArray_UserParameter);
      instance.SetDestructor(&destruct_UserParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserParameter*)
   {
      return GenerateInitInstanceLocal((::UserParameter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserParameter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MeshDummyEvent(void *p = 0);
   static void *newArray_MeshDummyEvent(Long_t size, void *p);
   static void delete_MeshDummyEvent(void *p);
   static void deleteArray_MeshDummyEvent(void *p);
   static void destruct_MeshDummyEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MeshDummyEvent*)
   {
      ::MeshDummyEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MeshDummyEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MeshDummyEvent", ::MeshDummyEvent::Class_Version(), "mesh/MeshDummyEvent.h", 18,
                  typeid(::MeshDummyEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MeshDummyEvent::Dictionary, isa_proxy, 4,
                  sizeof(::MeshDummyEvent) );
      instance.SetNew(&new_MeshDummyEvent);
      instance.SetNewArray(&newArray_MeshDummyEvent);
      instance.SetDelete(&delete_MeshDummyEvent);
      instance.SetDeleteArray(&deleteArray_MeshDummyEvent);
      instance.SetDestructor(&destruct_MeshDummyEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MeshDummyEvent*)
   {
      return GenerateInitInstanceLocal((::MeshDummyEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MeshDummyEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MeshProviderProc(void *p = 0);
   static void *newArray_MeshProviderProc(Long_t size, void *p);
   static void delete_MeshProviderProc(void *p);
   static void deleteArray_MeshProviderProc(void *p);
   static void destruct_MeshProviderProc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MeshProviderProc*)
   {
      ::MeshProviderProc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MeshProviderProc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("MeshProviderProc", ::MeshProviderProc::Class_Version(), "mesh/MeshProviderProc.h", 12,
                  typeid(::MeshProviderProc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MeshProviderProc::Dictionary, isa_proxy, 4,
                  sizeof(::MeshProviderProc) );
      instance.SetNew(&new_MeshProviderProc);
      instance.SetNewArray(&newArray_MeshProviderProc);
      instance.SetDelete(&delete_MeshProviderProc);
      instance.SetDeleteArray(&deleteArray_MeshProviderProc);
      instance.SetDestructor(&destruct_MeshProviderProc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MeshProviderProc*)
   {
      return GenerateInitInstanceLocal((::MeshProviderProc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MeshProviderProc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserEventUnpacking(void *p = 0);
   static void *newArray_UserEventUnpacking(Long_t size, void *p);
   static void delete_UserEventUnpacking(void *p);
   static void deleteArray_UserEventUnpacking(void *p);
   static void destruct_UserEventUnpacking(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserEventUnpacking*)
   {
      ::UserEventUnpacking *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserEventUnpacking >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserEventUnpacking", ::UserEventUnpacking::Class_Version(), "unpacking/UserEventUnpacking.h", 18,
                  typeid(::UserEventUnpacking), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserEventUnpacking::Dictionary, isa_proxy, 4,
                  sizeof(::UserEventUnpacking) );
      instance.SetNew(&new_UserEventUnpacking);
      instance.SetNewArray(&newArray_UserEventUnpacking);
      instance.SetDelete(&delete_UserEventUnpacking);
      instance.SetDeleteArray(&deleteArray_UserEventUnpacking);
      instance.SetDestructor(&destruct_UserEventUnpacking);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserEventUnpacking*)
   {
      return GenerateInitInstanceLocal((::UserEventUnpacking*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserEventUnpacking*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserProcUnpacking(void *p = 0);
   static void *newArray_UserProcUnpacking(Long_t size, void *p);
   static void delete_UserProcUnpacking(void *p);
   static void deleteArray_UserProcUnpacking(void *p);
   static void destruct_UserProcUnpacking(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserProcUnpacking*)
   {
      ::UserProcUnpacking *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserProcUnpacking >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserProcUnpacking", ::UserProcUnpacking::Class_Version(), "unpacking/UserProcUnpacking.h", 25,
                  typeid(::UserProcUnpacking), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserProcUnpacking::Dictionary, isa_proxy, 4,
                  sizeof(::UserProcUnpacking) );
      instance.SetNew(&new_UserProcUnpacking);
      instance.SetNewArray(&newArray_UserProcUnpacking);
      instance.SetDelete(&delete_UserProcUnpacking);
      instance.SetDeleteArray(&deleteArray_UserProcUnpacking);
      instance.SetDestructor(&destruct_UserProcUnpacking);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserProcUnpacking*)
   {
      return GenerateInitInstanceLocal((::UserProcUnpacking*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserProcUnpacking*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserHistosUnpacking(void *p = 0);
   static void *newArray_UserHistosUnpacking(Long_t size, void *p);
   static void delete_UserHistosUnpacking(void *p);
   static void deleteArray_UserHistosUnpacking(void *p);
   static void destruct_UserHistosUnpacking(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserHistosUnpacking*)
   {
      ::UserHistosUnpacking *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserHistosUnpacking >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserHistosUnpacking", ::UserHistosUnpacking::Class_Version(), "unpacking/UserHistosUnpacking.h", 15,
                  typeid(::UserHistosUnpacking), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserHistosUnpacking::Dictionary, isa_proxy, 4,
                  sizeof(::UserHistosUnpacking) );
      instance.SetNew(&new_UserHistosUnpacking);
      instance.SetNewArray(&newArray_UserHistosUnpacking);
      instance.SetDelete(&delete_UserHistosUnpacking);
      instance.SetDeleteArray(&deleteArray_UserHistosUnpacking);
      instance.SetDestructor(&destruct_UserHistosUnpacking);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserHistosUnpacking*)
   {
      return GenerateInitInstanceLocal((::UserHistosUnpacking*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserHistosUnpacking*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserEventRawMonitoring(void *p = 0);
   static void *newArray_UserEventRawMonitoring(Long_t size, void *p);
   static void delete_UserEventRawMonitoring(void *p);
   static void deleteArray_UserEventRawMonitoring(void *p);
   static void destruct_UserEventRawMonitoring(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserEventRawMonitoring*)
   {
      ::UserEventRawMonitoring *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserEventRawMonitoring >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserEventRawMonitoring", ::UserEventRawMonitoring::Class_Version(), "rawmonitoring/UserEventRawMonitoring.h", 14,
                  typeid(::UserEventRawMonitoring), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserEventRawMonitoring::Dictionary, isa_proxy, 4,
                  sizeof(::UserEventRawMonitoring) );
      instance.SetNew(&new_UserEventRawMonitoring);
      instance.SetNewArray(&newArray_UserEventRawMonitoring);
      instance.SetDelete(&delete_UserEventRawMonitoring);
      instance.SetDeleteArray(&deleteArray_UserEventRawMonitoring);
      instance.SetDestructor(&destruct_UserEventRawMonitoring);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserEventRawMonitoring*)
   {
      return GenerateInitInstanceLocal((::UserEventRawMonitoring*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserEventRawMonitoring*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserProcRawMonitoring(void *p = 0);
   static void *newArray_UserProcRawMonitoring(Long_t size, void *p);
   static void delete_UserProcRawMonitoring(void *p);
   static void deleteArray_UserProcRawMonitoring(void *p);
   static void destruct_UserProcRawMonitoring(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserProcRawMonitoring*)
   {
      ::UserProcRawMonitoring *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserProcRawMonitoring >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserProcRawMonitoring", ::UserProcRawMonitoring::Class_Version(), "rawmonitoring/UserProcRawMonitoring.h", 17,
                  typeid(::UserProcRawMonitoring), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserProcRawMonitoring::Dictionary, isa_proxy, 4,
                  sizeof(::UserProcRawMonitoring) );
      instance.SetNew(&new_UserProcRawMonitoring);
      instance.SetNewArray(&newArray_UserProcRawMonitoring);
      instance.SetDelete(&delete_UserProcRawMonitoring);
      instance.SetDeleteArray(&deleteArray_UserProcRawMonitoring);
      instance.SetDestructor(&destruct_UserProcRawMonitoring);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserProcRawMonitoring*)
   {
      return GenerateInitInstanceLocal((::UserProcRawMonitoring*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserProcRawMonitoring*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserHistosRawMonitoring(void *p = 0);
   static void *newArray_UserHistosRawMonitoring(Long_t size, void *p);
   static void delete_UserHistosRawMonitoring(void *p);
   static void deleteArray_UserHistosRawMonitoring(void *p);
   static void destruct_UserHistosRawMonitoring(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserHistosRawMonitoring*)
   {
      ::UserHistosRawMonitoring *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserHistosRawMonitoring >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserHistosRawMonitoring", ::UserHistosRawMonitoring::Class_Version(), "rawmonitoring/UserHistosRawMonitoring.h", 15,
                  typeid(::UserHistosRawMonitoring), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserHistosRawMonitoring::Dictionary, isa_proxy, 4,
                  sizeof(::UserHistosRawMonitoring) );
      instance.SetNew(&new_UserHistosRawMonitoring);
      instance.SetNewArray(&newArray_UserHistosRawMonitoring);
      instance.SetDelete(&delete_UserHistosRawMonitoring);
      instance.SetDeleteArray(&deleteArray_UserHistosRawMonitoring);
      instance.SetDestructor(&destruct_UserHistosRawMonitoring);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserHistosRawMonitoring*)
   {
      return GenerateInitInstanceLocal((::UserHistosRawMonitoring*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserHistosRawMonitoring*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserProcRepacking(void *p = 0);
   static void *newArray_UserProcRepacking(Long_t size, void *p);
   static void delete_UserProcRepacking(void *p);
   static void deleteArray_UserProcRepacking(void *p);
   static void destruct_UserProcRepacking(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserProcRepacking*)
   {
      ::UserProcRepacking *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserProcRepacking >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserProcRepacking", ::UserProcRepacking::Class_Version(), "repacking/UserProcRepacking.h", 42,
                  typeid(::UserProcRepacking), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserProcRepacking::Dictionary, isa_proxy, 4,
                  sizeof(::UserProcRepacking) );
      instance.SetNew(&new_UserProcRepacking);
      instance.SetNewArray(&newArray_UserProcRepacking);
      instance.SetDelete(&delete_UserProcRepacking);
      instance.SetDeleteArray(&deleteArray_UserProcRepacking);
      instance.SetDestructor(&destruct_UserProcRepacking);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserProcRepacking*)
   {
      return GenerateInitInstanceLocal((::UserProcRepacking*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserProcRepacking*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserHistosRepacking(void *p = 0);
   static void *newArray_UserHistosRepacking(Long_t size, void *p);
   static void delete_UserHistosRepacking(void *p);
   static void deleteArray_UserHistosRepacking(void *p);
   static void destruct_UserHistosRepacking(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserHistosRepacking*)
   {
      ::UserHistosRepacking *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserHistosRepacking >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserHistosRepacking", ::UserHistosRepacking::Class_Version(), "repacking/UserHistosRepacking.h", 17,
                  typeid(::UserHistosRepacking), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserHistosRepacking::Dictionary, isa_proxy, 4,
                  sizeof(::UserHistosRepacking) );
      instance.SetNew(&new_UserHistosRepacking);
      instance.SetNewArray(&newArray_UserHistosRepacking);
      instance.SetDelete(&delete_UserHistosRepacking);
      instance.SetDeleteArray(&deleteArray_UserHistosRepacking);
      instance.SetDestructor(&destruct_UserHistosRepacking);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserHistosRepacking*)
   {
      return GenerateInitInstanceLocal((::UserHistosRepacking*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserHistosRepacking*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserEventAdvMonitoring(void *p = 0);
   static void *newArray_UserEventAdvMonitoring(Long_t size, void *p);
   static void delete_UserEventAdvMonitoring(void *p);
   static void deleteArray_UserEventAdvMonitoring(void *p);
   static void destruct_UserEventAdvMonitoring(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserEventAdvMonitoring*)
   {
      ::UserEventAdvMonitoring *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserEventAdvMonitoring >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserEventAdvMonitoring", ::UserEventAdvMonitoring::Class_Version(), "advmonitoring/UserEventAdvMonitoring.h", 14,
                  typeid(::UserEventAdvMonitoring), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserEventAdvMonitoring::Dictionary, isa_proxy, 4,
                  sizeof(::UserEventAdvMonitoring) );
      instance.SetNew(&new_UserEventAdvMonitoring);
      instance.SetNewArray(&newArray_UserEventAdvMonitoring);
      instance.SetDelete(&delete_UserEventAdvMonitoring);
      instance.SetDeleteArray(&deleteArray_UserEventAdvMonitoring);
      instance.SetDestructor(&destruct_UserEventAdvMonitoring);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserEventAdvMonitoring*)
   {
      return GenerateInitInstanceLocal((::UserEventAdvMonitoring*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserEventAdvMonitoring*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserProcAdvMonitoring(void *p = 0);
   static void *newArray_UserProcAdvMonitoring(Long_t size, void *p);
   static void delete_UserProcAdvMonitoring(void *p);
   static void deleteArray_UserProcAdvMonitoring(void *p);
   static void destruct_UserProcAdvMonitoring(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserProcAdvMonitoring*)
   {
      ::UserProcAdvMonitoring *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserProcAdvMonitoring >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserProcAdvMonitoring", ::UserProcAdvMonitoring::Class_Version(), "advmonitoring/UserProcAdvMonitoring.h", 18,
                  typeid(::UserProcAdvMonitoring), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserProcAdvMonitoring::Dictionary, isa_proxy, 4,
                  sizeof(::UserProcAdvMonitoring) );
      instance.SetNew(&new_UserProcAdvMonitoring);
      instance.SetNewArray(&newArray_UserProcAdvMonitoring);
      instance.SetDelete(&delete_UserProcAdvMonitoring);
      instance.SetDeleteArray(&deleteArray_UserProcAdvMonitoring);
      instance.SetDestructor(&destruct_UserProcAdvMonitoring);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserProcAdvMonitoring*)
   {
      return GenerateInitInstanceLocal((::UserProcAdvMonitoring*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserProcAdvMonitoring*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserHistosAdvMonitoring(void *p = 0);
   static void *newArray_UserHistosAdvMonitoring(Long_t size, void *p);
   static void delete_UserHistosAdvMonitoring(void *p);
   static void deleteArray_UserHistosAdvMonitoring(void *p);
   static void destruct_UserHistosAdvMonitoring(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserHistosAdvMonitoring*)
   {
      ::UserHistosAdvMonitoring *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserHistosAdvMonitoring >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserHistosAdvMonitoring", ::UserHistosAdvMonitoring::Class_Version(), "advmonitoring/UserHistosAdvMonitoring.h", 18,
                  typeid(::UserHistosAdvMonitoring), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserHistosAdvMonitoring::Dictionary, isa_proxy, 4,
                  sizeof(::UserHistosAdvMonitoring) );
      instance.SetNew(&new_UserHistosAdvMonitoring);
      instance.SetNewArray(&newArray_UserHistosAdvMonitoring);
      instance.SetDelete(&delete_UserHistosAdvMonitoring);
      instance.SetDeleteArray(&deleteArray_UserHistosAdvMonitoring);
      instance.SetDestructor(&destruct_UserHistosAdvMonitoring);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserHistosAdvMonitoring*)
   {
      return GenerateInitInstanceLocal((::UserHistosAdvMonitoring*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserHistosAdvMonitoring*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserEventBeamDetMonitoring(void *p = 0);
   static void *newArray_UserEventBeamDetMonitoring(Long_t size, void *p);
   static void delete_UserEventBeamDetMonitoring(void *p);
   static void deleteArray_UserEventBeamDetMonitoring(void *p);
   static void destruct_UserEventBeamDetMonitoring(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserEventBeamDetMonitoring*)
   {
      ::UserEventBeamDetMonitoring *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserEventBeamDetMonitoring >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserEventBeamDetMonitoring", ::UserEventBeamDetMonitoring::Class_Version(), "beamdetmonitoring/UserEventBeamDetMonitoring.h", 14,
                  typeid(::UserEventBeamDetMonitoring), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserEventBeamDetMonitoring::Dictionary, isa_proxy, 4,
                  sizeof(::UserEventBeamDetMonitoring) );
      instance.SetNew(&new_UserEventBeamDetMonitoring);
      instance.SetNewArray(&newArray_UserEventBeamDetMonitoring);
      instance.SetDelete(&delete_UserEventBeamDetMonitoring);
      instance.SetDeleteArray(&deleteArray_UserEventBeamDetMonitoring);
      instance.SetDestructor(&destruct_UserEventBeamDetMonitoring);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserEventBeamDetMonitoring*)
   {
      return GenerateInitInstanceLocal((::UserEventBeamDetMonitoring*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserEventBeamDetMonitoring*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserProcBeamDetMonitoring(void *p = 0);
   static void *newArray_UserProcBeamDetMonitoring(Long_t size, void *p);
   static void delete_UserProcBeamDetMonitoring(void *p);
   static void deleteArray_UserProcBeamDetMonitoring(void *p);
   static void destruct_UserProcBeamDetMonitoring(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserProcBeamDetMonitoring*)
   {
      ::UserProcBeamDetMonitoring *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserProcBeamDetMonitoring >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserProcBeamDetMonitoring", ::UserProcBeamDetMonitoring::Class_Version(), "beamdetmonitoring/UserProcBeamDetMonitoring.h", 20,
                  typeid(::UserProcBeamDetMonitoring), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserProcBeamDetMonitoring::Dictionary, isa_proxy, 4,
                  sizeof(::UserProcBeamDetMonitoring) );
      instance.SetNew(&new_UserProcBeamDetMonitoring);
      instance.SetNewArray(&newArray_UserProcBeamDetMonitoring);
      instance.SetDelete(&delete_UserProcBeamDetMonitoring);
      instance.SetDeleteArray(&deleteArray_UserProcBeamDetMonitoring);
      instance.SetDestructor(&destruct_UserProcBeamDetMonitoring);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserProcBeamDetMonitoring*)
   {
      return GenerateInitInstanceLocal((::UserProcBeamDetMonitoring*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserProcBeamDetMonitoring*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserHistosBeamDetMonitoring(void *p = 0);
   static void *newArray_UserHistosBeamDetMonitoring(Long_t size, void *p);
   static void delete_UserHistosBeamDetMonitoring(void *p);
   static void deleteArray_UserHistosBeamDetMonitoring(void *p);
   static void destruct_UserHistosBeamDetMonitoring(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserHistosBeamDetMonitoring*)
   {
      ::UserHistosBeamDetMonitoring *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserHistosBeamDetMonitoring >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserHistosBeamDetMonitoring", ::UserHistosBeamDetMonitoring::Class_Version(), "beamdetmonitoring/UserHistosBeamDetMonitoring.h", 14,
                  typeid(::UserHistosBeamDetMonitoring), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserHistosBeamDetMonitoring::Dictionary, isa_proxy, 4,
                  sizeof(::UserHistosBeamDetMonitoring) );
      instance.SetNew(&new_UserHistosBeamDetMonitoring);
      instance.SetNewArray(&newArray_UserHistosBeamDetMonitoring);
      instance.SetDelete(&delete_UserHistosBeamDetMonitoring);
      instance.SetDeleteArray(&deleteArray_UserHistosBeamDetMonitoring);
      instance.SetDestructor(&destruct_UserHistosBeamDetMonitoring);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserHistosBeamDetMonitoring*)
   {
      return GenerateInitInstanceLocal((::UserHistosBeamDetMonitoring*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserHistosBeamDetMonitoring*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserParamBeamDetMonitoring(void *p = 0);
   static void *newArray_UserParamBeamDetMonitoring(Long_t size, void *p);
   static void delete_UserParamBeamDetMonitoring(void *p);
   static void deleteArray_UserParamBeamDetMonitoring(void *p);
   static void destruct_UserParamBeamDetMonitoring(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserParamBeamDetMonitoring*)
   {
      ::UserParamBeamDetMonitoring *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserParamBeamDetMonitoring >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserParamBeamDetMonitoring", ::UserParamBeamDetMonitoring::Class_Version(), "beamdetmonitoring/UserParamBeamDetMonitoring.h", 15,
                  typeid(::UserParamBeamDetMonitoring), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserParamBeamDetMonitoring::Dictionary, isa_proxy, 4,
                  sizeof(::UserParamBeamDetMonitoring) );
      instance.SetNew(&new_UserParamBeamDetMonitoring);
      instance.SetNewArray(&newArray_UserParamBeamDetMonitoring);
      instance.SetDelete(&delete_UserParamBeamDetMonitoring);
      instance.SetDeleteArray(&deleteArray_UserParamBeamDetMonitoring);
      instance.SetDestructor(&destruct_UserParamBeamDetMonitoring);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserParamBeamDetMonitoring*)
   {
      return GenerateInitInstanceLocal((::UserParamBeamDetMonitoring*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserParamBeamDetMonitoring*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserParameterBeamDetector(void *p = 0);
   static void *newArray_UserParameterBeamDetector(Long_t size, void *p);
   static void delete_UserParameterBeamDetector(void *p);
   static void deleteArray_UserParameterBeamDetector(void *p);
   static void destruct_UserParameterBeamDetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserParameterBeamDetector*)
   {
      ::UserParameterBeamDetector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserParameterBeamDetector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserParameterBeamDetector", ::UserParameterBeamDetector::Class_Version(), "beammonitoring2/UserParameterBeamDetector.h", 21,
                  typeid(::UserParameterBeamDetector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserParameterBeamDetector::Dictionary, isa_proxy, 4,
                  sizeof(::UserParameterBeamDetector) );
      instance.SetNew(&new_UserParameterBeamDetector);
      instance.SetNewArray(&newArray_UserParameterBeamDetector);
      instance.SetDelete(&delete_UserParameterBeamDetector);
      instance.SetDeleteArray(&deleteArray_UserParameterBeamDetector);
      instance.SetDestructor(&destruct_UserParameterBeamDetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserParameterBeamDetector*)
   {
      return GenerateInitInstanceLocal((::UserParameterBeamDetector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserParameterBeamDetector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserEventBeamMonitoring2(void *p = 0);
   static void *newArray_UserEventBeamMonitoring2(Long_t size, void *p);
   static void delete_UserEventBeamMonitoring2(void *p);
   static void deleteArray_UserEventBeamMonitoring2(void *p);
   static void destruct_UserEventBeamMonitoring2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserEventBeamMonitoring2*)
   {
      ::UserEventBeamMonitoring2 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserEventBeamMonitoring2 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserEventBeamMonitoring2", ::UserEventBeamMonitoring2::Class_Version(), "beammonitoring2/UserEventBeamMonitoring2.h", 14,
                  typeid(::UserEventBeamMonitoring2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserEventBeamMonitoring2::Dictionary, isa_proxy, 4,
                  sizeof(::UserEventBeamMonitoring2) );
      instance.SetNew(&new_UserEventBeamMonitoring2);
      instance.SetNewArray(&newArray_UserEventBeamMonitoring2);
      instance.SetDelete(&delete_UserEventBeamMonitoring2);
      instance.SetDeleteArray(&deleteArray_UserEventBeamMonitoring2);
      instance.SetDestructor(&destruct_UserEventBeamMonitoring2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserEventBeamMonitoring2*)
   {
      return GenerateInitInstanceLocal((::UserEventBeamMonitoring2*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserEventBeamMonitoring2*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserProcBeamMonitoring2(void *p = 0);
   static void *newArray_UserProcBeamMonitoring2(Long_t size, void *p);
   static void delete_UserProcBeamMonitoring2(void *p);
   static void deleteArray_UserProcBeamMonitoring2(void *p);
   static void destruct_UserProcBeamMonitoring2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserProcBeamMonitoring2*)
   {
      ::UserProcBeamMonitoring2 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserProcBeamMonitoring2 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserProcBeamMonitoring2", ::UserProcBeamMonitoring2::Class_Version(), "beammonitoring2/UserProcBeamMonitoring2.h", 23,
                  typeid(::UserProcBeamMonitoring2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserProcBeamMonitoring2::Dictionary, isa_proxy, 4,
                  sizeof(::UserProcBeamMonitoring2) );
      instance.SetNew(&new_UserProcBeamMonitoring2);
      instance.SetNewArray(&newArray_UserProcBeamMonitoring2);
      instance.SetDelete(&delete_UserProcBeamMonitoring2);
      instance.SetDeleteArray(&deleteArray_UserProcBeamMonitoring2);
      instance.SetDestructor(&destruct_UserProcBeamMonitoring2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserProcBeamMonitoring2*)
   {
      return GenerateInitInstanceLocal((::UserProcBeamMonitoring2*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserProcBeamMonitoring2*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserHistosBeamMonitoring2(void *p = 0);
   static void *newArray_UserHistosBeamMonitoring2(Long_t size, void *p);
   static void delete_UserHistosBeamMonitoring2(void *p);
   static void deleteArray_UserHistosBeamMonitoring2(void *p);
   static void destruct_UserHistosBeamMonitoring2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserHistosBeamMonitoring2*)
   {
      ::UserHistosBeamMonitoring2 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserHistosBeamMonitoring2 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserHistosBeamMonitoring2", ::UserHistosBeamMonitoring2::Class_Version(), "beammonitoring2/UserHistosBeamMonitoring2.h", 20,
                  typeid(::UserHistosBeamMonitoring2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserHistosBeamMonitoring2::Dictionary, isa_proxy, 4,
                  sizeof(::UserHistosBeamMonitoring2) );
      instance.SetNew(&new_UserHistosBeamMonitoring2);
      instance.SetNewArray(&newArray_UserHistosBeamMonitoring2);
      instance.SetDelete(&delete_UserHistosBeamMonitoring2);
      instance.SetDeleteArray(&deleteArray_UserHistosBeamMonitoring2);
      instance.SetDestructor(&destruct_UserHistosBeamMonitoring2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserHistosBeamMonitoring2*)
   {
      return GenerateInitInstanceLocal((::UserHistosBeamMonitoring2*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserHistosBeamMonitoring2*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserEventLearn(void *p = 0);
   static void *newArray_UserEventLearn(Long_t size, void *p);
   static void delete_UserEventLearn(void *p);
   static void deleteArray_UserEventLearn(void *p);
   static void destruct_UserEventLearn(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserEventLearn*)
   {
      ::UserEventLearn *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserEventLearn >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserEventLearn", ::UserEventLearn::Class_Version(), "learn/UserEventLearn.h", 14,
                  typeid(::UserEventLearn), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserEventLearn::Dictionary, isa_proxy, 4,
                  sizeof(::UserEventLearn) );
      instance.SetNew(&new_UserEventLearn);
      instance.SetNewArray(&newArray_UserEventLearn);
      instance.SetDelete(&delete_UserEventLearn);
      instance.SetDeleteArray(&deleteArray_UserEventLearn);
      instance.SetDestructor(&destruct_UserEventLearn);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserEventLearn*)
   {
      return GenerateInitInstanceLocal((::UserEventLearn*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserEventLearn*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserProcLearn(void *p = 0);
   static void *newArray_UserProcLearn(Long_t size, void *p);
   static void delete_UserProcLearn(void *p);
   static void deleteArray_UserProcLearn(void *p);
   static void destruct_UserProcLearn(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserProcLearn*)
   {
      ::UserProcLearn *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserProcLearn >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserProcLearn", ::UserProcLearn::Class_Version(), "learn/UserProcLearn.h", 30,
                  typeid(::UserProcLearn), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserProcLearn::Dictionary, isa_proxy, 4,
                  sizeof(::UserProcLearn) );
      instance.SetNew(&new_UserProcLearn);
      instance.SetNewArray(&newArray_UserProcLearn);
      instance.SetDelete(&delete_UserProcLearn);
      instance.SetDeleteArray(&deleteArray_UserProcLearn);
      instance.SetDestructor(&destruct_UserProcLearn);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserProcLearn*)
   {
      return GenerateInitInstanceLocal((::UserProcLearn*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserProcLearn*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserEventDigiBuilding(void *p = 0);
   static void *newArray_UserEventDigiBuilding(Long_t size, void *p);
   static void delete_UserEventDigiBuilding(void *p);
   static void deleteArray_UserEventDigiBuilding(void *p);
   static void destruct_UserEventDigiBuilding(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserEventDigiBuilding*)
   {
      ::UserEventDigiBuilding *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserEventDigiBuilding >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserEventDigiBuilding", ::UserEventDigiBuilding::Class_Version(), "digibuilding/UserEventDigiBuilding.h", 11,
                  typeid(::UserEventDigiBuilding), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserEventDigiBuilding::Dictionary, isa_proxy, 4,
                  sizeof(::UserEventDigiBuilding) );
      instance.SetNew(&new_UserEventDigiBuilding);
      instance.SetNewArray(&newArray_UserEventDigiBuilding);
      instance.SetDelete(&delete_UserEventDigiBuilding);
      instance.SetDeleteArray(&deleteArray_UserEventDigiBuilding);
      instance.SetDestructor(&destruct_UserEventDigiBuilding);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserEventDigiBuilding*)
   {
      return GenerateInitInstanceLocal((::UserEventDigiBuilding*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserEventDigiBuilding*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_UserProcDigiBuilding(void *p = 0);
   static void *newArray_UserProcDigiBuilding(Long_t size, void *p);
   static void delete_UserProcDigiBuilding(void *p);
   static void deleteArray_UserProcDigiBuilding(void *p);
   static void destruct_UserProcDigiBuilding(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::UserProcDigiBuilding*)
   {
      ::UserProcDigiBuilding *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::UserProcDigiBuilding >(0);
      static ::ROOT::TGenericClassInfo 
         instance("UserProcDigiBuilding", ::UserProcDigiBuilding::Class_Version(), "digibuilding/UserProcDigiBuilding.h", 16,
                  typeid(::UserProcDigiBuilding), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::UserProcDigiBuilding::Dictionary, isa_proxy, 4,
                  sizeof(::UserProcDigiBuilding) );
      instance.SetNew(&new_UserProcDigiBuilding);
      instance.SetNewArray(&newArray_UserProcDigiBuilding);
      instance.SetDelete(&delete_UserProcDigiBuilding);
      instance.SetDeleteArray(&deleteArray_UserProcDigiBuilding);
      instance.SetDestructor(&destruct_UserProcDigiBuilding);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::UserProcDigiBuilding*)
   {
      return GenerateInitInstanceLocal((::UserProcDigiBuilding*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::UserProcDigiBuilding*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr UserAnalysis::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserAnalysis::Class_Name()
{
   return "UserAnalysis";
}

//______________________________________________________________________________
const char *UserAnalysis::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserAnalysis*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserAnalysis::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserAnalysis*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserAnalysis::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserAnalysis*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserAnalysis::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserAnalysis*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserParameter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserParameter::Class_Name()
{
   return "UserParameter";
}

//______________________________________________________________________________
const char *UserParameter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserParameter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserParameter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserParameter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserParameter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserParameter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserParameter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserParameter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MeshDummyEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MeshDummyEvent::Class_Name()
{
   return "MeshDummyEvent";
}

//______________________________________________________________________________
const char *MeshDummyEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MeshDummyEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MeshDummyEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MeshDummyEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MeshDummyEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MeshDummyEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MeshDummyEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MeshDummyEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MeshProviderProc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *MeshProviderProc::Class_Name()
{
   return "MeshProviderProc";
}

//______________________________________________________________________________
const char *MeshProviderProc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MeshProviderProc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int MeshProviderProc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MeshProviderProc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MeshProviderProc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MeshProviderProc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MeshProviderProc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MeshProviderProc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserEventUnpacking::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserEventUnpacking::Class_Name()
{
   return "UserEventUnpacking";
}

//______________________________________________________________________________
const char *UserEventUnpacking::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserEventUnpacking*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserEventUnpacking::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserEventUnpacking*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserEventUnpacking::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserEventUnpacking*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserEventUnpacking::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserEventUnpacking*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserProcUnpacking::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserProcUnpacking::Class_Name()
{
   return "UserProcUnpacking";
}

//______________________________________________________________________________
const char *UserProcUnpacking::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserProcUnpacking*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserProcUnpacking::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserProcUnpacking*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserProcUnpacking::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserProcUnpacking*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserProcUnpacking::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserProcUnpacking*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserHistosUnpacking::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserHistosUnpacking::Class_Name()
{
   return "UserHistosUnpacking";
}

//______________________________________________________________________________
const char *UserHistosUnpacking::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserHistosUnpacking*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserHistosUnpacking::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserHistosUnpacking*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserHistosUnpacking::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserHistosUnpacking*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserHistosUnpacking::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserHistosUnpacking*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserEventRawMonitoring::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserEventRawMonitoring::Class_Name()
{
   return "UserEventRawMonitoring";
}

//______________________________________________________________________________
const char *UserEventRawMonitoring::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserEventRawMonitoring*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserEventRawMonitoring::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserEventRawMonitoring*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserEventRawMonitoring::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserEventRawMonitoring*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserEventRawMonitoring::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserEventRawMonitoring*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserProcRawMonitoring::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserProcRawMonitoring::Class_Name()
{
   return "UserProcRawMonitoring";
}

//______________________________________________________________________________
const char *UserProcRawMonitoring::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserProcRawMonitoring*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserProcRawMonitoring::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserProcRawMonitoring*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserProcRawMonitoring::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserProcRawMonitoring*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserProcRawMonitoring::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserProcRawMonitoring*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserHistosRawMonitoring::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserHistosRawMonitoring::Class_Name()
{
   return "UserHistosRawMonitoring";
}

//______________________________________________________________________________
const char *UserHistosRawMonitoring::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserHistosRawMonitoring*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserHistosRawMonitoring::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserHistosRawMonitoring*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserHistosRawMonitoring::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserHistosRawMonitoring*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserHistosRawMonitoring::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserHistosRawMonitoring*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserProcRepacking::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserProcRepacking::Class_Name()
{
   return "UserProcRepacking";
}

//______________________________________________________________________________
const char *UserProcRepacking::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserProcRepacking*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserProcRepacking::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserProcRepacking*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserProcRepacking::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserProcRepacking*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserProcRepacking::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserProcRepacking*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserHistosRepacking::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserHistosRepacking::Class_Name()
{
   return "UserHistosRepacking";
}

//______________________________________________________________________________
const char *UserHistosRepacking::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserHistosRepacking*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserHistosRepacking::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserHistosRepacking*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserHistosRepacking::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserHistosRepacking*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserHistosRepacking::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserHistosRepacking*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserEventAdvMonitoring::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserEventAdvMonitoring::Class_Name()
{
   return "UserEventAdvMonitoring";
}

//______________________________________________________________________________
const char *UserEventAdvMonitoring::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserEventAdvMonitoring*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserEventAdvMonitoring::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserEventAdvMonitoring*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserEventAdvMonitoring::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserEventAdvMonitoring*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserEventAdvMonitoring::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserEventAdvMonitoring*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserProcAdvMonitoring::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserProcAdvMonitoring::Class_Name()
{
   return "UserProcAdvMonitoring";
}

//______________________________________________________________________________
const char *UserProcAdvMonitoring::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserProcAdvMonitoring*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserProcAdvMonitoring::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserProcAdvMonitoring*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserProcAdvMonitoring::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserProcAdvMonitoring*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserProcAdvMonitoring::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserProcAdvMonitoring*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserHistosAdvMonitoring::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserHistosAdvMonitoring::Class_Name()
{
   return "UserHistosAdvMonitoring";
}

//______________________________________________________________________________
const char *UserHistosAdvMonitoring::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserHistosAdvMonitoring*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserHistosAdvMonitoring::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserHistosAdvMonitoring*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserHistosAdvMonitoring::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserHistosAdvMonitoring*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserHistosAdvMonitoring::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserHistosAdvMonitoring*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserEventBeamDetMonitoring::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserEventBeamDetMonitoring::Class_Name()
{
   return "UserEventBeamDetMonitoring";
}

//______________________________________________________________________________
const char *UserEventBeamDetMonitoring::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserEventBeamDetMonitoring*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserEventBeamDetMonitoring::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserEventBeamDetMonitoring*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserEventBeamDetMonitoring::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserEventBeamDetMonitoring*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserEventBeamDetMonitoring::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserEventBeamDetMonitoring*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserProcBeamDetMonitoring::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserProcBeamDetMonitoring::Class_Name()
{
   return "UserProcBeamDetMonitoring";
}

//______________________________________________________________________________
const char *UserProcBeamDetMonitoring::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserProcBeamDetMonitoring*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserProcBeamDetMonitoring::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserProcBeamDetMonitoring*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserProcBeamDetMonitoring::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserProcBeamDetMonitoring*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserProcBeamDetMonitoring::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserProcBeamDetMonitoring*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserHistosBeamDetMonitoring::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserHistosBeamDetMonitoring::Class_Name()
{
   return "UserHistosBeamDetMonitoring";
}

//______________________________________________________________________________
const char *UserHistosBeamDetMonitoring::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserHistosBeamDetMonitoring*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserHistosBeamDetMonitoring::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserHistosBeamDetMonitoring*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserHistosBeamDetMonitoring::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserHistosBeamDetMonitoring*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserHistosBeamDetMonitoring::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserHistosBeamDetMonitoring*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserParamBeamDetMonitoring::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserParamBeamDetMonitoring::Class_Name()
{
   return "UserParamBeamDetMonitoring";
}

//______________________________________________________________________________
const char *UserParamBeamDetMonitoring::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserParamBeamDetMonitoring*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserParamBeamDetMonitoring::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserParamBeamDetMonitoring*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserParamBeamDetMonitoring::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserParamBeamDetMonitoring*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserParamBeamDetMonitoring::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserParamBeamDetMonitoring*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserParameterBeamDetector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserParameterBeamDetector::Class_Name()
{
   return "UserParameterBeamDetector";
}

//______________________________________________________________________________
const char *UserParameterBeamDetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserParameterBeamDetector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserParameterBeamDetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserParameterBeamDetector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserParameterBeamDetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserParameterBeamDetector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserParameterBeamDetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserParameterBeamDetector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserEventBeamMonitoring2::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserEventBeamMonitoring2::Class_Name()
{
   return "UserEventBeamMonitoring2";
}

//______________________________________________________________________________
const char *UserEventBeamMonitoring2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserEventBeamMonitoring2*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserEventBeamMonitoring2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserEventBeamMonitoring2*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserEventBeamMonitoring2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserEventBeamMonitoring2*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserEventBeamMonitoring2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserEventBeamMonitoring2*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserProcBeamMonitoring2::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserProcBeamMonitoring2::Class_Name()
{
   return "UserProcBeamMonitoring2";
}

//______________________________________________________________________________
const char *UserProcBeamMonitoring2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserProcBeamMonitoring2*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserProcBeamMonitoring2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserProcBeamMonitoring2*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserProcBeamMonitoring2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserProcBeamMonitoring2*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserProcBeamMonitoring2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserProcBeamMonitoring2*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserHistosBeamMonitoring2::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserHistosBeamMonitoring2::Class_Name()
{
   return "UserHistosBeamMonitoring2";
}

//______________________________________________________________________________
const char *UserHistosBeamMonitoring2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserHistosBeamMonitoring2*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserHistosBeamMonitoring2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserHistosBeamMonitoring2*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserHistosBeamMonitoring2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserHistosBeamMonitoring2*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserHistosBeamMonitoring2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserHistosBeamMonitoring2*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserEventLearn::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserEventLearn::Class_Name()
{
   return "UserEventLearn";
}

//______________________________________________________________________________
const char *UserEventLearn::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserEventLearn*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserEventLearn::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserEventLearn*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserEventLearn::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserEventLearn*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserEventLearn::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserEventLearn*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserProcLearn::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserProcLearn::Class_Name()
{
   return "UserProcLearn";
}

//______________________________________________________________________________
const char *UserProcLearn::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserProcLearn*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserProcLearn::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserProcLearn*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserProcLearn::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserProcLearn*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserProcLearn::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserProcLearn*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserEventDigiBuilding::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserEventDigiBuilding::Class_Name()
{
   return "UserEventDigiBuilding";
}

//______________________________________________________________________________
const char *UserEventDigiBuilding::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserEventDigiBuilding*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserEventDigiBuilding::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserEventDigiBuilding*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserEventDigiBuilding::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserEventDigiBuilding*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserEventDigiBuilding::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserEventDigiBuilding*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr UserProcDigiBuilding::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *UserProcDigiBuilding::Class_Name()
{
   return "UserProcDigiBuilding";
}

//______________________________________________________________________________
const char *UserProcDigiBuilding::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserProcDigiBuilding*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int UserProcDigiBuilding::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::UserProcDigiBuilding*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *UserProcDigiBuilding::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserProcDigiBuilding*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *UserProcDigiBuilding::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::UserProcDigiBuilding*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void UserAnalysis::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserAnalysis.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserAnalysis::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserAnalysis::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserAnalysis(void *p) {
      return  p ? new(p) ::UserAnalysis : new ::UserAnalysis;
   }
   static void *newArray_UserAnalysis(Long_t nElements, void *p) {
      return p ? new(p) ::UserAnalysis[nElements] : new ::UserAnalysis[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserAnalysis(void *p) {
      delete ((::UserAnalysis*)p);
   }
   static void deleteArray_UserAnalysis(void *p) {
      delete [] ((::UserAnalysis*)p);
   }
   static void destruct_UserAnalysis(void *p) {
      typedef ::UserAnalysis current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserAnalysis

//______________________________________________________________________________
void UserParameter::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserParameter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserParameter::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserParameter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserParameter(void *p) {
      return  p ? new(p) ::UserParameter : new ::UserParameter;
   }
   static void *newArray_UserParameter(Long_t nElements, void *p) {
      return p ? new(p) ::UserParameter[nElements] : new ::UserParameter[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserParameter(void *p) {
      delete ((::UserParameter*)p);
   }
   static void deleteArray_UserParameter(void *p) {
      delete [] ((::UserParameter*)p);
   }
   static void destruct_UserParameter(void *p) {
      typedef ::UserParameter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserParameter

//______________________________________________________________________________
void MeshDummyEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class MeshDummyEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MeshDummyEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(MeshDummyEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MeshDummyEvent(void *p) {
      return  p ? new(p) ::MeshDummyEvent : new ::MeshDummyEvent;
   }
   static void *newArray_MeshDummyEvent(Long_t nElements, void *p) {
      return p ? new(p) ::MeshDummyEvent[nElements] : new ::MeshDummyEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_MeshDummyEvent(void *p) {
      delete ((::MeshDummyEvent*)p);
   }
   static void deleteArray_MeshDummyEvent(void *p) {
      delete [] ((::MeshDummyEvent*)p);
   }
   static void destruct_MeshDummyEvent(void *p) {
      typedef ::MeshDummyEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MeshDummyEvent

//______________________________________________________________________________
void MeshProviderProc::Streamer(TBuffer &R__b)
{
   // Stream an object of class MeshProviderProc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MeshProviderProc::Class(),this);
   } else {
      R__b.WriteClassBuffer(MeshProviderProc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MeshProviderProc(void *p) {
      return  p ? new(p) ::MeshProviderProc : new ::MeshProviderProc;
   }
   static void *newArray_MeshProviderProc(Long_t nElements, void *p) {
      return p ? new(p) ::MeshProviderProc[nElements] : new ::MeshProviderProc[nElements];
   }
   // Wrapper around operator delete
   static void delete_MeshProviderProc(void *p) {
      delete ((::MeshProviderProc*)p);
   }
   static void deleteArray_MeshProviderProc(void *p) {
      delete [] ((::MeshProviderProc*)p);
   }
   static void destruct_MeshProviderProc(void *p) {
      typedef ::MeshProviderProc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MeshProviderProc

//______________________________________________________________________________
void UserEventUnpacking::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserEventUnpacking.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserEventUnpacking::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserEventUnpacking::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserEventUnpacking(void *p) {
      return  p ? new(p) ::UserEventUnpacking : new ::UserEventUnpacking;
   }
   static void *newArray_UserEventUnpacking(Long_t nElements, void *p) {
      return p ? new(p) ::UserEventUnpacking[nElements] : new ::UserEventUnpacking[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserEventUnpacking(void *p) {
      delete ((::UserEventUnpacking*)p);
   }
   static void deleteArray_UserEventUnpacking(void *p) {
      delete [] ((::UserEventUnpacking*)p);
   }
   static void destruct_UserEventUnpacking(void *p) {
      typedef ::UserEventUnpacking current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserEventUnpacking

//______________________________________________________________________________
void UserProcUnpacking::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserProcUnpacking.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserProcUnpacking::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserProcUnpacking::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserProcUnpacking(void *p) {
      return  p ? new(p) ::UserProcUnpacking : new ::UserProcUnpacking;
   }
   static void *newArray_UserProcUnpacking(Long_t nElements, void *p) {
      return p ? new(p) ::UserProcUnpacking[nElements] : new ::UserProcUnpacking[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserProcUnpacking(void *p) {
      delete ((::UserProcUnpacking*)p);
   }
   static void deleteArray_UserProcUnpacking(void *p) {
      delete [] ((::UserProcUnpacking*)p);
   }
   static void destruct_UserProcUnpacking(void *p) {
      typedef ::UserProcUnpacking current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserProcUnpacking

//______________________________________________________________________________
void UserHistosUnpacking::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserHistosUnpacking.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserHistosUnpacking::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserHistosUnpacking::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserHistosUnpacking(void *p) {
      return  p ? new(p) ::UserHistosUnpacking : new ::UserHistosUnpacking;
   }
   static void *newArray_UserHistosUnpacking(Long_t nElements, void *p) {
      return p ? new(p) ::UserHistosUnpacking[nElements] : new ::UserHistosUnpacking[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserHistosUnpacking(void *p) {
      delete ((::UserHistosUnpacking*)p);
   }
   static void deleteArray_UserHistosUnpacking(void *p) {
      delete [] ((::UserHistosUnpacking*)p);
   }
   static void destruct_UserHistosUnpacking(void *p) {
      typedef ::UserHistosUnpacking current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserHistosUnpacking

//______________________________________________________________________________
void UserEventRawMonitoring::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserEventRawMonitoring.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserEventRawMonitoring::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserEventRawMonitoring::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserEventRawMonitoring(void *p) {
      return  p ? new(p) ::UserEventRawMonitoring : new ::UserEventRawMonitoring;
   }
   static void *newArray_UserEventRawMonitoring(Long_t nElements, void *p) {
      return p ? new(p) ::UserEventRawMonitoring[nElements] : new ::UserEventRawMonitoring[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserEventRawMonitoring(void *p) {
      delete ((::UserEventRawMonitoring*)p);
   }
   static void deleteArray_UserEventRawMonitoring(void *p) {
      delete [] ((::UserEventRawMonitoring*)p);
   }
   static void destruct_UserEventRawMonitoring(void *p) {
      typedef ::UserEventRawMonitoring current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserEventRawMonitoring

//______________________________________________________________________________
void UserProcRawMonitoring::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserProcRawMonitoring.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserProcRawMonitoring::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserProcRawMonitoring::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserProcRawMonitoring(void *p) {
      return  p ? new(p) ::UserProcRawMonitoring : new ::UserProcRawMonitoring;
   }
   static void *newArray_UserProcRawMonitoring(Long_t nElements, void *p) {
      return p ? new(p) ::UserProcRawMonitoring[nElements] : new ::UserProcRawMonitoring[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserProcRawMonitoring(void *p) {
      delete ((::UserProcRawMonitoring*)p);
   }
   static void deleteArray_UserProcRawMonitoring(void *p) {
      delete [] ((::UserProcRawMonitoring*)p);
   }
   static void destruct_UserProcRawMonitoring(void *p) {
      typedef ::UserProcRawMonitoring current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserProcRawMonitoring

//______________________________________________________________________________
void UserHistosRawMonitoring::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserHistosRawMonitoring.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserHistosRawMonitoring::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserHistosRawMonitoring::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserHistosRawMonitoring(void *p) {
      return  p ? new(p) ::UserHistosRawMonitoring : new ::UserHistosRawMonitoring;
   }
   static void *newArray_UserHistosRawMonitoring(Long_t nElements, void *p) {
      return p ? new(p) ::UserHistosRawMonitoring[nElements] : new ::UserHistosRawMonitoring[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserHistosRawMonitoring(void *p) {
      delete ((::UserHistosRawMonitoring*)p);
   }
   static void deleteArray_UserHistosRawMonitoring(void *p) {
      delete [] ((::UserHistosRawMonitoring*)p);
   }
   static void destruct_UserHistosRawMonitoring(void *p) {
      typedef ::UserHistosRawMonitoring current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserHistosRawMonitoring

//______________________________________________________________________________
void UserProcRepacking::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserProcRepacking.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserProcRepacking::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserProcRepacking::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserProcRepacking(void *p) {
      return  p ? new(p) ::UserProcRepacking : new ::UserProcRepacking;
   }
   static void *newArray_UserProcRepacking(Long_t nElements, void *p) {
      return p ? new(p) ::UserProcRepacking[nElements] : new ::UserProcRepacking[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserProcRepacking(void *p) {
      delete ((::UserProcRepacking*)p);
   }
   static void deleteArray_UserProcRepacking(void *p) {
      delete [] ((::UserProcRepacking*)p);
   }
   static void destruct_UserProcRepacking(void *p) {
      typedef ::UserProcRepacking current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserProcRepacking

//______________________________________________________________________________
void UserHistosRepacking::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserHistosRepacking.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserHistosRepacking::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserHistosRepacking::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserHistosRepacking(void *p) {
      return  p ? new(p) ::UserHistosRepacking : new ::UserHistosRepacking;
   }
   static void *newArray_UserHistosRepacking(Long_t nElements, void *p) {
      return p ? new(p) ::UserHistosRepacking[nElements] : new ::UserHistosRepacking[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserHistosRepacking(void *p) {
      delete ((::UserHistosRepacking*)p);
   }
   static void deleteArray_UserHistosRepacking(void *p) {
      delete [] ((::UserHistosRepacking*)p);
   }
   static void destruct_UserHistosRepacking(void *p) {
      typedef ::UserHistosRepacking current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserHistosRepacking

//______________________________________________________________________________
void UserEventAdvMonitoring::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserEventAdvMonitoring.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserEventAdvMonitoring::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserEventAdvMonitoring::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserEventAdvMonitoring(void *p) {
      return  p ? new(p) ::UserEventAdvMonitoring : new ::UserEventAdvMonitoring;
   }
   static void *newArray_UserEventAdvMonitoring(Long_t nElements, void *p) {
      return p ? new(p) ::UserEventAdvMonitoring[nElements] : new ::UserEventAdvMonitoring[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserEventAdvMonitoring(void *p) {
      delete ((::UserEventAdvMonitoring*)p);
   }
   static void deleteArray_UserEventAdvMonitoring(void *p) {
      delete [] ((::UserEventAdvMonitoring*)p);
   }
   static void destruct_UserEventAdvMonitoring(void *p) {
      typedef ::UserEventAdvMonitoring current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserEventAdvMonitoring

//______________________________________________________________________________
void UserProcAdvMonitoring::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserProcAdvMonitoring.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserProcAdvMonitoring::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserProcAdvMonitoring::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserProcAdvMonitoring(void *p) {
      return  p ? new(p) ::UserProcAdvMonitoring : new ::UserProcAdvMonitoring;
   }
   static void *newArray_UserProcAdvMonitoring(Long_t nElements, void *p) {
      return p ? new(p) ::UserProcAdvMonitoring[nElements] : new ::UserProcAdvMonitoring[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserProcAdvMonitoring(void *p) {
      delete ((::UserProcAdvMonitoring*)p);
   }
   static void deleteArray_UserProcAdvMonitoring(void *p) {
      delete [] ((::UserProcAdvMonitoring*)p);
   }
   static void destruct_UserProcAdvMonitoring(void *p) {
      typedef ::UserProcAdvMonitoring current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserProcAdvMonitoring

//______________________________________________________________________________
void UserHistosAdvMonitoring::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserHistosAdvMonitoring.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserHistosAdvMonitoring::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserHistosAdvMonitoring::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserHistosAdvMonitoring(void *p) {
      return  p ? new(p) ::UserHistosAdvMonitoring : new ::UserHistosAdvMonitoring;
   }
   static void *newArray_UserHistosAdvMonitoring(Long_t nElements, void *p) {
      return p ? new(p) ::UserHistosAdvMonitoring[nElements] : new ::UserHistosAdvMonitoring[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserHistosAdvMonitoring(void *p) {
      delete ((::UserHistosAdvMonitoring*)p);
   }
   static void deleteArray_UserHistosAdvMonitoring(void *p) {
      delete [] ((::UserHistosAdvMonitoring*)p);
   }
   static void destruct_UserHistosAdvMonitoring(void *p) {
      typedef ::UserHistosAdvMonitoring current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserHistosAdvMonitoring

//______________________________________________________________________________
void UserEventBeamDetMonitoring::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserEventBeamDetMonitoring.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserEventBeamDetMonitoring::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserEventBeamDetMonitoring::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserEventBeamDetMonitoring(void *p) {
      return  p ? new(p) ::UserEventBeamDetMonitoring : new ::UserEventBeamDetMonitoring;
   }
   static void *newArray_UserEventBeamDetMonitoring(Long_t nElements, void *p) {
      return p ? new(p) ::UserEventBeamDetMonitoring[nElements] : new ::UserEventBeamDetMonitoring[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserEventBeamDetMonitoring(void *p) {
      delete ((::UserEventBeamDetMonitoring*)p);
   }
   static void deleteArray_UserEventBeamDetMonitoring(void *p) {
      delete [] ((::UserEventBeamDetMonitoring*)p);
   }
   static void destruct_UserEventBeamDetMonitoring(void *p) {
      typedef ::UserEventBeamDetMonitoring current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserEventBeamDetMonitoring

//______________________________________________________________________________
void UserProcBeamDetMonitoring::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserProcBeamDetMonitoring.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserProcBeamDetMonitoring::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserProcBeamDetMonitoring::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserProcBeamDetMonitoring(void *p) {
      return  p ? new(p) ::UserProcBeamDetMonitoring : new ::UserProcBeamDetMonitoring;
   }
   static void *newArray_UserProcBeamDetMonitoring(Long_t nElements, void *p) {
      return p ? new(p) ::UserProcBeamDetMonitoring[nElements] : new ::UserProcBeamDetMonitoring[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserProcBeamDetMonitoring(void *p) {
      delete ((::UserProcBeamDetMonitoring*)p);
   }
   static void deleteArray_UserProcBeamDetMonitoring(void *p) {
      delete [] ((::UserProcBeamDetMonitoring*)p);
   }
   static void destruct_UserProcBeamDetMonitoring(void *p) {
      typedef ::UserProcBeamDetMonitoring current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserProcBeamDetMonitoring

//______________________________________________________________________________
void UserHistosBeamDetMonitoring::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserHistosBeamDetMonitoring.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserHistosBeamDetMonitoring::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserHistosBeamDetMonitoring::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserHistosBeamDetMonitoring(void *p) {
      return  p ? new(p) ::UserHistosBeamDetMonitoring : new ::UserHistosBeamDetMonitoring;
   }
   static void *newArray_UserHistosBeamDetMonitoring(Long_t nElements, void *p) {
      return p ? new(p) ::UserHistosBeamDetMonitoring[nElements] : new ::UserHistosBeamDetMonitoring[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserHistosBeamDetMonitoring(void *p) {
      delete ((::UserHistosBeamDetMonitoring*)p);
   }
   static void deleteArray_UserHistosBeamDetMonitoring(void *p) {
      delete [] ((::UserHistosBeamDetMonitoring*)p);
   }
   static void destruct_UserHistosBeamDetMonitoring(void *p) {
      typedef ::UserHistosBeamDetMonitoring current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserHistosBeamDetMonitoring

//______________________________________________________________________________
void UserParamBeamDetMonitoring::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserParamBeamDetMonitoring.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserParamBeamDetMonitoring::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserParamBeamDetMonitoring::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserParamBeamDetMonitoring(void *p) {
      return  p ? new(p) ::UserParamBeamDetMonitoring : new ::UserParamBeamDetMonitoring;
   }
   static void *newArray_UserParamBeamDetMonitoring(Long_t nElements, void *p) {
      return p ? new(p) ::UserParamBeamDetMonitoring[nElements] : new ::UserParamBeamDetMonitoring[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserParamBeamDetMonitoring(void *p) {
      delete ((::UserParamBeamDetMonitoring*)p);
   }
   static void deleteArray_UserParamBeamDetMonitoring(void *p) {
      delete [] ((::UserParamBeamDetMonitoring*)p);
   }
   static void destruct_UserParamBeamDetMonitoring(void *p) {
      typedef ::UserParamBeamDetMonitoring current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserParamBeamDetMonitoring

//______________________________________________________________________________
void UserParameterBeamDetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserParameterBeamDetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserParameterBeamDetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserParameterBeamDetector::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserParameterBeamDetector(void *p) {
      return  p ? new(p) ::UserParameterBeamDetector : new ::UserParameterBeamDetector;
   }
   static void *newArray_UserParameterBeamDetector(Long_t nElements, void *p) {
      return p ? new(p) ::UserParameterBeamDetector[nElements] : new ::UserParameterBeamDetector[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserParameterBeamDetector(void *p) {
      delete ((::UserParameterBeamDetector*)p);
   }
   static void deleteArray_UserParameterBeamDetector(void *p) {
      delete [] ((::UserParameterBeamDetector*)p);
   }
   static void destruct_UserParameterBeamDetector(void *p) {
      typedef ::UserParameterBeamDetector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserParameterBeamDetector

//______________________________________________________________________________
void UserEventBeamMonitoring2::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserEventBeamMonitoring2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserEventBeamMonitoring2::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserEventBeamMonitoring2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserEventBeamMonitoring2(void *p) {
      return  p ? new(p) ::UserEventBeamMonitoring2 : new ::UserEventBeamMonitoring2;
   }
   static void *newArray_UserEventBeamMonitoring2(Long_t nElements, void *p) {
      return p ? new(p) ::UserEventBeamMonitoring2[nElements] : new ::UserEventBeamMonitoring2[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserEventBeamMonitoring2(void *p) {
      delete ((::UserEventBeamMonitoring2*)p);
   }
   static void deleteArray_UserEventBeamMonitoring2(void *p) {
      delete [] ((::UserEventBeamMonitoring2*)p);
   }
   static void destruct_UserEventBeamMonitoring2(void *p) {
      typedef ::UserEventBeamMonitoring2 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserEventBeamMonitoring2

//______________________________________________________________________________
void UserProcBeamMonitoring2::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserProcBeamMonitoring2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserProcBeamMonitoring2::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserProcBeamMonitoring2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserProcBeamMonitoring2(void *p) {
      return  p ? new(p) ::UserProcBeamMonitoring2 : new ::UserProcBeamMonitoring2;
   }
   static void *newArray_UserProcBeamMonitoring2(Long_t nElements, void *p) {
      return p ? new(p) ::UserProcBeamMonitoring2[nElements] : new ::UserProcBeamMonitoring2[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserProcBeamMonitoring2(void *p) {
      delete ((::UserProcBeamMonitoring2*)p);
   }
   static void deleteArray_UserProcBeamMonitoring2(void *p) {
      delete [] ((::UserProcBeamMonitoring2*)p);
   }
   static void destruct_UserProcBeamMonitoring2(void *p) {
      typedef ::UserProcBeamMonitoring2 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserProcBeamMonitoring2

//______________________________________________________________________________
void UserHistosBeamMonitoring2::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserHistosBeamMonitoring2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserHistosBeamMonitoring2::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserHistosBeamMonitoring2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserHistosBeamMonitoring2(void *p) {
      return  p ? new(p) ::UserHistosBeamMonitoring2 : new ::UserHistosBeamMonitoring2;
   }
   static void *newArray_UserHistosBeamMonitoring2(Long_t nElements, void *p) {
      return p ? new(p) ::UserHistosBeamMonitoring2[nElements] : new ::UserHistosBeamMonitoring2[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserHistosBeamMonitoring2(void *p) {
      delete ((::UserHistosBeamMonitoring2*)p);
   }
   static void deleteArray_UserHistosBeamMonitoring2(void *p) {
      delete [] ((::UserHistosBeamMonitoring2*)p);
   }
   static void destruct_UserHistosBeamMonitoring2(void *p) {
      typedef ::UserHistosBeamMonitoring2 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserHistosBeamMonitoring2

//______________________________________________________________________________
void UserEventLearn::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserEventLearn.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserEventLearn::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserEventLearn::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserEventLearn(void *p) {
      return  p ? new(p) ::UserEventLearn : new ::UserEventLearn;
   }
   static void *newArray_UserEventLearn(Long_t nElements, void *p) {
      return p ? new(p) ::UserEventLearn[nElements] : new ::UserEventLearn[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserEventLearn(void *p) {
      delete ((::UserEventLearn*)p);
   }
   static void deleteArray_UserEventLearn(void *p) {
      delete [] ((::UserEventLearn*)p);
   }
   static void destruct_UserEventLearn(void *p) {
      typedef ::UserEventLearn current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserEventLearn

//______________________________________________________________________________
void UserProcLearn::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserProcLearn.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserProcLearn::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserProcLearn::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserProcLearn(void *p) {
      return  p ? new(p) ::UserProcLearn : new ::UserProcLearn;
   }
   static void *newArray_UserProcLearn(Long_t nElements, void *p) {
      return p ? new(p) ::UserProcLearn[nElements] : new ::UserProcLearn[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserProcLearn(void *p) {
      delete ((::UserProcLearn*)p);
   }
   static void deleteArray_UserProcLearn(void *p) {
      delete [] ((::UserProcLearn*)p);
   }
   static void destruct_UserProcLearn(void *p) {
      typedef ::UserProcLearn current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserProcLearn

//______________________________________________________________________________
void UserEventDigiBuilding::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserEventDigiBuilding.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserEventDigiBuilding::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserEventDigiBuilding::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserEventDigiBuilding(void *p) {
      return  p ? new(p) ::UserEventDigiBuilding : new ::UserEventDigiBuilding;
   }
   static void *newArray_UserEventDigiBuilding(Long_t nElements, void *p) {
      return p ? new(p) ::UserEventDigiBuilding[nElements] : new ::UserEventDigiBuilding[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserEventDigiBuilding(void *p) {
      delete ((::UserEventDigiBuilding*)p);
   }
   static void deleteArray_UserEventDigiBuilding(void *p) {
      delete [] ((::UserEventDigiBuilding*)p);
   }
   static void destruct_UserEventDigiBuilding(void *p) {
      typedef ::UserEventDigiBuilding current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserEventDigiBuilding

//______________________________________________________________________________
void UserProcDigiBuilding::Streamer(TBuffer &R__b)
{
   // Stream an object of class UserProcDigiBuilding.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(UserProcDigiBuilding::Class(),this);
   } else {
      R__b.WriteClassBuffer(UserProcDigiBuilding::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_UserProcDigiBuilding(void *p) {
      return  p ? new(p) ::UserProcDigiBuilding : new ::UserProcDigiBuilding;
   }
   static void *newArray_UserProcDigiBuilding(Long_t nElements, void *p) {
      return p ? new(p) ::UserProcDigiBuilding[nElements] : new ::UserProcDigiBuilding[nElements];
   }
   // Wrapper around operator delete
   static void delete_UserProcDigiBuilding(void *p) {
      delete ((::UserProcDigiBuilding*)p);
   }
   static void deleteArray_UserProcDigiBuilding(void *p) {
      delete [] ((::UserProcDigiBuilding*)p);
   }
   static void destruct_UserProcDigiBuilding(void *p) {
      typedef ::UserProcDigiBuilding current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::UserProcDigiBuilding

namespace ROOT {
   static TClass *setlEunsignedsPintgR_Dictionary();
   static void setlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_setlEunsignedsPintgR(void *p = 0);
   static void *newArray_setlEunsignedsPintgR(Long_t size, void *p);
   static void delete_setlEunsignedsPintgR(void *p);
   static void deleteArray_setlEunsignedsPintgR(void *p);
   static void destruct_setlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<unsigned int>*)
   {
      set<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("set<unsigned int>", -2, "set", 90,
                  typeid(set<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &setlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(set<unsigned int>) );
      instance.SetNew(&new_setlEunsignedsPintgR);
      instance.SetNewArray(&newArray_setlEunsignedsPintgR);
      instance.SetDelete(&delete_setlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_setlEunsignedsPintgR);
      instance.SetDestructor(&destruct_setlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<unsigned int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const set<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const set<unsigned int>*)0x0)->GetClass();
      setlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void setlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) set<unsigned int> : new set<unsigned int>;
   }
   static void *newArray_setlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) set<unsigned int>[nElements] : new set<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEunsignedsPintgR(void *p) {
      delete ((set<unsigned int>*)p);
   }
   static void deleteArray_setlEunsignedsPintgR(void *p) {
      delete [] ((set<unsigned int>*)p);
   }
   static void destruct_setlEunsignedsPintgR(void *p) {
      typedef set<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class set<unsigned int>

namespace {
  void TriggerDictionaryInitialization_libAccDaqUserAnalysis_Impl() {
    static const char* headers[] = {
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/UserAnalysis.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/UserParameter.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/mesh/MeshDummyEvent.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/mesh/MeshProviderProc.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/unpacking/UserEventUnpacking.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/unpacking/UserProcUnpacking.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/unpacking/UserHistosUnpacking.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/rawmonitoring/UserEventRawMonitoring.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/rawmonitoring/UserProcRawMonitoring.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/rawmonitoring/UserHistosRawMonitoring.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/repacking/UserProcRepacking.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/repacking/UserHistosRepacking.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/advmonitoring/UserEventAdvMonitoring.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/advmonitoring/UserProcAdvMonitoring.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/advmonitoring/UserHistosAdvMonitoring.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beamdetmonitoring/UserEventBeamDetMonitoring.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beamdetmonitoring/UserProcBeamDetMonitoring.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beamdetmonitoring/UserHistosBeamDetMonitoring.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beamdetmonitoring/UserParamBeamDetMonitoring.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beammonitoring2/UserParameterBeamDetector.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beammonitoring2/UserEventBeamMonitoring2.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beammonitoring2/UserProcBeamMonitoring2.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beammonitoring2/UserHistosBeamMonitoring2.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/learn/UserEventLearn.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/learn/UserProcLearn.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/digibuilding/UserEventDigiBuilding.h",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/digibuilding/UserProcDigiBuilding.h",
0
    };
    static const char* includePaths[] = {
"/home/daria/Documents/root-6.14.04/builddir/include",
"/home/daria/Documents/go4-5.3.0/include",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library",
"/home/daria/Documents/root-6.14.04/builddir/include",
"/home/daria/7H_experiment/ACCULINNA_go4_user_library/build/useranalysis/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libAccDaqUserAnalysis dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/UserAnalysis.h")))  UserAnalysis;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/UserParameter.h")))  UserParameter;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/mesh/MeshDummyEvent.h")))  MeshDummyEvent;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/mesh/MeshProviderProc.h")))  MeshProviderProc;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/unpacking/UserEventUnpacking.h")))  UserEventUnpacking;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/unpacking/UserProcUnpacking.h")))  UserProcUnpacking;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/unpacking/UserHistosUnpacking.h")))  UserHistosUnpacking;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/rawmonitoring/UserEventRawMonitoring.h")))  UserEventRawMonitoring;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/rawmonitoring/UserProcRawMonitoring.h")))  UserProcRawMonitoring;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/rawmonitoring/UserHistosRawMonitoring.h")))  UserHistosRawMonitoring;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/repacking/UserProcRepacking.h")))  UserProcRepacking;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/repacking/UserHistosRepacking.h")))  UserHistosRepacking;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/advmonitoring/UserEventAdvMonitoring.h")))  UserEventAdvMonitoring;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/advmonitoring/UserProcAdvMonitoring.h")))  UserProcAdvMonitoring;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/advmonitoring/UserHistosAdvMonitoring.h")))  UserHistosAdvMonitoring;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beamdetmonitoring/UserEventBeamDetMonitoring.h")))  UserEventBeamDetMonitoring;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beamdetmonitoring/UserProcBeamDetMonitoring.h")))  UserProcBeamDetMonitoring;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beamdetmonitoring/UserHistosBeamDetMonitoring.h")))  UserHistosBeamDetMonitoring;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beamdetmonitoring/UserParamBeamDetMonitoring.h")))  UserParamBeamDetMonitoring;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beammonitoring2/UserParameterBeamDetector.h")))  UserParameterBeamDetector;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beammonitoring2/UserEventBeamMonitoring2.h")))  UserEventBeamMonitoring2;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beammonitoring2/UserProcBeamMonitoring2.h")))  UserProcBeamMonitoring2;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beammonitoring2/UserHistosBeamMonitoring2.h")))  UserHistosBeamMonitoring2;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/learn/UserEventLearn.h")))  UserEventLearn;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/learn/UserProcLearn.h")))  UserProcLearn;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/digibuilding/UserEventDigiBuilding.h")))  UserEventDigiBuilding;
class __attribute__((annotate("$clingAutoload$/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/digibuilding/UserProcDigiBuilding.h")))  UserProcDigiBuilding;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libAccDaqUserAnalysis dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/UserAnalysis.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/UserParameter.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/mesh/MeshDummyEvent.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/mesh/MeshProviderProc.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/unpacking/UserEventUnpacking.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/unpacking/UserProcUnpacking.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/unpacking/UserHistosUnpacking.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/rawmonitoring/UserEventRawMonitoring.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/rawmonitoring/UserProcRawMonitoring.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/rawmonitoring/UserHistosRawMonitoring.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/repacking/UserProcRepacking.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/repacking/UserHistosRepacking.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/advmonitoring/UserEventAdvMonitoring.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/advmonitoring/UserProcAdvMonitoring.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/advmonitoring/UserHistosAdvMonitoring.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beamdetmonitoring/UserEventBeamDetMonitoring.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beamdetmonitoring/UserProcBeamDetMonitoring.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beamdetmonitoring/UserHistosBeamDetMonitoring.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beamdetmonitoring/UserParamBeamDetMonitoring.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beammonitoring2/UserParameterBeamDetector.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beammonitoring2/UserEventBeamMonitoring2.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beammonitoring2/UserProcBeamMonitoring2.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/beammonitoring2/UserHistosBeamMonitoring2.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/learn/UserEventLearn.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/learn/UserProcLearn.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/digibuilding/UserEventDigiBuilding.h"
#include "/home/daria/7H_experiment/ACCULINNA_go4_user_library/useranalysis/digibuilding/UserProcDigiBuilding.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"MeshDummyEvent", payloadCode, "@",
"MeshProviderProc", payloadCode, "@",
"UserAnalysis", payloadCode, "@",
"UserEventAdvMonitoring", payloadCode, "@",
"UserEventBeamDetMonitoring", payloadCode, "@",
"UserEventBeamMonitoring2", payloadCode, "@",
"UserEventDigiBuilding", payloadCode, "@",
"UserEventLearn", payloadCode, "@",
"UserEventRawMonitoring", payloadCode, "@",
"UserEventUnpacking", payloadCode, "@",
"UserHistosAdvMonitoring", payloadCode, "@",
"UserHistosBeamDetMonitoring", payloadCode, "@",
"UserHistosBeamMonitoring2", payloadCode, "@",
"UserHistosRawMonitoring", payloadCode, "@",
"UserHistosRepacking", payloadCode, "@",
"UserHistosUnpacking", payloadCode, "@",
"UserParamBeamDetMonitoring", payloadCode, "@",
"UserParameter", payloadCode, "@",
"UserParameterBeamDetector", payloadCode, "@",
"UserProcAdvMonitoring", payloadCode, "@",
"UserProcBeamDetMonitoring", payloadCode, "@",
"UserProcBeamMonitoring2", payloadCode, "@",
"UserProcDigiBuilding", payloadCode, "@",
"UserProcLearn", payloadCode, "@",
"UserProcRawMonitoring", payloadCode, "@",
"UserProcRepacking", payloadCode, "@",
"UserProcUnpacking", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libAccDaqUserAnalysis",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libAccDaqUserAnalysis_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libAccDaqUserAnalysis_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libAccDaqUserAnalysis() {
  TriggerDictionaryInitialization_libAccDaqUserAnalysis_Impl();
}
