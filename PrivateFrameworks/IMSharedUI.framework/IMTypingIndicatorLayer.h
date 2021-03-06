/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

@interface IMTypingIndicatorLayer : CALayer <IMTypingIndicatorLayerProtocol> {
    CALayer * _bubbleContainer;
    float  _bubbleOpacity;
    struct UIColor { Class x1; } * _customBubbleColor;
    BOOL  _hasDarkBackground;
    id  _iconImage;
    CALayer * _iconImageLayer;
    CALayer * _largeBubble;
    CALayer * _mediumBubble;
    CALayer * _smallBubble;
    CALayer * _thinkingDot;
    CALayer * _thinkingDotContainer;
    CAReplicatorLayer * _thinkingDots;
}

@property (nonatomic, readonly) UIColor *bubbleColor;
@property (nonatomic, retain) CALayer *bubbleContainer;
@property (nonatomic) float bubbleOpacity;
@property (nonatomic, copy) UIColor *customBubbleColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasDarkBackground;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) id iconImage;
@property (nonatomic, retain) CALayer *iconImageLayer;
@property (nonatomic, retain) CALayer *largeBubble;
@property (nonatomic, retain) CALayer *mediumBubble;
@property (nonatomic, retain) CALayer *smallBubble;
@property (readonly) Class superclass;
@property (nonatomic, retain) CALayer *thinkingDot;
@property (nonatomic, retain) CALayer *thinkingDotContainer;
@property (nonatomic, retain) CAReplicatorLayer *thinkingDots;

+ (struct UIColor { Class x1; }*)darkBackgroundThinkingDotColor;
+ (struct UIColor { Class x1; }*)defaultBubbleColor;
+ (struct CGSize { float x1; float x2; })defaultSize;
+ (struct UIColor { Class x1; }*)defaultThinkingDotColor;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })iconImageFrame;
+ (float)iconImageLeadingSpace;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })largeBubbleFrame;
+ (struct CGPoint { float x1; float x2; })largeBubbleGrowOffset;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })mediumBubbleFrame;
+ (struct CGPoint { float x1; float x2; })mediumBubbleGrowOffset;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })smallBubbleFrame;
+ (struct CGPoint { float x1; float x2; })smallBubbleGrowOffset;
+ (BOOL)supportsTypingIndicatorAnimation;
+ (float)thinkingDotDiameter;
+ (float)thinkingDotSpace;
+ (struct CGPoint { float x1; float x2; })thinkingDotsOffset;

- (void).cxx_destruct;
- (void)_buildIconImage;
- (void)_buildThinkingDots;
- (id)_largeBubbleGrowAnimationsWithSpeed:(float)arg1 offset:(struct CGPoint { float x1; float x2; })arg2;
- (id)_largeBubblePulseAnimationWithSpeed:(float)arg1 delay:(float)arg2;
- (id)_mediumBubbleGrowAnimationsWithSpeed:(float)arg1 offset:(struct CGPoint { float x1; float x2; })arg2;
- (id)_mediumBubblePulseAnimationWithSpeed:(float)arg1 delay:(float)arg2;
- (void)_setup;
- (id)_smallBubbleGrowAnimationsWithSpeed:(float)arg1 offset:(struct CGPoint { float x1; float x2; })arg2;
- (id)_smallBubblePulseAnimationWithSpeed:(float)arg1 delay:(float)arg2;
- (void)_updateBubbleColors;
- (void)_updateForImage;
- (struct UIColor { Class x1; }*)bubbleColor;
- (id)bubbleContainer;
- (float)bubbleOpacity;
- (double)convertedCurrentMediaTime;
- (struct UIColor { Class x1; }*)customBubbleColor;
- (BOOL)hasDarkBackground;
- (id)iconImage;
- (id)iconImageLayer;
- (id)init;
- (id)largeBubble;
- (id)mediumBubble;
- (void)setBubbleContainer:(id)arg1;
- (void)setBubbleOpacity:(float)arg1;
- (void)setCustomBubbleColor:(struct UIColor { Class x1; }*)arg1;
- (void)setHasDarkBackground:(BOOL)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIconImageLayer:(id)arg1;
- (void)setLargeBubble:(id)arg1;
- (void)setMediumBubble:(id)arg1;
- (void)setSmallBubble:(id)arg1;
- (void)setThinkingDot:(id)arg1;
- (void)setThinkingDotContainer:(id)arg1;
- (void)setThinkingDots:(id)arg1;
- (id)smallBubble;
- (void)startGrowAnimation;
- (void)startPulseAnimation;
- (void)startShrinkAnimationWithCompletionBlock:(id /* block */)arg1;
- (void)stopAnimation;
- (void)stopPulseAnimation;
- (id)thinkingDot;
- (id)thinkingDotContainer;
- (id)thinkingDots;

@end
