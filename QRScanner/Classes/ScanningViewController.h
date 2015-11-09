//
//  ScanningViewController.h
//  QRScanner
//
//  Created by Simon Cook on 08/11/2015.
//  Copyright © 2015 Simon Cook Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "SFRestAPI.h"

@interface ScanningViewController : UIViewController <SFRestDelegate,AVCaptureMetadataOutputObjectsDelegate> {
    NSMutableArray *dataRows;
}

@property (nonatomic, strong) NSArray *dataRows;

@property (weak, nonatomic) IBOutlet UILabel *recipeNameLabel;
@property (weak, nonatomic) IBOutlet UIView *viewPreview;
@property (weak, nonatomic) IBOutlet UILabel *statusLabel;
@property (weak, nonatomic) IBOutlet UIButton *startStopButton;

@end
