/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:42:51 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface WCXmlParser : NSObject {
}
+(BOOL)SetDataItem:(id)arg1 ByXml:(id)arg2;
+(BOOL)SetBGStorage:(id)arg1 ByXml:(id)arg2 preferLang:(id)arg3;
+(id)albumListFromXmlNode:(struct XmlReaderNode_t*)arg1;
+(void)setAppInfo:(id)arg1 byXmlNode:(struct XmlReaderNode_t*)arg2;
+(void)setWCContentItem:(id)arg1 byXmlNode:(struct XmlReaderNode_t*)arg2;
+(id)bgAlbumFromXmlNode:(struct XmlReaderNode_t*)arg1;
+(id)bgGroupListFromXmlNode:(struct XmlReaderNode_t*)arg1;
+(id)bgAuthorFromXmlNode:(struct XmlReaderNode_t*)arg1;
+(id)bgGroupFromXmlNode:(struct XmlReaderNode_t*)arg1;
+(id)mediaItemFromXmlNode:(struct XmlReaderNode_t*)arg1;
+(id)urlFromXmlNode:(struct XmlReaderNode_t*)arg1;
+(id)mediaListFromXmlNode:(struct XmlReaderNode_t*)arg1;
+(id)xmlOfAppInfo:(id)arg1;
+(id)WCBGStorageToXML:(id)arg1;
+(id)WCUploadTaskToXML:(id)arg1;
@end