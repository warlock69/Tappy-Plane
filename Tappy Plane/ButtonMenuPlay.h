//
//  ButtonMenu.h
//  Tappy Plane
//
//  Created by Simeon Andreev on 1/6/16.
//  Copyright © 2016 Simeon Andreev. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import "SoundManager.h"

@interface ButtonMenuPlay : SKSpriteNode

@property (nonatomic) CGFloat pressedScale;
@property (nonatomic, readonly, weak) id pressedTarget;
@property (nonatomic, readonly) SEL pressedAction;
@property (nonatomic) Sound *pressedSound;

-(void)setPressedTarget:(id)pressedTarget withAction:(SEL)pressedAction;

+(instancetype)spriteNodeWithTexture:(SKTexture *)texture;

@end
