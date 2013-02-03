/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class AccountValidator, MailAccount, NSString, NSMutableArray, DeliveryAccount, NSError;

@interface MCEmailAccountPayloadHandler : MCPayloadHandler {
    MailAccount *_account;
    NSString *_accountDescription;
    NSString *_accountName;
    NSInteger _accountType;
    AccountValidator *_accountValidator;
    DeliveryAccount *_deliveryAccount;
    BOOL _doneValidatingAccount;
    NSString *_emailAddress;
    NSMutableArray *_fieldsSetByAnswers;
    NSString *_imapPathPrefix;
    NSString *_incomingHostName;
    NSString *_incomingPassword;
    NSUInteger _incomingPortNumber;
    BOOL _incomingUseSSL;
    NSString *_incomingUserName;
    BOOL _incomingUsesPassword;
    BOOL _needsPreparePhase;
    NSString *_outgoingHostName;
    NSString *_outgoingPassword;
    NSUInteger _outgoingPortNumber;
    BOOL _outgoingUseSSL;
    NSString *_outgoingUserName;
    BOOL _outgoingUsesPassword;
    NSError *_validationError;
}

+ (id)descriptionForPayloadCount:(NSUInteger)arg1;
+ (id)profileDisplayNameFromTag:(id)arg1;

- (id)accountDescription;
- (id)accountType;
- (NSInteger)accountTypeFromString:(id)arg1;
- (void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(BOOL)arg3;
- (void)clearAnswersAfterValidationError;
- (id)createAccount;
- (id)createUniqueAccountIdUsingHostName:(id)arg1 userName:(id)arg2 delivery:(BOOL)arg3;
- (void)dealloc;
- (id)deleteAccount;
- (id)deliveryAccountFromProfileInformation;
- (id)errorFromValidationError:(id)arg1;
- (id)imapMailboxPrefix;
- (id)incomingAccountFromProfileInformation;
- (id)incomingHostName;
- (id)incomingPortNumber;
- (id)incomingUsername;
- (id)incomingUsesSSL;
- (id)initWithPayload:(id)arg1;
- (id)invalidEmailAccountPayloadError;
- (BOOL)needsPreflightWithRoot:(id)arg1 truth:(id)arg2;
- (BOOL)needsPreparationWithRoot:(id)arg1 truth:(id)arg2;
- (id)outgoingHostName;
- (id)outgoingPortNumber;
- (id)outgoingUsername;
- (id)outgoingUsesSSL;
- (id)payloadDescription;
- (id)performInstallStep:(NSInteger)arg1 withRoot:(id)arg2 truth:(id)arg3;
- (void)setUserPromptedValues:(id)arg1;
- (id)userPromptValues;
- (id)validateAccountInformation;
- (id)validateAccountWithServer;
- (void)willContinueAfterFailingStep:(NSInteger)arg1;
- (void)willRetryStep:(NSInteger)arg1;

@end