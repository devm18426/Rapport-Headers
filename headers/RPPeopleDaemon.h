/*
* This header is generated by classdump-dyld 1.0
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/rapportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/RPSubDaemonable.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSMutableArray, SFDeviceDiscovery, NSMutableDictionary, NSMutableSet, NSString, CUSystemMonitor, NSXPCListener, NSObject, NSArray, CUCoalescer;

@interface RPPeopleDaemon : NSObject <NSXPCListenerDelegate, RPSubDaemonable> {

	int _airdropModeNotifyToken;
	int _airdropMode;
	NSMutableArray* _bufferedCloudMessages;
	SFDeviceDiscovery* _deviceDiscovery;
	unsigned _deviceDiscoveryID;
	NSMutableDictionary* _discoveredDevices;
	NSMutableSet* _discoveryClients;
	unsigned _discoveryFlagsAggregate;
	char _invalidateCalled;
	char _invalidateDone;
	char _prefPeopleStrangers;
	int _prefTrackWhileAsleepState;
	NSString* _primaryAppleIDCached;
	CUSystemMonitor* _systemMonitor;
	NSMutableSet* _xpcConnections;
	NSXPCListener* _xpcListener;
	CUSystemMonitor* _familyMemberMonitor;
	NSMutableDictionary* _familyAccountIdentityMap;
	NSMutableDictionary* _familyDeviceIdentityMap;
	unsigned long long _familyFlags;
	int _familyNotifyToken;
	NSObject*<OS_dispatch_source> _familySyncCheckTimer;
	char _prefPeopleDiscoveryFamily;
	NSMutableDictionary* _friendAccountIdentityMap;
	NSMutableDictionary* _friendDeviceIdentityMap;
	char _friendPrivacyGetting;
	NSArray* _friendsSuggestedArray;
	char _friendsSuggestedGetting;
	char _friendsSuggestedNeedsUpdate;
	int _friendsSuggestedNotifyToken;
	NSObject*<OS_dispatch_source> _friendsSuggestedPollTimer;
	long long _prefFamilyIdentityPruneSeconds;
	long long _prefFriendAccountPruneSeconds;
	long long _prefFriendRefreshMaxSeconds;
	long long _prefFriendRefreshMinSeconds;
	long long _prefFriendRefreshSeconds;
	int _prefFriendSuggestMax;
	int _prefFriendSuggestPollSeconds;
	long long _prefFriendSyncDelaySeconds;
	char _prefPeopleDiscoveryFriends;
	double _prefPrivacyCoalesceMinSecs;
	double _prefPrivacyCoalesceMaxSecs;
	CUCoalescer* _privacyChangedCoalescer;
	int _privacyChangedNotifyToken;
	double _pruneLastSeconds;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
+(id)sharedPeopleDaemon;
-(id)init;
-(void)_activate;
-(void)invalidate;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_update;
-(void)activate;
-(void)_invalidated;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)_xpcConnectionInvalidated:(id)arg1 ;
-(void)prefsChanged;
-(void)_discoveryEnsureStarted;
-(void)_discoveryEnsureStopped;
-(void)receivedFamilyIdentityRequest:(id)arg1 msgCtx:(id)arg2 ;
-(void)receivedFamilyIdentityResponse:(id)arg1 msgCtx:(id)arg2 ;
-(void)receivedFamilyIdentityUpdate:(id)arg1 msgCtx:(id)arg2 ;
-(void)receivedFriendIdentityRequest:(id)arg1 msgCtx:(id)arg2 ;
-(void)receivedFriendIdentityResponse:(id)arg1 msgCtx:(id)arg2 ;
-(void)receivedFriendIdentityUpdate:(id)arg1 msgCtx:(id)arg2 ;
-(void)daemonInfoChanged:(unsigned long long)arg1 ;
-(char)diagnosticCommand:(id)arg1 params:(id)arg2 ;
-(char)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(/*^block*/id)arg3 ;
-(char)removeXPCMatchingToken:(unsigned long long)arg1 ;
-(char)addOrUpdateIdentity:(id)arg1 error:(id*)arg2 ;
-(id)_primaryAppleID:(char)arg1 ;
-(void)_familyEnsureStopped;
-(void)_friendsEnsureStopped;
-(char)_sendCloudIdentityFrameType:(unsigned char)arg1 destinationID:(id)arg2 flags:(unsigned)arg3 msgCtx:(id)arg4 ;
-(void)_updateFriendPrivacy;
-(char)_pruneFriends:(char)arg1 ;
-(void)_resetFriends;
-(void)_regenerateSelfIdentity:(id)arg1 ;
-(unsigned)_updateFriendIdentityWithAppleID:(id)arg1 contactID:(id)arg2 sendersKnownAlias:(id)arg3 userAdded:(char)arg4 updateDateRequested:(char)arg5 ;
-(unsigned)_updateIdentityType:(int)arg1 idsDeviceID:(id)arg2 appleID:(id)arg3 contactID:(id)arg4 msg:(id)arg5 ;
-(void)_familyEnsureStarted;
-(void)_friendsEnsureStarted;
-(void)_daemonDeviceFound:(id)arg1 ;
-(void)_daemonDeviceLost:(id)arg1 ;
-(void)_daemonDeviceChanged:(id)arg1 changes:(unsigned)arg2 ;
-(void)_updateFamilyIdentities;
-(char)_updateFamilyAccounts;
-(char)_updateFamilyDevices;
-(char)_pruneFamilyDevices;
-(void)_processBufferedCloudMessages;
-(void)_updateFamilySyncing;
-(void)_updateFamilyNotification;
-(char)_updateFamilyIdentityWithFamilyMember:(id)arg1 ;
-(void)_bufferCloudMessage:(id)arg1 frameType:(unsigned char)arg2 msgCtx:(id)arg3 ;
-(void)_friendsUpdateSuggestedIfNeeded;
-(void)_updateFriendIdentities;
-(char)_pruneFriendAccounts:(char)arg1 ;
-(char)_pruneFriendDevices;
-(char)_updateFriendAccounts;
-(char)_updateFriendDevices;
-(void)_updateFriendSyncing;
-(void)_updateFriendPrivacyResults:(id)arg1 ;
@end
