/*
* This header is generated by classdump-dyld 1.0
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/rapportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RPDaemonXPCServerInterface.h>

@protocol OS_dispatch_queue;
@class RPDaemon, NSMutableSet, NSObject, NSXPCConnection;

@interface RPDaemonXPCConnection : NSObject <RPDaemonXPCServerInterface> {

	RPDaemon* _daemon;
	char _entitledClient;
	NSMutableSet* _assertions;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSXPCConnection* _xpcCnx;

}

@property (nonatomic,retain) NSMutableSet * assertions;                               //@synthesize assertions=_assertions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcCnx;                                //@synthesize xpcCnx=_xpcCnx - In the implementation block
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableSet *)assertions;
-(void)connectionInvalidated;
-(void)getIdentitiesWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(NSXPCConnection *)xpcCnx;
-(void)primaryAccountSignedInWithCompletion:(/*^block*/id)arg1 ;
-(void)primaryAccountSignedOutWithCompletion:(/*^block*/id)arg1 ;
-(void)activateAssertionWithIdentifier:(id)arg1 ;
-(void)addOrUpdateIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)diagnosticCommand:(id)arg1 params:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)diagnosticLogControl:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)diagnosticShow:(id)arg1 level:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)setXpcCnx:(NSXPCConnection *)arg1 ;
-(void)_invalidateAssertions;
-(void)setAssertions:(NSMutableSet *)arg1 ;
-(id)initWithDaemon:(id)arg1 xpcConnection:(id)arg2 ;
-(char)_entitledForLabel:(id)arg1 error:(id*)arg2 ;
@end
