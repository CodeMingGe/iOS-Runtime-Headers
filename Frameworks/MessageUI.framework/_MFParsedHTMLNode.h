/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSString, NSMutableArray, _MFParsedHTMLNode;

@interface _MFParsedHTMLNode : NSObject <MFMessageBodyTreeNode, MFMessageBodyConsumableInnerTextNode> {
    NSMutableArray *_childNodes;
    unsigned int _endLocation;
    NSString *_htmlString;
    _MFParsedHTMLNode *_nextSibling;
    _MFParsedHTMLNode *_parentNode;
    unsigned int _startLocation;
}

@property unsigned int endLocation;
@property(readonly) _MFParsedHTMLNode * firstChild;
@property(readonly) BOOL hasChildNodes;
@property(retain) NSString * htmlString;
@property(readonly) _MFParsedHTMLNode * lastChild;
@property _MFParsedHTMLNode * nextSibling;
@property _MFParsedHTMLNode * parentNode;
@property unsigned int startLocation;
@property(readonly) NSString * tagName;

- (void)addRecursiveDescriptionWithLevel:(unsigned int)arg1 toString:(id)arg2;
- (void)appendChild:(id)arg1;
- (void)collectDescendanceIntoArray:(id)arg1;
- (id)copyConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1;
- (id)copyMutableConsumableNodesAndAppendInnerTextToStringAccumulator:(id)arg1;
- (void)dealloc;
- (unsigned int)endLocation;
- (id)firstChild;
- (BOOL)hasChildNodes;
- (id)htmlString;
- (id)init;
- (id)lastChild;
- (id)nextSibling;
- (id)parentNode;
- (id)recursiveDescription;
- (void)setEndLocation:(unsigned int)arg1;
- (void)setHtmlString:(id)arg1;
- (void)setNextSibling:(id)arg1;
- (void)setParentNode:(id)arg1;
- (void)setStartLocation:(unsigned int)arg1;
- (unsigned int)startLocation;
- (id)tagName;

@end
