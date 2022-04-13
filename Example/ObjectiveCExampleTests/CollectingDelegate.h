#import <Foundation/Foundation.h>
 
#if COCOAPODS
#import <YYZipArchive.h>
#else
#import <ZipArchive.h>
#endif


/**
 * Test delegate by collecting its calls
 */
@interface CollectingDelegate : NSObject <YYZipArchiveDelegate>
@property(nonatomic, retain) NSMutableArray<NSString *> *files;
@end
