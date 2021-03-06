/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableFitnessFriendActivitySnapshot : PBCodable <HDDecoding, NSCopying> {
    double  _activeHours;
    double  _activeHoursGoal;
    double  _briskMinutes;
    double  _briskMinutesGoal;
    double  _date;
    double  _energyBurned;
    double  _energyBurnedGoal;
    NSData * _friendUUID;
    struct { 
        unsigned int activeHours : 1; 
        unsigned int activeHoursGoal : 1; 
        unsigned int briskMinutes : 1; 
        unsigned int briskMinutesGoal : 1; 
        unsigned int date : 1; 
        unsigned int energyBurned : 1; 
        unsigned int energyBurnedGoal : 1; 
        unsigned int pushCount : 1; 
        unsigned int snapshotIndex : 1; 
        unsigned int stepCount : 1; 
        unsigned int timeZoneOffsetFromUTCForNoon : 1; 
        unsigned int uploadedDate : 1; 
        unsigned int walkingAndRunningDistance : 1; 
        unsigned int wheelchairUse : 1; 
    }  _has;
    double  _pushCount;
    HDCodableSample * _sample;
    long long  _snapshotIndex;
    NSData * _sourceUUID;
    double  _stepCount;
    long long  _timeZoneOffsetFromUTCForNoon;
    double  _uploadedDate;
    double  _walkingAndRunningDistance;
    long long  _wheelchairUse;
}

@property (nonatomic) double activeHours;
@property (nonatomic) double activeHoursGoal;
@property (nonatomic) double briskMinutes;
@property (nonatomic) double briskMinutesGoal;
@property (nonatomic) double date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double energyBurned;
@property (nonatomic) double energyBurnedGoal;
@property (nonatomic, retain) NSData *friendUUID;
@property (nonatomic) BOOL hasActiveHours;
@property (nonatomic) BOOL hasActiveHoursGoal;
@property (nonatomic) BOOL hasBriskMinutes;
@property (nonatomic) BOOL hasBriskMinutesGoal;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) BOOL hasEnergyBurned;
@property (nonatomic) BOOL hasEnergyBurnedGoal;
@property (nonatomic, readonly) BOOL hasFriendUUID;
@property (nonatomic) BOOL hasPushCount;
@property (nonatomic, readonly) BOOL hasSample;
@property (nonatomic) BOOL hasSnapshotIndex;
@property (nonatomic, readonly) BOOL hasSourceUUID;
@property (nonatomic) BOOL hasStepCount;
@property (nonatomic) BOOL hasTimeZoneOffsetFromUTCForNoon;
@property (nonatomic) BOOL hasUploadedDate;
@property (nonatomic) BOOL hasWalkingAndRunningDistance;
@property (nonatomic) BOOL hasWheelchairUse;
@property (readonly) unsigned int hash;
@property (nonatomic) double pushCount;
@property (nonatomic, retain) HDCodableSample *sample;
@property (nonatomic) long long snapshotIndex;
@property (nonatomic, retain) NSData *sourceUUID;
@property (nonatomic) double stepCount;
@property (readonly) Class superclass;
@property (nonatomic) long long timeZoneOffsetFromUTCForNoon;
@property (nonatomic) double uploadedDate;
@property (nonatomic) double walkingAndRunningDistance;
@property (nonatomic) long long wheelchairUse;

- (void).cxx_destruct;
- (double)activeHours;
- (double)activeHoursGoal;
- (BOOL)applyToObject:(id)arg1;
- (double)briskMinutes;
- (double)briskMinutesGoal;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)description;
- (id)dictionaryRepresentation;
- (double)energyBurned;
- (double)energyBurnedGoal;
- (id)friendUUID;
- (BOOL)hasActiveHours;
- (BOOL)hasActiveHoursGoal;
- (BOOL)hasBriskMinutes;
- (BOOL)hasBriskMinutesGoal;
- (BOOL)hasDate;
- (BOOL)hasEnergyBurned;
- (BOOL)hasEnergyBurnedGoal;
- (BOOL)hasFriendUUID;
- (BOOL)hasPushCount;
- (BOOL)hasSample;
- (BOOL)hasSnapshotIndex;
- (BOOL)hasSourceUUID;
- (BOOL)hasStepCount;
- (BOOL)hasTimeZoneOffsetFromUTCForNoon;
- (BOOL)hasUploadedDate;
- (BOOL)hasWalkingAndRunningDistance;
- (BOOL)hasWheelchairUse;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)pushCount;
- (BOOL)readFrom:(id)arg1;
- (id)sample;
- (void)setActiveHours:(double)arg1;
- (void)setActiveHoursGoal:(double)arg1;
- (void)setBriskMinutes:(double)arg1;
- (void)setBriskMinutesGoal:(double)arg1;
- (void)setDate:(double)arg1;
- (void)setEnergyBurned:(double)arg1;
- (void)setEnergyBurnedGoal:(double)arg1;
- (void)setFriendUUID:(id)arg1;
- (void)setHasActiveHours:(BOOL)arg1;
- (void)setHasActiveHoursGoal:(BOOL)arg1;
- (void)setHasBriskMinutes:(BOOL)arg1;
- (void)setHasBriskMinutesGoal:(BOOL)arg1;
- (void)setHasDate:(BOOL)arg1;
- (void)setHasEnergyBurned:(BOOL)arg1;
- (void)setHasEnergyBurnedGoal:(BOOL)arg1;
- (void)setHasPushCount:(BOOL)arg1;
- (void)setHasSnapshotIndex:(BOOL)arg1;
- (void)setHasStepCount:(BOOL)arg1;
- (void)setHasTimeZoneOffsetFromUTCForNoon:(BOOL)arg1;
- (void)setHasUploadedDate:(BOOL)arg1;
- (void)setHasWalkingAndRunningDistance:(BOOL)arg1;
- (void)setHasWheelchairUse:(BOOL)arg1;
- (void)setPushCount:(double)arg1;
- (void)setSample:(id)arg1;
- (void)setSnapshotIndex:(long long)arg1;
- (void)setSourceUUID:(id)arg1;
- (void)setStepCount:(double)arg1;
- (void)setTimeZoneOffsetFromUTCForNoon:(long long)arg1;
- (void)setUploadedDate:(double)arg1;
- (void)setWalkingAndRunningDistance:(double)arg1;
- (void)setWheelchairUse:(long long)arg1;
- (long long)snapshotIndex;
- (id)sourceUUID;
- (double)stepCount;
- (long long)timeZoneOffsetFromUTCForNoon;
- (double)uploadedDate;
- (double)walkingAndRunningDistance;
- (long long)wheelchairUse;
- (void)writeTo:(id)arg1;

@end
