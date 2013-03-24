// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Shopping_ProductIDType;
@class Shopping_ShippingCostSummaryType;
@class Shopping_AmountType;
@class Shopping_SimpleItemArrayType;
@class Shopping_NameValueListArrayType;

/**
 
 Information about an Half.com catalog product.
 
 
 @ingroup ShoppingInterface
*/
@interface Shopping_HalfCatalogProductType : NSObject <PicoBindable> {

@private
    NSString *_title;
    NSString *_detailsURL;
    NSString *_stockPhotoURL;
    Shopping_ShippingCostSummaryType *_shippingCostSummary;
    NSNumber *_displayStockPhotos;
    NSNumber *_itemCount;
    NSMutableArray *_productID;
    NSString *_domainName;
    Shopping_NameValueListArrayType *_itemSpecifics;
    Shopping_SimpleItemArrayType *_itemArray;
    NSNumber *_reviewCount;
    Shopping_AmountType *_minPrice;
    NSMutableArray *_any;

}


/**
 
 The title of the product, as specified in the catalog.
 Always returned when Product is returned.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *title;

/**
 
 Fully qualified URL for optional information about the product,
 such as a movie's description or film credits. This information
 is hosted through the Half.com Web site and it cannot be edited.
 Portions of the content are protected by copyright.
 Applications can include this URL as a link in product search results
 so that end users can view additional descriptive details about
 the product. This is usually always returned when Product is returned,
 but it may be safest to check for the existence of this field.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *detailsURL;

/**
 
 Fully qualified URL for a stock image (if any) that is associated
 with the Half.com catalog product. The URL is for the image Half.com
 usually displays in product search results (usually 70px tall).
 It may be helpful to calculate the dimensions of the photo
 programmatically before displaying it.
 Only returned if a URL is available for the product.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *stockPhotoURL;

/**
 
 Contains basic shipping-related costs for the item. If Item.Quantity is greater
 than 1, this is the shipping cost for one item. If the seller offers a choice of
 more than one shipping service (such as USPS Ground or Expediated), this is the
 cost of the "first" shipping option (usually the lowest cost option).
 
 
 type : class Shopping_ShippingCostSummaryType
*/
@property (nonatomic, retain) Shopping_ShippingCostSummaryType *shippingCostSummary;

/**
 
 If true, your application can attempt to display stock photos that
 are returned. If false, your application should not attempt to display
 any stock photos that are returned. This recommendation is useful for
 catalog data related to products like coins, where stock photos are not
 necessarily applicable or available. An application with a graphical
 user interface can use this flag to determine
 when to hide customized stock photo widgets.
 Always returned when Product is returned.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *displayStockPhotos;

/**
 
 Total number of listings on the Half.com site that use stock information from
 this catalog product. This value can be greater than the number of listings
 returned in ItemArray.
 <br />
 <br />
 <span class="tablenote"><strong>Note:</strong>
 ItemCount is always returned, however, it's value will be zero unless
 you use ProductID in the search request and you set IncludeSelector to
 Items. Although ItemCount always returns 0 if you search using QueryKeyword,
 check for the presence of MinPrice; if the response contains MinPrice, you
 can retrieve a value for ItemCount as described.
 </span>
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *itemCount;

/**
 
 The Half.com or external IDs associated with the product. Use the Reference
 value as input to search for the same product in the future, or
 use the ISBN, EAN, or UPC value (if returned).
 The ISBN, EAN, and UPC values can also be useful as keys
 if your application is comparing products across different sites.
 Always returned when Product is returned.
 
 
 
 entry type : class Shopping_ProductIDType
*/

@property (nonatomic, retain) NSMutableArray *productID;

/**
 
 The name of the domain in which the product was found.
 If the product is mapped to multiple domains, Half.com returns
 the most applicable domain (as determined by Half.com).
 Always returned when Product is returned.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *domainName;

/**
 
 A list of name/value pairs that are included in the product's
 pre-filled Item Specifics. These indicate common aspects or
 characteristics of the product, such as Publisher (for a book).
 Also see ProductID for ISBN, UPC, or EAN values, if applicable.
 This is usually returned. (We are not aware of any cases in which this
 node is not be returned. However, it may be safest to check for the
 existence of this node.)
 
 
 type : class Shopping_NameValueListArrayType
*/
@property (nonatomic, retain) Shopping_NameValueListArrayType *itemSpecifics;

/**
 
 A list of active items that were listed with the requested product.
 Results are sorted by current price (lowest first),
 then by recent positive feedback (highest first).
 <br>
 <br>
 Only returned when you specify Items in IncludeSelector, and the
 product has matching items that are currently active on Half.com.
 
 
 type : class Shopping_SimpleItemArrayType
*/
@property (nonatomic, retain) Shopping_SimpleItemArrayType *itemArray;

/**
 
 The total number of reviews that are available for this product
 on the Half.com Web site. This can be greater than the number of
 reviews returned by FindProducts. In a future release, we will provide
 the capability to retrieve details about reviews.
 Always returned when Product is returned.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *reviewCount;

/**
 
 The minimum price for all active items listed under this product.
 This field is only returned when QueryKeywords is specified in the request.
 
 
 type : class Shopping_AmountType
*/
@property (nonatomic, retain) Shopping_AmountType *minPrice;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
