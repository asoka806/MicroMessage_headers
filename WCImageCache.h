/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:42:01 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <MMService.h>

@interface WCImageCache : MMService <MMService> {
	NSMutableDictionary* m_WCImagesOfType; 
}
+(BOOL)couldCacheImage:(id)arg1;
-(BOOL)onServiceMemoryWarning;
-(id)getImage:(id)arg1 ofType:(int)arg2;
-(void)setImage:(id)arg1 forMedia:(id)arg2 ofType:(int)arg3;
-(void)clearAllCaches;
-(id)init;
-(void)dealloc;
@end