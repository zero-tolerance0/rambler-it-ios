// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to MetaEventModelObject.h instead.

#if __has_feature(modules)
    @import Foundation;
    @import CoreData;
#else
    #import <Foundation/Foundation.h>
    #import <CoreData/CoreData.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class Event;

@interface MetaEventModelObjectID : NSManagedObjectID {}
@end

@interface _MetaEventModelObject : NSManagedObject
+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext *)moc_;
+ (NSString*)entityName;
+ (nullable NSEntityDescription*)entityInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (nonatomic, readonly, strong) MetaEventModelObjectID *objectID;

@property (nonatomic, strong, nullable) NSString* imageUrlPath;

@property (nonatomic, strong, nullable) NSString* metaEventDescription;

@property (nonatomic, strong) NSString* metaEventId;

@property (nonatomic, strong) NSString* name;

@property (nonatomic, strong, nullable) NSString* websiteUrlPath;

@property (nonatomic, strong, nullable) NSSet<Event*> *events;
- (nullable NSMutableSet<Event*>*)eventsSet;

@end

@interface _MetaEventModelObject (EventsCoreDataGeneratedAccessors)
- (void)addEvents:(NSSet<Event*>*)value_;
- (void)removeEvents:(NSSet<Event*>*)value_;
- (void)addEventsObject:(Event*)value_;
- (void)removeEventsObject:(Event*)value_;

@end

@interface _MetaEventModelObject (CoreDataGeneratedPrimitiveAccessors)

- (NSString*)primitiveImageUrlPath;
- (void)setPrimitiveImageUrlPath:(NSString*)value;

- (NSString*)primitiveMetaEventDescription;
- (void)setPrimitiveMetaEventDescription:(NSString*)value;

- (NSString*)primitiveMetaEventId;
- (void)setPrimitiveMetaEventId:(NSString*)value;

- (NSString*)primitiveName;
- (void)setPrimitiveName:(NSString*)value;

- (NSString*)primitiveWebsiteUrlPath;
- (void)setPrimitiveWebsiteUrlPath:(NSString*)value;

- (NSMutableSet<Event*>*)primitiveEvents;
- (void)setPrimitiveEvents:(NSMutableSet<Event*>*)value;

@end

@interface MetaEventModelObjectAttributes: NSObject 
+ (NSString *)imageUrlPath;
+ (NSString *)metaEventDescription;
+ (NSString *)metaEventId;
+ (NSString *)name;
+ (NSString *)websiteUrlPath;
@end

@interface MetaEventModelObjectRelationships: NSObject
+ (NSString *)events;
@end

NS_ASSUME_NONNULL_END
