/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISURLOperation : ISOperation <SSURLSessionManagerDelegate> {
    NSURLRequest * _activeURLRequest;
    SSAuthenticationContext * _authenticationContext;
    NSMutableData * _dataBuffer;
    ISDataProvider * _dataProvider;
    BOOL  _loadsHTTPFailures;
    int  _networkRetryCount;
    NSArray * _passThroughErrors;
    ISURLRequestPerformance * _performanceMetrics;
    NSCountedSet * _redirectURLs;
    SSMutableURLRequestProperties * _requestProperties;
    NSURLResponse * _response;
    BOOL  _shouldSetCookies;
    BOOL  _uploadProgressRequested;
    SSURLSessionManager * _urlSessionManager;
    NSURLSessionTask * _urlSessionTask;
    BOOL  _usesPrivateCookieStore;
}

@property (nonatomic, readonly) NSURLCache *URLCache;
@property (nonatomic, readonly) NSString *URLCacheID;
@property (getter=_loadsHTTPFailures, setter=_setLoadsHTTPFailures:) BOOL _loadsHTTPFailures;
@property (getter=_shouldSetCookies, setter=_setShouldSetCookies:) BOOL _shouldSetCookies;
@property (getter=_usesPrivateCookieStore, setter=_setUsesPrivateCookieStore:) BOOL _usesPrivateCookieStore;
@property (retain) SSAuthenticationContext *authenticationContext;
@property (retain) ISDataProvider *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property <ISURLOperationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSArray *passThroughErrors;
@property (readonly) ISURLRequestPerformance *performanceMetrics;
@property (copy) SSURLRequestProperties *requestProperties;
@property (retain) NSURLResponse *response;
@property (nonatomic, readonly) BOOL shouldDisableCellular;
@property (nonatomic, readonly) BOOL shouldRequireCellular;
@property (nonatomic, readonly) BOOL shouldSetCookies;
@property (nonatomic, readonly) NSData *sourceAppAuditTokenData;
@property (nonatomic, readonly) NSString *sourceAppBundleID;
@property (readonly) Class superclass;
@property BOOL tracksPerformanceMetrics;
@property (getter=isUploadProgressRequested, nonatomic) BOOL uploadProgressRequested;

+ (struct __CFURLStorageSession { }*)_sharedCacheStorageSession;
+ (id)copyUserAgent;
+ (struct _CFURLCache { }*)sharedCFURLCache;

- (void).cxx_destruct;
- (id)URLCache;
- (id)URLCacheID;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithEvent:(id)arg3 error:(id)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(id /* block */)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)_accountIdentifier;
- (id)_activeURL;
- (id)_activeURLRequest;
- (id)_copyAcceptLanguageString;
- (id)_copyAuthenticationContext;
- (id)_copyConnectionPropertiesWithDataConnectionServiceType:(struct __CFString { }*)arg1;
- (id)_copyQueryStringDictionaryForRedirect:(id)arg1;
- (id)_decodedDataForData:(id)arg1;
- (int)_defaultAuthChallengeDispositionForChallenge:(id)arg1;
- (id)_errorWithDefaultStringsForError:(id)arg1;
- (id)_errorWithDomain:(id)arg1 code:(int)arg2;
- (void)_handleFinishedLoading;
- (void)_handleReceivedData:(id)arg1;
- (void)_handleReceivedResponse:(id)arg1;
- (id)_handleRedirectRequest:(id)arg1 response:(id)arg2;
- (BOOL)_isExternalURL:(id)arg1;
- (BOOL)_isPassThroughStatus:(int)arg1;
- (BOOL)_loadsHTTPFailures;
- (void)_logRequest:(id)arg1;
- (void)_logResponseBody:(id)arg1;
- (void)_performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (BOOL)_processResponseData:(id)arg1 error:(id*)arg2;
- (id)_requestProperties;
- (void)_retry;
- (void)_run;
- (BOOL)_runRequestWithURL:(id)arg1 dataConnectionServiceType:(struct __CFString { }*)arg2;
- (id)_sanitizedDescriptionForObject:(id)arg1;
- (id)_sanitizedStringForString:(id)arg1;
- (id)_sanitizedURLForURL:(id)arg1;
- (void)_sendContentLengthToDelegate:(long long)arg1;
- (void)_sendOutputToDelegate:(id)arg1;
- (void)_sendRequestToDelegate:(id)arg1;
- (void)_sendResponseToDelegate:(id)arg1;
- (void)_setActiveURLRequest:(id)arg1;
- (void)_setLoadsHTTPFailures:(BOOL)arg1;
- (void)_setShouldSetCookies:(BOOL)arg1;
- (void)_setUsesPrivateCookieStore:(BOOL)arg1;
- (BOOL)_shouldFollowRedirectWithRequest:(id)arg1 error:(id*)arg2;
- (BOOL)_shouldSetCookies;
- (void)_stopConnection;
- (void)_stopIfCancelled;
- (id)_stringForCachePolicy:(unsigned int)arg1;
- (void)_updateProgress;
- (BOOL)_usesPrivateCookieStore;
- (BOOL)_validateContentLength:(long long)arg1 error:(id*)arg2;
- (void)_willSendRequest:(id)arg1;
- (id)authenticationContext;
- (id)dataProvider;
- (void)dealloc;
- (BOOL)handleRedirectFromDataProvider:(id)arg1 error:(id*)arg2;
- (void)handleResponse:(id)arg1;
- (id)init;
- (id)initWithSessionManager:(id)arg1;
- (BOOL)isUploadProgressRequested;
- (id)newRequestWithURL:(id)arg1;
- (id)passThroughErrors;
- (id)performanceMetrics;
- (id)request;
- (id)requestProperties;
- (id)response;
- (void)run;
- (void)setAuthenticationContext:(id)arg1;
- (void)setDataProvider:(id)arg1;
- (void)setPassThroughErrors:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setRequestProperties:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setTracksPerformanceMetrics:(BOOL)arg1;
- (void)setUploadProgressRequested:(BOOL)arg1;
- (BOOL)shouldDisableCellular;
- (BOOL)shouldFollowRedirectWithRequest:(id)arg1 returningError:(id*)arg2;
- (BOOL)shouldRequireCellular;
- (BOOL)shouldSetCookies;
- (id)sourceAppAuditTokenData;
- (id)sourceAppBundleID;
- (BOOL)tracksPerformanceMetrics;

@end
