/*
* This header is generated by classdump-dyld 1.0
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/rapportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RPDaemonXPCServerInterface
@required
-(void)getIdentitiesWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2;
-(void)primaryAccountSignedInWithCompletion:(/*^block*/id)arg1;
-(void)primaryAccountSignedOutWithCompletion:(/*^block*/id)arg1;
-(void)activateAssertionWithIdentifier:(id)arg1;
-(void)addOrUpdateIdentity:(id)arg1 completion:(/*^block*/id)arg2;
-(void)diagnosticCommand:(id)arg1 params:(id)arg2 completion:(/*^block*/id)arg3;
-(void)diagnosticLogControl:(id)arg1 completion:(/*^block*/id)arg2;
-(void)diagnosticShow:(id)arg1 level:(int)arg2 completion:(/*^block*/id)arg3;

@end

