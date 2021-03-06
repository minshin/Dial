//
//  UIImage+DALAdditions.h
//  Dial
//
//  Created by Indragie Karunaratne on 2012-11-27.
//  Copyright (c) 2013 Indragie Karunaratne. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (DALAdditions)
- (UIImage *)circularImageCroppedToFaceWithWidth:(CGFloat)width;
- (void)drawInRect:(CGRect)drawRect
          fromRect:(CGRect)fromRect
         blendMode:(CGBlendMode)blendMode
             alpha:(CGFloat)alpha;
- (UIImage *)imageCroppedToEllipse;
@end
