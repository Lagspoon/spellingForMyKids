//
//  SPAWordTVC.h
//  spellingForMyKids
//
//  Created by Olivier Delecueillerie on 07/02/2014.
//  Copyright (c) 2014 Olivier Delecueillerie. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SPAnObject.h"
#import "photoPicker.h"
#import "MIViewController.h"

@interface SPAWordTVC : SPAnObject <UITextFieldDelegate, photoPickerDelegate, microphonePlayerDelegate>

//microphonePlayerDelegate
@property (nonatomic, strong) NSData *dataSoundRecorded;
- (void) microphonePlayerDidFinishRecording;
- (void) deleteDataSoundRecorded;
- (void) playOtherSound;


//photoPicker delegate
@property (nonatomic, strong) NSData * dataImageCaptured;
- (void) photoPickerDidFinishPickingImage;



@end
