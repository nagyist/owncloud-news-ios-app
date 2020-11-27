//
//  OCSettingsController.h
//  iOCNews

/************************************************************************
 
 Copyright 2013 Peter Hedlund peter.hedlund@me.com
 
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
#import <MessageUI/MessageUI.h>

@interface OCSettingsController : UITableViewController <MFMailComposeViewControllerDelegate>

@property (strong, nonatomic) IBOutlet UISwitch *syncOnStartSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *syncinBackgroundSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *showFaviconsSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *showThumbnailsSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *markWhileScrollingSwitch;
@property (strong, nonatomic) IBOutlet UISwitch *sortOldestFirstSwitch;
@property (strong, nonatomic) IBOutlet UILabel *statusLabel;
@property (strong, nonatomic) IBOutlet UILabel *themeLabel;

- (IBAction)syncOnStartChanged:(id)sender;
- (IBAction)syncInBackgroundChanged:(id)sender;
- (IBAction)showFaviconsChanged:(id)sender;
- (IBAction)showThumbnailsChanged:(id)sender;
- (IBAction)markWhileScrollingChanged:(id)sender;
- (IBAction)sortOldestFirstChanged:(id)sender;
- (IBAction)onDone:(id)sender;

@end
