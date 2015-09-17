/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDateComponentsFormatter : NSFormatter <NSObservable, NSObserver> {
    unsigned int _allowedUnits;
    BOOL _allowsFractionalUnits;
    NSCalendar *_calendar;
    BOOL _collapsesLargestUnit;
    void *_fmt;
    NSString *_fmtLocaleIdent;
    int _formattingContext;
    BOOL _includesApproximationPhrase;
    BOOL _includesTimeRemainingPhrase;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _lock;
    int _maximumUnitCount;
    NSDate *_referenceDate;
    void *_reserved;
    NSNumberFormatter *_unitFormatter;
    int _unitsStyle;
    void *_unused;
    unsigned int _zeroFormattingBehavior;
}

@property unsigned int allowedUnits;
@property BOOL allowsFractionalUnits;
@property (copy) NSCalendar *calendar;
@property BOOL collapsesLargestUnit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property int formattingContext;
@property (readonly) unsigned int hash;
@property BOOL includesApproximationPhrase;
@property BOOL includesTimeRemainingPhrase;
@property int maximumUnitCount;
@property (copy) NSDate *referenceDate;
@property (readonly) Class superclass;
@property int unitsStyle;
@property unsigned int zeroFormattingBehavior;

+ (id)localizedStringFromDateComponents:(id)arg1 unitsStyle:(int)arg2;

- (void)_NSDateComponentsFormatter_commonInit;
- (id)_calendarFromDateComponents:(id)arg1;
- (id)_calendarOrCanonicalCalendar;
- (id)_canonicalizedDateComponents:(id)arg1 withCalendar:(id)arg2 usedUnits:(unsigned int*)arg3;
- (void)_ensureUnitFormatterWithLocale:(id)arg1;
- (void)_flushFormatterCache;
- (BOOL)_mayDecorateAttributedStringForObjectValue:(id)arg1;
- (id)_stringFromDateComponents:(id)arg1;
- (id)_stringFromTimeInterval:(double)arg1;
- (unsigned int)allowedUnits;
- (BOOL)allowsFractionalUnits;
- (id)calendar;
- (BOOL)collapsesLargestUnit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (int)formattingContext;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (BOOL)includesApproximationPhrase;
- (BOOL)includesTimeRemainingPhrase;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (int)maximumUnitCount;
- (void)receiveObservedValue:(id)arg1;
- (id)referenceDate;
- (void)setAllowedUnits:(unsigned int)arg1;
- (void)setAllowsFractionalUnits:(BOOL)arg1;
- (void)setCalendar:(id)arg1;
- (void)setCollapsesLargestUnit:(BOOL)arg1;
- (void)setFormattingContext:(int)arg1;
- (void)setIncludesApproximationPhrase:(BOOL)arg1;
- (void)setIncludesTimeRemainingPhrase:(BOOL)arg1;
- (void)setMaximumUnitCount:(int)arg1;
- (void)setReferenceDate:(id)arg1;
- (void)setUnitsStyle:(int)arg1;
- (void)setZeroFormattingBehavior:(unsigned int)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromDate:(id)arg1 toDate:(id)arg2;
- (id)stringFromDateComponents:(id)arg1;
- (id)stringFromTimeInterval:(double)arg1;
- (int)unitsStyle;
- (unsigned int)zeroFormattingBehavior;

@end