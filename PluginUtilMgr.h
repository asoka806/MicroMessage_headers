/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:40:06 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <MMService.h>
#import <IMMLanguageMgrExt.h>

@interface PluginUtilMgr : MMService <MMService, IMMLanguageMgrExt> {
	NSDictionary* m_dicNameToType; 
	NSArray* m_arrNames; 
	NSArray* m_arrLocalizedNickNames; 
}
-(id)getPluginLocalizedNickName:(int)arg1;
-(void)onLanguageChange;
-(int)nameToPluginType:(id)arg1;
-(id)pluginTypeToName:(int)arg1;
-(void)initLocalizedName;
-(id)init;
-(void)dealloc;
@end