//
//  EnjoyableApplicationDelegate.h
//  Enjoy
//
//  Created by Sam McCall on 4/05/09.
//  Copyright 2009 University of Otago. All rights reserved.
//

@class NJMappingsController;

#import "NJMappingMenuController.h"
#import "NJMappingsViewController.h"

@interface EnjoyableApplicationDelegate : NSObject <NSApplicationDelegate,
                                                    NJMappingsViewControllerDelegate,
                                                    NJMappingMenuDelegate,
                                                    NSWindowDelegate> {
    IBOutlet NSMenu *dockMenu;
    IBOutlet NSMenu *statusItemMenu;
    IBOutlet NSWindow *window;
}

@property (nonatomic, strong) IBOutlet NJMappingsController *mappingsController;
@property (nonatomic, strong) IBOutlet NJMappingsViewController *mvc;

- (IBAction)restoreToForeground:(id)sender;
- (IBAction)importMappingClicked:(id)sender;
- (IBAction)exportMappingClicked:(id)sender;

@end
