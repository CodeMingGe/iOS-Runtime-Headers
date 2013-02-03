/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSURL, NSAttributedString;

@interface MKMapAttribution : NSObject {
    NSAttributedString *_string;
    NSURL *_url;
}

@property(readonly) NSAttributedString * disclosureArrow;
@property(readonly) NSAttributedString * string;
@property(readonly) NSURL * url;

- (id)attributedStringWithImage:(id)arg1;
- (void)dealloc;
- (id)disclosureArrow;
- (id)initWithStringAttributes:(id)arg1 regionalAttributions:(id)arg2 globalAttributions:(id)arg3;
- (id)string;
- (id)url;

@end
