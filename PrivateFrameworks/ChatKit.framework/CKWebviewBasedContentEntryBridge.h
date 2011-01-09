/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableArray;



@interface CKWebviewBasedContentEntryBridge : CKContentEntryBridge 
{
    NSMutableArray *_resources;
    NSInteger _composeResourcePoolID;
}


- (id)init;
- (void)dealloc;
- (id)newContentViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMessageComposition:(id)arg1;
- (id)messageComposition;
- (void)setMessageParts:(id)arg1;
- (id)attachments;
- (id)messageParts;
- (void)insertMessagePart:(id)arg1;
- (BOOL)hasContent;
- (id)supportedPasteboardTypesInTextContentView:(id)arg1;
- (id)documentFragmentForPasteboardItemAtIndex:(NSInteger)arg1 inTextContentView:(id)arg2;
- (void)richContentView:(id)arg1 didRemoveImage:(id)arg2;
- (void)richContentView:(id)arg1 didInsertImage:(id)arg2;
- (id)_textView;
- (void)_resetResourcePool;
- (id)_nodeForImagePart:(id)arg1 forRichContentView:(id)arg2;
- (id)_htmlForMessagePart:(id)arg1;

@end