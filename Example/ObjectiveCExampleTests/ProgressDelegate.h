//
//  ProgressDelegate.h
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


@interface ProgressDelegate : NSObject <YYZipArchiveDelegate>
{
@public
    NSMutableArray *progressEvents;
}

@end
