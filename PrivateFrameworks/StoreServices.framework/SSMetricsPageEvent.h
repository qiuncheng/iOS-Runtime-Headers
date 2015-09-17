/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsPageEvent : SSMetricsBaseEvent

@property (getter=isCachedResponse, nonatomic) BOOL cachedResponse;
@property (nonatomic, retain) NSString *navigationType;
@property (nonatomic, retain) NSString *pageHistoryDescription;
@property (nonatomic) double pageRenderTime;
@property (nonatomic, retain) NSString *referringAppName;
@property (nonatomic, retain) NSString *referringURL;
@property (nonatomic) double requestEndTime;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic) double responseStartTime;
@property (nonatomic, retain) NSString *searchTerm;
@property (nonatomic, retain) NSString *serverApplicationInstance;
@property (nonatomic, retain) NSString *serverTiming;
@property (getter=isUbered, nonatomic) BOOL ubered;

- (id)description;
- (id)init;
- (BOOL)isCachedResponse;
- (BOOL)isUbered;
- (id)navigationType;
- (id)pageHistoryDescription;
- (double)pageRenderTime;
- (id)referringAppName;
- (id)referringURL;
- (double)requestEndTime;
- (double)requestStartTime;
- (double)responseEndTime;
- (double)responseStartTime;
- (id)searchTerm;
- (id)serverApplicationInstance;
- (id)serverTiming;
- (void)setCachedResponse:(BOOL)arg1;
- (void)setNavigationType:(id)arg1;
- (void)setPageHistoryDescription:(id)arg1;
- (void)setPageHistoryDescriptionWithIdentifiers:(id)arg1;
- (void)setPageRenderTime:(double)arg1;
- (void)setReferringAppName:(id)arg1;
- (void)setReferringURL:(id)arg1;
- (void)setRequestEndTime:(double)arg1;
- (void)setRequestStartTime:(double)arg1;
- (void)setResponseEndTime:(double)arg1;
- (void)setResponseStartTime:(double)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setServerApplicationInstance:(id)arg1;
- (void)setServerTiming:(id)arg1;
- (void)setUbered:(BOOL)arg1;

@end