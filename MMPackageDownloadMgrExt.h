/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:41:52 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol MMPackageDownloadMgrExt
@optional
-(void)onPackageCancelFinish(id):arg1 ;
-(void)onPackageDownloadFinish(id):arg1 package(id):arg2 ;
-(void)onPackageDownloadProcessUpdated(id):arg1 downloadSize(int):arg2 totalSize(int):arg3 ;
-(void)onPackageListUpdated(id):arg1 ;
@end