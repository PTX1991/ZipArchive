//
//  CancelDelegate.h
//  ObjectiveCExample
//
//  Created by Antoine Cœur on 04/10/2017.
//

#import <Foundation/Foundation.h>


#if COCOAPODS
#import <YYZipArchive.h>
#else
#import <ZipArchive.h>
#endif

@interface CancelDelegate : NSObject <YYZipArchiveDelegate>
@property (nonatomic, assign) int numFilesUnzipped;
@property (nonatomic, assign) int numFilesToUnzip;
@property (nonatomic, assign) BOOL didUnzipArchive;
@property (nonatomic, assign) int loaded;
@property (nonatomic, assign) int total;
@end
