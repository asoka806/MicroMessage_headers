/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:41:49 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MMImageScrollViewHelper : NSObject {
	BOOL dontCalcPreviewRect; 
	BOOL noSingleTaps; 
	BOOL noDoubleTaps; 
	BOOL dontSupportVerticalLongImage; 
	BOOL dontSupportHorizontalLongImage; 
	id<MMImageScrollViewHelperDelegate> m_delegate; 
}
@property (assign,nonatomic) id<MMImageScrollViewHelperDelegate> m_delegate; 
@property (assign,nonatomic) BOOL dontSupportHorizontalLongImage; 
@property (assign,nonatomic) BOOL dontSupportVerticalLongImage; 
@property (assign,nonatomic) BOOL noDoubleTaps; 
@property (assign,nonatomic) BOOL noSingleTaps; 
@property (assign,nonatomic) BOOL dontCalcPreviewRect; 
-(void)setM_delegate:(id)arg1;
-(void)onSingleTap:(id)arg1;
-(void)onDoubleTap:(id)arg1;
-(void)initHelper:(CGSize)arg1;
-(void)initHelper:(CGSize)arg1 orientation:(int)arg2;
-(void)setDontSupportHorizontalLongImage:(BOOL)arg1;
-(void)ZoomForPoint:(CGPoint)arg1;
-(void)setDontCalcPreviewRect:(BOOL)arg1;
-(CGRect)zoomRectForScale:(float)arg1 withCenter:(CGPoint)arg2;
-(void)initHelper:(CGSize)arg1 orientation:(int)arg2 containSize:(CGSize)arg3;
-(CGSize)calculateImageFitSizeForPreview:(CGSize)arg1 maxSize:(CGSize)arg2;
-(void)InitGestureRecognizer;
-(void)setDontSupportVerticalLongImage:(BOOL)arg1;
-(void)setNoDoubleTaps:(BOOL)arg1;
-(void)setNoSingleTaps:(BOOL)arg1;
-(void)scrollViewDidZoom:(id)arg1;
-(id)init;
-(void)dealloc;
@end