/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface PBSlide : PBSlideBase {
}

+ (void)readFromSlideContainer:(id)arg1 toSlide:(id)arg2 state:(id)arg3;
+ (void)writeLayoutFromSlide:(id)arg1 toSlideAtom:(struct PptSlideAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; boolx6; int x7; int x8[8]; int x9; unsigned int x10; boolx11; boolx12; boolx13; }*)arg2 presentationState:(id)arg3;
+ (void)writeSlideAtIndex:(long)arg1 presentationState:(id)arg2;

@end
