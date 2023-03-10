/*
* This header is generated by classdump-dyld 1.0
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/rapportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/RPSubDaemonable.h>

@protocol OS_dispatch_queue;
@class NSArray, NSString, NSDictionary, CUSystemMonitor, NSObject, IDSService;

@interface RPCloudDaemon : NSObject <IDSServiceDelegate, RPSubDaemonable> {

	NSArray* _idsDeviceArray;
	NSString* _idsDeviceIDSelf;
	NSDictionary* _idsDeviceMap;
	int _idsHandheldCountCache;
	int _idsHasAppleTVCache;
	int _idsHasHomePodCache;
	int _idsHasMacCache;
	int _idsIsSignedInCache;
	char _invalidateCalled;
	char _invalidateDone;
	int _prefHasAppleTVForce;
	int _prefHasHomePodForce;
	int _prefHasMacForce;
	char _prefIDSEnabled;
	int _prefIsSignedInForce;
	CUSystemMonitor* _systemMonitor;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	IDSService* _nearbyIDSService;

}

@property (nonatomic,retain) IDSService * nearbyIDSService;                           //@synthesize nearbyIDSService=_nearbyIDSService - In the implementation block
@property (readonly) NSArray * idsDeviceArray; 
@property (readonly) NSString * idsDeviceIDSelf; 
@property (readonly) NSDictionary * idsDeviceMap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
+(id)sharedCloudDaemon;
-(id)init;
-(void)invalidate;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_update;
-(void)activate;
-(void)_invalidated;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 activeAccountsChanged:(id)arg2 ;
-(void)service:(id)arg1 devicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(char)arg4 error:(id)arg5 context:(id)arg6 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(void)serviceSpaceDidBecomeAvailable:(id)arg1 ;
-(void)_idsEnsureStarted;
-(void)_idsEnsureStopped;
-(void)prefsChanged;
-(char)idsIsSignedIn;
-(NSArray *)idsDeviceArray;
-(char)idsHasAppleTV;
-(char)idsHasHomePod;
-(char)idsHasMac;
-(char)idsHasWatch;
-(int)idsHandheldCount;
-(id)_idsURIWithID:(id)arg1 ;
-(void)_receivedFamilyIdentityFrameType:(unsigned char)arg1 ptr:(const char*)arg2 length:(unsigned long long)arg3 msgCtx:(id)arg4 ;
-(void)_receivedFriendIdentityFrameType:(unsigned char)arg1 ptr:(const char*)arg2 length:(unsigned long long)arg3 msgCtx:(id)arg4 ;
-(void)_receivedWatchIdentityFrameType:(unsigned char)arg1 ptr:(const char*)arg2 length:(unsigned long long)arg3 fromID:(id)arg4 ;
-(NSDictionary *)idsDeviceMap;
-(void)_receivedWatchIdentityRequest:(id)arg1 fromIDSDevice:(id)arg2 ;
-(void)_receivedWatchIdentityResponse:(id)arg1 fromIDSDevice:(id)arg2 ;
-(char)sendIDSMessage:(id)arg1 cloudServiceID:(id)arg2 frameType:(unsigned char)arg3 destinationDevice:(id)arg4 sendFlags:(unsigned)arg5 msgCtx:(id)arg6 error:(id*)arg7 ;
-(char)sendIDSMessage:(id)arg1 cloudServiceID:(id)arg2 frameType:(unsigned char)arg3 destinationID:(id)arg4 sendFlags:(unsigned)arg5 msgCtx:(id)arg6 error:(id*)arg7 ;
-(id)_idsAccountWithURI:(id)arg1 senderID:(id*)arg2 ;
-(void)daemonInfoChanged:(unsigned long long)arg1 ;
-(char)diagnosticCommand:(id)arg1 params:(id)arg2 ;
-(char)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(/*^block*/id)arg3 ;
-(char)removeXPCMatchingToken:(unsigned long long)arg1 ;
-(id)idsDeviceForBluetoothUUID:(id)arg1 ;
-(NSString *)idsDeviceIDSelf;
-(IDSService *)nearbyIDSService;
-(void)setNearbyIDSService:(IDSService *)arg1 ;
@end

