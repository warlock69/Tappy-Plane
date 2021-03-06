//
//  GameViewController.m
//  Scroll Background
//
//  Created by Simeon Andreev on 12/22/15.
//  Copyright (c) 2015 Simeon Andreev. All rights reserved.
//

#import "GameViewController.h"
#import "GameScene.h"

@implementation SKScene (Unarchive)

@end

@implementation GameViewController

//- (void)viewDidLoad {
//    [super viewDidLoad];
//    
////      Configure the view.
//        SKView * skView = (SKView *)self.view;
//        skView.showsFPS = YES;
//        skView.showsNodeCount = YES;
//        /* Sprite Kit applies additional optimizations to improve rendering performance */
//        skView.ignoresSiblingOrder = YES;
//    
//        // Create and configure the scene.
//        GameScene *scene = [GameScene sceneWithSize:skView.bounds.size];
//        scene.scaleMode = SKSceneScaleModeAspectFill;
//    
//        // Present the scene.
//        [skView presentScene:scene];
//}

- (void)viewWillLayoutSubviews
{
    [super viewWillLayoutSubviews];
    // Configure the view.
    SKView * skView = (SKView *)self.view;
    if (!skView.scene) {
        skView.showsFPS = YES;
        skView.showsNodeCount = YES;
        // Create and configure the scene.
        SKScene * scene = [GameScene sceneWithSize:skView.bounds.size];
        scene.scaleMode = SKSceneScaleModeAspectFill;
        // Present the scene.
        [skView presentScene:scene];
    }
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Release any cached data, images, etc that aren't in use.
}

- (BOOL)prefersStatusBarHidden {
    return YES;
}

@end
