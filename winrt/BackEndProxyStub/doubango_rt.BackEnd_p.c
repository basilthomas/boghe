

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Tue Aug 18 19:52:18 2015
 */
/* Compiler settings for C:\Users\dmi\AppData\Local\Temp\doubango_rt.BackEnd.idl-24f232db:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=ARM 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_ARM_)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "doubango_rt.BackEnd.h"

#define TYPE_FORMAT_STRING_SIZE   1359                              
#define PROC_FORMAT_STRING_SIZE   12903                             
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _doubango_rt2EBackEnd_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } doubango_rt2EBackEnd_MIDL_TYPE_FORMAT_STRING;

typedef struct _doubango_rt2EBackEnd_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } doubango_rt2EBackEnd_MIDL_PROC_FORMAT_STRING;

typedef struct _doubango_rt2EBackEnd_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } doubango_rt2EBackEnd_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const doubango_rt2EBackEnd_MIDL_TYPE_FORMAT_STRING doubango_rt2EBackEnd__MIDL_TypeFormatString;
extern const doubango_rt2EBackEnd_MIDL_PROC_FORMAT_STRING doubango_rt2EBackEnd__MIDL_ProcFormatString;
extern const doubango_rt2EBackEnd_MIDL_EXPR_FORMAT_STRING doubango_rt2EBackEnd__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_ARM32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const doubango_rt2EBackEnd_MIDL_PROC_FORMAT_STRING doubango_rt2EBackEnd__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Invoke */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 10 */	NdrFcShort( 0x20 ),	/* 32 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 16 */	0x12,		/* 18 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x6 ),	/* 6 */
/* 26 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 28 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 30 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 32 */	0xfc,		/* 252 */
			0x0,		/* 0 */

	/* Parameter __param0 */

/* 34 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 36 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 38 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter __param1 */

/* 40 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 42 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 44 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter __param2 */

/* 46 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 48 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 50 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 52 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 54 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 56 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addHeader */

/* 58 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 60 */	NdrFcLong( 0x0 ),	/* 0 */
/* 64 */	NdrFcShort( 0x6 ),	/* 6 */
/* 66 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x21 ),	/* 33 */
/* 72 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 74 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 76 */	NdrFcShort( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x1 ),	/* 1 */
/* 80 */	NdrFcShort( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x4 ),	/* 4 */
/* 84 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 86 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 88 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter name */

/* 90 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 92 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 94 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 96 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 98 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 100 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 102 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 104 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 106 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 108 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 110 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 112 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure publish1 */


	/* Procedure send1 */


	/* Procedure send1 */


	/* Procedure addPayload */

/* 114 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 116 */	NdrFcLong( 0x0 ),	/* 0 */
/* 120 */	NdrFcShort( 0x7 ),	/* 7 */
/* 122 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x21 ),	/* 33 */
/* 128 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 130 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x1 ),	/* 1 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x3 ),	/* 3 */
/* 140 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 142 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter payload */


	/* Parameter payload */


	/* Parameter payload */


	/* Parameter payload */

/* 144 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 146 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 148 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 150 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 152 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 154 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 158 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setActiveMedia */

/* 162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 170 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 172 */	NdrFcShort( 0x8 ),	/* 8 */
/* 174 */	NdrFcShort( 0x21 ),	/* 33 */
/* 176 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 178 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 186 */	NdrFcShort( 0x3 ),	/* 3 */
/* 188 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 190 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter type */

/* 192 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 194 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 196 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 198 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 200 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 202 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 204 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 206 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 208 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setResponseLine */

/* 210 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 216 */	NdrFcShort( 0x9 ),	/* 9 */
/* 218 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 220 */	NdrFcShort( 0x6 ),	/* 6 */
/* 222 */	NdrFcShort( 0x8 ),	/* 8 */
/* 224 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 226 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 230 */	NdrFcShort( 0x1 ),	/* 1 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 234 */	NdrFcShort( 0x4 ),	/* 4 */
/* 236 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 238 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 240 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter code */

/* 242 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 244 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 246 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter phrase */

/* 248 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 250 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 252 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 254 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 256 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 258 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 260 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 262 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setMediaString */

/* 266 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 272 */	NdrFcShort( 0xa ),	/* 10 */
/* 274 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 276 */	NdrFcShort( 0x8 ),	/* 8 */
/* 278 */	NdrFcShort( 0x8 ),	/* 8 */
/* 280 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 282 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 286 */	NdrFcShort( 0x1 ),	/* 1 */
/* 288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x5 ),	/* 5 */
/* 292 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 294 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 296 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter type */

/* 298 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 300 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 302 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 304 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 306 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 308 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 310 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 312 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 314 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 316 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 318 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 320 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 322 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 324 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setMediaInt */

/* 328 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 330 */	NdrFcLong( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0xb ),	/* 11 */
/* 336 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 338 */	NdrFcShort( 0x10 ),	/* 16 */
/* 340 */	NdrFcShort( 0x8 ),	/* 8 */
/* 342 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 344 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 346 */	NdrFcShort( 0x0 ),	/* 0 */
/* 348 */	NdrFcShort( 0x1 ),	/* 1 */
/* 350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 352 */	NdrFcShort( 0x5 ),	/* 5 */
/* 354 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 356 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 358 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter type */

/* 360 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 362 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 364 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 366 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 368 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 370 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 372 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 374 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 378 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 380 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 382 */	NdrFcShort( 0x3c ),	/* Type Offset=60 */

	/* Return value */

/* 384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 386 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure registerAudioPluginFromFile */


	/* Procedure OnDebugInfo */

/* 390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x6 ),	/* 6 */
/* 398 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x24 ),	/* 36 */
/* 404 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 406 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x1 ),	/* 1 */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x3 ),	/* 3 */
/* 416 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 418 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter path */


	/* Parameter message */

/* 420 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 422 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 424 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 426 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 428 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 434 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnDebugWarn */

/* 438 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 444 */	NdrFcShort( 0x7 ),	/* 7 */
/* 446 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 450 */	NdrFcShort( 0x24 ),	/* 36 */
/* 452 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 454 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 458 */	NdrFcShort( 0x1 ),	/* 1 */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x3 ),	/* 3 */
/* 464 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 466 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter message */

/* 468 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 470 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 472 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 474 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 476 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 482 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnDebugError */

/* 486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 492 */	NdrFcShort( 0x8 ),	/* 8 */
/* 494 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x24 ),	/* 36 */
/* 500 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 502 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 506 */	NdrFcShort( 0x1 ),	/* 1 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 510 */	NdrFcShort( 0x3 ),	/* 3 */
/* 512 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 514 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter message */

/* 516 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 518 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 520 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 522 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 524 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 530 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnDebugFatal */

/* 534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 540 */	NdrFcShort( 0x9 ),	/* 9 */
/* 542 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 546 */	NdrFcShort( 0x24 ),	/* 36 */
/* 548 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 550 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 558 */	NdrFcShort( 0x3 ),	/* 3 */
/* 560 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 562 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter message */

/* 564 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 566 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 568 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 570 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 572 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 576 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 578 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getType */


	/* Procedure getType */


	/* Procedure getType */


	/* Procedure getType */


	/* Procedure getType */


	/* Procedure getType */


	/* Procedure getType */


	/* Procedure getType */


	/* Procedure getMediaType */

/* 582 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x6 ),	/* 6 */
/* 590 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 594 */	NdrFcShort( 0x24 ),	/* 36 */
/* 596 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 598 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0x2 ),	/* 2 */
/* 608 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 610 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 612 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 614 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 616 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 618 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 620 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPhrase */


	/* Procedure getScheme */


	/* Procedure get_Address */


	/* Procedure getName */

/* 624 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 630 */	NdrFcShort( 0x7 ),	/* 7 */
/* 632 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 636 */	NdrFcShort( 0x8 ),	/* 8 */
/* 638 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 640 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 642 */	NdrFcShort( 0x1 ),	/* 1 */
/* 644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x2 ),	/* 2 */
/* 650 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 652 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 654 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 656 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 658 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 662 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RealmUri */


	/* Procedure getHost */


	/* Procedure getPhrase */


	/* Procedure getDescription */

/* 666 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x8 ),	/* 8 */
/* 674 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 678 */	NdrFcShort( 0x8 ),	/* 8 */
/* 680 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 682 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 684 */	NdrFcShort( 0x1 ),	/* 1 */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 690 */	NdrFcShort( 0x2 ),	/* 2 */
/* 692 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 694 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 696 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 698 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 700 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 704 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getResponsePhrase */


	/* Procedure getNegFormat */

/* 708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x9 ),	/* 9 */
/* 716 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 722 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 724 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 726 */	NdrFcShort( 0x1 ),	/* 1 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 732 */	NdrFcShort( 0x2 ),	/* 2 */
/* 734 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 736 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 738 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 740 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 742 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */


	/* Return value */

/* 744 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 746 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 748 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getAudioSamplingRate */

/* 750 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 752 */	NdrFcLong( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0xa ),	/* 10 */
/* 758 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */
/* 762 */	NdrFcShort( 0x24 ),	/* 36 */
/* 764 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 766 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 774 */	NdrFcShort( 0x2 ),	/* 2 */
/* 776 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 778 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 780 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 782 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 788 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getAudioChannels */

/* 792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 798 */	NdrFcShort( 0xb ),	/* 11 */
/* 800 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 804 */	NdrFcShort( 0x24 ),	/* 36 */
/* 806 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 808 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 816 */	NdrFcShort( 0x2 ),	/* 2 */
/* 818 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 820 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 822 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 824 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 830 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getAudioPTime */

/* 834 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0xc ),	/* 12 */
/* 842 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 846 */	NdrFcShort( 0x24 ),	/* 36 */
/* 848 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 850 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x2 ),	/* 2 */
/* 860 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 862 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 864 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 866 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 872 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sessionSetInt32 */

/* 876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 882 */	NdrFcShort( 0x6 ),	/* 6 */
/* 884 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 886 */	NdrFcShort( 0x10 ),	/* 16 */
/* 888 */	NdrFcShort( 0x21 ),	/* 33 */
/* 890 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 892 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x1 ),	/* 1 */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 900 */	NdrFcShort( 0x5 ),	/* 5 */
/* 902 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 904 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 906 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter media */

/* 908 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 910 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 912 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 914 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 916 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 918 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 920 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 922 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 926 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 928 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 930 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 932 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 934 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 936 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sessionGetInt32 */

/* 938 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 940 */	NdrFcLong( 0x0 ),	/* 0 */
/* 944 */	NdrFcShort( 0x7 ),	/* 7 */
/* 946 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 948 */	NdrFcShort( 0x8 ),	/* 8 */
/* 950 */	NdrFcShort( 0x24 ),	/* 36 */
/* 952 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 954 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 958 */	NdrFcShort( 0x1 ),	/* 1 */
/* 960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 962 */	NdrFcShort( 0x4 ),	/* 4 */
/* 964 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 966 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 968 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter media */

/* 970 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 972 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 974 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 976 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 978 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 980 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 982 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 984 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 986 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 988 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 990 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 992 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure consumerSetInt32 */

/* 994 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 996 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1002 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 1004 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1006 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1008 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1010 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1018 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1020 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 1022 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 1024 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter media */

/* 1026 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1028 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1030 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 1032 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1034 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1036 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 1038 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1040 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1044 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1046 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1048 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1050 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1052 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 1054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure consumerSetInt64 */

/* 1056 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1058 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1064 */	NdrFcShort( 0x20 ),	/* ARM Stack size/offset = 32 */
/* 1066 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1068 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1070 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1072 */	0x12,		/* 18 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1080 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1082 */	0x7,		/* 7 */
			0x80,		/* 128 */
/* 1084 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 1086 */	0x9f,		/* 159 */
			0xfc,		/* 252 */
/* 1088 */	0xfc,		/* 252 */
			0xfc,		/* 252 */

	/* Parameter media */

/* 1090 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1092 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1094 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 1096 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1098 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1100 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 1102 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1104 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1106 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1108 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1110 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 1112 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1116 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 1118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure producerSetInt32 */

/* 1120 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1126 */	NdrFcShort( 0xa ),	/* 10 */
/* 1128 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 1130 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1132 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1134 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1136 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1140 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1144 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1146 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 1148 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 1150 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter media */

/* 1152 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1154 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1156 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 1158 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1160 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1162 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 1164 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1166 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1170 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1172 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1174 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1176 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1178 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 1180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure producerSetInt64 */

/* 1182 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1184 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1188 */	NdrFcShort( 0xb ),	/* 11 */
/* 1190 */	NdrFcShort( 0x20 ),	/* ARM Stack size/offset = 32 */
/* 1192 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1194 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1196 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1198 */	0x12,		/* 18 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1202 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1208 */	0x7,		/* 7 */
			0x80,		/* 128 */
/* 1210 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 1212 */	0x9f,		/* 159 */
			0xfc,		/* 252 */
/* 1214 */	0xfc,		/* 252 */
			0xfc,		/* 252 */

	/* Parameter media */

/* 1216 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1218 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1220 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter key */

/* 1222 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1224 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1226 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 1228 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1230 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1232 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1234 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1236 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 1238 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1242 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 1244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure producerGetCodec */

/* 1246 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1252 */	NdrFcShort( 0xc ),	/* 12 */
/* 1254 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1256 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1260 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1262 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1270 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1272 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1274 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter media */

/* 1276 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1278 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1280 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1282 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1284 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1286 */	NdrFcShort( 0x6c ),	/* Type Offset=108 */

	/* Return value */

/* 1288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1290 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSessionId */

/* 1294 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1300 */	NdrFcShort( 0xd ),	/* 13 */
/* 1302 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1304 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1306 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1308 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1310 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1318 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1320 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1322 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter media */

/* 1324 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1326 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1328 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1330 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1332 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1334 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1338 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Start */

/* 1342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1348 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1350 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1354 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1356 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1358 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1366 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1368 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1370 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1372 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1374 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1376 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1380 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_End */

/* 1384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1390 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1392 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1396 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1398 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1400 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1408 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1410 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1412 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1414 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1416 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1418 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1422 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Total */

/* 1426 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1432 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1434 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1438 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1440 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1442 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1450 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1452 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1454 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1456 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1458 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1460 */	0xb,		/* FC_HYPER */
			0x0,		/* 0 */

	/* Return value */

/* 1462 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1464 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_WithVideo */


	/* Procedure isResponse */


	/* Procedure subscribe */


	/* Procedure isValid_ */


	/* Procedure initialize */


	/* Procedure start */


	/* Procedure isRequest */

/* 1468 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1474 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1476 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1480 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1482 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1484 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1492 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1494 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1496 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 1498 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1500 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1502 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1506 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getCode */

/* 1510 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1516 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1518 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1522 */	NdrFcShort( 0x22 ),	/* 34 */
/* 1524 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1526 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1534 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1536 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1538 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1540 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1542 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1544 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 1546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1548 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AvailableAudioRoutes */


	/* Procedure getRequestType */

/* 1552 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1558 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1560 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1564 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1566 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1568 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1576 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1578 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1580 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 1582 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1584 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1586 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1588 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1590 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getByteRange */

/* 1594 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1600 */	NdrFcShort( 0xa ),	/* 10 */
/* 1602 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1608 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1610 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1618 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1620 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1622 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1624 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1626 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1628 */	NdrFcShort( 0x8a ),	/* Type Offset=138 */

	/* Return value */

/* 1630 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1632 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1634 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure accept1 */


	/* Procedure reject1 */


	/* Procedure reject1 */


	/* Procedure reject1 */


	/* Procedure isLastChunck */

/* 1636 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1638 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1642 */	NdrFcShort( 0xb ),	/* 11 */
/* 1644 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1648 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1650 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1652 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1660 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1662 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1664 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 1666 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1668 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1670 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 1672 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1674 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isFirstChunck */

/* 1678 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1684 */	NdrFcShort( 0xc ),	/* 12 */
/* 1686 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1690 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1692 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1694 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1702 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1704 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1706 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1708 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1710 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1712 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 1714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1716 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure reject1 */


	/* Procedure isSuccessReport */

/* 1720 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1726 */	NdrFcShort( 0xd ),	/* 13 */
/* 1728 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1732 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1734 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1736 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1744 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1746 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1748 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 1750 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1752 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1754 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1756 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1758 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1760 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpHeaderValue */

/* 1762 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1768 */	NdrFcShort( 0xe ),	/* 14 */
/* 1770 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1776 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1778 */	0xe,		/* 14 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1780 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1782 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1786 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1788 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1790 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter name */

/* 1792 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1794 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1796 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 1798 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1800 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1802 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 1804 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1806 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpHeaderParamValue */

/* 1810 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1812 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1816 */	NdrFcShort( 0xf ),	/* 15 */
/* 1818 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 1820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1824 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1826 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 1828 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1830 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1834 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1836 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 1838 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 1840 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter name */

/* 1842 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1844 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1846 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter param */

/* 1848 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1850 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1852 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 1854 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1856 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1858 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 1860 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1862 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpContentLength */

/* 1866 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1868 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1872 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1874 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1878 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1880 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1882 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1884 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1890 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1892 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1894 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1896 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1898 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1904 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMsrpContent */

/* 1908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1914 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1916 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 1918 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1920 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1922 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1924 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 1926 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1932 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1934 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 1936 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter maxsize */

/* 1938 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1940 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1944 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1946 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1948 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 1950 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1952 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipSession */

/* 1956 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1962 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1964 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 1966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1968 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1970 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1972 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1980 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1982 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 1984 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 1986 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1988 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1990 */	NdrFcShort( 0xa0 ),	/* Type Offset=160 */

	/* Return value */

/* 1992 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1994 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 1996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMessage */

/* 1998 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2000 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2004 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2006 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2010 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2012 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2014 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2018 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2022 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2024 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2026 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2028 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 2030 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2032 */	NdrFcShort( 0xb6 ),	/* Type Offset=182 */

	/* Return value */

/* 2034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2036 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnEvent */

/* 2040 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2046 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2048 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2052 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2054 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2056 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2064 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2066 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2068 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pEvent */

/* 2070 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2072 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2074 */	NdrFcShort( 0xcc ),	/* Type Offset=204 */

	/* Parameter __returnValue */

/* 2076 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2078 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2082 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2084 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getCode */


	/* Procedure get_Port */

/* 2088 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2090 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2094 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2096 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2100 */	NdrFcShort( 0x22 ),	/* 34 */
/* 2102 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2104 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2112 */	NdrFcShort( 0x2 ),	/* 2 */
/* 2114 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 2116 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 2118 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2120 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2122 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2124 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2126 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setDebugCallback */

/* 2130 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2136 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2138 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2142 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2144 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2146 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2154 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2156 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2158 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pCallback */

/* 2160 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 2162 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2164 */	NdrFcShort( 0xde ),	/* Type Offset=222 */

	/* Parameter __returnValue */

/* 2166 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2168 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2170 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2172 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2174 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2176 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp3 */


	/* Procedure setDisplayName */

/* 2178 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2180 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2184 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2186 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2190 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2192 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2194 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2198 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2202 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2204 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2206 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter remoteUriString */


	/* Parameter display_name */

/* 2208 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2210 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2212 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 2214 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2216 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2218 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2222 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeHeader */


	/* Procedure setRealm */

/* 2226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2232 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2234 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2238 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2240 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2242 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2246 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2250 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2252 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2254 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter name */


	/* Parameter realm_uri */

/* 2256 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2258 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2260 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 2262 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2264 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2266 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2268 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2270 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2272 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setIMPI */

/* 2274 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2276 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2280 */	NdrFcShort( 0xa ),	/* 10 */
/* 2282 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2286 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2288 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2290 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2294 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2298 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2300 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2302 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter impi */

/* 2304 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2306 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2308 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 2310 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2312 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2314 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2316 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2318 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeCaps */


	/* Procedure setIMPU */

/* 2322 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2324 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2328 */	NdrFcShort( 0xb ),	/* 11 */
/* 2330 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2334 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2336 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2338 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2342 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2346 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2348 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2350 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter name */


	/* Parameter impu_uri */

/* 2352 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2354 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2356 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 2358 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2360 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2362 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2364 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2366 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2368 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendMessage1 */


	/* Procedure setPassword */

/* 2370 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2372 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2376 */	NdrFcShort( 0xc ),	/* 12 */
/* 2378 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2380 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2382 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2384 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2386 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2388 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2390 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2394 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2396 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2398 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter payload */


	/* Parameter password */

/* 2400 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2402 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2404 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 2406 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2408 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2410 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2412 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2414 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setAMF */

/* 2418 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2424 */	NdrFcShort( 0xd ),	/* 13 */
/* 2426 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2430 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2432 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2434 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2438 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2442 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2444 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2446 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter amf */

/* 2448 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2450 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2452 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 2454 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2456 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2458 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2460 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2462 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2464 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setOperatorId */

/* 2466 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2468 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2472 */	NdrFcShort( 0xe ),	/* 14 */
/* 2474 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2478 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2480 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2482 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2486 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2490 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2492 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2494 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter opid */

/* 2496 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2498 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2500 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 2502 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2504 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2506 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2508 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2510 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2512 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setProxyCSCF */

/* 2514 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2516 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2520 */	NdrFcShort( 0xf ),	/* 15 */
/* 2522 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 2524 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2526 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2528 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2530 */	0x12,		/* 18 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2534 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2538 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2540 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 2542 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2544 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 2546 */	0xfc,		/* 252 */
			0x0,		/* 0 */

	/* Parameter fqdn */

/* 2548 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2550 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2552 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter port */

/* 2554 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2556 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2558 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter transport */

/* 2560 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2562 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2564 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter ipversion */

/* 2566 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2568 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2570 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 2572 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2574 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 2576 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2578 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2580 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 2582 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalIP2 */

/* 2584 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2590 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2592 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 2594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2596 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2598 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2600 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2604 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2608 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2610 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 2612 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2614 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter ip */

/* 2616 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2618 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2620 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter transport */

/* 2622 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2624 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2626 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 2628 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2630 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2632 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2636 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalIP1 */

/* 2640 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2646 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2648 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2652 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2654 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2656 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2660 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2664 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2666 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2668 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter ip */

/* 2670 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2672 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2674 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 2676 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2678 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2680 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2682 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2684 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalPort2 */

/* 2688 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2694 */	NdrFcShort( 0x12 ),	/* 18 */
/* 2696 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 2698 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2700 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2702 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2704 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2708 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2712 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2714 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 2716 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2718 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter port */

/* 2720 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2722 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2724 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter transport */

/* 2726 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2728 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2730 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 2732 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2734 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2736 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2740 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setLocalPort1 */

/* 2744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2750 */	NdrFcShort( 0x13 ),	/* 19 */
/* 2752 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2754 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2756 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2758 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2760 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2768 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2770 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2772 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter port */

/* 2774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2776 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2778 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 2780 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2782 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2784 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2788 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Stop */


	/* Procedure setEarlyIMS */

/* 2792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2798 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2800 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2802 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2804 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2806 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2808 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 2810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2816 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2818 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2820 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter bEnteringBackground */


	/* Parameter enabled */

/* 2822 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2824 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2826 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 2828 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2830 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2832 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2834 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2836 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2838 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addHeader */

/* 2840 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2846 */	NdrFcShort( 0x15 ),	/* 21 */
/* 2848 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 2850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2852 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2854 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2856 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2860 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2864 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2866 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 2868 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 2870 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter name */

/* 2872 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2874 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2876 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 2878 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2880 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2882 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 2884 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2886 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2888 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2890 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2892 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeHeader */

/* 2896 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2898 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2902 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2904 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2908 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2910 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2912 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2916 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2920 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2922 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2924 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter name */

/* 2926 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2928 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2930 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 2932 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2934 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2936 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2938 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2940 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addDnsServer */

/* 2944 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2950 */	NdrFcShort( 0x17 ),	/* 23 */
/* 2952 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 2954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2956 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2958 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2960 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 2962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2964 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2968 */	NdrFcShort( 0x3 ),	/* 3 */
/* 2970 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 2972 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter ip */

/* 2974 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2976 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 2978 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 2980 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2982 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 2984 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2986 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2988 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 2990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setDnsDiscovery */

/* 2992 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2994 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2998 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3000 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3002 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3004 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3006 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3008 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3016 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3018 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3020 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 3022 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3024 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3026 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3028 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3030 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3032 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3036 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setAoR */

/* 3040 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3046 */	NdrFcShort( 0x19 ),	/* 25 */
/* 3048 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 3050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3052 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3054 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3056 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3060 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3064 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3066 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 3068 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 3070 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter ip */

/* 3072 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3074 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3076 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter port */

/* 3078 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3080 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3082 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3084 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3086 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3088 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3090 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3092 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSigCompParams */

/* 3096 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3102 */	NdrFcShort( 0x1a ),	/* 26 */
/* 3104 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 3106 */	NdrFcShort( 0x1d ),	/* 29 */
/* 3108 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3110 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 3112 */	0x12,		/* 18 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3116 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3120 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3122 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 3124 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 3126 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 3128 */	0xfc,		/* 252 */
			0x0,		/* 0 */

	/* Parameter dms */

/* 3130 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3132 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3134 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter sms */

/* 3136 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3138 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3140 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cpb */

/* 3142 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3144 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter enablePresDict */

/* 3148 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3150 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3152 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3154 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3156 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 3158 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3162 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 3164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addSigCompCompartment */

/* 3166 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3172 */	NdrFcShort( 0x1b ),	/* 27 */
/* 3174 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3178 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3180 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3182 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3186 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3190 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3192 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3194 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter compId */

/* 3196 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3198 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3200 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3202 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3204 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3206 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3208 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3210 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeSigCompCompartment */

/* 3214 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3220 */	NdrFcShort( 0x1c ),	/* 28 */
/* 3222 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3226 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3228 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3230 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3234 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3238 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3240 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3242 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter compId */

/* 3244 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3246 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3248 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3250 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3252 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3254 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3256 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3258 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3260 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSTUNServer */

/* 3262 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3264 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3268 */	NdrFcShort( 0x1d ),	/* 29 */
/* 3270 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 3272 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3274 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3276 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3278 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3282 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3286 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3288 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 3290 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 3292 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter ip */

/* 3294 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3296 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3298 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter port */

/* 3300 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3302 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3304 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3306 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3308 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3310 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3312 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3314 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSTUNCred */

/* 3318 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3324 */	NdrFcShort( 0x1e ),	/* 30 */
/* 3326 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 3328 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3330 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3332 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3334 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3338 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3342 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3344 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 3346 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 3348 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter login */

/* 3350 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3352 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3354 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter password */

/* 3356 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3358 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3360 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3362 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3364 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3366 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3368 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3370 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setTLSSecAgree */

/* 3374 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3380 */	NdrFcShort( 0x1f ),	/* 31 */
/* 3382 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3384 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3386 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3388 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3390 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3392 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3398 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3400 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3402 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 3404 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3406 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3408 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3410 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3412 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3414 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3416 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3418 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSSLCertificates2 */

/* 3422 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3424 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3428 */	NdrFcShort( 0x20 ),	/* 32 */
/* 3430 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 3432 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3434 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3436 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3438 */	0x12,		/* 18 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3442 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3446 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3448 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 3450 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 3452 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 3454 */	0xfc,		/* 252 */
			0x0,		/* 0 */

	/* Parameter privKey */

/* 3456 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3458 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3460 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pubKey */

/* 3462 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3464 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3466 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter caKey */

/* 3468 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3470 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3472 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter verify */

/* 3474 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3476 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3478 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3480 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3482 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 3484 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3486 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3488 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 3490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSSLCertificates1 */

/* 3492 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3494 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3498 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3500 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 3502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3504 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3506 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3508 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3512 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3516 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3518 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 3520 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 3522 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter privKey */

/* 3524 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3526 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3528 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pubKey */

/* 3530 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3532 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3534 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter caKey */

/* 3536 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3538 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3540 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3542 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3544 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3546 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3550 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 3552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setIPSecSecAgree */

/* 3554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3560 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3562 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3564 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3566 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3568 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3570 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3578 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3580 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3582 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 3584 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3586 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3588 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3590 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3592 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3594 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3596 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3598 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setIPSecParameters */

/* 3602 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3608 */	NdrFcShort( 0x23 ),	/* 35 */
/* 3610 */	NdrFcShort( 0x1c ),	/* ARM Stack size/offset = 28 */
/* 3612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3614 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3616 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 3618 */	0x12,		/* 18 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3622 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3626 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3628 */	0x6,		/* 6 */
			0x80,		/* 128 */
/* 3630 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 3632 */	0x83,		/* 131 */
			0xfc,		/* 252 */
/* 3634 */	0xfc,		/* 252 */
			0x0,		/* 0 */

	/* Parameter algo */

/* 3636 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3638 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3640 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter ealgo */

/* 3642 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3644 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3646 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter mode */

/* 3648 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3650 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3652 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter proto */

/* 3654 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3656 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3658 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3660 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3662 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 3664 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3666 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3668 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 3670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure dnsENUM */

/* 3672 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3678 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3680 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 3682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3684 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3686 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 3688 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3690 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3692 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3696 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3698 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 3700 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 3702 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter service */

/* 3704 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3706 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3708 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter e164num */

/* 3710 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3712 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3714 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter domain */

/* 3716 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3718 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3720 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3722 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3724 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3726 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 3728 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3730 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 3732 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure dnsNaptrSrv */

/* 3734 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3736 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3740 */	NdrFcShort( 0x25 ),	/* 37 */
/* 3742 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 3744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3746 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3748 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 3750 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3754 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3758 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3760 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 3762 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 3764 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter domain */

/* 3766 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3768 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3770 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter service */

/* 3772 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3774 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3776 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3778 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3780 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3782 */	NdrFcShort( 0xf0 ),	/* Type Offset=240 */

	/* Return value */

/* 3784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3786 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure dnsSrv */

/* 3790 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3796 */	NdrFcShort( 0x26 ),	/* 38 */
/* 3798 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3802 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3804 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3806 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3810 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3814 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3816 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3818 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter service */

/* 3820 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3822 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3824 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3826 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3828 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3830 */	NdrFcShort( 0xf0 ),	/* Type Offset=240 */

	/* Return value */

/* 3832 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3834 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getLocalIP */

/* 3838 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3844 */	NdrFcShort( 0x27 ),	/* 39 */
/* 3846 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3852 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3854 */	0xe,		/* 14 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 3856 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3858 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3862 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3864 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3866 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter protocol */

/* 3868 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3870 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3872 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3874 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3876 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3878 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 3880 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3882 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3884 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getLocalPort */

/* 3886 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3888 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3892 */	NdrFcShort( 0x28 ),	/* 40 */
/* 3894 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 3896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3898 */	NdrFcShort( 0x22 ),	/* 34 */
/* 3900 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 3902 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 3904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3906 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3910 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3912 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 3914 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter protocol */

/* 3916 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 3918 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3920 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 3922 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3924 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3926 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 3928 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3930 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3932 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPreferredIdentity */

/* 3934 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3936 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3940 */	NdrFcShort( 0x29 ),	/* 41 */
/* 3942 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3946 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3948 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3950 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 3952 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3958 */	NdrFcShort( 0x2 ),	/* 2 */
/* 3960 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 3962 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 3964 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3966 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 3968 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 3970 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3972 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 3974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isValid */

/* 3976 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3978 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3982 */	NdrFcShort( 0x2a ),	/* 42 */
/* 3984 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 3986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3988 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3990 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3992 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 3994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4000 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4002 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4004 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4006 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4008 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4010 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4012 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4014 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure stop */

/* 4018 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4024 */	NdrFcShort( 0x2b ),	/* 43 */
/* 4026 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4030 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4032 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4034 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4042 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4044 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4046 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4048 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4050 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4052 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4054 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4056 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unSubscribe */


	/* Procedure register_1 */


	/* Procedure send1 */


	/* Procedure haveOwnership */


	/* Procedure deInitialize */

/* 4060 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4066 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4068 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4072 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4074 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4076 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4084 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4086 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4088 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4090 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4092 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4094 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 4096 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4098 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCodecs */

/* 4102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4108 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4110 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4112 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4116 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4118 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4124 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4126 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4128 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4130 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter codecs */

/* 4132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4134 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4136 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 4138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4140 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCodecPriority */

/* 4144 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4146 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4150 */	NdrFcShort( 0x9 ),	/* 9 */
/* 4152 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 4154 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4156 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4158 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 4160 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4168 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4170 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 4172 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4174 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter codec_id */

/* 4176 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4178 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4180 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter priority */

/* 4182 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4184 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4188 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4190 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4192 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4196 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isCodecSupported */

/* 4200 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4206 */	NdrFcShort( 0xa ),	/* 10 */
/* 4208 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4212 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4214 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4216 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4224 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4226 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4228 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter codec_id */

/* 4230 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4232 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4234 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4236 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4238 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4240 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4242 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4244 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPort */

/* 4248 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4254 */	NdrFcShort( 0x9 ),	/* 9 */
/* 4256 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4260 */	NdrFcShort( 0x22 ),	/* 34 */
/* 4262 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4264 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4272 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4274 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4276 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4278 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4280 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4282 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 4284 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4286 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4288 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ImpiString */


	/* Procedure getUserName */

/* 4290 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4292 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4296 */	NdrFcShort( 0xa ),	/* 10 */
/* 4298 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4300 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4302 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4304 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4306 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4308 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4314 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4316 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4318 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4320 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4322 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4324 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */


	/* Return value */

/* 4326 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4328 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4330 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getPassword */

/* 4332 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4334 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4338 */	NdrFcShort( 0xb ),	/* 11 */
/* 4340 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4344 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4346 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4348 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4350 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4356 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4358 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4360 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4362 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4364 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4366 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 4368 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4370 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ImpuUri */


	/* Procedure getDisplayName */

/* 4374 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4376 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4380 */	NdrFcShort( 0xc ),	/* 12 */
/* 4382 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4386 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4388 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4390 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 4392 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4398 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4400 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4402 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4404 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4406 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4408 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */


	/* Return value */

/* 4410 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4412 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getParamValue */

/* 4416 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4418 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4422 */	NdrFcShort( 0xd ),	/* 13 */
/* 4424 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4428 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4430 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4432 */	0xe,		/* 14 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 4434 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4436 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4440 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4442 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4444 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter name */

/* 4446 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4448 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4450 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4452 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4454 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4456 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 4458 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4460 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setDisplayName */

/* 4464 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4470 */	NdrFcShort( 0xe ),	/* 14 */
/* 4472 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4476 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4478 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 4480 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4484 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4488 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4490 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4492 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter displayName */

/* 4494 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4496 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4498 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 4500 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4502 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance2 */

/* 4506 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4508 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4512 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4514 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 4516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4518 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4520 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4522 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4526 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4530 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4532 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 4534 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4536 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter uriString */

/* 4538 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4540 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4542 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter displayName */

/* 4544 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4546 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4548 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4550 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4552 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4554 */	NdrFcShort( 0x106 ),	/* Type Offset=262 */

	/* Return value */

/* 4556 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4558 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 4562 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4564 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4568 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4570 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4574 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4576 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4578 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4582 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4586 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4588 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4590 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter uriString */

/* 4592 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4594 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4596 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4598 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4600 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4602 */	NdrFcShort( 0x106 ),	/* Type Offset=262 */

	/* Return value */

/* 4604 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4606 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure isValid */

/* 4610 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4616 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4618 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4622 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4624 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4626 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4630 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4634 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4636 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4638 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter uri */

/* 4640 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4642 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4644 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4646 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4648 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4650 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4652 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4654 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ondata */


	/* Procedure ondata */

/* 4658 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4660 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4664 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4666 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4670 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4672 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4674 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4676 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4682 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4684 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4686 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pData */


	/* Parameter pData */

/* 4688 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4690 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4692 */	NdrFcShort( 0x11c ),	/* Type Offset=284 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4694 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4696 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4700 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4702 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4704 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 4706 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4708 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4712 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4714 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4718 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4720 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4722 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4724 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4730 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4732 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4734 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pI */

/* 4736 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4738 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4740 */	NdrFcShort( 0x12e ),	/* Type Offset=302 */

	/* Parameter __returnValue */

/* 4742 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4744 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4746 */	NdrFcShort( 0x140 ),	/* Type Offset=320 */

	/* Return value */

/* 4748 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4750 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCurrentProcessId */


	/* Procedure getId */

/* 4754 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4756 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4760 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4762 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4766 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4768 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4770 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4778 */	NdrFcShort( 0x2 ),	/* 2 */
/* 4780 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 4782 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 4784 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4786 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4790 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4792 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addHeader */

/* 4796 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4802 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4804 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 4806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4808 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4810 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4812 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4816 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4820 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4822 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 4824 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4826 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter name */

/* 4828 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4830 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4832 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 4834 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4836 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4838 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4840 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4842 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4844 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4846 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4848 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addCaps */

/* 4852 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4858 */	NdrFcShort( 0xa ),	/* 10 */
/* 4860 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 4862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4864 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4866 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 4868 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 4870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4872 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4874 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4876 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4878 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 4880 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 4882 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter name */

/* 4884 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4886 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4888 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter value */

/* 4890 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 4892 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4894 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 4896 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4898 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4900 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4904 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setExpires */

/* 4908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4914 */	NdrFcShort( 0xc ),	/* 12 */
/* 4916 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4918 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4920 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4922 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4924 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4932 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4934 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4936 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter expires */

/* 4938 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4940 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 4944 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4946 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4948 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4950 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4952 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 4954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setFromUri */

/* 4956 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4962 */	NdrFcShort( 0xd ),	/* 13 */
/* 4964 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 4966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4968 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4970 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 4972 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 4974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4980 */	NdrFcShort( 0x3 ),	/* 3 */
/* 4982 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 4984 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter fromUri */

/* 4986 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 4988 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 4990 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter __returnValue */

/* 4992 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4994 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 4996 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4998 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5000 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setToUri */

/* 5004 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5010 */	NdrFcShort( 0xe ),	/* 14 */
/* 5012 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5016 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5018 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5020 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5028 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5030 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5032 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter toUri */

/* 5034 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5036 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5038 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter __returnValue */

/* 5040 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5042 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5044 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5046 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5048 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5050 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSilentHangup */

/* 5052 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5054 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5058 */	NdrFcShort( 0xf ),	/* 15 */
/* 5060 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5062 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5064 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5066 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5068 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5076 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5078 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5080 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter silent */

/* 5082 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5084 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5086 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5088 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5090 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5092 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5094 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5096 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5098 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure addSigCompCompartment */

/* 5100 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5102 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5106 */	NdrFcShort( 0x10 ),	/* 16 */
/* 5108 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5112 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5114 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5116 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5118 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5120 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5124 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5126 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5128 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter compId */

/* 5130 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5132 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5134 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5136 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5138 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5140 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5142 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5144 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5146 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeSigCompCompartment */

/* 5148 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5150 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5154 */	NdrFcShort( 0x11 ),	/* 17 */
/* 5156 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5158 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5160 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5162 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 5164 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5172 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5174 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5176 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5178 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5180 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5182 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5184 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5186 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure register_2 */


	/* Procedure send2 */


	/* Procedure accept */

/* 5190 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5192 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5196 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5198 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5202 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5204 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5206 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5214 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5216 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5218 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 5220 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5222 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5224 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 5226 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5228 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5230 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 5232 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5234 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure hangup */

/* 5238 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5240 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5244 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5246 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5250 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5252 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5254 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5262 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5264 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5266 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 5268 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5270 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5272 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 5274 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5276 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5278 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5280 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5282 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5284 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unRegister2 */


	/* Procedure unPublish2 */


	/* Procedure accept2 */


	/* Procedure accept2 */


	/* Procedure accept2 */


	/* Procedure reject */

/* 5286 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5288 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5292 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5294 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5298 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5300 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5302 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5308 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5310 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5312 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5314 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 5316 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5318 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5320 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 5322 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5324 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5326 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 5328 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5330 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendInfo */

/* 5334 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5340 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5342 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 5344 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5346 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5348 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5350 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5354 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5358 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5360 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 5362 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5364 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter payload */

/* 5366 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5368 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5370 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter len */

/* 5372 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5374 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter config */

/* 5378 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5380 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5382 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 5384 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5386 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5388 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5392 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getMediaMgr */

/* 5396 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5402 */	NdrFcShort( 0xa ),	/* 10 */
/* 5404 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5408 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5410 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5412 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5420 */	NdrFcShort( 0x2 ),	/* 2 */
/* 5422 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 5424 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5426 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5428 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5430 */	NdrFcShort( 0x156 ),	/* Type Offset=342 */

	/* Return value */

/* 5432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5434 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 5438 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5444 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5446 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5450 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5452 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5454 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5462 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5464 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5466 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 5468 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5470 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5472 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter __returnValue */

/* 5474 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5476 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5478 */	NdrFcShort( 0x17e ),	/* Type Offset=382 */

	/* Return value */

/* 5480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5482 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 5486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5492 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5494 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5500 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 5502 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5510 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5512 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5514 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 5516 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5518 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5520 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter __returnValue */

/* 5522 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5524 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5526 */	NdrFcShort( 0x194 ),	/* Type Offset=404 */

	/* Return value */

/* 5528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5530 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call4 */

/* 5534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5540 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5542 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 5544 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5546 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5548 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5550 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5554 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5558 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5560 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 5562 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5564 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter remoteUriString */

/* 5566 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5568 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5570 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter media */

/* 5572 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5574 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5576 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter config */

/* 5578 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5580 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5582 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 5584 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5586 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5588 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5592 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call3 */

/* 5596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5602 */	NdrFcShort( 0x7 ),	/* 7 */
/* 5604 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5608 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5610 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5612 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5616 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5620 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5622 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 5624 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5626 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter remoteUriString */

/* 5628 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5630 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5632 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter media */

/* 5634 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5636 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5638 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5640 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5642 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5644 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5646 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5648 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call2 */

/* 5652 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5654 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5658 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5660 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 5662 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5664 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5666 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 5668 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5672 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5676 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5678 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 5680 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5682 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter remoteUri */

/* 5684 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5686 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5688 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter media */

/* 5690 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5692 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5694 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter config */

/* 5696 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5698 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5700 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 5702 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5704 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5706 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5708 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5710 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5712 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure call1 */

/* 5714 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5716 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5720 */	NdrFcShort( 0x9 ),	/* 9 */
/* 5722 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5724 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5726 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5728 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5730 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5738 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5740 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 5742 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5744 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter remoteUri */

/* 5746 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 5748 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5750 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter media */

/* 5752 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5754 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5756 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5758 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5760 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5762 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5764 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5766 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSessionTimer */

/* 5770 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5776 */	NdrFcShort( 0xa ),	/* 10 */
/* 5778 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 5780 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5782 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5784 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 5786 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 5788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5790 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5794 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5796 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 5798 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 5800 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter timeout */

/* 5802 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5804 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5806 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter refresher */

/* 5808 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 5810 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5812 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 5814 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5816 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5818 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5820 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5822 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5824 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure set100rel */

/* 5826 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5828 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5832 */	NdrFcShort( 0xb ),	/* 11 */
/* 5834 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5836 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5838 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5840 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5842 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5846 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5850 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5852 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5854 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 5856 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5858 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5860 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5862 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5864 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5866 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5868 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5870 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setRtcp */

/* 5874 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5880 */	NdrFcShort( 0xc ),	/* 12 */
/* 5882 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5884 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5886 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5888 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5890 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5898 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5900 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5902 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 5904 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5906 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5908 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5910 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5912 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5914 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5916 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5918 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setRtcpMux */

/* 5922 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5924 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5928 */	NdrFcShort( 0xd ),	/* 13 */
/* 5930 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5932 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5934 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5936 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5938 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5946 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5948 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5950 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 5952 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5954 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 5956 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 5958 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5960 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 5962 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 5964 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5966 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 5968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setICE */

/* 5970 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5972 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5976 */	NdrFcShort( 0xe ),	/* 14 */
/* 5978 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 5980 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5982 */	NdrFcShort( 0x21 ),	/* 33 */
/* 5984 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5986 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 5988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5994 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5996 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 5998 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter enabled */

/* 6000 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6002 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6004 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6006 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6008 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6010 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6012 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6014 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setQoS */

/* 6018 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6024 */	NdrFcShort( 0xf ),	/* 15 */
/* 6026 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 6028 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6030 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6032 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 6034 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6042 */	NdrFcShort( 0x4 ),	/* 4 */
/* 6044 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 6046 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 6048 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter type */

/* 6050 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6052 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6054 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter strength */

/* 6056 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6058 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6060 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6062 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6064 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6066 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6070 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setVideoFps */

/* 6074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6080 */	NdrFcShort( 0x10 ),	/* 16 */
/* 6082 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6084 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6086 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6088 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6090 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6098 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6100 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6102 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter fps */

/* 6104 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6106 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6110 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6112 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6114 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6118 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setVideoBandwidthUploadMax */

/* 6122 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6128 */	NdrFcShort( 0x11 ),	/* 17 */
/* 6130 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6134 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6136 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6138 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6146 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6148 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6150 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter max */

/* 6152 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6154 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6158 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6160 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6162 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6166 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setVideoBandwidthDownloadMax */

/* 6170 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6176 */	NdrFcShort( 0x12 ),	/* 18 */
/* 6178 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6180 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6182 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6184 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6186 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6194 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6196 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6198 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter max */

/* 6200 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6202 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6206 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6208 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6210 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6212 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6214 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6216 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setVideoPrefSize */

/* 6218 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6220 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6224 */	NdrFcShort( 0x13 ),	/* 19 */
/* 6226 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6228 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6230 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6232 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6234 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6242 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6244 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6246 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pref_video_size */

/* 6248 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6250 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6252 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6254 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6256 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6258 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6260 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6262 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure hold2 */

/* 6266 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6272 */	NdrFcShort( 0x14 ),	/* 20 */
/* 6274 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6278 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6280 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6282 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6288 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6290 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6292 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6294 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 6296 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6298 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6300 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 6302 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6304 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6306 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6308 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6310 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Register */


	/* Procedure hold1 */

/* 6314 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6320 */	NdrFcShort( 0x15 ),	/* 21 */
/* 6322 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6324 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6326 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6328 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6330 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6336 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6338 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6340 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6342 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 6344 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6346 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6348 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 6350 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6352 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure resume2 */

/* 6356 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6358 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6362 */	NdrFcShort( 0x16 ),	/* 22 */
/* 6364 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6368 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6370 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6372 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6380 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6382 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6384 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 6386 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6388 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6390 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 6392 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6394 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6396 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6398 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6400 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure resume1 */

/* 6404 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6406 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6410 */	NdrFcShort( 0x17 ),	/* 23 */
/* 6412 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6416 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6418 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6420 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6422 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6424 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6428 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6430 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6432 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6434 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6436 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6438 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6440 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6442 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure transfer2 */

/* 6446 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6448 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6452 */	NdrFcShort( 0x18 ),	/* 24 */
/* 6454 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 6456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6458 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6460 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6462 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6466 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6470 */	NdrFcShort( 0x4 ),	/* 4 */
/* 6472 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 6474 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 6476 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter referToUriString */

/* 6478 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6480 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6482 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */

/* 6484 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6486 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6488 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 6490 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6492 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6494 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6496 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6498 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure transfer1 */

/* 6502 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6508 */	NdrFcShort( 0x19 ),	/* 25 */
/* 6510 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6514 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6516 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6518 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6522 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6526 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6528 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6530 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter referToUriString */

/* 6532 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6534 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6536 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6538 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6540 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6542 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6544 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6546 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6548 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure acceptTransfer2 */

/* 6550 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6552 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6556 */	NdrFcShort( 0x1a ),	/* 26 */
/* 6558 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6560 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6562 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6564 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6566 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6574 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6576 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6578 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 6580 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6582 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6584 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 6586 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6588 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6590 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6592 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6594 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6596 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure acceptTransfer1 */

/* 6598 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6600 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6604 */	NdrFcShort( 0x1b ),	/* 27 */
/* 6606 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6610 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6612 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6614 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6622 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6624 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6626 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6628 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6630 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6632 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6634 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6636 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6638 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rejectTransfer2 */

/* 6640 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6642 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6646 */	NdrFcShort( 0x1c ),	/* 28 */
/* 6648 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6652 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6654 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6656 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6664 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6666 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6668 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 6670 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6672 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6674 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 6676 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6678 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6680 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6682 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6684 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure rejectTransfer1 */

/* 6688 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6694 */	NdrFcShort( 0x1d ),	/* 29 */
/* 6696 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6700 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6702 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6704 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6712 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6714 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6716 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6718 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6720 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6722 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6724 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6726 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendDTMF */

/* 6730 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6732 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6736 */	NdrFcShort( 0x1e ),	/* 30 */
/* 6738 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6740 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6742 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6744 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6746 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6752 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6754 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6756 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6758 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter number */

/* 6760 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6762 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6764 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6766 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6768 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6770 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6772 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6774 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSessionTransferId */

/* 6778 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6780 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6784 */	NdrFcShort( 0x1f ),	/* 31 */
/* 6786 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6788 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6790 */	NdrFcShort( 0x24 ),	/* 36 */
/* 6792 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 6794 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6802 */	NdrFcShort( 0x2 ),	/* 2 */
/* 6804 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 6806 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6808 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6810 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6812 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 6814 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6816 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendT140Data2 */

/* 6820 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6822 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6826 */	NdrFcShort( 0x20 ),	/* 32 */
/* 6828 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 6830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6832 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6834 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 6836 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 6838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6840 */	NdrFcShort( 0x1 ),	/* 1 */
/* 6842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6844 */	NdrFcShort( 0x4 ),	/* 4 */
/* 6846 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 6848 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 6850 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter data_type */

/* 6852 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6854 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6856 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter data */

/* 6858 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 6860 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6862 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 6864 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6866 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6868 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6872 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendT140Data1 */

/* 6876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6882 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6884 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6886 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6888 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6890 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 6892 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6900 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6902 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6904 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter data_type */

/* 6906 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 6908 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6910 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 6912 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6914 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6916 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6918 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6920 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setT140Callback */

/* 6924 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6926 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6930 */	NdrFcShort( 0x22 ),	/* 34 */
/* 6932 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6936 */	NdrFcShort( 0x21 ),	/* 33 */
/* 6938 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6940 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6948 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6950 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 6952 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pT140Callback */

/* 6954 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 6956 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 6958 */	NdrFcShort( 0x144 ),	/* Type Offset=324 */

	/* Parameter __returnValue */

/* 6960 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 6962 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 6964 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 6966 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 6968 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 6970 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 6972 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 6974 */	NdrFcLong( 0x0 ),	/* 0 */
/* 6978 */	NdrFcShort( 0x6 ),	/* 6 */
/* 6980 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 6982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6984 */	NdrFcShort( 0x8 ),	/* 8 */
/* 6986 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 6988 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 6990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6992 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 6996 */	NdrFcShort( 0x3 ),	/* 3 */
/* 6998 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7000 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 7002 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7004 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7006 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter __returnValue */

/* 7008 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7010 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7012 */	NdrFcShort( 0x1aa ),	/* Type Offset=426 */

	/* Return value */

/* 7014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7016 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCallback */

/* 7020 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7026 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7028 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7032 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7034 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7036 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7042 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7044 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7046 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7048 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pCallback */

/* 7050 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7052 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7054 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Parameter __returnValue */

/* 7056 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7058 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7060 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7062 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7064 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp4 */

/* 7068 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7070 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7074 */	NdrFcShort( 0x7 ),	/* 7 */
/* 7076 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 7078 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7080 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7082 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7084 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7086 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7088 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7090 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7092 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7094 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 7096 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 7098 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter remoteUriString */

/* 7100 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7102 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7104 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */

/* 7106 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7108 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7110 */	NdrFcShort( 0x1d2 ),	/* Type Offset=466 */

	/* Parameter __returnValue */

/* 7112 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7114 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7116 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7118 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7120 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp2 */

/* 7124 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7130 */	NdrFcShort( 0x9 ),	/* 9 */
/* 7132 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 7134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7136 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7138 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7140 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7148 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7150 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 7152 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 7154 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter remoteUri */

/* 7156 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7158 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7160 */	NdrFcShort( 0x1e4 ),	/* Type Offset=484 */

	/* Parameter config */

/* 7162 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7164 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7166 */	NdrFcShort( 0x1d2 ),	/* Type Offset=466 */

	/* Parameter __returnValue */

/* 7168 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7170 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7172 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7174 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7176 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure callMsrp1 */

/* 7180 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7182 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7186 */	NdrFcShort( 0xa ),	/* 10 */
/* 7188 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7192 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7194 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7196 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7198 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7204 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7206 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7208 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter remoteUri */

/* 7210 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7212 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7214 */	NdrFcShort( 0x1e4 ),	/* Type Offset=484 */

	/* Parameter __returnValue */

/* 7216 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7218 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7220 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7222 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7224 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure sendMessage2 */

/* 7228 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7230 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7234 */	NdrFcShort( 0xb ),	/* 11 */
/* 7236 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 7238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7240 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7242 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7244 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7246 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7248 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7252 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7254 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 7256 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 7258 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter payload */

/* 7260 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7262 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7264 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */

/* 7266 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7268 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7270 */	NdrFcShort( 0x1d2 ),	/* Type Offset=466 */

	/* Parameter __returnValue */

/* 7272 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7274 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7276 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7280 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 7284 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7290 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7292 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 7294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7296 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7298 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7300 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7308 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7310 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 7312 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 7314 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter pStack */

/* 7316 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7318 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7320 */	NdrFcShort( 0x1f6 ),	/* Type Offset=502 */

	/* Parameter pCallback */

/* 7322 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7324 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7326 */	NdrFcShort( 0x1c0 ),	/* Type Offset=448 */

	/* Parameter __returnValue */

/* 7328 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7330 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7332 */	NdrFcShort( 0xa0 ),	/* Type Offset=160 */

	/* Return value */

/* 7334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7336 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure publish2 */


	/* Procedure send2 */


	/* Procedure send2 */

/* 7340 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7346 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7348 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 7350 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7352 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7354 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 7356 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 7358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7360 */	NdrFcShort( 0x1 ),	/* 1 */
/* 7362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7364 */	NdrFcShort( 0x4 ),	/* 4 */
/* 7366 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 7368 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 7370 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter payload */


	/* Parameter payload */


	/* Parameter payload */

/* 7372 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 7374 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7376 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 7378 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7380 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7382 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 7384 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7386 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7388 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 7390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7392 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unRegister1 */


	/* Procedure unPublish1 */


	/* Procedure accept1 */


	/* Procedure accept1 */


	/* Procedure accept1 */

/* 7396 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7402 */	NdrFcShort( 0x9 ),	/* 9 */
/* 7404 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7408 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7410 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 7412 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7420 */	NdrFcShort( 0x2 ),	/* 2 */
/* 7422 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 7424 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 7426 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7428 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7430 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 7432 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7434 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure accept2 */


	/* Procedure reject2 */


	/* Procedure reject2 */


	/* Procedure reject2 */

/* 7438 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7440 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7444 */	NdrFcShort( 0xa ),	/* 10 */
/* 7446 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7450 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7452 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7454 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7456 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7462 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7464 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7466 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */


	/* Parameter config */


	/* Parameter config */


	/* Parameter config */

/* 7468 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7470 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7472 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 7474 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7476 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7478 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 7480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7482 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 7486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7492 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7494 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7500 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7502 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7510 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7512 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7514 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 7516 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7518 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7520 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter __returnValue */

/* 7522 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7524 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7526 */	NdrFcShort( 0x208 ),	/* Type Offset=520 */

	/* Return value */

/* 7528 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7530 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 7534 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7536 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7540 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7542 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7546 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7548 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7550 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7558 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7560 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7562 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 7564 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7566 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7568 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter __returnValue */

/* 7570 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7572 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7574 */	NdrFcShort( 0x21e ),	/* Type Offset=542 */

	/* Return value */

/* 7576 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7578 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7580 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 7582 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7584 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7588 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7590 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7594 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7596 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7598 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7602 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7606 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7608 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7610 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 7612 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7614 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7616 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter __returnValue */

/* 7618 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7620 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7622 */	NdrFcShort( 0x234 ),	/* Type Offset=564 */

	/* Return value */

/* 7624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7626 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 7630 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7636 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7638 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7644 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7646 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7654 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7656 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7658 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 7660 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7662 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7664 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter __returnValue */

/* 7666 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7668 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7670 */	NdrFcShort( 0x24a ),	/* Type Offset=586 */

	/* Return value */

/* 7672 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7674 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure reject2 */

/* 7678 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7680 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7684 */	NdrFcShort( 0xc ),	/* 12 */
/* 7686 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7690 */	NdrFcShort( 0x21 ),	/* 33 */
/* 7692 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7694 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7702 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7704 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7706 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 7708 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7710 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7712 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 7714 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7716 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7718 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 7720 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7722 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 7726 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7728 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7732 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7734 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7738 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7740 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7742 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7744 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7750 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7752 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7754 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 7756 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7758 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7760 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter __returnValue */

/* 7762 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7764 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7766 */	NdrFcShort( 0x260 ),	/* Type Offset=608 */

	/* Return value */

/* 7768 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7770 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateInstance1 */

/* 7774 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7780 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7782 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7786 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7788 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7790 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7796 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7798 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7800 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7802 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter pStack */

/* 7804 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7806 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7808 */	NdrFcShort( 0x16c ),	/* Type Offset=364 */

	/* Parameter __returnValue */

/* 7810 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 7812 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7814 */	NdrFcShort( 0x276 ),	/* Type Offset=630 */

	/* Return value */

/* 7816 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7818 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7820 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnDialogEvent */

/* 7822 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7824 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7828 */	NdrFcShort( 0x6 ),	/* 6 */
/* 7830 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7834 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7836 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7838 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7846 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7848 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7850 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 7852 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7854 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7856 */	NdrFcShort( 0x28c ),	/* Type Offset=652 */

	/* Parameter __returnValue */

/* 7858 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7860 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7862 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7866 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnStackEvent */

/* 7870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7876 */	NdrFcShort( 0x7 ),	/* 7 */
/* 7878 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7882 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7884 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7886 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7892 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7894 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7896 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7898 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 7900 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7902 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7904 */	NdrFcShort( 0x29e ),	/* Type Offset=670 */

	/* Parameter __returnValue */

/* 7906 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7908 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7912 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7914 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInviteEvent */

/* 7918 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7920 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7924 */	NdrFcShort( 0x8 ),	/* 8 */
/* 7926 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7930 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7932 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7934 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7942 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7944 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7946 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 7948 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7950 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 7952 */	NdrFcShort( 0x2b0 ),	/* Type Offset=688 */

	/* Parameter __returnValue */

/* 7954 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 7956 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 7958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 7960 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 7962 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 7964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnMessagingEvent */

/* 7966 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 7968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 7972 */	NdrFcShort( 0x9 ),	/* 9 */
/* 7974 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 7976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7978 */	NdrFcShort( 0x24 ),	/* 36 */
/* 7980 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 7982 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 7984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 7990 */	NdrFcShort( 0x3 ),	/* 3 */
/* 7992 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 7994 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 7996 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 7998 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8000 */	NdrFcShort( 0x2c2 ),	/* Type Offset=706 */

	/* Parameter __returnValue */

/* 8002 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8004 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8006 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8008 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8010 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnInfoEvent */

/* 8014 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8016 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8020 */	NdrFcShort( 0xa ),	/* 10 */
/* 8022 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8026 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8028 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8030 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8034 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8038 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8040 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8042 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 8044 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8046 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8048 */	NdrFcShort( 0x2d4 ),	/* Type Offset=724 */

	/* Parameter __returnValue */

/* 8050 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8052 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8056 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8058 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8060 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnOptionsEvent */

/* 8062 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8064 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8068 */	NdrFcShort( 0xb ),	/* 11 */
/* 8070 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8074 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8076 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8078 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8084 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8086 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8088 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8090 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 8092 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8094 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8096 */	NdrFcShort( 0x2e6 ),	/* Type Offset=742 */

	/* Parameter __returnValue */

/* 8098 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8100 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8106 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnPublicationEvent */

/* 8110 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8116 */	NdrFcShort( 0xc ),	/* 12 */
/* 8118 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8122 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8124 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8126 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8134 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8136 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8138 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 8140 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8142 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8144 */	NdrFcShort( 0x2f8 ),	/* Type Offset=760 */

	/* Parameter __returnValue */

/* 8146 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8148 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8150 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8154 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnRegistrationEvent */

/* 8158 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8164 */	NdrFcShort( 0xd ),	/* 13 */
/* 8166 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8170 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8172 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8174 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8182 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8184 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8186 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 8188 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8190 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8192 */	NdrFcShort( 0x30a ),	/* Type Offset=778 */

	/* Parameter __returnValue */

/* 8194 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8196 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8200 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8202 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnSubscriptionEvent */

/* 8206 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8212 */	NdrFcShort( 0xe ),	/* 14 */
/* 8214 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 8216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8218 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8220 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 8222 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8230 */	NdrFcShort( 0x3 ),	/* 3 */
/* 8232 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 8234 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter e */

/* 8236 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 8238 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8240 */	NdrFcShort( 0x31c ),	/* Type Offset=796 */

	/* Parameter __returnValue */

/* 8242 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8244 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 8248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8250 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getBaseSession */

/* 8254 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8260 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8262 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8266 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8268 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8270 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8278 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8280 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8282 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8284 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8286 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8288 */	NdrFcShort( 0x32e ),	/* Type Offset=814 */

	/* Return value */

/* 8290 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8292 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipMessage */

/* 8296 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8298 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8302 */	NdrFcShort( 0x9 ),	/* 9 */
/* 8304 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8308 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8310 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8312 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8320 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8322 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8324 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8326 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8328 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8330 */	NdrFcShort( 0x344 ),	/* Type Offset=836 */

	/* Return value */

/* 8332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8334 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RegistrationState */


	/* Procedure get_State */


	/* Procedure getRequestType */


	/* Procedure getMediaType */

/* 8338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8344 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8346 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8350 */	NdrFcShort( 0x24 ),	/* 36 */
/* 8352 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 8354 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8362 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8364 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8366 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */


	/* Parameter __returnValue */

/* 8368 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 8370 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8372 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 8374 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8376 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 8380 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8382 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8386 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8388 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8390 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8392 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8394 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8396 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8404 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8406 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8408 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8410 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8412 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8414 */	NdrFcShort( 0x35a ),	/* Type Offset=858 */

	/* Return value */

/* 8416 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8418 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeCallSessionOwnership */

/* 8422 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8424 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8428 */	NdrFcShort( 0x9 ),	/* 9 */
/* 8430 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8436 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8438 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8446 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8448 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8450 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8452 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8454 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8456 */	NdrFcShort( 0x370 ),	/* Type Offset=880 */

	/* Return value */

/* 8458 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8460 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8462 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeMsrpSessionOwnership */

/* 8464 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8466 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8470 */	NdrFcShort( 0xa ),	/* 10 */
/* 8472 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8476 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8478 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8480 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8484 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8488 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8490 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8492 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8494 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8496 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8498 */	NdrFcShort( 0x386 ),	/* Type Offset=902 */

	/* Return value */

/* 8500 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8502 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8504 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 8506 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8508 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8512 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8514 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8518 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8520 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8522 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8530 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8532 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8534 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8536 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8538 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8540 */	NdrFcShort( 0x39c ),	/* Type Offset=924 */

	/* Return value */

/* 8542 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8544 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 8548 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8550 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8554 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8556 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8558 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8560 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8562 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8564 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8572 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8574 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8576 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8578 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8580 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8582 */	NdrFcShort( 0x39c ),	/* Type Offset=924 */

	/* Return value */

/* 8584 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8586 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 8590 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8596 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8598 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8602 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8604 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8606 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8614 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8616 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8618 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8620 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8622 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8624 */	NdrFcShort( 0x3b2 ),	/* Type Offset=946 */

	/* Return value */

/* 8626 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8628 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 8632 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8634 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8640 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8644 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8646 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8648 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8654 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8656 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8658 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8660 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8662 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8664 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8666 */	NdrFcShort( 0x3b2 ),	/* Type Offset=946 */

	/* Return value */

/* 8668 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8670 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 8674 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8676 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8680 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8682 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8686 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8688 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8690 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8698 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8700 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8702 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8704 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8706 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8708 */	NdrFcShort( 0x3c8 ),	/* Type Offset=968 */

	/* Return value */

/* 8710 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8712 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 8716 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8722 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8724 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8728 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8730 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8732 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8740 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8742 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8744 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8746 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8748 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8750 */	NdrFcShort( 0x3c8 ),	/* Type Offset=968 */

	/* Return value */

/* 8752 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8754 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 8758 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8760 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8764 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8766 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8770 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8772 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8774 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8780 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8782 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8784 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8786 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8788 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8790 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8792 */	NdrFcShort( 0x3de ),	/* Type Offset=990 */

	/* Return value */

/* 8794 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8796 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 8800 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8802 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8806 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8808 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8812 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8814 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8816 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8822 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8824 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8826 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8828 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8830 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8832 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8834 */	NdrFcShort( 0x3de ),	/* Type Offset=990 */

	/* Return value */

/* 8836 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8838 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 8842 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8844 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8848 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8850 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8854 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8856 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8858 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8866 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8868 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8870 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8872 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8874 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8876 */	NdrFcShort( 0x3f4 ),	/* Type Offset=1012 */

	/* Return value */

/* 8878 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8880 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8882 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 8884 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8890 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8892 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8896 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8898 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8900 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8904 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8908 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8910 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8912 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8914 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8916 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8918 */	NdrFcShort( 0x3f4 ),	/* Type Offset=1012 */

	/* Return value */

/* 8920 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8922 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8924 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSession */

/* 8926 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8928 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8932 */	NdrFcShort( 0x7 ),	/* 7 */
/* 8934 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8938 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8940 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8942 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8946 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8950 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8952 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8954 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8956 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 8958 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 8960 */	NdrFcShort( 0x40a ),	/* Type Offset=1034 */

	/* Return value */

/* 8962 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 8964 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 8966 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure takeSessionOwnership */

/* 8968 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 8970 */	NdrFcLong( 0x0 ),	/* 0 */
/* 8974 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8976 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 8978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8980 */	NdrFcShort( 0x8 ),	/* 8 */
/* 8982 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 8984 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 8986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8988 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 8992 */	NdrFcShort( 0x2 ),	/* 2 */
/* 8994 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 8996 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 8998 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9000 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9002 */	NdrFcShort( 0x40a ),	/* Type Offset=1034 */

	/* Return value */

/* 9004 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9006 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9008 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpHeaderValue2 */

/* 9010 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9012 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9016 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9018 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 9020 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9022 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9024 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 9026 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9028 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9030 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9032 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9034 */	NdrFcShort( 0x5 ),	/* 5 */
/* 9036 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 9038 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 9040 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter media */

/* 9042 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9044 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9046 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter name */

/* 9048 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9050 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9052 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter index */

/* 9054 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9056 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 9060 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9062 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9064 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9066 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9068 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 9070 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpHeaderValue1 */

/* 9072 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9074 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9078 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9080 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 9082 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9084 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9086 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9088 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9090 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9092 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9096 */	NdrFcShort( 0x4 ),	/* 4 */
/* 9098 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 9100 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 9102 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter media */

/* 9104 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9106 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9108 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter name */

/* 9110 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9112 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9114 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 9116 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9118 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9120 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9124 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpHeaderAValue */

/* 9128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9136 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 9138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9142 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9144 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9146 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9148 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9152 */	NdrFcShort( 0x4 ),	/* 4 */
/* 9154 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 9156 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 9158 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter media */

/* 9160 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9162 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9164 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter attributeName */

/* 9166 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9168 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9170 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 9172 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9174 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9176 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9178 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9180 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9182 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getResponseCode */

/* 9184 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9186 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9190 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9192 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9196 */	NdrFcShort( 0x22 ),	/* 34 */
/* 9198 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9200 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9208 */	NdrFcShort( 0x2 ),	/* 2 */
/* 9210 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 9212 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 9214 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9216 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9218 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 9220 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9222 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9224 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderValue2 */

/* 9226 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9232 */	NdrFcShort( 0xa ),	/* 10 */
/* 9234 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 9236 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9238 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9240 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9242 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9244 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9246 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9248 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9250 */	NdrFcShort( 0x4 ),	/* 4 */
/* 9252 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 9254 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 9256 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter name */

/* 9258 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9260 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9262 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter index */

/* 9264 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9266 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 9270 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9272 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9274 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9276 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9278 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9280 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderValue1 */

/* 9282 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9284 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9288 */	NdrFcShort( 0xb ),	/* 11 */
/* 9290 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9292 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9294 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9296 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9298 */	0xe,		/* 14 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9300 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9302 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9306 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9308 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9310 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter name */

/* 9312 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9314 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9316 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 9318 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9320 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9322 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9324 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9326 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9328 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderParamValue2 */

/* 9330 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9332 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9336 */	NdrFcShort( 0xc ),	/* 12 */
/* 9338 */	NdrFcShort( 0x18 ),	/* ARM Stack size/offset = 24 */
/* 9340 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9342 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9344 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 9346 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9348 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9350 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9354 */	NdrFcShort( 0x5 ),	/* 5 */
/* 9356 */	0x5,		/* 5 */
			0x80,		/* 128 */
/* 9358 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 9360 */	0x83,		/* 131 */
			0xfc,		/* 252 */

	/* Parameter name */

/* 9362 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9364 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9366 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter param */

/* 9368 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9370 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9372 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter index */

/* 9374 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9376 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 9380 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9382 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9384 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9386 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9388 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 9390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipHeaderParamValue1 */

/* 9392 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9394 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9398 */	NdrFcShort( 0xd ),	/* 13 */
/* 9400 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 9402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9404 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9406 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9408 */	0x10,		/* 16 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 9410 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9412 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9416 */	NdrFcShort( 0x4 ),	/* 4 */
/* 9418 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 9420 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 9422 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter name */

/* 9424 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9426 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9428 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter param */

/* 9430 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9432 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9434 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter __returnValue */

/* 9436 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9438 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9440 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9442 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9444 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9446 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipContentLength */

/* 9448 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9450 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9454 */	NdrFcShort( 0xe ),	/* 14 */
/* 9456 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9458 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9460 */	NdrFcShort( 0x24 ),	/* 36 */
/* 9462 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9464 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9466 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9472 */	NdrFcShort( 0x2 ),	/* 2 */
/* 9474 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 9476 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 9478 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 9480 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 9484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9486 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSipContent */

/* 9490 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9496 */	NdrFcShort( 0xf ),	/* 15 */
/* 9498 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9502 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9504 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9506 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9508 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9514 */	NdrFcShort( 0x2 ),	/* 2 */
/* 9516 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 9518 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 9520 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9522 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9524 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9526 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9528 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure getSdpMessage */

/* 9532 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9538 */	NdrFcShort( 0x10 ),	/* 16 */
/* 9540 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9544 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9546 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9548 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9556 */	NdrFcShort( 0x2 ),	/* 2 */
/* 9558 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 9560 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 9562 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 9564 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9566 */	NdrFcShort( 0x420 ),	/* Type Offset=1056 */

	/* Return value */

/* 9568 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9570 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Start */

/* 9574 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9580 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9582 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9586 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9588 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 9590 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9598 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9600 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */

/* 9602 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9604 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoPeriodicKeepAlive */


	/* Procedure Stop */

/* 9608 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9614 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9616 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9620 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9622 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 9624 */	0xc,		/* 12 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9632 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9634 */	0x1,		/* 1 */
			0x80,		/* 128 */

	/* Return value */


	/* Return value */

/* 9636 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9638 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnStackStateChanged */


	/* Procedure OnDebugMessage */

/* 9642 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9644 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9648 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9650 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9652 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9656 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 9658 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9660 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9662 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9666 */	NdrFcShort( 0x3 ),	/* 3 */
/* 9668 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 9670 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter newState */


	/* Parameter level */

/* 9672 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9674 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9676 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter description */


	/* Parameter message */

/* 9678 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9680 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9682 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 9684 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9686 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnAudioRoutingChanged */

/* 9690 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9696 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9698 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9700 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9702 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9704 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9706 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9712 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9714 */	NdrFcShort( 0x2 ),	/* 2 */
/* 9716 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 9718 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter newRoute */

/* 9720 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9722 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9724 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 9726 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9728 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnAVCallStateChanged */


	/* Procedure OnRegistrationStateChanged */

/* 9732 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9734 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9738 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9740 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 9742 */	NdrFcShort( 0xe ),	/* 14 */
/* 9744 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9746 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 9748 */	0x10,		/* 16 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9750 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9752 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9756 */	NdrFcShort( 0x4 ),	/* 4 */
/* 9758 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 9760 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 9762 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter newState */


	/* Parameter newState */

/* 9764 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9766 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9768 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter sipCode */


	/* Parameter sipCode */

/* 9770 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9772 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9774 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Parameter description */


	/* Parameter description */

/* 9776 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9778 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9780 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */


	/* Return value */

/* 9782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9784 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 9786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OnHoldStateChanged */

/* 9788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9794 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9796 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9798 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9800 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9802 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 9804 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 9806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9812 */	NdrFcShort( 0x2 ),	/* 2 */
/* 9814 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 9816 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter newState */

/* 9818 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 9820 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9822 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 9824 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9826 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9828 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_DisplayName */

/* 9830 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9832 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9836 */	NdrFcShort( 0x6 ),	/* 6 */
/* 9838 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9840 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9842 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9844 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 9846 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 9848 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9854 */	NdrFcShort( 0x2 ),	/* 2 */
/* 9856 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 9858 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 9860 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 9862 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9864 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 9866 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9868 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9870 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_DisplayName */

/* 9872 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9874 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9878 */	NdrFcShort( 0x7 ),	/* 7 */
/* 9880 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9884 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9886 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 9888 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9892 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9896 */	NdrFcShort( 0x2 ),	/* 2 */
/* 9898 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 9900 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 9902 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9904 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9906 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 9908 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9910 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_RealmUri */

/* 9914 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9916 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9920 */	NdrFcShort( 0x9 ),	/* 9 */
/* 9922 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9926 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9928 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 9930 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9934 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9938 */	NdrFcShort( 0x2 ),	/* 2 */
/* 9940 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 9942 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 9944 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9946 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9948 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 9950 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9952 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ImpiString */

/* 9956 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 9958 */	NdrFcLong( 0x0 ),	/* 0 */
/* 9962 */	NdrFcShort( 0xb ),	/* 11 */
/* 9964 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 9966 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9968 */	NdrFcShort( 0x8 ),	/* 8 */
/* 9970 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 9972 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 9974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9976 */	NdrFcShort( 0x1 ),	/* 1 */
/* 9978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 9980 */	NdrFcShort( 0x2 ),	/* 2 */
/* 9982 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 9984 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 9986 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 9988 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 9990 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 9992 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 9994 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 9996 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ImpuUri */

/* 9998 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10000 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10004 */	NdrFcShort( 0xd ),	/* 13 */
/* 10006 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10010 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10012 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10014 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10016 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10018 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10022 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10024 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10026 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 10028 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10030 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10032 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 10034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10036 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Password */

/* 10040 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10046 */	NdrFcShort( 0xe ),	/* 14 */
/* 10048 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10050 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10052 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10054 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10056 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10058 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10064 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10066 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10068 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10070 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10072 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10074 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 10076 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10078 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Password */

/* 10082 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10084 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10088 */	NdrFcShort( 0xf ),	/* 15 */
/* 10090 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10094 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10096 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10098 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10102 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10106 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10108 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10110 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 10112 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10114 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10116 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 10118 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10120 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ProxyHost */

/* 10124 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10126 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10130 */	NdrFcShort( 0x10 ),	/* 16 */
/* 10132 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10138 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10140 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10142 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10148 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10150 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10152 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10154 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10156 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10158 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 10160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10162 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ProxyHost */

/* 10166 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10172 */	NdrFcShort( 0x11 ),	/* 17 */
/* 10174 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10178 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10180 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10182 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10186 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10190 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10192 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10194 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 10196 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10198 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10200 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 10202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10204 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_ProxyPort */

/* 10208 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10214 */	NdrFcShort( 0x12 ),	/* 18 */
/* 10216 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10220 */	NdrFcShort( 0x22 ),	/* 34 */
/* 10222 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10224 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10232 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10234 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10236 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10238 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10240 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10242 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 10244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10246 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_ProxyPort */

/* 10250 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10256 */	NdrFcShort( 0x13 ),	/* 19 */
/* 10258 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10260 */	NdrFcShort( 0x6 ),	/* 6 */
/* 10262 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10264 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10266 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10274 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10276 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10278 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 10280 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10282 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10284 */	0x6,		/* FC_SHORT */
			0x0,		/* 0 */

	/* Return value */

/* 10286 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10288 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10290 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EarlyIMS */

/* 10292 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10294 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10298 */	NdrFcShort( 0x14 ),	/* 20 */
/* 10300 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10304 */	NdrFcShort( 0x21 ),	/* 33 */
/* 10306 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10308 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10316 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10318 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10320 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10322 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10324 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10326 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 10328 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10330 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EarlyIMS */

/* 10334 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10336 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10340 */	NdrFcShort( 0x15 ),	/* 21 */
/* 10342 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10344 */	NdrFcShort( 0x5 ),	/* 5 */
/* 10346 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10348 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10350 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10352 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10358 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10360 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10362 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 10364 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10366 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10368 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 10370 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10372 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10374 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Transport */

/* 10376 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10378 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10382 */	NdrFcShort( 0x16 ),	/* 22 */
/* 10384 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10388 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10390 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10392 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10398 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10400 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10402 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10404 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10406 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10408 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10410 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 10412 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10414 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Transport */

/* 10418 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10420 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10424 */	NdrFcShort( 0x17 ),	/* 23 */
/* 10426 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10428 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10430 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10432 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10434 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10436 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10438 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10440 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10442 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10444 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10446 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 10448 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10450 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10452 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 10454 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10456 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_IPVersion */

/* 10460 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10462 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10466 */	NdrFcShort( 0x18 ),	/* 24 */
/* 10468 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10472 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10474 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10476 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10480 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10482 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10484 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10486 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10488 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10490 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10492 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10494 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 10496 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10498 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_IPVersion */

/* 10502 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10504 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10508 */	NdrFcShort( 0x19 ),	/* 25 */
/* 10510 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10512 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10516 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10518 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10522 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10524 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10526 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10528 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10530 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 10532 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10534 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10536 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 10538 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10540 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10542 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PushNotificationUri */

/* 10544 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10546 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10550 */	NdrFcShort( 0x1a ),	/* 26 */
/* 10552 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10554 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10556 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10558 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10560 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10562 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10568 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10570 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10572 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10574 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10576 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10578 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 10580 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10582 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10584 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_PushNotificationUri */

/* 10586 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10588 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10592 */	NdrFcShort( 0x1b ),	/* 27 */
/* 10594 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10598 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10600 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10602 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10606 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10610 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10612 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10614 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 10616 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10618 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10620 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 10622 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10624 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10626 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UserAgent */

/* 10628 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10630 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10634 */	NdrFcShort( 0x1c ),	/* 28 */
/* 10636 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10640 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10642 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 10644 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 10646 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10652 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10654 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10656 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10658 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 10660 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10662 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 10664 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10666 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10668 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_UserAgent */

/* 10670 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10676 */	NdrFcShort( 0x1d ),	/* 29 */
/* 10678 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10682 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10684 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 10686 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 10688 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10690 */	NdrFcShort( 0x1 ),	/* 1 */
/* 10692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10694 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10696 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10698 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 10700 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 10702 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10704 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 10706 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10708 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10710 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EchoSupp */

/* 10712 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10714 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10718 */	NdrFcShort( 0x1e ),	/* 30 */
/* 10720 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10722 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10724 */	NdrFcShort( 0x21 ),	/* 33 */
/* 10726 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10728 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10730 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10736 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10738 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10740 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10742 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10744 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10746 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 10748 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10750 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10752 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EchoSupp */

/* 10754 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10756 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10760 */	NdrFcShort( 0x1f ),	/* 31 */
/* 10762 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10764 */	NdrFcShort( 0x5 ),	/* 5 */
/* 10766 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10768 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10770 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10774 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10776 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10778 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10780 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10782 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 10784 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10786 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10788 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 10790 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10792 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10794 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EchoTail */

/* 10796 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10802 */	NdrFcShort( 0x20 ),	/* 32 */
/* 10804 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10808 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10810 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10812 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10820 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10822 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10824 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10826 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10828 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10832 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10834 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10836 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EchoTail */

/* 10838 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10844 */	NdrFcShort( 0x21 ),	/* 33 */
/* 10846 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10848 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10850 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10852 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10854 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10858 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10860 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10862 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10864 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10866 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 10868 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10870 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10874 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10876 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10878 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_EchoSkew */

/* 10880 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10882 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10886 */	NdrFcShort( 0x22 ),	/* 34 */
/* 10888 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10892 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10894 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10896 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10904 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10906 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10908 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10910 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10912 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10914 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10916 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10918 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10920 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_EchoSkew */

/* 10922 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10924 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10928 */	NdrFcShort( 0x23 ),	/* 35 */
/* 10930 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10932 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10934 */	NdrFcShort( 0x8 ),	/* 8 */
/* 10936 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10938 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10942 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10944 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10946 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10948 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10950 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 10952 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 10954 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10956 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 10958 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 10960 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 10962 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_NoiseSupp */

/* 10964 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 10966 */	NdrFcLong( 0x0 ),	/* 0 */
/* 10970 */	NdrFcShort( 0x24 ),	/* 36 */
/* 10972 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 10974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10976 */	NdrFcShort( 0x21 ),	/* 33 */
/* 10978 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 10980 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 10982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10984 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 10988 */	NdrFcShort( 0x2 ),	/* 2 */
/* 10990 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 10992 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 10994 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 10996 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 10998 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 11000 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11002 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_NoiseSupp */

/* 11006 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11008 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11012 */	NdrFcShort( 0x25 ),	/* 37 */
/* 11014 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11016 */	NdrFcShort( 0x5 ),	/* 5 */
/* 11018 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11020 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11022 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11026 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11030 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11032 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11034 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 11036 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11038 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11040 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 11042 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11044 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Vad */

/* 11048 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11050 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11054 */	NdrFcShort( 0x26 ),	/* 38 */
/* 11056 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11060 */	NdrFcShort( 0x21 ),	/* 33 */
/* 11062 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11064 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11068 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11072 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11074 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11076 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11078 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11080 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11082 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 11084 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11086 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11088 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Vad */

/* 11090 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11092 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11096 */	NdrFcShort( 0x27 ),	/* 39 */
/* 11098 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11100 */	NdrFcShort( 0x5 ),	/* 5 */
/* 11102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11104 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11106 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11114 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11116 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11118 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 11120 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11122 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11124 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 11126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11128 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Agc */

/* 11132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11138 */	NdrFcShort( 0x28 ),	/* 40 */
/* 11140 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11144 */	NdrFcShort( 0x21 ),	/* 33 */
/* 11146 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11148 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11156 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11158 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11160 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11162 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11164 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11166 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 11168 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11170 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11172 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Agc */

/* 11174 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11176 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11180 */	NdrFcShort( 0x29 ),	/* 41 */
/* 11182 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11184 */	NdrFcShort( 0x5 ),	/* 5 */
/* 11186 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11188 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11190 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11194 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11196 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11198 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11200 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11202 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 11204 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11206 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11208 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 11210 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11212 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_JbMaxLateRate */

/* 11216 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11218 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11222 */	NdrFcShort( 0x2a ),	/* 42 */
/* 11224 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11228 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11230 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11232 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11240 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11242 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11244 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11246 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11248 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11252 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11254 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11256 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_JbMaxLateRate */

/* 11258 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11260 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11264 */	NdrFcShort( 0x2b ),	/* 43 */
/* 11266 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11268 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11270 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11272 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11274 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11278 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11280 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11282 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11284 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11286 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 11288 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11290 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 11294 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11296 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Rtcp */

/* 11300 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11302 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11306 */	NdrFcShort( 0x2c ),	/* 44 */
/* 11308 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11312 */	NdrFcShort( 0x21 ),	/* 33 */
/* 11314 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11316 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11320 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11324 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11326 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11328 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11330 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11332 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11334 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 11336 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11338 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_Rtcp */

/* 11342 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11344 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11348 */	NdrFcShort( 0x2d ),	/* 45 */
/* 11350 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11352 */	NdrFcShort( 0x5 ),	/* 5 */
/* 11354 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11356 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11358 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11366 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11368 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11370 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 11372 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11374 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11376 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 11378 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11380 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11382 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_RtcpMux */

/* 11384 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11386 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11390 */	NdrFcShort( 0x2e ),	/* 46 */
/* 11392 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11394 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11396 */	NdrFcShort( 0x21 ),	/* 33 */
/* 11398 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11400 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11402 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11408 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11410 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11412 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11414 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11416 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11418 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 11420 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11422 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_RtcpMux */

/* 11426 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11428 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11432 */	NdrFcShort( 0x2f ),	/* 47 */
/* 11434 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11436 */	NdrFcShort( 0x5 ),	/* 5 */
/* 11438 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11440 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11442 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11444 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11446 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11448 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11450 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11452 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11454 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 11456 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11458 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11460 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 11462 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11464 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11466 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_HoldState */

/* 11468 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11470 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11474 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11476 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11478 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11480 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11482 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11484 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11492 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11494 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11496 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11498 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11500 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11502 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 11504 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11506 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_UriRemote */

/* 11510 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11512 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11516 */	NdrFcShort( 0x9 ),	/* 9 */
/* 11518 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11522 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11524 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11526 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11532 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11534 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11536 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11538 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11540 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11542 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11544 */	NdrFcShort( 0x436 ),	/* Type Offset=1078 */

	/* Return value */

/* 11546 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11548 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Accept */

/* 11552 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11554 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11558 */	NdrFcShort( 0xa ),	/* 10 */
/* 11560 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 11562 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11564 */	NdrFcShort( 0x21 ),	/* 33 */
/* 11566 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11568 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11570 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11574 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11576 */	NdrFcShort( 0x3 ),	/* 3 */
/* 11578 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 11580 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 11582 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11584 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11586 */	NdrFcShort( 0x1d2 ),	/* Type Offset=466 */

	/* Parameter __returnValue */

/* 11588 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11590 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11592 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 11594 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11596 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure HangUp */

/* 11600 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11602 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11606 */	NdrFcShort( 0xb ),	/* 11 */
/* 11608 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 11610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11612 */	NdrFcShort( 0x21 ),	/* 33 */
/* 11614 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11616 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11618 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11624 */	NdrFcShort( 0x3 ),	/* 3 */
/* 11626 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 11628 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 11630 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11632 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11634 */	NdrFcShort( 0x1d2 ),	/* Type Offset=466 */

	/* Parameter __returnValue */

/* 11636 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11638 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11640 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 11642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11644 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Hold */

/* 11648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11654 */	NdrFcShort( 0xc ),	/* 12 */
/* 11656 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 11658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11660 */	NdrFcShort( 0x21 ),	/* 33 */
/* 11662 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11664 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11672 */	NdrFcShort( 0x3 ),	/* 3 */
/* 11674 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 11676 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 11678 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11680 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11682 */	NdrFcShort( 0x1d2 ),	/* Type Offset=466 */

	/* Parameter __returnValue */

/* 11684 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11686 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11688 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 11690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11692 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Resume */

/* 11696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11702 */	NdrFcShort( 0xd ),	/* 13 */
/* 11704 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 11706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11708 */	NdrFcShort( 0x21 ),	/* 33 */
/* 11710 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 11712 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11720 */	NdrFcShort( 0x3 ),	/* 3 */
/* 11722 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 11724 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter config */

/* 11726 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 11728 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11730 */	NdrFcShort( 0x1d2 ),	/* Type Offset=466 */

	/* Parameter __returnValue */

/* 11732 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11734 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11736 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 11738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11740 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SendDTMF */

/* 11744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11750 */	NdrFcShort( 0xe ),	/* 14 */
/* 11752 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 11754 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11756 */	NdrFcShort( 0x21 ),	/* 33 */
/* 11758 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 11760 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11768 */	NdrFcShort( 0x3 ),	/* 3 */
/* 11770 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 11772 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter dtmfCode */

/* 11774 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11776 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11780 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11782 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11784 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 11786 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11788 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11790 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SipConfig */

/* 11792 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11798 */	NdrFcShort( 0x6 ),	/* 6 */
/* 11800 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11802 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11804 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11806 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11808 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11814 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11816 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11818 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11820 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11822 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11824 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11826 */	NdrFcShort( 0x43a ),	/* Type Offset=1082 */

	/* Return value */

/* 11828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11830 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SipActiveAVCall */

/* 11834 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11840 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11842 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11846 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11848 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 11850 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11856 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11858 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11860 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11862 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11864 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 11866 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11868 */	NdrFcShort( 0x450 ),	/* Type Offset=1104 */

	/* Return value */

/* 11870 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11872 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_AudioRoute */

/* 11876 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11878 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11882 */	NdrFcShort( 0xa ),	/* 10 */
/* 11884 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11888 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11890 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11892 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11900 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11902 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11904 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11906 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11908 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11910 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 11912 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11914 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_AudioRoute */

/* 11918 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11920 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11924 */	NdrFcShort( 0xb ),	/* 11 */
/* 11926 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11928 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11930 */	NdrFcShort( 0x8 ),	/* 8 */
/* 11932 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11934 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11936 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11938 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11942 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11944 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11946 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter newRoute */

/* 11948 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 11950 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11952 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 11954 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11956 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 11958 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_CameraLocation */

/* 11960 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 11962 */	NdrFcLong( 0x0 ),	/* 0 */
/* 11966 */	NdrFcShort( 0xc ),	/* 12 */
/* 11968 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 11970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11972 */	NdrFcShort( 0x24 ),	/* 36 */
/* 11974 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 11976 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 11978 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11982 */	NdrFcShort( 0x0 ),	/* 0 */
/* 11984 */	NdrFcShort( 0x2 ),	/* 2 */
/* 11986 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 11988 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 11990 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 11992 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 11994 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 11996 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 11998 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_CameraLocation */

/* 12002 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12008 */	NdrFcShort( 0xd ),	/* 13 */
/* 12010 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12012 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12014 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12016 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12018 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12026 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12028 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12030 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter newLocation */

/* 12032 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12034 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12036 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Return value */

/* 12038 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12040 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12042 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetDebugMessageListener */

/* 12044 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12046 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12050 */	NdrFcShort( 0xe ),	/* 14 */
/* 12052 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12056 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12058 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 12060 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12062 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12064 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12068 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12070 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12072 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter pListener */

/* 12074 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12076 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12078 */	NdrFcShort( 0x466 ),	/* Type Offset=1126 */

	/* Return value */

/* 12080 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12082 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetAudioStateChangedListener */

/* 12086 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12092 */	NdrFcShort( 0xf ),	/* 15 */
/* 12094 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12098 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12100 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 12102 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12110 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12112 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12114 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter pListener */

/* 12116 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12118 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12120 */	NdrFcShort( 0x478 ),	/* Type Offset=1144 */

	/* Return value */

/* 12122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12124 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSipRegistrationStateChangedListener */

/* 12128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12134 */	NdrFcShort( 0x10 ),	/* 16 */
/* 12136 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12142 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 12144 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12152 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12154 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12156 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter pListener */

/* 12158 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12160 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12162 */	NdrFcShort( 0x48a ),	/* Type Offset=1162 */

	/* Return value */

/* 12164 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12166 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12168 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSipStackStateChangedListener */

/* 12170 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12172 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12176 */	NdrFcShort( 0x11 ),	/* 17 */
/* 12178 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12182 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12184 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 12186 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12188 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12190 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12192 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12194 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12196 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12198 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter pListener */

/* 12200 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12202 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12204 */	NdrFcShort( 0x49c ),	/* Type Offset=1180 */

	/* Return value */

/* 12206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12208 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetSipAVCallStateChangedListener */

/* 12212 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12218 */	NdrFcShort( 0x12 ),	/* 18 */
/* 12220 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12226 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 12228 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12236 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12238 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12240 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter pListener */

/* 12242 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12244 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12246 */	NdrFcShort( 0x4ae ),	/* Type Offset=1198 */

	/* Return value */

/* 12248 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12250 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Start */

/* 12254 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12256 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12260 */	NdrFcShort( 0x13 ),	/* 19 */
/* 12262 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12266 */	NdrFcShort( 0x21 ),	/* 33 */
/* 12268 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12270 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12272 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12274 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12276 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12278 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12280 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12282 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12284 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12286 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12288 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 12290 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12292 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure UnRegister */

/* 12296 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12298 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12302 */	NdrFcShort( 0x16 ),	/* 22 */
/* 12304 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12308 */	NdrFcShort( 0x21 ),	/* 33 */
/* 12310 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12312 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12320 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12322 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12324 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12326 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12328 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12330 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 12332 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12334 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MakeCallAudio */

/* 12338 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12340 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12344 */	NdrFcShort( 0x17 ),	/* 23 */
/* 12346 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 12348 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12352 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 12354 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12356 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12362 */	NdrFcShort( 0x4 ),	/* 4 */
/* 12364 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 12366 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 12368 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter pTo */

/* 12370 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12372 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12374 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter pConfig */

/* 12376 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12378 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12380 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 12382 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12384 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12386 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Return value */

/* 12388 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12390 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 12392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure MakeCallAudioVideo */

/* 12394 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12396 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12400 */	NdrFcShort( 0x18 ),	/* 24 */
/* 12402 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 12404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12406 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12408 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 12410 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12412 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12418 */	NdrFcShort( 0x4 ),	/* 4 */
/* 12420 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 12422 */	0x81,		/* 129 */
			0x82,		/* 130 */
/* 12424 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter pTo */

/* 12426 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12428 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12430 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter pConfig */

/* 12432 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12434 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12436 */	NdrFcShort( 0x40 ),	/* Type Offset=64 */

	/* Parameter __returnValue */

/* 12438 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12440 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12442 */	NdrFcShort( 0x4c0 ),	/* Type Offset=1216 */

	/* Return value */

/* 12444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12446 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 12448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCodecs */

/* 12450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12456 */	NdrFcShort( 0x6 ),	/* 6 */
/* 12458 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 12460 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12462 */	NdrFcShort( 0x21 ),	/* 33 */
/* 12464 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 12466 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12474 */	NdrFcShort( 0x3 ),	/* 3 */
/* 12476 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 12478 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter codecs */

/* 12480 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12482 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12484 */	0xe,		/* FC_ENUM32 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12486 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 12488 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12490 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 12492 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12494 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12496 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure StartServer */

/* 12498 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12500 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12504 */	NdrFcShort( 0x6 ),	/* 6 */
/* 12506 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 12508 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12510 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12512 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12514 */	0xe,		/* 14 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 12516 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12518 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12520 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12522 */	NdrFcShort( 0x3 ),	/* 3 */
/* 12524 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 12526 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter __outOfProcServerClassNamesSize */

/* 12528 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12530 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12532 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter outOfProcServerClassNames */

/* 12534 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 12536 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12538 */	NdrFcShort( 0x4da ),	/* Type Offset=1242 */

	/* Return value */

/* 12540 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12542 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_VideoRenderer */

/* 12546 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12548 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12552 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12554 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12556 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12558 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12560 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12562 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12566 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12570 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12572 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12574 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12576 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12578 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12580 */	NdrFcShort( 0x4f0 ),	/* Type Offset=1264 */

	/* Return value */

/* 12582 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12584 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_VideoRenderer */

/* 12588 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12594 */	NdrFcShort( 0x9 ),	/* 9 */
/* 12596 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12598 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12600 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12602 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 12604 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12608 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12612 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12614 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12616 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter value */

/* 12618 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12620 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12622 */	NdrFcShort( 0x4f4 ),	/* Type Offset=1268 */

	/* Return value */

/* 12624 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12626 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12628 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_SipService */

/* 12630 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12632 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12636 */	NdrFcShort( 0xa ),	/* 10 */
/* 12638 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12640 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12642 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12644 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12646 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12650 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12652 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12654 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12656 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12658 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12660 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12662 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12664 */	NdrFcShort( 0x506 ),	/* Type Offset=1286 */

	/* Return value */

/* 12666 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12668 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12670 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure add_VideoFrameReceived */

/* 12672 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12674 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12678 */	NdrFcShort( 0xb ),	/* 11 */
/* 12680 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 12682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12684 */	NdrFcShort( 0x34 ),	/* 52 */
/* 12686 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 12688 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12690 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12692 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12694 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12696 */	NdrFcShort( 0x3 ),	/* 3 */
/* 12698 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 12700 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter __param0 */

/* 12702 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 12704 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12706 */	NdrFcShort( 0x51c ),	/* Type Offset=1308 */

	/* Parameter __returnValue */

/* 12708 */	NdrFcShort( 0x2112 ),	/* Flags:  must free, out, simple ref, srv alloc size=8 */
/* 12710 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12712 */	NdrFcShort( 0x532 ),	/* Type Offset=1330 */

	/* Return value */

/* 12714 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12716 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure remove_VideoFrameReceived */

/* 12720 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12726 */	NdrFcShort( 0xc ),	/* 12 */
/* 12728 */	NdrFcShort( 0x14 ),	/* ARM Stack size/offset = 20 */
/* 12730 */	NdrFcShort( 0x18 ),	/* 24 */
/* 12732 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12734 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 12736 */	0x10,		/* 16 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12744 */	NdrFcShort( 0x4 ),	/* 4 */
/* 12746 */	0x4,		/* 4 */
			0x80,		/* 128 */
/* 12748 */	0x9f,		/* 159 */
			0x82,		/* 130 */
/* 12750 */	0x83,		/* 131 */
			0x0,		/* 0 */

	/* Parameter __param0 */

/* 12752 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 12754 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12756 */	NdrFcShort( 0x532 ),	/* Type Offset=1330 */

	/* Return value */

/* 12758 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12760 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 12762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetUiDisconnectedEventName */

/* 12764 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12770 */	NdrFcShort( 0x7 ),	/* 7 */
/* 12772 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 12774 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12776 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12778 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 12780 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 12782 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12786 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12788 */	NdrFcShort( 0x3 ),	/* 3 */
/* 12790 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 12792 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter backgroundProcessId */

/* 12794 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12796 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12800 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12802 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12804 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 12806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12808 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetBackgroundProcessReadyEventName */

/* 12812 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12818 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12820 */	NdrFcShort( 0x10 ),	/* ARM Stack size/offset = 16 */
/* 12822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12826 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 12828 */	0xe,		/* 14 */
			0x3,		/* Ext Flags:  new corr desc, clt corr check, */
/* 12830 */	NdrFcShort( 0x1 ),	/* 1 */
/* 12832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12836 */	NdrFcShort( 0x3 ),	/* 3 */
/* 12838 */	0x3,		/* 3 */
			0x80,		/* 128 */
/* 12840 */	0x81,		/* 129 */
			0x82,		/* 130 */

	/* Parameter backgroundProcessId */

/* 12842 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 12844 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12848 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 12850 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12852 */	NdrFcShort( 0x62 ),	/* Type Offset=98 */

	/* Return value */

/* 12854 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12856 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_Instance */

/* 12860 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 12862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 12866 */	NdrFcShort( 0x9 ),	/* 9 */
/* 12868 */	NdrFcShort( 0xc ),	/* ARM Stack size/offset = 12 */
/* 12870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12872 */	NdrFcShort( 0x8 ),	/* 8 */
/* 12874 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 12876 */	0xe,		/* 14 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 12878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12880 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12882 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12884 */	NdrFcShort( 0x2 ),	/* 2 */
/* 12886 */	0x2,		/* 2 */
			0x80,		/* 128 */
/* 12888 */	0x81,		/* 129 */
			0x0,		/* 0 */

	/* Parameter __returnValue */

/* 12890 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 12892 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 12894 */	NdrFcShort( 0x538 ),	/* Type Offset=1336 */

	/* Return value */

/* 12896 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 12898 */	NdrFcShort( 0x8 ),	/* ARM Stack size/offset = 8 */
/* 12900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const doubango_rt2EBackEnd_MIDL_TYPE_FORMAT_STRING doubango_rt2EBackEnd__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  4 */	NdrFcLong( 0x905a0fe0 ),	/* -1873145888 */
/*  8 */	NdrFcShort( 0xbc53 ),	/* -17325 */
/* 10 */	NdrFcShort( 0x11df ),	/* 4575 */
/* 12 */	0x8c,		/* 140 */
			0x49,		/* 73 */
/* 14 */	0x0,		/* 0 */
			0x1e,		/* 30 */
/* 16 */	0x4f,		/* 79 */
			0xc6,		/* 198 */
/* 18 */	0x86,		/* 134 */
			0xda,		/* 218 */
/* 20 */	
			0x12, 0x0,	/* FC_UP */
/* 22 */	NdrFcShort( 0xe ),	/* Offset= 14 (36) */
/* 24 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 26 */	NdrFcShort( 0x2 ),	/* 2 */
/* 28 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 30 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 32 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 34 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 36 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 38 */	NdrFcShort( 0x8 ),	/* 8 */
/* 40 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (24) */
/* 42 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 44 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 46 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x4 ),	/* 4 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0xffde ),	/* Offset= -34 (20) */
/* 56 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 58 */	0x3,		/* FC_SMALL */
			0x5c,		/* FC_PAD */
/* 60 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 62 */	NdrFcShort( 0x2 ),	/* Offset= 2 (64) */
/* 64 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 66 */	NdrFcLong( 0x1ba29f65 ),	/* 463642469 */
/* 70 */	NdrFcShort( 0x9abb ),	/* -25925 */
/* 72 */	NdrFcShort( 0x3024 ),	/* 12324 */
/* 74 */	0x82,		/* 130 */
			0x21,		/* 33 */
/* 76 */	0xa9,		/* 169 */
			0x8c,		/* 140 */
/* 78 */	0xdb,		/* 219 */
			0x0,		/* 0 */
/* 80 */	0x88,		/* 136 */
			0x87,		/* 135 */
/* 82 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 84 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 86 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 88 */	0xe,		/* FC_ENUM32 */
			0x5c,		/* FC_PAD */
/* 90 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 92 */	NdrFcShort( 0x6 ),	/* Offset= 6 (98) */
/* 94 */	
			0x13, 0x0,	/* FC_OP */
/* 96 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (36) */
/* 98 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x4 ),	/* 4 */
/* 104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 106 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (94) */
/* 108 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 110 */	NdrFcShort( 0x2 ),	/* Offset= 2 (112) */
/* 112 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 114 */	NdrFcLong( 0x8dd1cd82 ),	/* -1915630206 */
/* 118 */	NdrFcShort( 0xf943 ),	/* -1725 */
/* 120 */	NdrFcShort( 0x3715 ),	/* 14101 */
/* 122 */	0xb5,		/* 181 */
			0x10,		/* 16 */
/* 124 */	0xf8,		/* 248 */
			0xd9,		/* 217 */
/* 126 */	0xf2,		/* 242 */
			0x10,		/* 16 */
/* 128 */	0xd7,		/* 215 */
			0x5d,		/* 93 */
/* 130 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 132 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 134 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 136 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 138 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 140 */	NdrFcShort( 0x2 ),	/* Offset= 2 (142) */
/* 142 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 144 */	NdrFcLong( 0x72089dc3 ),	/* 1913167299 */
/* 148 */	NdrFcShort( 0x5600 ),	/* 22016 */
/* 150 */	NdrFcShort( 0x3f9e ),	/* 16286 */
/* 152 */	0x89,		/* 137 */
			0xa9,		/* 169 */
/* 154 */	0x35,		/* 53 */
			0xd5,		/* 213 */
/* 156 */	0xe,		/* 14 */
			0x35,		/* 53 */
/* 158 */	0x3,		/* 3 */
			0x48,		/* 72 */
/* 160 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 162 */	NdrFcShort( 0x2 ),	/* Offset= 2 (164) */
/* 164 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 166 */	NdrFcLong( 0x746afeab ),	/* 1953169067 */
/* 170 */	NdrFcShort( 0x72 ),	/* 114 */
/* 172 */	NdrFcShort( 0x38fe ),	/* 14590 */
/* 174 */	0xb1,		/* 177 */
			0xa7,		/* 167 */
/* 176 */	0x21,		/* 33 */
			0x77,		/* 119 */
/* 178 */	0xb,		/* 11 */
			0xe6,		/* 230 */
/* 180 */	0x4a,		/* 74 */
			0x4a,		/* 74 */
/* 182 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 184 */	NdrFcShort( 0x2 ),	/* Offset= 2 (186) */
/* 186 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 188 */	NdrFcLong( 0xb92764bb ),	/* -1188600645 */
/* 192 */	NdrFcShort( 0xf11d ),	/* -3811 */
/* 194 */	NdrFcShort( 0x3bd1 ),	/* 15313 */
/* 196 */	0x8d,		/* 141 */
			0xea,		/* 234 */
/* 198 */	0xb1,		/* 177 */
			0x33,		/* 51 */
/* 200 */	0xce,		/* 206 */
			0x9b,		/* 155 */
/* 202 */	0xf5,		/* 245 */
			0xf7,		/* 247 */
/* 204 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 206 */	NdrFcLong( 0xe4effef8 ),	/* -454033672 */
/* 210 */	NdrFcShort( 0x5c8d ),	/* 23693 */
/* 212 */	NdrFcShort( 0x389a ),	/* 14490 */
/* 214 */	0xbe,		/* 190 */
			0xa7,		/* 167 */
/* 216 */	0x7e,		/* 126 */
			0x14,		/* 20 */
/* 218 */	0xe2,		/* 226 */
			0xa0,		/* 160 */
/* 220 */	0xaa,		/* 170 */
			0x95,		/* 149 */
/* 222 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 224 */	NdrFcLong( 0xea0b2968 ),	/* -368367256 */
/* 228 */	NdrFcShort( 0x7ad4 ),	/* 31444 */
/* 230 */	NdrFcShort( 0x3d5c ),	/* 15708 */
/* 232 */	0xaa,		/* 170 */
			0xd3,		/* 211 */
/* 234 */	0x2a,		/* 42 */
			0xef,		/* 239 */
/* 236 */	0xb3,		/* 179 */
			0xac,		/* 172 */
/* 238 */	0xd2,		/* 210 */
			0xe7,		/* 231 */
/* 240 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 242 */	NdrFcShort( 0x2 ),	/* Offset= 2 (244) */
/* 244 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 246 */	NdrFcLong( 0x944bb133 ),	/* -1806978765 */
/* 250 */	NdrFcShort( 0x86e3 ),	/* -31005 */
/* 252 */	NdrFcShort( 0x3fb3 ),	/* 16307 */
/* 254 */	0xbc,		/* 188 */
			0xf5,		/* 245 */
/* 256 */	0xfd,		/* 253 */
			0x12,		/* 18 */
/* 258 */	0xb6,		/* 182 */
			0x6e,		/* 110 */
/* 260 */	0x3b,		/* 59 */
			0xa6,		/* 166 */
/* 262 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 264 */	NdrFcShort( 0x2 ),	/* Offset= 2 (266) */
/* 266 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 268 */	NdrFcLong( 0x357645ec ),	/* 896943596 */
/* 272 */	NdrFcShort( 0x98bf ),	/* -26433 */
/* 274 */	NdrFcShort( 0x3baf ),	/* 15279 */
/* 276 */	0x8b,		/* 139 */
			0x97,		/* 151 */
/* 278 */	0x33,		/* 51 */
			0x38,		/* 56 */
/* 280 */	0x78,		/* 120 */
			0x33,		/* 51 */
/* 282 */	0x97,		/* 151 */
			0xcb,		/* 203 */
/* 284 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 286 */	NdrFcLong( 0x19f9a6f1 ),	/* 435791601 */
/* 290 */	NdrFcShort( 0xe76c ),	/* -6292 */
/* 292 */	NdrFcShort( 0x321c ),	/* 12828 */
/* 294 */	0xba,		/* 186 */
			0xa,		/* 10 */
/* 296 */	0x78,		/* 120 */
			0xdb,		/* 219 */
/* 298 */	0xa8,		/* 168 */
			0xe,		/* 14 */
/* 300 */	0xc2,		/* 194 */
			0x30,		/* 48 */
/* 302 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 304 */	NdrFcLong( 0xfbc56ee2 ),	/* -70947102 */
/* 308 */	NdrFcShort( 0x7375 ),	/* 29557 */
/* 310 */	NdrFcShort( 0x3f53 ),	/* 16211 */
/* 312 */	0x91,		/* 145 */
			0xd3,		/* 211 */
/* 314 */	0x85,		/* 133 */
			0x30,		/* 48 */
/* 316 */	0x79,		/* 121 */
			0x19,		/* 25 */
/* 318 */	0x31,		/* 49 */
			0x84,		/* 132 */
/* 320 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 322 */	NdrFcShort( 0x2 ),	/* Offset= 2 (324) */
/* 324 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 326 */	NdrFcLong( 0x540329e3 ),	/* 1409493475 */
/* 330 */	NdrFcShort( 0x8dd6 ),	/* -29226 */
/* 332 */	NdrFcShort( 0x391c ),	/* 14620 */
/* 334 */	0x9e,		/* 158 */
			0xbd,		/* 189 */
/* 336 */	0x4d,		/* 77 */
			0x73,		/* 115 */
/* 338 */	0x8e,		/* 142 */
			0x1c,		/* 28 */
/* 340 */	0x4,		/* 4 */
			0xf0,		/* 240 */
/* 342 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 344 */	NdrFcShort( 0x2 ),	/* Offset= 2 (346) */
/* 346 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 348 */	NdrFcLong( 0x40d7757 ),	/* 67991383 */
/* 352 */	NdrFcShort( 0x114c ),	/* 4428 */
/* 354 */	NdrFcShort( 0x3581 ),	/* 13697 */
/* 356 */	0x8e,		/* 142 */
			0xf9,		/* 249 */
/* 358 */	0xd6,		/* 214 */
			0x40,		/* 64 */
/* 360 */	0x25,		/* 37 */
			0x6c,		/* 108 */
/* 362 */	0xc,		/* 12 */
			0x14,		/* 20 */
/* 364 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 366 */	NdrFcLong( 0x31ac4c99 ),	/* 833375385 */
/* 370 */	NdrFcShort( 0x4fe9 ),	/* 20457 */
/* 372 */	NdrFcShort( 0x3cce ),	/* 15566 */
/* 374 */	0x89,		/* 137 */
			0xb5,		/* 181 */
/* 376 */	0xc,		/* 12 */
			0x27,		/* 39 */
/* 378 */	0x50,		/* 80 */
			0xcc,		/* 204 */
/* 380 */	0xee,		/* 238 */
			0xa7,		/* 167 */
/* 382 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 384 */	NdrFcShort( 0x2 ),	/* Offset= 2 (386) */
/* 386 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 388 */	NdrFcLong( 0x6acf024c ),	/* 1791951436 */
/* 392 */	NdrFcShort( 0x5fa2 ),	/* 24482 */
/* 394 */	NdrFcShort( 0x3607 ),	/* 13831 */
/* 396 */	0x92,		/* 146 */
			0xb2,		/* 178 */
/* 398 */	0x67,		/* 103 */
			0x74,		/* 116 */
/* 400 */	0x5,		/* 5 */
			0xc7,		/* 199 */
/* 402 */	0x55,		/* 85 */
			0x19,		/* 25 */
/* 404 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 406 */	NdrFcShort( 0x2 ),	/* Offset= 2 (408) */
/* 408 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 410 */	NdrFcLong( 0x266a5021 ),	/* 644501537 */
/* 414 */	NdrFcShort( 0xf4d7 ),	/* -2857 */
/* 416 */	NdrFcShort( 0x3457 ),	/* 13399 */
/* 418 */	0x8c,		/* 140 */
			0x28,		/* 40 */
/* 420 */	0x0,		/* 0 */
			0xc7,		/* 199 */
/* 422 */	0xa3,		/* 163 */
			0x86,		/* 134 */
/* 424 */	0xab,		/* 171 */
			0xde,		/* 222 */
/* 426 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 428 */	NdrFcShort( 0x2 ),	/* Offset= 2 (430) */
/* 430 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 432 */	NdrFcLong( 0x7d605cc9 ),	/* 2103467209 */
/* 436 */	NdrFcShort( 0x6ff4 ),	/* 28660 */
/* 438 */	NdrFcShort( 0x3d58 ),	/* 15704 */
/* 440 */	0x99,		/* 153 */
			0x76,		/* 118 */
/* 442 */	0xf2,		/* 242 */
			0x3c,		/* 60 */
/* 444 */	0x30,		/* 48 */
			0xd4,		/* 212 */
/* 446 */	0xae,		/* 174 */
			0xd5,		/* 213 */
/* 448 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 450 */	NdrFcLong( 0xbd3cc691 ),	/* -1120090479 */
/* 454 */	NdrFcShort( 0xdaaf ),	/* -9553 */
/* 456 */	NdrFcShort( 0x35dd ),	/* 13789 */
/* 458 */	0x9c,		/* 156 */
			0xda,		/* 218 */
/* 460 */	0x24,		/* 36 */
			0x2b,		/* 43 */
/* 462 */	0x70,		/* 112 */
			0xbd,		/* 189 */
/* 464 */	0xf5,		/* 245 */
			0xdc,		/* 220 */
/* 466 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 468 */	NdrFcLong( 0x1ba29f65 ),	/* 463642469 */
/* 472 */	NdrFcShort( 0x9abb ),	/* -25925 */
/* 474 */	NdrFcShort( 0x3024 ),	/* 12324 */
/* 476 */	0x82,		/* 130 */
			0x21,		/* 33 */
/* 478 */	0xa9,		/* 169 */
			0x8c,		/* 140 */
/* 480 */	0xdb,		/* 219 */
			0x0,		/* 0 */
/* 482 */	0x88,		/* 136 */
			0x87,		/* 135 */
/* 484 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 486 */	NdrFcLong( 0x357645ec ),	/* 896943596 */
/* 490 */	NdrFcShort( 0x98bf ),	/* -26433 */
/* 492 */	NdrFcShort( 0x3baf ),	/* 15279 */
/* 494 */	0x8b,		/* 139 */
			0x97,		/* 151 */
/* 496 */	0x33,		/* 51 */
			0x38,		/* 56 */
/* 498 */	0x78,		/* 120 */
			0x33,		/* 51 */
/* 500 */	0x97,		/* 151 */
			0xcb,		/* 203 */
/* 502 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 504 */	NdrFcLong( 0x31ac4c99 ),	/* 833375385 */
/* 508 */	NdrFcShort( 0x4fe9 ),	/* 20457 */
/* 510 */	NdrFcShort( 0x3cce ),	/* 15566 */
/* 512 */	0x89,		/* 137 */
			0xb5,		/* 181 */
/* 514 */	0xc,		/* 12 */
			0x27,		/* 39 */
/* 516 */	0x50,		/* 80 */
			0xcc,		/* 204 */
/* 518 */	0xee,		/* 238 */
			0xa7,		/* 167 */
/* 520 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 522 */	NdrFcShort( 0x2 ),	/* Offset= 2 (524) */
/* 524 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 526 */	NdrFcLong( 0xaaca3593 ),	/* -1429588589 */
/* 530 */	NdrFcShort( 0xcefb ),	/* -12549 */
/* 532 */	NdrFcShort( 0x373e ),	/* 14142 */
/* 534 */	0xa2,		/* 162 */
			0x29,		/* 41 */
/* 536 */	0x85,		/* 133 */
			0x3c,		/* 60 */
/* 538 */	0x78,		/* 120 */
			0xad,		/* 173 */
/* 540 */	0x59,		/* 89 */
			0x21,		/* 33 */
/* 542 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 544 */	NdrFcShort( 0x2 ),	/* Offset= 2 (546) */
/* 546 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 548 */	NdrFcLong( 0x6a30534c ),	/* 1781551948 */
/* 552 */	NdrFcShort( 0x9226 ),	/* -28122 */
/* 554 */	NdrFcShort( 0x3450 ),	/* 13392 */
/* 556 */	0x86,		/* 134 */
			0x1f,		/* 31 */
/* 558 */	0x8d,		/* 141 */
			0x92,		/* 146 */
/* 560 */	0xe2,		/* 226 */
			0x41,		/* 65 */
/* 562 */	0xd6,		/* 214 */
			0x11,		/* 17 */
/* 564 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 566 */	NdrFcShort( 0x2 ),	/* Offset= 2 (568) */
/* 568 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 570 */	NdrFcLong( 0x7aa94f17 ),	/* 2057916183 */
/* 574 */	NdrFcShort( 0xfbeb ),	/* -1045 */
/* 576 */	NdrFcShort( 0x3fac ),	/* 16300 */
/* 578 */	0x92,		/* 146 */
			0xed,		/* 237 */
/* 580 */	0x89,		/* 137 */
			0x8f,		/* 143 */
/* 582 */	0xb9,		/* 185 */
			0xf4,		/* 244 */
/* 584 */	0xed,		/* 237 */
			0xc7,		/* 199 */
/* 586 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 588 */	NdrFcShort( 0x2 ),	/* Offset= 2 (590) */
/* 590 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 592 */	NdrFcLong( 0x8d8bfb47 ),	/* -1920206009 */
/* 596 */	NdrFcShort( 0xbe91 ),	/* -16751 */
/* 598 */	NdrFcShort( 0x3e55 ),	/* 15957 */
/* 600 */	0xad,		/* 173 */
			0x42,		/* 66 */
/* 602 */	0x51,		/* 81 */
			0xa6,		/* 166 */
/* 604 */	0xf8,		/* 248 */
			0xe0,		/* 224 */
/* 606 */	0x19,		/* 25 */
			0xa,		/* 10 */
/* 608 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 610 */	NdrFcShort( 0x2 ),	/* Offset= 2 (612) */
/* 612 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 614 */	NdrFcLong( 0xd34b80f8 ),	/* -750026504 */
/* 618 */	NdrFcShort( 0x410c ),	/* 16652 */
/* 620 */	NdrFcShort( 0x3a42 ),	/* 14914 */
/* 622 */	0xaa,		/* 170 */
			0x6,		/* 6 */
/* 624 */	0x29,		/* 41 */
			0x6e,		/* 110 */
/* 626 */	0xb6,		/* 182 */
			0xa8,		/* 168 */
/* 628 */	0xe2,		/* 226 */
			0xb1,		/* 177 */
/* 630 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 632 */	NdrFcShort( 0x2 ),	/* Offset= 2 (634) */
/* 634 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 636 */	NdrFcLong( 0xe3f89f64 ),	/* -470245532 */
/* 640 */	NdrFcShort( 0xb94a ),	/* -18102 */
/* 642 */	NdrFcShort( 0x368b ),	/* 13963 */
/* 644 */	0x90,		/* 144 */
			0x82,		/* 130 */
/* 646 */	0x93,		/* 147 */
			0xaf,		/* 175 */
/* 648 */	0x84,		/* 132 */
			0xf8,		/* 248 */
/* 650 */	0xbb,		/* 187 */
			0x1f,		/* 31 */
/* 652 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 654 */	NdrFcLong( 0x65780faa ),	/* 1702367146 */
/* 658 */	NdrFcShort( 0x8ebb ),	/* -28997 */
/* 660 */	NdrFcShort( 0x375d ),	/* 14173 */
/* 662 */	0xb0,		/* 176 */
			0x4c,		/* 76 */
/* 664 */	0x47,		/* 71 */
			0x55,		/* 85 */
/* 666 */	0x5d,		/* 93 */
			0xf,		/* 15 */
/* 668 */	0x28,		/* 40 */
			0x45,		/* 69 */
/* 670 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 672 */	NdrFcLong( 0x5fb380dd ),	/* 1605599453 */
/* 676 */	NdrFcShort( 0x95d ),	/* 2397 */
/* 678 */	NdrFcShort( 0x32d4 ),	/* 13012 */
/* 680 */	0xac,		/* 172 */
			0xe4,		/* 228 */
/* 682 */	0x79,		/* 121 */
			0x91,		/* 145 */
/* 684 */	0x51,		/* 81 */
			0x6f,		/* 111 */
/* 686 */	0xd8,		/* 216 */
			0xea,		/* 234 */
/* 688 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 690 */	NdrFcLong( 0x731a866b ),	/* 1931118187 */
/* 694 */	NdrFcShort( 0x4b61 ),	/* 19297 */
/* 696 */	NdrFcShort( 0x3a41 ),	/* 14913 */
/* 698 */	0x9f,		/* 159 */
			0x4b,		/* 75 */
/* 700 */	0xd,		/* 13 */
			0xa7,		/* 167 */
/* 702 */	0x32,		/* 50 */
			0x2f,		/* 47 */
/* 704 */	0x1a,		/* 26 */
			0xa7,		/* 167 */
/* 706 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 708 */	NdrFcLong( 0xd6d6adfb ),	/* -690573829 */
/* 712 */	NdrFcShort( 0x954a ),	/* -27318 */
/* 714 */	NdrFcShort( 0x36f7 ),	/* 14071 */
/* 716 */	0xb3,		/* 179 */
			0x6b,		/* 107 */
/* 718 */	0x51,		/* 81 */
			0xfd,		/* 253 */
/* 720 */	0x40,		/* 64 */
			0x91,		/* 145 */
/* 722 */	0xfe,		/* 254 */
			0xda,		/* 218 */
/* 724 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 726 */	NdrFcLong( 0x3e3607d8 ),	/* 1043728344 */
/* 730 */	NdrFcShort( 0x9ca6 ),	/* -25434 */
/* 732 */	NdrFcShort( 0x3cd2 ),	/* 15570 */
/* 734 */	0x9c,		/* 156 */
			0x82,		/* 130 */
/* 736 */	0x44,		/* 68 */
			0x78,		/* 120 */
/* 738 */	0x58,		/* 88 */
			0xc,		/* 12 */
/* 740 */	0x86,		/* 134 */
			0xd1,		/* 209 */
/* 742 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 744 */	NdrFcLong( 0x1126de2 ),	/* 17984994 */
/* 748 */	NdrFcShort( 0xdb09 ),	/* -9463 */
/* 750 */	NdrFcShort( 0x3456 ),	/* 13398 */
/* 752 */	0x93,		/* 147 */
			0xc8,		/* 200 */
/* 754 */	0x5,		/* 5 */
			0x17,		/* 23 */
/* 756 */	0xc3,		/* 195 */
			0xf9,		/* 249 */
/* 758 */	0x63,		/* 99 */
			0xd5,		/* 213 */
/* 760 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 762 */	NdrFcLong( 0xec75de12 ),	/* -327819758 */
/* 766 */	NdrFcShort( 0xc356 ),	/* -15530 */
/* 768 */	NdrFcShort( 0x33fd ),	/* 13309 */
/* 770 */	0xb8,		/* 184 */
			0xaf,		/* 175 */
/* 772 */	0xae,		/* 174 */
			0x4a,		/* 74 */
/* 774 */	0xb0,		/* 176 */
			0x54,		/* 84 */
/* 776 */	0x14,		/* 20 */
			0xa5,		/* 165 */
/* 778 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 780 */	NdrFcLong( 0x599ee12a ),	/* 1503584554 */
/* 784 */	NdrFcShort( 0x5485 ),	/* 21637 */
/* 786 */	NdrFcShort( 0x3d18 ),	/* 15640 */
/* 788 */	0x9a,		/* 154 */
			0xce,		/* 206 */
/* 790 */	0xf0,		/* 240 */
			0x88,		/* 136 */
/* 792 */	0x5d,		/* 93 */
			0x29,		/* 41 */
/* 794 */	0x45,		/* 69 */
			0x5e,		/* 94 */
/* 796 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 798 */	NdrFcLong( 0x9f4a8862 ),	/* -1622505374 */
/* 802 */	NdrFcShort( 0x8482 ),	/* -31614 */
/* 804 */	NdrFcShort( 0x3083 ),	/* 12419 */
/* 806 */	0xb2,		/* 178 */
			0x4c,		/* 76 */
/* 808 */	0x79,		/* 121 */
			0x67,		/* 103 */
/* 810 */	0x37,		/* 55 */
			0xfd,		/* 253 */
/* 812 */	0xf4,		/* 244 */
			0x2b,		/* 43 */
/* 814 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 816 */	NdrFcShort( 0x2 ),	/* Offset= 2 (818) */
/* 818 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 820 */	NdrFcLong( 0x9bfb53ad ),	/* -1678027859 */
/* 824 */	NdrFcShort( 0xbfc4 ),	/* -16444 */
/* 826 */	NdrFcShort( 0x3784 ),	/* 14212 */
/* 828 */	0x9e,		/* 158 */
			0x6d,		/* 109 */
/* 830 */	0x68,		/* 104 */
			0x39,		/* 57 */
/* 832 */	0xb5,		/* 181 */
			0xe8,		/* 232 */
/* 834 */	0x73,		/* 115 */
			0x20,		/* 32 */
/* 836 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 838 */	NdrFcShort( 0x2 ),	/* Offset= 2 (840) */
/* 840 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 842 */	NdrFcLong( 0xf68542f0 ),	/* -159038736 */
/* 846 */	NdrFcShort( 0xf6c6 ),	/* -2362 */
/* 848 */	NdrFcShort( 0x3de5 ),	/* 15845 */
/* 850 */	0x86,		/* 134 */
			0xfe,		/* 254 */
/* 852 */	0x31,		/* 49 */
			0xe2,		/* 226 */
/* 854 */	0xad,		/* 173 */
			0xd4,		/* 212 */
/* 856 */	0xe4,		/* 228 */
			0x1e,		/* 30 */
/* 858 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 860 */	NdrFcShort( 0x2 ),	/* Offset= 2 (862) */
/* 862 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 864 */	NdrFcLong( 0x266a5021 ),	/* 644501537 */
/* 868 */	NdrFcShort( 0xf4d7 ),	/* -2857 */
/* 870 */	NdrFcShort( 0x3457 ),	/* 13399 */
/* 872 */	0x8c,		/* 140 */
			0x28,		/* 40 */
/* 874 */	0x0,		/* 0 */
			0xc7,		/* 199 */
/* 876 */	0xa3,		/* 163 */
			0x86,		/* 134 */
/* 878 */	0xab,		/* 171 */
			0xde,		/* 222 */
/* 880 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 882 */	NdrFcShort( 0x2 ),	/* Offset= 2 (884) */
/* 884 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 886 */	NdrFcLong( 0x7d605cc9 ),	/* 2103467209 */
/* 890 */	NdrFcShort( 0x6ff4 ),	/* 28660 */
/* 892 */	NdrFcShort( 0x3d58 ),	/* 15704 */
/* 894 */	0x99,		/* 153 */
			0x76,		/* 118 */
/* 896 */	0xf2,		/* 242 */
			0x3c,		/* 60 */
/* 898 */	0x30,		/* 48 */
			0xd4,		/* 212 */
/* 900 */	0xae,		/* 174 */
			0xd5,		/* 213 */
/* 902 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 904 */	NdrFcShort( 0x2 ),	/* Offset= 2 (906) */
/* 906 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 908 */	NdrFcLong( 0x746afeab ),	/* 1953169067 */
/* 912 */	NdrFcShort( 0x72 ),	/* 114 */
/* 914 */	NdrFcShort( 0x38fe ),	/* 14590 */
/* 916 */	0xb1,		/* 177 */
			0xa7,		/* 167 */
/* 918 */	0x21,		/* 33 */
			0x77,		/* 119 */
/* 920 */	0xb,		/* 11 */
			0xe6,		/* 230 */
/* 922 */	0x4a,		/* 74 */
			0x4a,		/* 74 */
/* 924 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 926 */	NdrFcShort( 0x2 ),	/* Offset= 2 (928) */
/* 928 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 930 */	NdrFcLong( 0xaaca3593 ),	/* -1429588589 */
/* 934 */	NdrFcShort( 0xcefb ),	/* -12549 */
/* 936 */	NdrFcShort( 0x373e ),	/* 14142 */
/* 938 */	0xa2,		/* 162 */
			0x29,		/* 41 */
/* 940 */	0x85,		/* 133 */
			0x3c,		/* 60 */
/* 942 */	0x78,		/* 120 */
			0xad,		/* 173 */
/* 944 */	0x59,		/* 89 */
			0x21,		/* 33 */
/* 946 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 948 */	NdrFcShort( 0x2 ),	/* Offset= 2 (950) */
/* 950 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 952 */	NdrFcLong( 0x6a30534c ),	/* 1781551948 */
/* 956 */	NdrFcShort( 0x9226 ),	/* -28122 */
/* 958 */	NdrFcShort( 0x3450 ),	/* 13392 */
/* 960 */	0x86,		/* 134 */
			0x1f,		/* 31 */
/* 962 */	0x8d,		/* 141 */
			0x92,		/* 146 */
/* 964 */	0xe2,		/* 226 */
			0x41,		/* 65 */
/* 966 */	0xd6,		/* 214 */
			0x11,		/* 17 */
/* 968 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 970 */	NdrFcShort( 0x2 ),	/* Offset= 2 (972) */
/* 972 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 974 */	NdrFcLong( 0x7aa94f17 ),	/* 2057916183 */
/* 978 */	NdrFcShort( 0xfbeb ),	/* -1045 */
/* 980 */	NdrFcShort( 0x3fac ),	/* 16300 */
/* 982 */	0x92,		/* 146 */
			0xed,		/* 237 */
/* 984 */	0x89,		/* 137 */
			0x8f,		/* 143 */
/* 986 */	0xb9,		/* 185 */
			0xf4,		/* 244 */
/* 988 */	0xed,		/* 237 */
			0xc7,		/* 199 */
/* 990 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 992 */	NdrFcShort( 0x2 ),	/* Offset= 2 (994) */
/* 994 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 996 */	NdrFcLong( 0x8d8bfb47 ),	/* -1920206009 */
/* 1000 */	NdrFcShort( 0xbe91 ),	/* -16751 */
/* 1002 */	NdrFcShort( 0x3e55 ),	/* 15957 */
/* 1004 */	0xad,		/* 173 */
			0x42,		/* 66 */
/* 1006 */	0x51,		/* 81 */
			0xa6,		/* 166 */
/* 1008 */	0xf8,		/* 248 */
			0xe0,		/* 224 */
/* 1010 */	0x19,		/* 25 */
			0xa,		/* 10 */
/* 1012 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1014 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1016) */
/* 1016 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1018 */	NdrFcLong( 0xd34b80f8 ),	/* -750026504 */
/* 1022 */	NdrFcShort( 0x410c ),	/* 16652 */
/* 1024 */	NdrFcShort( 0x3a42 ),	/* 14914 */
/* 1026 */	0xaa,		/* 170 */
			0x6,		/* 6 */
/* 1028 */	0x29,		/* 41 */
			0x6e,		/* 110 */
/* 1030 */	0xb6,		/* 182 */
			0xa8,		/* 168 */
/* 1032 */	0xe2,		/* 226 */
			0xb1,		/* 177 */
/* 1034 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1036 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1038) */
/* 1038 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1040 */	NdrFcLong( 0xe3f89f64 ),	/* -470245532 */
/* 1044 */	NdrFcShort( 0xb94a ),	/* -18102 */
/* 1046 */	NdrFcShort( 0x368b ),	/* 13963 */
/* 1048 */	0x90,		/* 144 */
			0x82,		/* 130 */
/* 1050 */	0x93,		/* 147 */
			0xaf,		/* 175 */
/* 1052 */	0x84,		/* 132 */
			0xf8,		/* 248 */
/* 1054 */	0xbb,		/* 187 */
			0x1f,		/* 31 */
/* 1056 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1058 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1060) */
/* 1060 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1062 */	NdrFcLong( 0x6d43145f ),	/* 1833112671 */
/* 1066 */	NdrFcShort( 0xfc50 ),	/* -944 */
/* 1068 */	NdrFcShort( 0x3fd7 ),	/* 16343 */
/* 1070 */	0x9d,		/* 157 */
			0x1f,		/* 31 */
/* 1072 */	0xbc,		/* 188 */
			0x47,		/* 71 */
/* 1074 */	0x89,		/* 137 */
			0xaa,		/* 170 */
/* 1076 */	0x9c,		/* 156 */
			0xed,		/* 237 */
/* 1078 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1080 */	NdrFcShort( 0xfdac ),	/* Offset= -596 (484) */
/* 1082 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1084 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1086) */
/* 1086 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1088 */	NdrFcLong( 0x4868ddc4 ),	/* 1214832068 */
/* 1092 */	NdrFcShort( 0x3353 ),	/* 13139 */
/* 1094 */	NdrFcShort( 0x3344 ),	/* 13124 */
/* 1096 */	0x84,		/* 132 */
			0x2d,		/* 45 */
/* 1098 */	0xeb,		/* 235 */
			0x96,		/* 150 */
/* 1100 */	0xac,		/* 172 */
			0x83,		/* 131 */
/* 1102 */	0x71,		/* 113 */
			0xb9,		/* 185 */
/* 1104 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1106 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1108) */
/* 1108 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1110 */	NdrFcLong( 0x5fc37d6 ),	/* 100415446 */
/* 1114 */	NdrFcShort( 0xff7f ),	/* -129 */
/* 1116 */	NdrFcShort( 0x3d9f ),	/* 15775 */
/* 1118 */	0xa6,		/* 166 */
			0xfd,		/* 253 */
/* 1120 */	0x77,		/* 119 */
			0x5d,		/* 93 */
/* 1122 */	0xd1,		/* 209 */
			0x43,		/* 67 */
/* 1124 */	0x72,		/* 114 */
			0xad,		/* 173 */
/* 1126 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1128 */	NdrFcLong( 0x3f230803 ),	/* 1059260419 */
/* 1132 */	NdrFcShort( 0xd28d ),	/* -11635 */
/* 1134 */	NdrFcShort( 0x3153 ),	/* 12627 */
/* 1136 */	0xa0,		/* 160 */
			0x7c,		/* 124 */
/* 1138 */	0x7f,		/* 127 */
			0x9f,		/* 159 */
/* 1140 */	0xd9,		/* 217 */
			0xc9,		/* 201 */
/* 1142 */	0x1e,		/* 30 */
			0x43,		/* 67 */
/* 1144 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1146 */	NdrFcLong( 0x19bab5b7 ),	/* 431666615 */
/* 1150 */	NdrFcShort( 0xa2fc ),	/* -23812 */
/* 1152 */	NdrFcShort( 0x3714 ),	/* 14100 */
/* 1154 */	0x9a,		/* 154 */
			0x50,		/* 80 */
/* 1156 */	0x91,		/* 145 */
			0x33,		/* 51 */
/* 1158 */	0x51,		/* 81 */
			0x61,		/* 97 */
/* 1160 */	0x6b,		/* 107 */
			0xaa,		/* 170 */
/* 1162 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1164 */	NdrFcLong( 0xbeef9a82 ),	/* -1091593598 */
/* 1168 */	NdrFcShort( 0x3e32 ),	/* 15922 */
/* 1170 */	NdrFcShort( 0x3adb ),	/* 15067 */
/* 1172 */	0xa7,		/* 167 */
			0x50,		/* 80 */
/* 1174 */	0x9,		/* 9 */
			0xc0,		/* 192 */
/* 1176 */	0x20,		/* 32 */
			0xb2,		/* 178 */
/* 1178 */	0x51,		/* 81 */
			0x94,		/* 148 */
/* 1180 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1182 */	NdrFcLong( 0xeb16f8ec ),	/* -350816020 */
/* 1186 */	NdrFcShort( 0x3180 ),	/* 12672 */
/* 1188 */	NdrFcShort( 0x35c4 ),	/* 13764 */
/* 1190 */	0xa4,		/* 164 */
			0xd8,		/* 216 */
/* 1192 */	0xa9,		/* 169 */
			0xd7,		/* 215 */
/* 1194 */	0x34,		/* 52 */
			0x27,		/* 39 */
/* 1196 */	0xe4,		/* 228 */
			0xfa,		/* 250 */
/* 1198 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1200 */	NdrFcLong( 0x79981920 ),	/* 2040011040 */
/* 1204 */	NdrFcShort( 0x108e ),	/* 4238 */
/* 1206 */	NdrFcShort( 0x3eff ),	/* 16127 */
/* 1208 */	0xbf,		/* 191 */
			0xfb,		/* 251 */
/* 1210 */	0x14,		/* 20 */
			0x35,		/* 53 */
/* 1212 */	0x77,		/* 119 */
			0x7b,		/* 123 */
/* 1214 */	0x55,		/* 85 */
			0xa0,		/* 160 */
/* 1216 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1218 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1220) */
/* 1220 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1222 */	NdrFcLong( 0x5fc37d6 ),	/* 100415446 */
/* 1226 */	NdrFcShort( 0xff7f ),	/* -129 */
/* 1228 */	NdrFcShort( 0x3d9f ),	/* 15775 */
/* 1230 */	0xa6,		/* 166 */
			0xfd,		/* 253 */
/* 1232 */	0x77,		/* 119 */
			0x5d,		/* 93 */
/* 1234 */	0xd1,		/* 209 */
			0x43,		/* 67 */
/* 1236 */	0x72,		/* 114 */
			0xad,		/* 173 */
/* 1238 */	
			0x11, 0x0,	/* FC_RP */
/* 1240 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1242) */
/* 1242 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1246 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 1248 */	NdrFcShort( 0x4 ),	/* ARM Stack size/offset = 4 */
/* 1250 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1252 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1256 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1258 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1260 */	NdrFcShort( 0xfb42 ),	/* Offset= -1214 (46) */
/* 1262 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1264 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1266 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1268) */
/* 1268 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1270 */	NdrFcLong( 0xf8f3ebee ),	/* -118232082 */
/* 1274 */	NdrFcShort( 0x94d ),	/* 2381 */
/* 1276 */	NdrFcShort( 0x38d5 ),	/* 14549 */
/* 1278 */	0x84,		/* 132 */
			0xa,		/* 10 */
/* 1280 */	0x25,		/* 37 */
			0x47,		/* 71 */
/* 1282 */	0x10,		/* 16 */
			0xae,		/* 174 */
/* 1284 */	0x90,		/* 144 */
			0x91,		/* 145 */
/* 1286 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1288 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1290) */
/* 1290 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1292 */	NdrFcLong( 0xcc5b3c10 ),	/* -866436080 */
/* 1296 */	NdrFcShort( 0x588d ),	/* 22669 */
/* 1298 */	NdrFcShort( 0x37c4 ),	/* 14276 */
/* 1300 */	0x81,		/* 129 */
			0x8a,		/* 138 */
/* 1302 */	0x97,		/* 151 */
			0xdd,		/* 221 */
/* 1304 */	0xa8,		/* 168 */
			0xc1,		/* 193 */
/* 1306 */	0xd5,		/* 213 */
			0xdc,		/* 220 */
/* 1308 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1310 */	NdrFcLong( 0x1fc46173 ),	/* 532963699 */
/* 1314 */	NdrFcShort( 0x3072 ),	/* 12402 */
/* 1316 */	NdrFcShort( 0x316e ),	/* 12654 */
/* 1318 */	0x8c,		/* 140 */
			0x9c,		/* 156 */
/* 1320 */	0xa,		/* 10 */
			0x6,		/* 6 */
/* 1322 */	0xf5,		/* 245 */
			0x38,		/* 56 */
/* 1324 */	0x2,		/* 2 */
			0x2c,		/* 44 */
/* 1326 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1328 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1330) */
/* 1330 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1334 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1336 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1338 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1340) */
/* 1340 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1342 */	NdrFcLong( 0x2f22cc8a ),	/* 790809738 */
/* 1346 */	NdrFcShort( 0x1fa9 ),	/* 8105 */
/* 1348 */	NdrFcShort( 0x3ef8 ),	/* 16120 */
/* 1350 */	0xbd,		/* 189 */
			0x69,		/* 105 */
/* 1352 */	0xa1,		/* 161 */
			0xb6,		/* 182 */
/* 1354 */	0x1a,		/* 26 */
			0x69,		/* 105 */
/* 1356 */	0x6f,		/* 111 */
			0x3c,		/* 60 */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            HSTRING_UserSize
            ,HSTRING_UserMarshal
            ,HSTRING_UserUnmarshal
            ,HSTRING_UserFree
            }

        };



/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler, ver. 0.0,
   GUID={0x1FC46173,0x3072,0x316E,{0x8C,0x9C,0x0A,0x06,0xF5,0x38,0x02,0x2C}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) ___x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandlerProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler::Invoke */
};

const CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandlerStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IInspectable, ver. 0.0,
   GUID={0xAF86E2E0,0xB12D,0x4c6a,{0x9C,0x5A,0xD7,0xAA,0x65,0x10,0x1E,0x90}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals, ver. 0.0,
   GUID={0x1BA29F65,0x9ABB,0x3024,{0x82,0x21,0xA9,0x8C,0xDB,0x00,0x88,0x87}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    58,
    114,
    162,
    210,
    266,
    328
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals::addHeader */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals::addPayload */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals::setActiveMedia */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals::setResponseLine */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals::setMediaString */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals::setMediaInt */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals_ServerInfo,
    12,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0002, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback, ver. 0.0,
   GUID={0xEA0B2968,0x7AD4,0x3D5C,{0xAA,0xD3,0x2A,0xEF,0xB3,0xAC,0xD2,0xE7}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    390,
    438,
    486,
    534
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) ___x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallbackProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback::OnDebugInfo */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback::OnDebugWarn */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback::OnDebugError */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback::OnDebugFatal */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallbackStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback_ServerInfo,
    10,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0003, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals, ver. 0.0,
   GUID={0xF8BB64E3,0x54A8,0x3060,{0x93,0x10,0x0D,0x73,0xB4,0xC5,0xD4,0x23}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtualsProxyVtbl = 
{
    0,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals_ServerInfo,
    6,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0004, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals, ver. 0.0,
   GUID={0x8DD1CD82,0xF943,0x3715,{0xB5,0x10,0xF8,0xD9,0xF2,0x10,0xD7,0x5D}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    582,
    624,
    666,
    708,
    750,
    792,
    834
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals::getMediaType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals::getName */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals::getDescription */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals::getNegFormat */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals::getAudioSamplingRate */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals::getAudioChannels */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals::getAudioPTime */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals_ServerInfo,
    13,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0005, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals, ver. 0.0,
   GUID={0x040D7757,0x114C,0x3581,{0x8E,0xF9,0xD6,0x40,0x25,0x6C,0x0C,0x14}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    876,
    938,
    994,
    1056,
    1120,
    1182,
    1246,
    1294
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals::sessionSetInt32 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals::sessionGetInt32 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals::consumerSetInt32 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals::consumerSetInt64 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals::producerSetInt32 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals::producerSetInt64 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals::producerGetCodec */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals::getSessionId */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals_ServerInfo,
    14,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0006, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics, ver. 0.0,
   GUID={0x5E3981B2,0x9A97,0x38D1,{0xB0,0xD2,0x48,0xB2,0xFF,0xB7,0xB4,0x75}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    390
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStaticsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics::registerAudioPluginFromFile */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStaticsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0007, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals, ver. 0.0,
   GUID={0x72089DC3,0x5600,0x3F9E,{0x89,0xA9,0x35,0xD5,0x0E,0x35,0x03,0x48}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1342,
    1384,
    1426
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals::get_Start */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals::get_End */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals::get_Total */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals_ServerInfo,
    9,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0008, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals, ver. 0.0,
   GUID={0xB92764BB,0xF11D,0x3BD1,{0x8D,0xEA,0xB1,0x33,0xCE,0x9B,0xF5,0xF7}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1468,
    1510,
    666,
    1552,
    1594,
    1636,
    1678,
    1720,
    1762,
    1810,
    1866,
    1908
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(18) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::isRequest */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::getCode */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::getPhrase */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::getRequestType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::getByteRange */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::isLastChunck */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::isFirstChunck */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::isSuccessReport */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::getMsrpHeaderValue */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::getMsrpHeaderParamValue */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::getMsrpContentLength */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals::getMsrpContent */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals_ServerInfo,
    18,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0009, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals, ver. 0.0,
   GUID={0xE4EFFEF8,0x5C8D,0x389A,{0xBE,0xA7,0x7E,0x14,0xE2,0xA0,0xAA,0x95}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    582,
    1956,
    1998
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals::getType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals::getSipSession */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals::getMessage */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals_ServerInfo,
    9,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0010, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback, ver. 0.0,
   GUID={0xBD3CC691,0xDAAF,0x35DD,{0x9C,0xDA,0x24,0x2B,0x70,0xBD,0xF5,0xDC}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2040
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallbackProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback::OnEvent */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallbackStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0011, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals, ver. 0.0,
   GUID={0x38A8B79D,0x5679,0x3AF4,{0xBD,0x1C,0xD2,0x7D,0xE0,0x49,0x4B,0x1D}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtualsProxyVtbl = 
{
    0,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals_ServerInfo,
    6,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0012, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals, ver. 0.0,
   GUID={0x944BB133,0x86E3,0x3FB3,{0xBC,0xF5,0xFD,0x12,0xB6,0x6E,0x3B,0xA6}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2088,
    624
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals::get_Port */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals::get_Address */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals_ServerInfo,
    8,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0013, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals, ver. 0.0,
   GUID={0x31AC4C99,0x4FE9,0x3CCE,{0x89,0xB5,0x0C,0x27,0x50,0xCC,0xEE,0xA7}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1468,
    2130,
    2178,
    2226,
    2274,
    2322,
    2370,
    2418,
    2466,
    2514,
    2584,
    2640,
    2688,
    2744,
    2792,
    2840,
    2896,
    2944,
    2992,
    3040,
    3096,
    3166,
    3214,
    3262,
    3318,
    3374,
    3422,
    3492,
    3554,
    3602,
    3672,
    3734,
    3790,
    3838,
    3886,
    3934,
    3976,
    4018
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(44) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::start */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setDebugCallback */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setDisplayName */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setRealm */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setIMPI */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setIMPU */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setPassword */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setAMF */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setOperatorId */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setProxyCSCF */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setLocalIP2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setLocalIP1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setLocalPort2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setLocalPort1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setEarlyIMS */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::addHeader */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::removeHeader */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::addDnsServer */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setDnsDiscovery */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setAoR */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setSigCompParams */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::addSigCompCompartment */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::removeSigCompCompartment */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setSTUNServer */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setSTUNCred */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setTLSSecAgree */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setSSLCertificates2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setSSLCertificates1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setIPSecSecAgree */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::setIPSecParameters */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::dnsENUM */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::dnsNaptrSrv */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::dnsSrv */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::getLocalIP */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::getLocalPort */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::getPreferredIdentity */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::isValid */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals::stop */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals_ServerInfo,
    44,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0014, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics, ver. 0.0,
   GUID={0x102E8833,0xDCF3,0x3111,{0x82,0x52,0x66,0xAE,0x5C,0x84,0x70,0x73}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1468,
    4060,
    4102,
    4144,
    4200
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStaticsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics::initialize */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics::deInitialize */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics::setCodecs */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics::setCodecPriority */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics::isCodecSupported */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStaticsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics_ServerInfo,
    11,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0015, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals, ver. 0.0,
   GUID={0x357645EC,0x98BF,0x3BAF,{0x8B,0x97,0x33,0x38,0x78,0x33,0x97,0xCB}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1468,
    624,
    666,
    4248,
    4290,
    4332,
    4374,
    4416,
    4464
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(15) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals::isValid_ */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals::getScheme */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals::getHost */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals::getPort */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals::getUserName */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals::getPassword */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals::getDisplayName */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals::getParamValue */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals::setDisplayName */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals_ServerInfo,
    15,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0016, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory, ver. 0.0,
   GUID={0x44A6D232,0xAE6A,0x398C,{0xAB,0x6A,0x78,0xD4,0xEE,0x5B,0x8B,0x5C}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4506,
    4562
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory::CreateInstance2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory_ServerInfo,
    8,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0017, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics, ver. 0.0,
   GUID={0xF04BF842,0xDE0A,0x31B9,{0xB1,0xCB,0x42,0xCA,0xD4,0x04,0x06,0x66}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4610
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStaticsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics::isValid */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStaticsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0018, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals, ver. 0.0,
   GUID={0x19F9A6F1,0xE76C,0x321C,{0xBA,0x0A,0x78,0xDB,0xA8,0x0E,0xC2,0x30}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtualsProxyVtbl = 
{
    0,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals_ServerInfo,
    6,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0019, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback, ver. 0.0,
   GUID={0xFBC56EE2,0x7375,0x3F53,{0x91,0xD3,0x85,0x30,0x79,0x19,0x31,0x84}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4658
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_CrtIT140CallbackProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback::ondata */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CrtIT140CallbackStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0020, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals, ver. 0.0,
   GUID={0x540329E3,0x8DD6,0x391C,{0x9E,0xBD,0x4D,0x73,0x8E,0x1C,0x04,0xF0}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4658
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals::ondata */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0021, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory, ver. 0.0,
   GUID={0x1275BFA1,0x5793,0x318F,{0x97,0xCD,0xD3,0x4C,0xDF,0x95,0x37,0x75}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4706
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0022, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession, ver. 0.0,
   GUID={0x9BFB53AD,0xBFC4,0x3784,{0x9E,0x6D,0x68,0x39,0xB5,0xE8,0x73,0x20}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4754,
    4060,
    4796,
    2226,
    4852,
    2322,
    4908,
    4956,
    5004,
    5052,
    5100,
    5148
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(18) ___x_ABI_Cdoubango__rt_CBackEnd_CrtISipSessionProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::getId */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::haveOwnership */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::addHeader */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::removeHeader */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::addCaps */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::removeCaps */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::setExpires */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::setFromUri */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::setToUri */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::setSilentHangup */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::addSigCompCompartment */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession::removeSigCompCompartment */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CrtISipSessionStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession_ServerInfo,
    18,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0023, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession, ver. 0.0,
   GUID={0xA93DFA4F,0x7D83,0x32D0,{0xB8,0x66,0xCC,0x9F,0xC5,0x7D,0x72,0x25}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5190,
    5238,
    5286,
    5334,
    5396
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) ___x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSessionProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession::accept */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession::hangup */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession::reject */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession::sendInfo */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession::getMediaMgr */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSessionStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession_ServerInfo,
    11,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0024, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals, ver. 0.0,
   GUID={0x6ACF024C,0x5FA2,0x3607,{0x92,0xB2,0x67,0x74,0x05,0xC7,0x55,0x19}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtualsProxyVtbl = 
{
    0,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals_ServerInfo,
    6,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0025, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory, ver. 0.0,
   GUID={0x6EEC00B8,0x8AFD,0x3C0D,{0x9E,0xE6,0xBB,0x0B,0xD3,0xFE,0x76,0x1A}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5438
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0026, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals, ver. 0.0,
   GUID={0x266A5021,0xF4D7,0x3457,{0x8C,0x28,0x00,0xC7,0xA3,0x86,0xAB,0xDE}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtualsProxyVtbl = 
{
    0,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals_ServerInfo,
    6,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0027, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory, ver. 0.0,
   GUID={0x8102D159,0x281E,0x397D,{0xB6,0xDD,0xAB,0x94,0x05,0x98,0x20,0xA7}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5486
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0028, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals, ver. 0.0,
   GUID={0x7D605CC9,0x6FF4,0x3D58,{0x99,0x76,0xF2,0x3C,0x30,0xD4,0xAE,0xD5}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5534,
    5596,
    5652,
    5714,
    5770,
    5826,
    5874,
    5922,
    5970,
    6018,
    6074,
    6122,
    6170,
    6218,
    6266,
    6314,
    6356,
    6404,
    6446,
    6502,
    6550,
    6598,
    6640,
    6688,
    6730,
    6778,
    6820,
    6876,
    6924
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(35) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::call4 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::call3 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::call2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::call1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::setSessionTimer */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::set100rel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::setRtcp */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::setRtcpMux */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::setICE */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::setQoS */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::setVideoFps */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::setVideoBandwidthUploadMax */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::setVideoBandwidthDownloadMax */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::setVideoPrefSize */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::hold2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::hold1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::resume2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::resume1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::transfer2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::transfer1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::acceptTransfer2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::acceptTransfer1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::rejectTransfer2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::rejectTransfer1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::sendDTMF */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::getSessionTransferId */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::sendT140Data2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::sendT140Data1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals::setT140Callback */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals_ServerInfo,
    35,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0029, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory, ver. 0.0,
   GUID={0x9B651B7D,0x7BFE,0x3918,{0xBD,0xFE,0x52,0xB7,0x2F,0x9B,0x0F,0x30}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    6972
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0030, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals, ver. 0.0,
   GUID={0x746AFEAB,0x0072,0x38FE,{0xB1,0xA7,0x21,0x77,0x0B,0xE6,0x4A,0x4A}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    7020,
    7068,
    2178,
    7124,
    7180,
    7228,
    2370
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals::setCallback */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals::callMsrp4 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals::callMsrp3 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals::callMsrp2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals::callMsrp1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals::sendMessage2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals::sendMessage1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals_ServerInfo,
    13,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0031, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory, ver. 0.0,
   GUID={0x840E557A,0xA75D,0x35A5,{0x9E,0x1E,0x9A,0xFE,0x1F,0xA8,0x0A,0x9D}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    7284
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0032, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals, ver. 0.0,
   GUID={0xAACA3593,0xCEFB,0x373E,{0xA2,0x29,0x85,0x3C,0x78,0xAD,0x59,0x21}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    7340,
    114,
    5286,
    7396,
    7438,
    1636
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals::send2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals::send1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals::accept2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals::accept1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals::reject2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals::reject1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals_ServerInfo,
    12,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0033, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory, ver. 0.0,
   GUID={0x489F9906,0xCC60,0x3868,{0xA5,0x5A,0xE9,0x3A,0x74,0x55,0xB5,0x14}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    7486
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0034, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals, ver. 0.0,
   GUID={0x6A30534C,0x9226,0x3450,{0x86,0x1F,0x8D,0x92,0xE2,0x41,0xD6,0x11}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    7340,
    114,
    5286,
    7396,
    7438,
    1636
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals::send2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals::send1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals::accept2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals::accept1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals::reject2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals::reject1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals_ServerInfo,
    12,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0035, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory, ver. 0.0,
   GUID={0x548CF937,0x8336,0x3950,{0xAA,0x5C,0xF8,0xCA,0x1D,0x9B,0x4A,0x67}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    7534
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0036, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals, ver. 0.0,
   GUID={0x7AA94F17,0xFBEB,0x3FAC,{0x92,0xED,0x89,0x8F,0xB9,0xF4,0xED,0xC7}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5190,
    4060,
    5286,
    7396,
    7438,
    1636
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals::send2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals::send1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals::accept2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals::accept1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals::reject2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals::reject1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals_ServerInfo,
    12,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0037, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory, ver. 0.0,
   GUID={0x1FB0FA30,0xB04C,0x3AFC,{0x87,0xEF,0xB3,0x26,0x4A,0xE0,0xB4,0x3C}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    7582
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0038, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals, ver. 0.0,
   GUID={0x8D8BFB47,0xBE91,0x3E55,{0xAD,0x42,0x51,0xA6,0xF8,0xE0,0x19,0x0A}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    7340,
    114,
    5286,
    7396
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals::publish2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals::publish1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals::unPublish2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals::unPublish1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals_ServerInfo,
    10,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0039, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory, ver. 0.0,
   GUID={0xDE777EC1,0x607A,0x3E44,{0x91,0x0E,0x93,0x27,0x93,0xDF,0x12,0x8E}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    7630
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0040, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals, ver. 0.0,
   GUID={0xD34B80F8,0x410C,0x3A42,{0xAA,0x06,0x29,0x6E,0xB6,0xA8,0xE2,0xB1}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    5190,
    4060,
    5286,
    7396,
    7438,
    1636,
    7678,
    1720
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals::register_2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals::register_1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals::unRegister2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals::unRegister1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals::accept2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals::accept1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals::reject2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals::reject1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals_ServerInfo,
    14,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0041, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory, ver. 0.0,
   GUID={0xAC3D979B,0x2D68,0x3AD7,{0x8D,0x53,0x7C,0x1D,0x74,0x44,0xF7,0xBC}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    7726
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0042, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals, ver. 0.0,
   GUID={0xE3F89F64,0xB94A,0x368B,{0x90,0x82,0x93,0xAF,0x84,0xF8,0xBB,0x1F}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1468,
    4060
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals::subscribe */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals::unSubscribe */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals_ServerInfo,
    8,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0043, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory, ver. 0.0,
   GUID={0x71094813,0xDA89,0x30CF,{0xBD,0x63,0xA7,0x0F,0xDF,0x4A,0x85,0xFA}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    7774
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactoryProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory::CreateInstance1 */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactoryStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0044, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback, ver. 0.0,
   GUID={0xB210DD33,0xA6A6,0x34A8,{0xA9,0x6A,0xEF,0xAC,0x9D,0x0B,0x8D,0xBA}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    7822,
    7870,
    7918,
    7966,
    8014,
    8062,
    8110,
    8158,
    8206
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(15) ___x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallbackProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback::OnDialogEvent */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback::OnStackEvent */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback::OnInviteEvent */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback::OnMessagingEvent */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback::OnInfoEvent */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback::OnOptionsEvent */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback::OnPublicationEvent */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback::OnRegistrationEvent */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback::OnSubscriptionEvent */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallbackStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback_ServerInfo,
    15,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0045, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals, ver. 0.0,
   GUID={0xF6F4FF9E,0x06BC,0x3929,{0xBA,0xEA,0x6F,0x7F,0xA4,0x40,0x13,0xFE}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtualsProxyVtbl = 
{
    0,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals_ServerInfo,
    6,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0046, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent, ver. 0.0,
   GUID={0x6FDB3F81,0x9CB1,0x34F1,{0x9A,0xD6,0x78,0x78,0x0B,0xC5,0x8E,0x43}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    2088,
    624,
    8254,
    8296
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) ___x_ABI_Cdoubango__rt_CBackEnd_CrtISipEventProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent::getCode */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent::getPhrase */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent::getBaseSession */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent::getSipMessage */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CrtISipEventStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent_ServerInfo,
    10,
    &__x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0047, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals, ver. 0.0,
   GUID={0x65780FAA,0x8EBB,0x375D,{0xB0,0x4C,0x47,0x55,0x5D,0x0F,0x28,0x45}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtualsProxyVtbl = 
{
    0,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals_ServerInfo,
    6,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0048, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals, ver. 0.0,
   GUID={0x5FB380DD,0x095D,0x32D4,{0xAC,0xE4,0x79,0x91,0x51,0x6F,0xD8,0xEA}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtualsProxyVtbl = 
{
    0,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals_ServerInfo,
    6,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0049, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals, ver. 0.0,
   GUID={0x731A866B,0x4B61,0x3A41,{0x9F,0x4B,0x0D,0xA7,0x32,0x2F,0x1A,0xA7}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    582,
    8338,
    8380,
    8422,
    8464
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals::getType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals::getMediaType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals::getSession */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals::takeCallSessionOwnership */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals::takeMsrpSessionOwnership */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals_ServerInfo,
    11,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0050, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals, ver. 0.0,
   GUID={0xD6D6ADFB,0x954A,0x36F7,{0xB3,0x6B,0x51,0xFD,0x40,0x91,0xFE,0xDA}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    582,
    8506,
    8548
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals::getType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals::getSession */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals::takeSessionOwnership */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals_ServerInfo,
    9,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0051, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals, ver. 0.0,
   GUID={0x3E3607D8,0x9CA6,0x3CD2,{0x9C,0x82,0x44,0x78,0x58,0x0C,0x86,0xD1}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    582,
    8590,
    8632
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals::getType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals::getSession */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals::takeSessionOwnership */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals_ServerInfo,
    9,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0052, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals, ver. 0.0,
   GUID={0x01126DE2,0xDB09,0x3456,{0x93,0xC8,0x05,0x17,0xC3,0xF9,0x63,0xD5}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    582,
    8674,
    8716
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals::getType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals::getSession */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals::takeSessionOwnership */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals_ServerInfo,
    9,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0053, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals, ver. 0.0,
   GUID={0xEC75DE12,0xC356,0x33FD,{0xB8,0xAF,0xAE,0x4A,0xB0,0x54,0x14,0xA5}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    582,
    8758,
    8800
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals::getType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals::getSession */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals::takeSessionOwnership */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals_ServerInfo,
    9,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0054, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals, ver. 0.0,
   GUID={0x599EE12A,0x5485,0x3D18,{0x9A,0xCE,0xF0,0x88,0x5D,0x29,0x45,0x5E}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    582,
    8842,
    8884
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals::getType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals::getSession */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals::takeSessionOwnership */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals_ServerInfo,
    9,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0055, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals, ver. 0.0,
   GUID={0x9F4A8862,0x8482,0x3083,{0xB2,0x4C,0x79,0x67,0x37,0xFD,0xF4,0x2B}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    582,
    8926,
    8968
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals::getType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals::getSession */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals::takeSessionOwnership */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals_ServerInfo,
    9,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0056, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals, ver. 0.0,
   GUID={0x6D43145F,0xFC50,0x3FD7,{0x9D,0x1F,0xBC,0x47,0x89,0xAA,0x9C,0xED}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9010,
    9072,
    9128
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals::getSdpHeaderValue2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals::getSdpHeaderValue1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals::getSdpHeaderAValue */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals_ServerInfo,
    9,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0057, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals, ver. 0.0,
   GUID={0xF68542F0,0xF6C6,0x3DE5,{0x86,0xFE,0x31,0xE2,0xAD,0xD4,0xE4,0x1E}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1468,
    8338,
    9184,
    708,
    9226,
    9282,
    9330,
    9392,
    9448,
    9490,
    9532
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(17) ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals::isResponse */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals::getRequestType */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals::getResponseCode */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals::getResponsePhrase */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals::getSipHeaderValue2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals::getSipHeaderValue1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals::getSipHeaderParamValue2 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals::getSipHeaderParamValue1 */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals::getSipContentLength */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals::getSipContent */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals::getSdpMessage */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals_ServerInfo,
    17,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0058, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer, ver. 0.0,
   GUID={0xF8F3EBEE,0x094D,0x38D5,{0x84,0x0A,0x25,0x47,0x10,0xAE,0x90,0x91}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9574,
    9608
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) ___x_ABI_Cdoubango__rt_CBackEnd_CIVideoRendererProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer::Start */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer::Stop */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CIVideoRendererStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer_ServerInfo,
    8,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0059, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener, ver. 0.0,
   GUID={0x3F230803,0xD28D,0x3153,{0xA0,0x7C,0x7F,0x9F,0xD9,0xC9,0x1E,0x43}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9642
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListenerProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener::OnDebugMessage */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListenerStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0060, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener, ver. 0.0,
   GUID={0x19BAB5B7,0xA2FC,0x3714,{0x9A,0x50,0x91,0x33,0x51,0x61,0x6B,0xAA}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9690
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListenerProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener::OnAudioRoutingChanged */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListenerStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0061, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener, ver. 0.0,
   GUID={0xBEEF9A82,0x3E32,0x3ADB,{0xA7,0x50,0x09,0xC0,0x20,0xB2,0x51,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9732
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListenerProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener::OnRegistrationStateChanged */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListenerStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0062, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener, ver. 0.0,
   GUID={0x79981920,0x108E,0x3EFF,{0xBF,0xFB,0x14,0x35,0x77,0x7B,0x55,0xA0}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9732,
    9788
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) ___x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListenerProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener::OnAVCallStateChanged */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener::OnHoldStateChanged */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListenerStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener_ServerInfo,
    8,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0063, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener, ver. 0.0,
   GUID={0xEB16F8EC,0x3180,0x35C4,{0xA4,0xD8,0xA9,0xD7,0x34,0x27,0xE4,0xFA}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9642
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListenerProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener::OnStackStateChanged */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListenerStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0064, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals, ver. 0.0,
   GUID={0x4868DDC4,0x3353,0x3344,{0x84,0x2D,0xEB,0x96,0xAC,0x83,0x71,0xB9}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    9830,
    9872,
    666,
    9914,
    4290,
    9956,
    4374,
    9998,
    10040,
    10082,
    10124,
    10166,
    10208,
    10250,
    10292,
    10334,
    10376,
    10418,
    10460,
    10502,
    10544,
    10586,
    10628,
    10670,
    10712,
    10754,
    10796,
    10838,
    10880,
    10922,
    10964,
    11006,
    11048,
    11090,
    11132,
    11174,
    11216,
    11258,
    11300,
    11342,
    11384,
    11426
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(48) ___x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_DisplayName */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_DisplayName */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_RealmUri */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_RealmUri */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_ImpiString */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_ImpiString */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_ImpuUri */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_ImpuUri */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_Password */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_Password */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_ProxyHost */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_ProxyHost */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_ProxyPort */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_ProxyPort */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_EarlyIMS */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_EarlyIMS */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_Transport */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_Transport */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_IPVersion */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_IPVersion */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_PushNotificationUri */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_PushNotificationUri */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_UserAgent */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_UserAgent */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_EchoSupp */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_EchoSupp */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_EchoTail */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_EchoTail */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_EchoSkew */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_EchoSkew */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_NoiseSupp */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_NoiseSupp */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_Vad */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_Vad */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_Agc */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_Agc */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_JbMaxLateRate */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_JbMaxLateRate */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_Rtcp */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_Rtcp */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::get_RtcpMux */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals::put_RtcpMux */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals_ServerInfo,
    48,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0065, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals, ver. 0.0,
   GUID={0x05FC37D6,0xFF7F,0x3D9F,{0xA6,0xFD,0x77,0x5D,0xD1,0x43,0x72,0xAD}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    1468,
    8338,
    11468,
    11510,
    11552,
    11600,
    11648,
    11696,
    11744
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(15) ___x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals::get_WithVideo */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals::get_State */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals::get_HoldState */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals::get_UriRemote */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals::Accept */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals::HangUp */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals::Hold */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals::Resume */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals::SendDTMF */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals_ServerInfo,
    15,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0066, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals, ver. 0.0,
   GUID={0xCC5B3C10,0x588D,0x37C4,{0x81,0x8A,0x97,0xDD,0xA8,0xC1,0xD5,0xDC}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    11792,
    8338,
    11834,
    1552,
    11876,
    11918,
    11960,
    12002,
    12044,
    12086,
    12128,
    12170,
    12212,
    12254,
    2792,
    6314,
    12296,
    12338,
    12394
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(25) ___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::get_SipConfig */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::get_RegistrationState */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::get_SipActiveAVCall */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::get_AvailableAudioRoutes */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::get_AudioRoute */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::put_AudioRoute */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::get_CameraLocation */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::put_CameraLocation */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::SetDebugMessageListener */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::SetAudioStateChangedListener */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::SetSipRegistrationStateChangedListener */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::SetSipStackStateChangedListener */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::SetSipAVCallStateChangedListener */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::Start */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::Stop */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::Register */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::UnRegister */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::MakeCallAudio */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals::MakeCallAudioVideo */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals_ServerInfo,
    25,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0067, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics, ver. 0.0,
   GUID={0x228FB9E6,0xED53,0x3289,{0xAC,0xE3,0x99,0x5F,0x36,0xF1,0x72,0xB2}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    12450
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) ___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStaticsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics::SetCodecs */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStaticsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics_ServerInfo,
    7,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0068, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals, ver. 0.0,
   GUID={0x2F22CC8A,0x1FA9,0x3EF8,{0xBD,0x69,0xA1,0xB6,0x1A,0x69,0x6F,0x3C}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    12498,
    9608,
    12546,
    12588,
    12630,
    12672,
    12720
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(13) ___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtualsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals::StartServer */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals::DoPeriodicKeepAlive */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals::get_VideoRenderer */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals::put_VideoRenderer */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals::get_SipService */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals::add_VideoFrameReceived */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals::remove_VideoFrameReceived */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals_ServerInfo,
    13,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0069, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals, ver. 0.0,
   GUID={0xFD21E8E5,0x0146,0x348B,{0x97,0x9D,0x92,0x37,0x19,0x7A,0x9A,0x9B}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) ___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtualsProxyVtbl = 
{
    0,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtualsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals_ServerInfo,
    6,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0070, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics, ver. 0.0,
   GUID={0xD397D79C,0x41C8,0x3E86,{0xB7,0x94,0xA2,0x0E,0xA8,0xD5,0x45,0xF5}} */

#pragma code_seg(".orpc")
static const unsigned short __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    4754,
    12764,
    12812,
    12860
    };

static const MIDL_STUBLESS_PROXY_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics_ProxyInfo =
    {
    &Object_StubDesc,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doubango_rt2EBackEnd__MIDL_ProcFormatString.Format,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) ___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStaticsProxyVtbl = 
{
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics_ProxyInfo,
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IInspectable::GetIids */ ,
    0 /* IInspectable::GetRuntimeClassName */ ,
    0 /* IInspectable::GetTrustLevel */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics::GetCurrentProcessId */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics::GetUiDisconnectedEventName */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics::GetBackgroundProcessReadyEventName */ ,
    (void *) (INT_PTR) -1 /* __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics::get_Instance */
};


static const PRPC_STUB_FUNCTION __x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl ___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStaticsStubVtbl =
{
    &IID___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics_ServerInfo,
    10,
    &__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_doubango_rt2EBackEnd_0000_0071, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    doubango_rt2EBackEnd__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x8000253, /* MIDL Version 8.0.595 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _doubango_rt2EBackEnd_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListenerProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListenerProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStaticsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallbackProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStaticsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSessionProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallbackProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandlerProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtISipEventProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListenerProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallbackProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStaticsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtISipSessionProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStaticsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListenerProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactoryProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtIT140CallbackProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStaticsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListenerProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CIVideoRendererProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtualsProxyVtbl,
    ( CInterfaceProxyVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtualsProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _doubango_rt2EBackEnd_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListenerStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListenerStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStaticsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallbackStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStaticsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSessionStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallbackStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandlerStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtISipEventStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListenerStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallbackStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStaticsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtISipSessionStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStaticsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListenerStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactoryStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CrtIT140CallbackStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStaticsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListenerStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_CIVideoRendererStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtualsStubVtbl,
    ( CInterfaceStubVtbl *) &___x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtualsStubVtbl,
    0
};

PCInterfaceName const _doubango_rt2EBackEnd_InterfaceNamesList[] = 
{
    "__x_ABI_Cdoubango__rt_CBackEnd_CIDebugMessageListener",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServicePublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationEventPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_CISipAVCallStateChangedListener",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationEventPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsSessionFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackStatics",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDnsResultPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_CrtISipCallback",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriStatics",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoSessionPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_CrtIInviteSession",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteSessionFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSdpMessagePublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionEventPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSubscriptionSessionPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtActionConfigPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_CrtIDDebugCallback",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInviteEventPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_CIVideoFrameReceivedEventHandler",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_CrtISipEvent",
    "__x_ABI_Cdoubango__rt_CBackEnd_CISipRegistrationStateChangedListener",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCodecPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_CrtIMsrpCallback",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingSessionPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipStackPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsStatics",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpCallbackPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipCallbackPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDialogEventPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpSessionPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_CrtISipSession",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMediaSessionMgrStatics",
    "__x_ABI_Cdoubango__rt_CBackEnd_CIAudioStateChangedListener",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipSessionFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpMessagePublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtPublicationSessionFactory",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpByteRangePublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____ISipConfigPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtCallSessionPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____ISipAVCallPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtInfoEventPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtStackEventPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtOptionsEventPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_CrtIT140Callback",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackProtectedVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtDDebugCallbackPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IGlobalsProtectedNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____ISipServiceStatics",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipUriPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_CISipStackStateChangedListener",
    "__x_ABI_Cdoubango__rt_CBackEnd_CIVideoRenderer",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtSipMessagePublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtT140CallbackDataPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtRegistrationSessionPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMsrpEventPublicNonVirtuals",
    "__x_ABI_Cdoubango__rt_CBackEnd_C____IrtMessagingEventPublicNonVirtuals",
    0
};

const IID *  const _doubango_rt2EBackEnd_BaseIIDList[] = 
{
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    0,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    &IID_IInspectable,
    0
};


#define _doubango_rt2EBackEnd_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _doubango_rt2EBackEnd, pIID, n)

int __stdcall _doubango_rt2EBackEnd_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _doubango_rt2EBackEnd, 71, 64 )
    IID_BS_LOOKUP_NEXT_TEST( _doubango_rt2EBackEnd, 32 )
    IID_BS_LOOKUP_NEXT_TEST( _doubango_rt2EBackEnd, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _doubango_rt2EBackEnd, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _doubango_rt2EBackEnd, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _doubango_rt2EBackEnd, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _doubango_rt2EBackEnd, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _doubango_rt2EBackEnd, 71, *pIndex )
    
}

const ExtendedProxyFileInfo doubango_rt2EBackEnd_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _doubango_rt2EBackEnd_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _doubango_rt2EBackEnd_StubVtblList,
    (const PCInterfaceName * ) & _doubango_rt2EBackEnd_InterfaceNamesList,
    (const IID ** ) & _doubango_rt2EBackEnd_BaseIIDList,
    & _doubango_rt2EBackEnd_IID_Lookup, 
    71,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* if defined(_ARM_) */

