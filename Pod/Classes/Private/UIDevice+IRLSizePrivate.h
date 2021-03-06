//
//  UIDevice+IRLSizePrivate.h
//  IRLSize
//
//  Created by Jeff Kelley on 6/29/16.
//  Copyright © 2016 Detroit Labs. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "IRLSizePrivate.h"

#if TARGET_OS_IOS
@interface UIDevice (IRLSizePrivate)

- (RawSize)irl_rawPhysicalSizeOfView:(nonnull UIView *)view;

@end
#endif
