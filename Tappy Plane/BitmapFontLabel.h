//
//  BitmapFontLabel.h
//  Tappy Plane
//
//  Created by Simeon Andreev on 1/4/16.
//  Copyright © 2016 Simeon Andreev. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

typedef enum : NSUInteger {
    BitmapFontAlignmentLeft,
    BitmapFontAlignmentCenter,
    BitmapFontAlignmentRight,
} BitmapFontAlignment;

@interface BitmapFontLabel : SKNode

@property (nonatomic) NSString* fontName;
@property (nonatomic) NSString* text;
@property (nonatomic) CGFloat letterSpacing;
@property (nonatomic) BitmapFontAlignment alignment;

- (instancetype)initWithText:(NSString*)text andFontName:(NSString*)fontName;

@end
