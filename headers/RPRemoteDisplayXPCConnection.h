/*
* This header is generated by classdump-dyld 1.0
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/rapportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RPRemoteDisplayXPCDaemonInterface.h>

@protocol OS_dispatch_queue;
@class RPRemoteDisplayDiscovery, RPConnection, RPRemoteDisplayServer, RPRemoteDisplaySession, RPRemoteDisplayDaemon, NSObject, NSMutableSet, NEAppSidecarPolicySession, NSXPCConnection;

@interface RPRemoteDisplayXPCConnection : NSObject <RPRemoteDisplayXPCDaemonInterface> {

	char _entitled;
	unsigned _xpcID;
	RPRemoteDisplayDiscovery* _activatedDiscovery;
	RPConnection* _activeNetCnx;
	RPRemoteDisplayServer* _activatedServer;
	RPRemoteDisplaySession* _activatedSession;
	RPConnection* _clientNetCnx;
	RPRemoteDisplayDaemon* _daemon;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableSet* _serverNetCnxs;
	NEAppSidecarPolicySession* _vpnPolicySession;
	NSXPCConnection* _xpcCnx;

}

@property (nonatomic,readonly) RPRemoteDisplayDiscovery * activatedDiscovery;              //@synthesize activatedDiscovery=_activatedDiscovery - In the implementation block
@property (nonatomic,retain) RPConnection * activeNetCnx;                                  //@synthesize activeNetCnx=_activeNetCnx - In the implementation block
@property (nonatomic,readonly) RPRemoteDisplayServer * activatedServer;                    //@synthesize activatedServer=_activatedServer - In the implementation block
@property (nonatomic,readonly) RPRemoteDisplaySession * activatedSession;                  //@synthesize activatedSession=_activatedSession - In the implementation block
@property (nonatomic,retain) RPConnection * clientNetCnx;                                  //@synthesize clientNetCnx=_clientNetCnx - In the implementation block
@property (nonatomic,readonly) RPRemoteDisplayDaemon * daemon;                             //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                   //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) char entitled;                                              //@synthesize entitled=_entitled - In the implementation block
@property (nonatomic,retain) NSMutableSet * serverNetCnxs;                                 //@synthesize serverNetCnxs=_serverNetCnxs - In the implementation block
@property (nonatomic,readonly) NEAppSidecarPolicySession * vpnPolicySession;               //@synthesize vpnPolicySession=_vpnPolicySession - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * xpcCnx;                                   //@synthesize xpcCnx=_xpcCnx - In the implementation block
@property (assign,nonatomic) unsigned xpcID;                                               //@synthesize xpcID=_xpcID - In the implementation block
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(RPRemoteDisplayDaemon *)daemon;
-(void)connectionInvalidated;
-(NSXPCConnection *)xpcCnx;
-(id)initWithDaemon:(id)arg1 xpcCnx:(id)arg2 ;
-(char)_entitledAndReturnError:(id*)arg1 ;
-(char)entitled;
-(unsigned)xpcID;
-(void)setXpcID:(unsigned)arg1 ;
-(void)remoteDisplayActivateDiscovery:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remoteDisplayActivateServer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remoteDisplayActivateSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remoteDisplayInvalidateSessionID:(id)arg1 ;
-(void)remoteDisplayTryPassword:(id)arg1 ;
-(void)remoteDisplaySendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)remoteDisplaySendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(RPRemoteDisplayDiscovery *)activatedDiscovery;
-(RPRemoteDisplayServer *)activatedServer;
-(RPRemoteDisplaySession *)activatedSession;
-(RPConnection *)activeNetCnx;
-(RPConnection *)clientNetCnx;
-(NSMutableSet *)serverNetCnxs;
-(void)updateErrorFlags:(unsigned long long)arg1 ;
-(char)netConnectionStartWithDevice:(id)arg1 session:(id)arg2 error:(id*)arg3 ;
-(void)setServerNetCnxs:(NSMutableSet *)arg1 ;
-(void)showPassword:(id)arg1 flags:(unsigned)arg2 ;
-(void)hidePasswordWithFlags:(unsigned)arg1 ;
-(void)sessionEndedWithID:(id)arg1 netCnx:(id)arg2 ;
-(void)_receivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 sessionID:(id)arg4 ;
-(void)_receivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4 sessionID:(id)arg5 ;
-(void)sessionStartWithID:(id)arg1 netCnx:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_authCompletion:(id)arg1 ;
-(void)_promptForPasswordWithFlags:(unsigned)arg1 throttleSeconds:(int)arg2 ;
-(void)setActiveNetCnx:(RPConnection *)arg1 ;
-(void)setClientNetCnx:(RPConnection *)arg1 ;
-(NEAppSidecarPolicySession *)vpnPolicySession;
@end

