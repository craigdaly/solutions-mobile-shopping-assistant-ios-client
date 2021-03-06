/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2013 Google Inc.
 */

//
//  GTLShoppingassistantOfferCollection.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   shoppingassistant/v1
// Description:
//   This is an API
// Classes:
//   GTLShoppingassistantOfferCollection (0 custom class methods, 1 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

@class GTLShoppingassistantOffer;

// ----------------------------------------------------------------------------
//
//   GTLShoppingassistantOfferCollection
//

// This class supports NSFastEnumeration over its "items" property. It also
// supports -itemAtIndex: to retrieve individual objects from "items".

@interface GTLShoppingassistantOfferCollection : GTLCollectionObject
@property (retain) NSArray *items;  // of GTLShoppingassistantOffer
@end
