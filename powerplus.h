
@interface _UIActionSlider : UIControl <UIGestureRecognizerDelegate>
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(id)delegate;
-(id)backgroundColor;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(BOOL)isAnimating;
-(id)_knobView;
-(UIColor *)knobColor;
-(void)setKnobColor:(UIColor *)arg1 ;
-(void)_knobPanGesture:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 vibrantSettings:(id)arg2 ;
-(void)setCachedTrackMaskWidth:(double)arg1 ;
-(CGRect)knobRect;
-(long long)textStyle;
-(void)_makeTrackLabel;
-(double)_knobWidth;
-(double)_knobHorizontalPosition;
-(double)_knobVerticalInset;
-(CGRect)_trackFrame;
-(double)_knobMinXInset;
-(NSString *)trackText;
-(double)trackTextBaselineFromBottom;
-(CGSize)trackSize;
-(void)_hideTrackLabel:(BOOL)arg1 ;
-(void)setAnimating:(BOOL)arg1 ;
-(void)setTrackWidthProportion:(double)arg1 ;
-(void)_showTrackLabel;
-(void)updateAllTrackMasks;
-(double)knobWidth;
-(UIEdgeInsets)knobInsets;
-(double)_knobAvailableX;
-(double)_knobMinX;
-(double)_knobLeftMostX;
-(double)_knobRightMostX;
-(double)_knobMaxXInset;
-(double)_knobMaxX;
-(double)trackWidthProportion;
-(UIFont *)trackFont;
-(id)vibrantSettings;
//-(void)setVibrantSettings:(_UIVibrantSettings *)arg1 ;
-(double)cachedTrackMaskWidth;
-(CGRect)trackTextRect;
-(id)trackMaskPath;
-(void)setMaskPath:(CGPathRef)arg1 onView:(id)arg2 ;
-(id)trackMaskImage;
-(void)setMaskFromImage:(id)arg1 onView:(id)arg2 ;
-(BOOL)isShowingTrackLabel;
-(void)setShowingTrackLabel:(BOOL)arg1 ;
-(void)setKnobPosition:(double)arg1 ;
-(BOOL)shouldHideTrackLabelForXPoint:(double)arg1 ;
-(BOOL)xPointIsWithinTrack:(double)arg1 ;
-(void)_slideCompleted:(BOOL)arg1 ;
-(UIBezierPath *)knobMaskPath;
-(UIImage *)knobImage;
-(void)setKnobImage:(UIImage *)arg1 ;
-(void)setKnobImageOffset:(CGSize)arg1 ;
-(void)setTrackText:(NSString *)arg1 ;
-(void)setTrackFont:(UIFont *)arg1 ;
-(void)setTrackSize:(CGSize)arg1 ;
-(UILabel *)trackLabel;
-(void)setKnobWidth:(double)arg1 ;
-(void)setKnobInsets:(UIEdgeInsets)arg1 ;
-(void)openTrackAnimated:(BOOL)arg1 ;
-(void)closeTrackAnimated:(BOOL)arg1 ;
-(void)setTextStyle:(long long)arg1 ;
-(CGSize)knobImageOffset;
-(void)setTrackTextBaselineFromBottom:(double)arg1 ;
-(UIPanGestureRecognizer *)slideGestureRecognizer;
-(double)knobPosition;
@end


@interface SBUIPowerDownView : UIView{
    _UIActionSlider* _actionSlider;
}
-(id)initWithFrame:(CGRect)arg1 vibrantSettings:(id)arg2;
@end 

@interface _SBInternalPowerDownView : SBUIPowerDownView
@end

@interface _UIVibrantSettings : NSObject
@end

@interface _UIGlintyStringView : UIView 
@property (nonatomic,copy) NSString * text;
@end
