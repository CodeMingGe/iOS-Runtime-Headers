/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSNumber, NSMutableDictionary, NSString;

@interface MLMovieArtist : NSObject <NSCopying> {
    NSMutableDictionary *_dictionary;
}

@property(copy) NSNumber * ITunesStoreIdentifier;
@property(copy) NSString * artistName;

- (void).cxx_destruct;
- (id)ITunesStoreIdentifier;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (void)_setValueCopy:(id)arg1 forKey:(id)arg2;
- (id)artistName;
- (id)copyMovieArtistDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithMovieArtistDictionary:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setITunesStoreIdentifier:(id)arg1;

@end
