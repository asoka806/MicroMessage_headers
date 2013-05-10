/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:39:23 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface GetA8KeyReq : PBGeneratedMessage {
	unsigned int hasFriendUserName:1; 
	unsigned int hasUserName:1; 
	unsigned int hasBaseRequest:1; 
	unsigned int hasA2Key:1; 
	unsigned int hasAppId:1; 
	unsigned int hasScope:1; 
	unsigned int hasState:1; 
	unsigned int hasReqUrl:1; 
	unsigned int hasOpCode:1; 
	unsigned int hasFriendQq:1; 
	unsigned int hasScene:1; 
	NSString* friendUserName; 
	NSString* userName; 
	BaseRequest* baseRequest; 
	SKBuiltinBuffer_t* a2Key; 
	SKBuiltinString_t* appId; 
	SKBuiltinString_t* scope; 
	SKBuiltinString_t* state; 
	SKBuiltinString_t* reqUrl; 
	unsigned opCode; 
	unsigned friendQq; 
	unsigned scene; 
}
@property (retain) NSString* userName; 
@property (assign) BOOL hasUserName; 
@property (assign) unsigned scene; 
@property (assign) BOOL hasScene; 
@property (assign) unsigned friendQq; 
@property (assign) BOOL hasFriendQq; 
@property (retain) NSString* friendUserName; 
@property (assign) BOOL hasFriendUserName; 
@property (retain) SKBuiltinString_t* reqUrl; 
@property (assign) BOOL hasReqUrl; 
@property (retain) SKBuiltinString_t* state; 
@property (assign) BOOL hasState; 
@property (retain) SKBuiltinString_t* scope; 
@property (assign) BOOL hasScope; 
@property (retain) SKBuiltinString_t* appId; 
@property (assign) BOOL hasAppId; 
@property (retain) SKBuiltinBuffer_t* a2Key; 
@property (assign) BOOL hasA2Key; 
@property (assign) unsigned opCode; 
@property (assign) BOOL hasOpCode; 
@property (retain) BaseRequest* baseRequest; 
@property (assign) BOOL hasBaseRequest; 
+(id)parseFromData:(id)arg1;
-(id)SetScene:(unsigned)arg1;
-(id)SetUserName:(id)arg1;
-(id)SetA2Key:(id)arg1;
-(id)SetState:(id)arg1;
-(id)SetScope:(id)arg1;
-(id)SetAppId:(id)arg1;
-(id)SetOpCode:(unsigned)arg1;
-(id)SetReqUrl:(id)arg1;
-(id)SetBaseRequest:(id)arg1;
-(int)serializedSize;
-(void)setHasUserName:(BOOL)arg1;
-(void)writeToCodedOutputStream:(id)arg1;
-(id)mergeFromCodedInputStream:(id)arg1;
-(void)setHasFriendQq:(BOOL)arg1;
-(void)setHasFriendUserName:(BOOL)arg1;
-(void)setHasReqUrl:(BOOL)arg1;
-(void)setHasScope:(BOOL)arg1;
-(id)SetFriendQq:(unsigned)arg1;
-(id)SetFriendUserName:(id)arg1;
-(void)setFriendQq:(unsigned)arg1;
-(void)setFriendUserName:(id)arg1;
-(void)setReqUrl:(id)arg1;
-(void)setHasAppId:(BOOL)arg1;
-(void)setHasA2Key:(BOOL)arg1;
-(void)setA2Key:(id)arg1;
-(void)setHasOpCode:(BOOL)arg1;
-(void)setOpCode:(unsigned)arg1;
-(void)setHasState:(BOOL)arg1;
-(void)setHasBaseRequest:(BOOL)arg1;
-(void)setBaseRequest:(id)arg1;
-(void)setHasScene:(BOOL)arg1;
-(void)setScene:(unsigned)arg1;
-(void)setState:(id)arg1;
-(void)setUserName:(id)arg1;
-(void)setAppId:(id)arg1;
-(id)init;
-(void)dealloc;
-(void)setScope:(id)arg1;
@end