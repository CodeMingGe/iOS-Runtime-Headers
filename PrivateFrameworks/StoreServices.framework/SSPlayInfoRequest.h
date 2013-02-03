/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSPlayInfoResponse, <SSPlayInfoRequestDelegate>, SSPlayInfoRequestContext;

@interface SSPlayInfoRequest : SSRequest <SSXPCCoding> {
    SSPlayInfoRequestContext *_context;
    SSPlayInfoResponse *_response;
}

@property <SSPlayInfoRequestDelegate> * delegate;
@property(readonly) SSPlayInfoRequestContext * playInfoContext;
@property(readonly) SSPlayInfoResponse * playInfoResponse;

- (id)copyXPCEncoding;
- (void)dealloc;
- (id)init;
- (id)initWithPlayInfoContext:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)playInfoContext;
- (id)playInfoResponse;
- (BOOL)start;
- (void)startWithCompletionBlock:(id)arg1;
- (void)startWithPlayInfoResponseBlock:(id)arg1;

@end
