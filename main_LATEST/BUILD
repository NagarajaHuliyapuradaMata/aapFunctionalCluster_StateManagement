load(
      "@rules_cc//cc:defs.bzl"
   ,  "cc_library"
)

cc_library(
      name       = "aapFunctionalCluster_StateManagement"
   ,  srcs       = ["aapFunctionalCluster_StateManagement.cpp"]
#  ,  deps       = ["//repo_projects/pProjectFull/main_LATEST/source/SwcServiceEcuM:SwcServiceEcuM"]
   ,  hdrs       = [
            "interface_StateManagement_EcuResetRequest.hpp"
         ,  "interface_StateManagement_PowerMode.hpp"
         ,  "interface_StateManagement_RecoveryAction.hpp"
         ,  "interface_StateManagement_StateClient.hpp"
         ,  "interface_StateManagement_StateMachineService.hpp"
         ,  "interface_StateManagement_UpdateAllowedService.hpp"
         ,  "interface_StateManagement_UpdateRequest.hpp"
      ]
   ,  includes   = ["."]
   ,  visibility = ["//visibility:public"]
)

