/******************************************************************************/
/* File   : aapFunctionalCluster_StateManagement.cpp                          */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "interface_StateManagement_StateClient.hpp"
#include "interface_StateManagement_StateMachineService.hpp"
#include "interface_StateManagement_UpdateAllowedService.hpp"
#include "interface_StateManagement_PowerMode.hpp"
#include "interface_StateManagement_UpdateRequest.hpp"
#include "interface_StateManagement_EcuResetRequest.hpp"
#include "interface_StateManagement_RecoveryAction.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#define UNUSED(x)                                                        (x = x)

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class aapFunctionalCluster_StateManagement:
      public interface_StateManagement_StateClient
   ,  public interface_StateManagement_StateMachineService
   ,  public interface_StateManagement_UpdateAllowedService
   ,  public interface_StateManagement_PowerMode
   ,  public interface_StateManagement_UpdateRequest
   ,  public interface_StateManagement_EcuResetRequest
   ,  public interface_StateManagement_RecoveryAction
{
   public:
      void   Create                                 (void /*function*/);
      void   GetExecutionError                      (void);
      void   GetInitialMachineStateTransitionResult (void);
      Future SetState                               (FunctionGroupState ValueFunctionGroupState);
      void   RequestState                           (void);
      void   UpdateAllowed                          (void);
      void   event                                  (PowerModeRespMsg* ptrPowerModeRespMsg);
      void   message                                (PowerModeMsg*     ptrPowerModeMsg);
      void   PrepareRollback                        (void);
      void   PrepareUpdate                          (void);
      void   RequestUpdateSession                   (void);
      void   ResetMachine                           (void);
      void   StopUpdateSession                      (void);
      void   VerifyUpdate                           (void);
      void   EnableRapidShutdown                    (void);
      void   ExecuteReset                           (void);
      void   Offer                                  (void);
      void   RequestReset                           (void);
      void   StopOffer                              (void);
/*
      void   Offer                                  (void);
      void   StopOffer                              (void);
*/
      void   Callback_RecoveryHandler               (void);
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
void aapFunctionalCluster_StateManagement::Create(void /*function*/){
}

void aapFunctionalCluster_StateManagement::GetExecutionError(void){
}

void aapFunctionalCluster_StateManagement::GetInitialMachineStateTransitionResult(void){
}

Future aapFunctionalCluster_StateManagement::SetState(FunctionGroupState ValueFunctionGroupState){
   UNUSED(ValueFunctionGroupState);
   return 0;
}

void aapFunctionalCluster_StateManagement::RequestState(void){
}

void aapFunctionalCluster_StateManagement::UpdateAllowed(void){
}

void aapFunctionalCluster_StateManagement::event(PowerModeRespMsg* ptrPowerModeRespMsg){
   UNUSED(ptrPowerModeRespMsg);
}

void aapFunctionalCluster_StateManagement::message(PowerModeMsg* ptrPowerModeMsg){
   UNUSED(ptrPowerModeMsg);
}

void aapFunctionalCluster_StateManagement::PrepareRollback(void){
}

void aapFunctionalCluster_StateManagement::PrepareUpdate(void){
}

void aapFunctionalCluster_StateManagement::RequestUpdateSession(void){
}

void aapFunctionalCluster_StateManagement::ResetMachine(void){
}

void aapFunctionalCluster_StateManagement::StopUpdateSession(void){
}

void aapFunctionalCluster_StateManagement::VerifyUpdate(void){
}

void aapFunctionalCluster_StateManagement::EnableRapidShutdown(void){
}

void aapFunctionalCluster_StateManagement::ExecuteReset(void){
}

void aapFunctionalCluster_StateManagement::Offer(void){
}

void aapFunctionalCluster_StateManagement::RequestReset(void){
}

void aapFunctionalCluster_StateManagement::StopOffer(void){
}

/*
void aapFunctionalCluster_StateManagement::Offer(void){
}

void aapFunctionalCluster_StateManagement::StopOffer(void){
}
*/

void aapFunctionalCluster_StateManagement::Callback_RecoveryHandler(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/
