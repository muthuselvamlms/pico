// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class MetaData;
@class Price;

/**
 (public class)
 
 @ingroup AWSECommerceServicePortType
*/
@interface CartItem : NSObject <PicoBindable> {

@private
    NSString *_cartItemId;
    NSString *_asin;
    NSString *_sellerNickname;
    NSString *_quantity;
    NSString *_title;
    NSString *_productGroup;
    MetaData *_metaData;
    Price *_price;
    Price *_itemTotal;

}


/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *cartItemId;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *asin;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *sellerNickname;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *quantity;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *title;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *productGroup;

/**
 (public property)
 
 type : class MetaData
*/
@property (nonatomic, retain) MetaData *metaData;

/**
 (public property)
 
 type : class Price
*/
@property (nonatomic, retain) Price *price;

/**
 (public property)
 
 type : class Price
*/
@property (nonatomic, retain) Price *itemTotal;


@end
