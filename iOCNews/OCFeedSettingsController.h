//
//  OCFeedSettingsController.h
//  iOCNews
//

/************************************************************************
 
 Copyright 2013-2014 Peter Hedlund peter.hedlund@me.com
 
 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions
 are met:
 
 1. Redistributions of source code must retain the above copyright
 notice, this list of conditions and the following disclaimer.
 2. Redistributions in binary form must reproduce the above copyright
 notice, this list of conditions and the following disclaimer in the
 documentation and/or other materials provided with the distribution.
 
 THIS SOFTWARE IS PROVIDED BY THE AUTHOR "AS IS" AND ANY EXPRESS OR
 IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 
 *************************************************************************/

#import <UIKit/UIKit.h>
#import "Feed+CoreDataClass.h"
#import "iOCNews-Swift.h"

@protocol OCFeedSettingsDelegate;

@interface OCFeedSettingsController : UITableViewController <UITextFieldDelegate, FolderControllerDelegate>

@property (nonatomic, unsafe_unretained) id <OCFeedSettingsDelegate> delegate;

@property (strong, nonatomic) IBOutlet UITextField *titleTextField;
@property (strong, nonatomic) IBOutlet UISwitch *fullArticleSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *readerSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *articleImagesSwitch;
@property (strong, nonatomic) IBOutlet UITextView *urlTextView;
@property (strong, nonatomic) IBOutlet UIStepper *keepStepper;
@property (strong, nonatomic) IBOutlet UILabel *keepLabel;

@property (nonatomic, strong) Feed *feed;

- (IBAction) doSave:(id)sender;
- (IBAction) doCancel:(id)sender;
- (IBAction) fullArticleStateChanged:(id)sender;
- (IBAction)keepCountChanged:(id)sender;

@end

// delegate methods
@protocol OCFeedSettingsDelegate <NSObject>
@optional
- (void) feedSettingsUpdate:(OCFeedSettingsController *)settings;
@end
