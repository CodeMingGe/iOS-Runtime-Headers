/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSXMLParser : NSObject {
    id _delegate;
    id _reserved0;
    id _reserved1;
    id _reserved2;
    id _reserved3;
}

- (struct _xmlParserCtxt { struct _xmlSAXHandler {} *x1; void *x2; struct _xmlDoc {} *x3; int x4; int x5; char *x6; char *x7; int x8; int x9; struct _xmlParserInput {} *x10; int x11; int x12; struct _xmlParserInput {} **x13; struct _xmlNode {} *x14; int x15; int x16; struct _xmlNode {} **x17; int x18; struct _xmlParserNodeInfoSeq { unsigned long x_19_1_1; unsigned long x_19_1_2; struct _xmlParserNodeInfo {} *x_19_1_3; } x19; int x20; int x21; int x22; int x23; int x24; int x25; struct _xmlValidCtxt { void *x_26_1_1; int (*x_26_1_2)(); int (*x_26_1_3)(); struct _xmlNode {} *x_26_1_4; int x_26_1_5; int x_26_1_6; struct _xmlNode {} **x_26_1_7; unsigned int x_26_1_8; struct _xmlDoc {} *x_26_1_9; int x_26_1_10; struct _xmlValidState {} *x_26_1_11; int x_26_1_12; int x_26_1_13; struct _xmlValidState {} *x_26_1_14; struct _xmlAutomata {} *x_26_1_15; struct _xmlAutomataState {} *x_26_1_16; } x26; int x27; int x28; char *x29; char *x30; int x31; int x32; char **x33; long x34; long x35; int x36; int x37; int x38; char *x39; char *x40; char *x41; int *x42; int x43; int x44; int *x45; int x46; struct _xmlParserInput {} *x47; int x48; int x49; int x50; int x51; void *x52; int x53; int x54; void *x55; int x56; int x57; struct _xmlDict {} *x58; char **x59; int x60; int x61; char *x62; char *x63; char *x64; int x65; int x66; int x67; char **x68; int *x69; void **x70; struct _xmlHashTable {} *x71; struct _xmlHashTable {} *x72; int x73; int x74; int x75; int x76; struct _xmlNode {} *x77; int x78; struct _xmlAttr {} *x79; struct _xmlError { int x_80_1_1; int x_80_1_2; char *x_80_1_3; int x_80_1_4; char *x_80_1_5; int x_80_1_6; char *x_80_1_7; char *x_80_1_8; char *x_80_1_9; int x_80_1_10; int x_80_1_11; void *x_80_1_12; void *x_80_1_13; } x80; int x81; unsigned long x82; unsigned long x83; struct _xmlParserNodeInfo {} *x84; int x85; int x86; struct _xmlParserNodeInfo {} *x87; }*)_parserContext;
- (id)_info;
- (void)_initializeSAX2Callbacks;
- (void)_popNamespaces;
- (void)_pushNamespaces:(id)arg1;
- (void)_setParserError:(int)arg1;
- (void)abortParsing;
- (int)columnNumber;
- (void)dealloc;
- (id)delegate;
- (void)finalize;
- (id)initForIncrementalParsing;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithStream:(id)arg1;
- (int)lineNumber;
- (BOOL)parse;
- (BOOL)parseData:(id)arg1;
- (BOOL)parseFromStream;
- (id)parserError;
- (id)publicID;
- (void)setDelegate:(id)arg1;
- (void)setShouldContinueAfterFatalError:(BOOL)arg1;
- (void)setShouldProcessNamespaces:(BOOL)arg1;
- (void)setShouldReportNamespacePrefixes:(BOOL)arg1;
- (void)setShouldResolveExternalEntities:(BOOL)arg1;
- (BOOL)shouldContinueAfterFatalError;
- (BOOL)shouldProcessNamespaces;
- (BOOL)shouldReportNamespacePrefixes;
- (BOOL)shouldResolveExternalEntities;
- (id)systemID;

@end
