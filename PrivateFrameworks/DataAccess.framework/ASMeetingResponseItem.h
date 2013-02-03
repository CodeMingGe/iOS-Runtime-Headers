/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class ASEventUID, NSString, NSDate;

@interface ASMeetingResponseItem : NSObject {
    NSString *_calEventServerId;
    id _context;
    NSString *_deliveryItemFolderId;
    NSString *_deliveryItemServerId;
    ASEventUID *_eventUID;
    NSDate *_instanceDate;
    NSString *_instanceId;
    int _meetingResponse;
    int _status;
}

@property(retain) NSString * calEventServerId;
@property(retain) id context;
@property(readonly) NSString * deliveryItemFolderId;
@property(readonly) NSString * deliveryItemServerId;
@property(readonly) ASEventUID * eventUID;
@property(readonly) NSDate * instanceDate;
@property(readonly) int meetingResponse;
@property int status;

- (id)calEventServerId;
- (id)context;
- (void)dealloc;
- (id)deliveryItemFolderId;
- (id)deliveryItemServerId;
- (id)description;
- (id)eventUID;
- (id)initWithDeliveryItemFolderId:(id)arg1 deliveryItemServerId:(id)arg2 instanceDate:(id)arg3 meetingResponse:(int)arg4 eventUID:(id)arg5;
- (id)instanceDate;
- (int)meetingResponse;
- (void)setCalEventServerId:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;

@end
