//
//  GameViewController.h
//  ELSample
//
//  Created by handong Liu on 2017/11/16.
//  Copyright © 2017年 handong Liu. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <Metal/Metal.h>
#import <MetalKit/MetalKit.h>
#import "Renderer.h"

// Our view controller.  Implements the MTKViewDelegate protocol, which allows it to accept
//   per-frame update and drawable resize callbacks.  Also implements the RenderDestinationProvider
//   protocol, which allows our renderer object to get and set drawable properties such as pixel
//   format and sample count

@interface GameViewController : NSViewController<MTKViewDelegate, RenderDestinationProvider>

@end


