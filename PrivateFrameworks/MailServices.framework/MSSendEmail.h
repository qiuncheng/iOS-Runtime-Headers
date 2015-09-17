/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSSendEmail : MSMailDefaultService

+ (id)sendEmail:(id)arg1 playSound:(BOOL)arg2 completionBlock:(id /* block */)arg3;
+ (id)sendMessageData:(id)arg1 autosaveIdentifier:(id)arg2 completionBlock:(id /* block */)arg3;

- (void)_sendEmail:(id)arg1 playSound:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (void)_sendMessageData:(id)arg1 autosaveIdentifier:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_simulateServicesMethod:(id)arg1 arguments:(id)arg2 callback:(id /* block */)arg3;

@end