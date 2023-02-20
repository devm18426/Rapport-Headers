/*
* This header is generated by classdump-dyld 1.0
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/rapportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, RPMessageable;
@class NSObject;

@interface RPMediaControlDaemon : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	unsigned _movementCommand;
	unsigned _movementEndCommand;
	NSObject*<OS_dispatch_source> _movementEndTimer;
	unsigned long long _mediaControlFlags;
	char _mediaControlInterest;
	char _mediaRemoteCommandGetting;
	char _mediaRemoteCommandObserving;
	unsigned _mediaRemoteVolumeCaps;
	char _mediaRemoteVolumeObserving;
	id<RPMessageable> _messenger;
	/*^block*/id _sendInterestEventHandler;

}

@property (nonatomic,retain) id<RPMessageable> messenger;              //@synthesize messenger=_messenger - In the implementation block
@property (nonatomic,copy) id sendInterestEventHandler;                //@synthesize sendInterestEventHandler=_sendInterestEventHandler - In the implementation block
-(id)init;
-(void)invalidate;
-(void)_update;
-(char)activateAndReturnError:(id*)arg1 ;
-(id<RPMessageable>)messenger;
-(void)setMessenger:(id<RPMessageable>)arg1 ;
-(void)_mediaControlEnsureStopped;
-(void)_mediaControlEnsureStarted;
-(void)registeredEventID:(id)arg1 ;
-(void)deregisteredEventID:(id)arg1 ;
-(void)setSendInterestEventHandler:(id)arg1 ;
-(void)_handleCommand:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_mediaRemoteSupportedCommandsChanged;
-(void)_mediaRemoteSupportedCommandsGet;
-(void)_mediaRemoteVolumeControlChanged:(id)arg1 ;
-(void)_mediaRemoteVolumeControlUpdate;
-(void)_mediaControlFlagsUpdate:(unsigned long long)arg1 mask:(unsigned long long)arg2 ;
-(void)_handleSkipByRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleMovementCommand:(unsigned)arg1 endCommand:(unsigned)arg2 ;
-(void)_handleMediaCaptionGet:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleMediaCaptionSet:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(id)sendInterestEventHandler;
@end

