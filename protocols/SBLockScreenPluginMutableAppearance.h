/* Generated by RuntimeBrowser.
 */

@protocol SBLockScreenPluginMutableAppearance <SBLockScreenPluginAppearance>

@required

- (int)backgroundStyle;
- (NSArray *)elementOverrides;
- (BOOL)isHidden;
- (SBLockScreenLegibilitySettings *)legibilitySettings;
- (int)notificationBehavior;
- (int)presentationStyle;
- (unsigned int)restrictedCapabilities;
- (void)setBackgroundStyle:(int)arg1;
- (void)setElementOverrides:(NSArray *)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setLegibilitySettings:(SBLockScreenLegibilitySettings *)arg1;
- (void)setNotificationBehavior:(int)arg1;
- (void)setPresentationStyle:(int)arg1;
- (void)setRestrictedCapabilities:(unsigned int)arg1;

@end