/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:40:58 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface WCOpLog : NSObject {
	CMMDB* _db; 
	NSRecursiveLock* _lock; 
}
-(BOOL)modSnsBlackList:(id)arg1 modType:(int)arg2 syncNow:(BOOL)arg3;
-(void)initDB:(id)arg1 withLock:(id)arg2;
-(BOOL)changeStrangerRight:(BOOL)arg1;
-(BOOL)insertOpLog:(unsigned long)arg1 OpLog:(id)arg2;
-(id)init;
-(void)dealloc;
@end