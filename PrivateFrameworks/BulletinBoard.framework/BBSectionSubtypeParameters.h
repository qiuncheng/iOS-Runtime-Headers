/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBSectionSubtypeParameters : NSObject <NSSecureCoding> {
    NSString *_alternateActionLabel;
    NSString *_bannerAccessoryRemoteServiceBundleIdentifier;
    NSString *_bannerAccessoryRemoteViewControllerClassName;
    NSNumber *_boxedAllowsAddingToLockScreenWhenUnlocked;
    NSNumber *_boxedAllowsAutomaticRemovalFromLockScreen;
    NSNumber *_boxedCanBeSilencedByMenuButtonPress;
    NSNumber *_boxedCoalescesWhenLocked;
    NSNumber *_boxedIPodOutAlertType;
    NSNumber *_boxedIgnoresQuietMode;
    NSNumber *_boxedInertWhenLocked;
    NSNumber *_boxedPlaysSoundForModify;
    NSNumber *_boxedPreservesUnlockActionCase;
    NSNumber *_boxedPreventLock;
    NSNumber *_boxedRealertCount;
    NSNumber *_boxedShowsContactPhoto;
    NSNumber *_boxedShowsUnreadIndicatorForNoticesFeed;
    NSNumber *_boxedSubtypePriority;
    NSNumber *_boxedSuppressesAlertsWhenAppIsActive;
    NSNumber *_boxedSuppressesTitle;
    NSNumber *_boxedVisuallyIndicatesWhenDateIsInFuture;
    BBSectionSubtypeParameters *_fallbackParameters;
    NSString *_fullAlternateActionLabel;
    NSString *_fullUnlockActionLabel;
    NSString *_missedBannerDescriptionFormat;
    NSString *_secondaryContentRemoteServiceBundleIdentifier;
    NSString *_secondaryContentRemoteViewControllerClassName;
    BBSectionIcon *_sectionIconOverride;
    BBColor *_tintColor;
    NSString *_topic;
    NSString *_unlockActionLabel;
}

@property (nonatomic, retain) NSSet *alertSuppressionAppIDs;
@property (nonatomic) BOOL allowsAddingToLockScreenWhenUnlocked;
@property (nonatomic) BOOL allowsAutomaticRemovalFromLockScreen;
@property (nonatomic, copy) NSString *alternateActionLabel;
@property (nonatomic, copy) NSString *bannerAccessoryRemoteServiceBundleIdentifier;
@property (nonatomic, copy) NSString *bannerAccessoryRemoteViewControllerClassName;
@property (nonatomic, retain) NSNumber *boxedAllowsAddingToLockScreenWhenUnlocked;
@property (nonatomic, retain) NSNumber *boxedAllowsAutomaticRemovalFromLockScreen;
@property (nonatomic, retain) NSNumber *boxedCanBeSilencedByMenuButtonPress;
@property (nonatomic, retain) NSNumber *boxedCoalescesWhenLocked;
@property (nonatomic, retain) NSNumber *boxedIPodOutAlertType;
@property (nonatomic, retain) NSNumber *boxedIgnoresQuietMode;
@property (nonatomic, retain) NSNumber *boxedInertWhenLocked;
@property (nonatomic, retain) NSNumber *boxedPlaysSoundForModify;
@property (nonatomic, retain) NSNumber *boxedPreservesUnlockActionCase;
@property (nonatomic, retain) NSNumber *boxedPreventLock;
@property (nonatomic, retain) NSNumber *boxedRealertCount;
@property (nonatomic, retain) NSNumber *boxedShowsContactPhoto;
@property (nonatomic, retain) NSNumber *boxedShowsUnreadIndicatorForNoticesFeed;
@property (nonatomic, retain) NSNumber *boxedSubtypePriority;
@property (nonatomic, retain) NSNumber *boxedSuppressesAlertsWhenAppIsActive;
@property (nonatomic, retain) NSNumber *boxedSuppressesTitle;
@property (nonatomic, retain) NSNumber *boxedVisuallyIndicatesWhenDateIsInFuture;
@property (nonatomic) BOOL canBeSilencedByMenuButtonPress;
@property (nonatomic) BOOL coalescesWhenLocked;
@property (nonatomic) BBSectionSubtypeParameters *fallbackParameters;
@property (nonatomic, copy) NSString *fullAlternateActionLabel;
@property (nonatomic, copy) NSString *fullUnlockActionLabel;
@property (nonatomic) int iPodOutAlertType;
@property (nonatomic) BOOL ignoresQuietMode;
@property (nonatomic) BOOL inertWhenLocked;
@property (nonatomic, copy) NSString *missedBannerDescriptionFormat;
@property (nonatomic) BOOL playsSoundForModify;
@property (nonatomic) BOOL preservesUnlockActionCase;
@property (nonatomic) BOOL preventLock;
@property (nonatomic) unsigned int realertCount;
@property (nonatomic, copy) NSString *secondaryContentRemoteServiceBundleIdentifier;
@property (nonatomic, copy) NSString *secondaryContentRemoteViewControllerClassName;
@property (nonatomic, copy) BBSectionIcon *sectionIconOverride;
@property (nonatomic) BOOL showsContactPhoto;
@property (nonatomic) BOOL showsUnreadIndicatorForNoticesFeed;
@property (nonatomic) unsigned int subtypePriority;
@property (nonatomic) BOOL suppressesAlertsWhenAppIsActive;
@property (nonatomic) BOOL suppressesTitle;
@property (nonatomic, retain) BBColor *tintColor;
@property (nonatomic, copy) NSString *topic;
@property (nonatomic, copy) NSString *unlockActionLabel;
@property (nonatomic) BOOL visuallyIndicatesWhenDateIsInFuture;

+ (BOOL)supportsSecureCoding;

- (id)alertSuppressionAppIDs;
- (BOOL)allowsAddingToLockScreenWhenUnlocked;
- (BOOL)allowsAutomaticRemovalFromLockScreen;
- (id)alternateActionLabel;
- (id)bannerAccessoryRemoteServiceBundleIdentifier;
- (id)bannerAccessoryRemoteViewControllerClassName;
- (id)boxedAllowsAddingToLockScreenWhenUnlocked;
- (id)boxedAllowsAutomaticRemovalFromLockScreen;
- (id)boxedCanBeSilencedByMenuButtonPress;
- (id)boxedCoalescesWhenLocked;
- (id)boxedIPodOutAlertType;
- (id)boxedIgnoresQuietMode;
- (id)boxedInertWhenLocked;
- (id)boxedPlaysSoundForModify;
- (id)boxedPreservesUnlockActionCase;
- (id)boxedPreventLock;
- (id)boxedRealertCount;
- (id)boxedShowsContactPhoto;
- (id)boxedShowsUnreadIndicatorForNoticesFeed;
- (id)boxedSubtypePriority;
- (id)boxedSuppressesAlertsWhenAppIsActive;
- (id)boxedSuppressesTitle;
- (id)boxedVisuallyIndicatesWhenDateIsInFuture;
- (BOOL)canBeSilencedByMenuButtonPress;
- (BOOL)coalescesWhenLocked;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbackParameters;
- (id)fullAlternateActionLabel;
- (id)fullUnlockActionLabel;
- (int)iPodOutAlertType;
- (BOOL)ignoresQuietMode;
- (BOOL)inertWhenLocked;
- (id)initWithCoder:(id)arg1;
- (id)initWithFallbackParameters:(id)arg1;
- (id)missedBannerDescriptionFormat;
- (BOOL)playsSoundForModify;
- (BOOL)preservesUnlockActionCase;
- (BOOL)preventLock;
- (unsigned int)realertCount;
- (id)secondaryContentRemoteServiceBundleIdentifier;
- (id)secondaryContentRemoteViewControllerClassName;
- (id)sectionIconOverride;
- (void)setAlertSuppressionAppIDs:(id)arg1;
- (void)setAllowsAddingToLockScreenWhenUnlocked:(BOOL)arg1;
- (void)setAllowsAutomaticRemovalFromLockScreen:(BOOL)arg1;
- (void)setAlternateActionLabel:(id)arg1;
- (void)setBannerAccessoryRemoteServiceBundleIdentifier:(id)arg1;
- (void)setBannerAccessoryRemoteViewControllerClassName:(id)arg1;
- (void)setBoxedAllowsAddingToLockScreenWhenUnlocked:(id)arg1;
- (void)setBoxedAllowsAutomaticRemovalFromLockScreen:(id)arg1;
- (void)setBoxedCanBeSilencedByMenuButtonPress:(id)arg1;
- (void)setBoxedCoalescesWhenLocked:(id)arg1;
- (void)setBoxedIPodOutAlertType:(id)arg1;
- (void)setBoxedIgnoresQuietMode:(id)arg1;
- (void)setBoxedInertWhenLocked:(id)arg1;
- (void)setBoxedPlaysSoundForModify:(id)arg1;
- (void)setBoxedPreservesUnlockActionCase:(id)arg1;
- (void)setBoxedPreventLock:(id)arg1;
- (void)setBoxedRealertCount:(id)arg1;
- (void)setBoxedShowsContactPhoto:(id)arg1;
- (void)setBoxedShowsUnreadIndicatorForNoticesFeed:(id)arg1;
- (void)setBoxedSubtypePriority:(id)arg1;
- (void)setBoxedSuppressesAlertsWhenAppIsActive:(id)arg1;
- (void)setBoxedSuppressesTitle:(id)arg1;
- (void)setBoxedVisuallyIndicatesWhenDateIsInFuture:(id)arg1;
- (void)setCanBeSilencedByMenuButtonPress:(BOOL)arg1;
- (void)setCoalescesWhenLocked:(BOOL)arg1;
- (void)setFallbackParameters:(id)arg1;
- (void)setFullAlternateActionLabel:(id)arg1;
- (void)setFullUnlockActionLabel:(id)arg1;
- (void)setIPodOutAlertType:(int)arg1;
- (void)setIgnoresQuietMode:(BOOL)arg1;
- (void)setInertWhenLocked:(BOOL)arg1;
- (void)setMissedBannerDescriptionFormat:(id)arg1;
- (void)setPlaysSoundForModify:(BOOL)arg1;
- (void)setPreservesUnlockActionCase:(BOOL)arg1;
- (void)setPreventLock:(BOOL)arg1;
- (void)setRealertCount:(unsigned int)arg1;
- (void)setSecondaryContentRemoteServiceBundleIdentifier:(id)arg1;
- (void)setSecondaryContentRemoteViewControllerClassName:(id)arg1;
- (void)setSectionIconOverride:(id)arg1;
- (void)setShowsContactPhoto:(BOOL)arg1;
- (void)setShowsUnreadIndicatorForNoticesFeed:(BOOL)arg1;
- (void)setSubtypePriority:(unsigned int)arg1;
- (void)setSuppressesAlertsWhenAppIsActive:(BOOL)arg1;
- (void)setSuppressesTitle:(BOOL)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTopic:(id)arg1;
- (void)setUnlockActionLabel:(id)arg1;
- (void)setVisuallyIndicatesWhenDateIsInFuture:(BOOL)arg1;
- (BOOL)showsContactPhoto;
- (BOOL)showsUnreadIndicatorForNoticesFeed;
- (unsigned int)subtypePriority;
- (BOOL)suppressesAlertsWhenAppIsActive;
- (BOOL)suppressesTitle;
- (id)tintColor;
- (id)topic;
- (id)unlockActionLabel;
- (BOOL)visuallyIndicatesWhenDateIsInFuture;

@end