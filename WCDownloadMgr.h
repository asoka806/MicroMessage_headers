/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:42:52 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <PBMessageObserverDelegate.h>
#import <CNetworkStatusExt.h>

@interface WCDownloadMgr : NSObject <PBMessageObserverDelegate, CNetworkStatusExt> {
	OrderedDictionary* m_downloadQueue; 
	NSMutableSet* m_cancelDownloadMedias; 
	NSMutableSet* m_needNotifyMedias; 
	int m_currentDownloadingCount; 
	int m_maxDownloadCount; 
	id<WCDownloadMgrDelegate> m_delegate; 
}
@property (assign,nonatomic) id<WCDownloadMgrDelegate> m_delegate; 
-(void)setM_delegate:(id)arg1;
-(void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
-(void)forceDownloadMedia:(id)arg1 downloadType:(int)arg2;
-(void)downloadMedia:(id)arg1 downloadType:(int)arg2;
-(void)forceDownloadMediaWithProcessNotify:(id)arg1 downloadType:(int)arg2;
-(void)ReachabilityChange:(unsigned long)arg1;
-(void)ReveicePartFromURL:(id)arg1;
-(void)MessageReturnCDN:(id)arg1 Event:(unsigned long)arg2;
-(void)doDownloadMedia:(id)arg1;
-(void)doDownloadMediaCDN:(id)arg1;
-(void)addDownloadTask:(id)arg1 downloadType:(int)arg2 withNotify:(BOOL)arg3;
-(void)tryStartNextDownloadTask;
-(void)onReveicePartFromURL:(id)arg1;
-(void)cancelDownloadMedia:(id)arg1 downloadType:(int)arg2;
-(void)downloadMediaWithProcessNotify:(id)arg1 downloadType:(int)arg2;
-(id)init;
-(void)dealloc;
@end