/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class DAFolder;



@interface MFDAMailbox : MailboxUid 
{
    DAFolder *_DAFolder;
}


- (id)folderID;
- (id)initWithName:(id)arg1 attributes:(NSUInteger)arg2 account:(id)arg3 folder:(id)arg4;
- (id)DAFolder;
- (void)setDAFolder:(id)arg1;
- (id)URLStringWithAccount:(id)arg1;
- (id)description;
- (void)dealloc;

@end