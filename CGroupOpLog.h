/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:40:18 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CGroupOpLog : NSObject {
	CMMDB* m_oMMDB; 
	NSRecursiveLock* m_oLock; 
}
-(void)initDB:(id)arg1 withLock:(id)arg2;
-(void)notifySync;
-(BOOL)add_QuitGroup:(id)arg1 withUsrName:(id)arg2 NeedSync:(BOOL)arg3;
-(BOOL)add_SetGroupTopic:(id)arg1 withTopic:(id)arg2 NeedSync:(BOOL)arg3;
-(BOOL)add_MemberSwitch:(id)arg1 usrName:(id)arg2 flag:(unsigned long)arg3 open:(BOOL)arg4 sync:(BOOL)arg5;
-(BOOL)add_DislayName:(id)arg1 usrName:(id)arg2 dislayName:(id)arg3 sync:(BOOL)arg4;
-(BOOL)InsertOpLog:(unsigned long)arg1 OpLog:(id)arg2;
-(id)init;
-(void)dealloc;
@end