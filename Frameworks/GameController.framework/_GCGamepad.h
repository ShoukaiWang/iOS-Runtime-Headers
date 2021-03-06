/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

@interface _GCGamepad : GCGamepad <GCNamedProfile, NSSecureCoding> {
    _GCControllerButtonInput * _button0;
    _GCControllerButtonInput * _button1;
    _GCControllerButtonInput * _button2;
    _GCControllerButtonInput * _button3;
    GCController * _controller;
    _GCControllerDirectionPad * _dpad;
    BOOL  _dpadFlippedY;
    _GCControllerButtonInput * _leftShoulder;
    _GCControllerButtonInput * _rightShoulder;
    id /* block */  _valueChangedHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)buttonA;
- (id)buttonB;
- (id)buttonX;
- (id)buttonY;
- (id)controller;
- (id)dpad;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithController:(id)arg1;
- (id)initWithController:(id)arg1 dpadFlippedY:(BOOL)arg2;
- (id)leftShoulder;
- (id)name;
- (id)rightShoulder;
- (void)setController:(id)arg1;
- (void)setPlayerIndex:(int)arg1;
- (void)setValueChangedHandler:(id /* block */)arg1;
- (id /* block */)valueChangedHandler;

@end
