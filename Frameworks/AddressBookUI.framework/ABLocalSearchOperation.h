/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABLocalSearchOperationDelegate>, NSString;



@interface ABLocalSearchOperation : NSOperation 
{
    void *_addressBook;
    NSString *_search;
    NSString *_accountIdentifier;
    NSInteger _storeID;
    NSInteger _groupID;
    struct __CFArray { } *_recordIDAccumulator;
    NSUInteger _sequenceNumber;
    <ABLocalSearchOperationDelegate> *_delegate;
}

@property NSUInteger sequenceNumber; /* unknown property attribute: V_sequenceNumber */
@property <ABLocalSearchOperationDelegate> *delegate; /* unknown property attribute: V_delegate */
@property NSInteger groupID; /* unknown property attribute: V_groupID */
@property NSInteger storeID; /* unknown property attribute: V_storeID */
@property(copy) NSString *accountIdentifier; /* unknown property attribute: V_accountIdentifier */
@property(copy) NSString *search; /* unknown property attribute: V_search */
@property void *addressBook; /* unknown property attribute: V_addressBook */


- (void)dealloc;
- (void)setAddressBook:(void*)arg1;
- (void)addRecordID:(NSInteger)arg1;
- (void)main;
- (NSUInteger)sequenceNumber;
- (void)setSequenceNumber:(NSUInteger)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (NSInteger)groupID;
- (void)setGroupID:(NSInteger)arg1;
- (NSInteger)storeID;
- (void)setStoreID:(NSInteger)arg1;
- (id)accountIdentifier;
- (void)setAccountIdentifier:(id)arg1;
- (id)search;
- (void)setSearch:(id)arg1;
- (void*)addressBook;

@end