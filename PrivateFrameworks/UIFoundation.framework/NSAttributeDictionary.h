/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSAttributeDictionary : NSDictionary {
    struct _NSAttributeDictionaryElement { 
        unsigned int hash; 
        id key; 
        id value; 
    } elements[1];
    unsigned int numElements;
}

+ (id)emptyAttributeDictionary;
+ (void)initialize;
+ (id)newWithDictionary:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (void)dealloc;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2;
- (BOOL)isEqualToDictionary:(id)arg1;
- (id)keyEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newWithKey:(id)arg1 object:(id)arg2;
- (id)objectForKey:(id)arg1;

@end
