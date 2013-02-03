/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString, NSMutableDictionary, NSArray;

@interface MLMovieProperties : NSObject <NSCopying> {
    NSMutableDictionary *_dictionary;
}

@property(copy) NSArray * castMembers;
@property(copy) NSString * copyrightWarning;
@property(copy) NSArray * directors;
@property(copy) NSArray * producers;
@property(copy) NSArray * screenwriters;
@property(copy) NSString * studioName;

- (void).cxx_destruct;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (void)_setValueCopy:(id)arg1 forKey:(id)arg2;
- (id)castMembers;
- (id)copyMoviePropertiesDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyrightWarning;
- (id)directors;
- (id)init;
- (id)initWithMoviePropertiesDictionary:(id)arg1;
- (id)producers;
- (id)screenwriters;
- (void)setCastMembers:(id)arg1;
- (void)setCopyrightWarning:(id)arg1;
- (void)setDirectors:(id)arg1;
- (void)setProducers:(id)arg1;
- (void)setScreenwriters:(id)arg1;
- (void)setStudioName:(id)arg1;
- (id)studioName;

@end
