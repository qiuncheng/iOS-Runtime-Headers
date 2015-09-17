/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUISiriRemoteViewController : _UIRemoteViewController <SVSSiriViewControllerHosting> {
    <AFUISiriRemoteViewControllerDataSource> *_dataSource;
    <AFUISiriRemoteViewControllerDelegate> *_delegate;
}

@property (nonatomic) <AFUISiriRemoteViewControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AFUISiriRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)dataSource;
- (id)delegate;
- (void)didReceiveBugButtonLongPress;
- (void)didReceiveHelpAction;
- (void)didReceiveReportBugAction;
- (void)didReceiveShortTapAction;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)getScreenshotWithReplyHandler:(id /* block */)arg1;
- (void)handlePasscodeUnlockWithCompletion:(id /* block */)arg1;
- (void)notifyOnNextUserInteraction;
- (void)pulseHelpButton;
- (void)serviceBulletinWithIdentifier:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)serviceDidDetectMicButtonLongPressBegan;
- (void)serviceDidDetectMicButtonLongPressEnded;
- (void)serviceDidDetectMicButtonTap;
- (void)serviceDidDismissBugReporter;
- (void)serviceDidPresentBugReporter;
- (void)serviceDidPresentUserInterface;
- (void)serviceDidReadBulletinWithIdentifier:(id)arg1;
- (void)serviceLaunchApplicationWithBundleIdentifier:(id)arg1 withURL:(id)arg2 replyHandler:(id /* block */)arg3;
- (void)serviceOpenURL:(id)arg1 appBundleID:(id)arg2 allowSiriDismissal:(BOOL)arg3;
- (void)serviceOpenURL:(id)arg1 delaySessionEndForTTS:(BOOL)arg2 replyHandler:(id /* block */)arg3;
- (void)servicePresentationDidChangePeekMode:(unsigned int)arg1;
- (void)serviceRequestsDismissal:(BOOL)arg1;
- (void)serviceStartGuidedAccess;
- (void)serviceStartRequestWithOptions:(id)arg1;
- (void)serviceUserRelevantEventDidOccur;
- (void)serviceWillDismissViewControllerWithStatusBarStyle:(int)arg1;
- (void)serviceWillPresentViewControllerWithStatusBarStyle:(int)arg1;
- (id)sessionDelegate;
- (void)setBugReportingAvailable:(BOOL)arg1;
- (void)setCarDisplayGatekeeperVisible:(BOOL)arg1;
- (void)setCarDisplaySnippetVisible:(BOOL)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHelpButtonEmphasized:(BOOL)arg1;
- (void)setRequestOptions:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSpeechSynthesis:(id)arg1;
- (void)setStatusBarFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setStatusBarHidden:(BOOL)arg1;
- (void)setStatusViewDisabled:(BOOL)arg1;
- (void)setStatusViewHidden:(BOOL)arg1;
- (void)setStatusViewUserInteractionEnabled:(BOOL)arg1;
- (void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2;
- (void)siriDidActivateFromSource:(int)arg1;
- (void)siriDidDeactivate;
- (void)siriDidHidePasscodeUnlock;
- (void)siriIdleAndQuietStatusDidChange:(BOOL)arg1;
- (void)siriWillActivateFromSource:(int)arg1;
- (void)siriWillHidePasscodeUnlockForResult:(int)arg1;
- (void)siriWillShowPasscodeUnlock;
- (void)siriWillShowPasscodeUnlockAndCancelRequest:(BOOL)arg1;
- (id)speechSynthesisDelegate;
- (void)userInteractionDidOccur;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end