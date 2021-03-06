/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLXPCRelay : NSObject {
    BOOL  _relayActive;
    NSObject<OS_xpc_object> * _relayConnection;
    NSObject<OS_xpc_object> * _xpcConnection;
    NSObject<OS_xpc_object> * _xpcCrashMoverConn;
}

@property BOOL relayActive;
@property (nonatomic, retain) NSObject<OS_xpc_object> *relayConnection;
@property (retain) NSObject<OS_xpc_object> *xpcConnection;
@property (retain) NSObject<OS_xpc_object> *xpcCrashMoverConn;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)handleCrashMoverConnection:(id)arg1;
- (void)handlePeer:(id)arg1 forEvent:(id)arg2;
- (id)init;
- (BOOL)isDebugEnabled;
- (void)movePowerlogs;
- (BOOL)relayActive;
- (id)relayConnection;
- (void)resetRelayConnection;
- (void)setRelayActive:(BOOL)arg1;
- (void)setRelayConnection:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setXpcCrashMoverConn:(id)arg1;
- (void)startRelay;
- (void)stopRelay;
- (id)xpcConnection;
- (id)xpcCrashMoverConn;

@end
