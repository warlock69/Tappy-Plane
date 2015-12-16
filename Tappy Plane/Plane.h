//
//  Plane.h
//  Tappy Plane
//
//  Created by Simeon Andreev on 12/15/15.
//  Copyright © 2015 Simeon Andreev. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

@interface Plane : SKSpriteNode

@property (nonatomic) BOOL engineRunning;
@property (nonatomic) BOOL accelerating;

- (void)setRandomColour;
- (void)update;

@end