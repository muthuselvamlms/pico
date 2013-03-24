// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Shopping_AbstractRequestType.h"



/**
 
 Retrieves user information based on the user ID you specify. The response contains detailed information about a user. You can specify the types of user information you want in the response. 
 
 
 @ingroup ShoppingInterface
*/
@interface Shopping_GetUserProfileRequestType : Shopping_AbstractRequestType {

@private
    NSString *_userID;
    NSString *_includeSelector;

}


/**
  
 Specifies the user whose data will returned by the call. 
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *userID;

/**
 
 Defines standard subsets of fields to return within the
 response.<br>
 <br>
 If you don't specify this field, a default
 set of fields  is returned. Click "Detail Controls" below
 and see "none" for the default fields.
 If you specify this field, then the set of fields returned
 includes the default fields.
 If you specify this field, the additional
 fields returned can affect the call's response time
 (performance), including in the case of feedback data.<br>
 <br>
 <b>Applicable values</b>:
 <p class="ename">&bull;&nbsp;&nbsp; Details</p>
 <p class="edef">Include most available fields (such as StoreURL) in the
 response (except fields that can affect the call's response time).</p>
 <p class="ename">&bull;&nbsp;&nbsp; FeedbackDetails</p>
 <p class="edef">Include a container for information about one feedback entry.
 </p>
 <p class="ename">&bull;&nbsp;&nbsp; FeedbackHistory</p>
 <p class="edef">Include a container for summary feedback data for a user.
 </p>
 <br>
 Use a comma to specify multiple values. (In this case,
 the results are cumulative.) See "GetUserProfile Samples"
 for an example of how to use this field.<br>
 <br>
 See "Detail Controls" for a complete list of
 fields that can be returned for each selector.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *includeSelector;


@end
