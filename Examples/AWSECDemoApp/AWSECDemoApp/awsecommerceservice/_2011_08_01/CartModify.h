// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class CartModifyRequest;

/**
 (public class)
 
 @ingroup AWSECommerceServicePortType
*/
@interface CartModify : NSObject <PicoBindable> {

@private
    NSString *_marketplaceDomain;
    NSString *_awsAccessKeyId;
    NSString *_associateTag;
    NSString *_validate;
    NSString *_xmlEscaping;
    CartModifyRequest *_shared;
    NSMutableArray *_request;

}


/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *marketplaceDomain;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *awsAccessKeyId;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *associateTag;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *validate;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *xmlEscaping;

/**
 (public property)
 
 type : class CartModifyRequest
*/
@property (nonatomic, retain) CartModifyRequest *shared;

/**
 (public property)
 
 entry type : class CartModifyRequest
*/

@property (nonatomic, retain) NSMutableArray *request;


@end
