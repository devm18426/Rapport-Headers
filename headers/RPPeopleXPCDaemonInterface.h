/*
* This header is generated by classdump-dyld 1.0
* Operating System: Version 11.2.3 (Build 20D91)
* Image Source: /usr/libexec/rapportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RPPeopleXPCDaemonInterface
@required
-(void)xpcPeopleDiscoveryActivate:(id)arg1 completion:(/*^block*/id)arg2;
-(void)xpcPeopleAddAppleID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)xpcPeopleRemoveAppleID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)xpcPeopleDiscoveryUpdate:(id)arg1;

@end
