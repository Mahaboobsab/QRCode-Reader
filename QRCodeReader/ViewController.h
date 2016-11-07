//
//  ViewController.h
//  QRCodeReader
//
//  Created by Maheboobsab Nadaf on 07/11/16.
//  Copyright © 2016 com.NeoRays. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
@interface ViewController : UIViewController<AVCaptureMetadataOutputObjectsDelegate>

@property (weak, nonatomic) IBOutlet UIView *viewPreview;
@property (weak, nonatomic) IBOutlet UILabel *lblStatus;


@property (weak, nonatomic) IBOutlet UIButton *bbitemStart;

- (IBAction)startStopReading:(id)sender;



@end

