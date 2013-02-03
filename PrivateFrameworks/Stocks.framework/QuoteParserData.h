/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class NSArray, Stock, NSString, NSMutableDictionary;

@interface QuoteParserData : NSObject {
    NSString *_bufferString;
    NSMutableDictionary *_dictionary;
    NSArray *_requestStocks;
    Stock *_stock;
    BOOL metadataParser;
    int responseListCount;
    int state;
    double timeUpdated;
}

@property(retain) NSString * bufferString;
@property(retain) NSMutableDictionary * dictionary;
@property(retain) NSArray * requestStocks;
@property(retain) Stock * stock;

- (void).cxx_destruct;
- (id)bufferString;
- (id)dictionary;
- (id)requestStocks;
- (void)setBufferString:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setRequestStocks:(id)arg1;
- (void)setStock:(id)arg1;
- (id)stock;

@end
