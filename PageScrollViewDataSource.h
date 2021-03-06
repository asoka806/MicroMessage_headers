/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:39:36 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@protocol UIScrollViewDelegate
@optional
-(void)scrollViewDidScroll(id):arg1 ;
-(void)scrollViewDidZoom(id):arg1 ;
-(void)scrollViewWillBeginDragging(id):arg1 ;
-(void)scrollViewWillEndDragging(id):arg1 withVelocity({):arg2 targetContentOffset(unsigned char):arg3 ;
-(void)scrollViewDidEndDragging(id):arg1 willDecelerate(BOOL):arg2 ;
-(void)scrollViewWillBeginDecelerating(id):arg1 ;
-(void)scrollViewDidEndDecelerating(id):arg1 ;
-(void)scrollViewDidEndScrollingAnimation(id):arg1 ;
-(id)viewForZoomingInScrollView(id):arg1 ;
-(void)scrollViewWillBeginZooming(id):arg1 withView(id):arg2 ;
-(void)scrollViewDidEndZooming(id):arg1 withView(id):arg2 atScale(float):arg3 ;
-(BOOL)scrollViewShouldScrollToTop(id):arg1 ;
-(void)scrollViewDidScrollToTop(id):arg1 ;
@end

@protocol PageScrollViewDelegate
@optional
-(void)onDoubleClicked;
-(void)onSingleClicked;
@required
-(void)onChangedWithCurrentIndex(int):arg1 ;
-(void)onChangedWithCurrentIndex(int):arg1 ;
@end

@protocol PageScrollViewDataSource
@required
-(id)pageScrollView(id):arg1 viewForItem(unsigned):arg2 ;
-(unsigned)numberOfItems(id):arg1 ;
-(unsigned)currentIndex(id):arg1 ;
-(id)pageScrollView(id):arg1 viewForItem(unsigned):arg2 ;
-(unsigned)numberOfItems(id):arg1 ;
-(unsigned)currentIndex(id):arg1 ;
@end
