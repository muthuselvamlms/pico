// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Finding_GalleryURL.h"

@implementation Finding_GalleryURL

@synthesize value = _value;
@synthesize gallerySize = _gallerySize;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    return nil;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_VALUE xmlName:nil propertyName:@"value" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"value"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ATTRIBUTE xmlName:@"gallerySize" propertyName:@"gallerySize" type:PICO_TYPE_ENUM clazz:nil];
    [map setObject:ps forKey:@"gallerySize"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.value = nil;
    self.gallerySize = nil;
    [super dealloc];
}

@end