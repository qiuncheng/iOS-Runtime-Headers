/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIAsyncInvocationObserver : NSObject {
    NSObject<OS_dispatch_queue> *_completionQueueManagementQueue;
    NSObject<OS_dispatch_queue> *_postCompletionQueue;
    BOOL _resumedPostCompletionQueue;
    BOOL _suspendedPostCompletionQueue;
}

+ (void)whenInvocationsCompleteForObservers:(id)arg1 do:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_didCompleteInvocation;
- (id)init;
- (void)whenCompleteDo:(id /* block */)arg1;

@end