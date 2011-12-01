//
// Copyright 2010 Itty Bitty Apps Pty Ltd
// 
// Licensed under the Apache License, Version 2.0 (the "License"); you may not use this 
// file except in compliance with the License. You may obtain a copy of the License at 
// 
// http://www.apache.org/licenses/LICENSE-2.0 
// 
// Unless required by applicable law or agreed to in writing, software distributed under
// the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF 
// ANY KIND, either express or implied. See the License for the specific language governing
// permissions and limitations under the License.
//

#import "IBACommon.h"

#define IBAFormFieldCellTextColor [UIColor colorWithRed:0.464 green:0.750 blue:0.775 alpha:1.000]
#define IBAFormFieldCellBackgoundColor [UIColor whiteColor]
#define IBAFormFieldActiveColor [UIColor colorWithRed:0.893 green:0.976 blue:0.976 alpha:1.000]

// Notifications
#define IBAPushViewController @"IBAPushViewController"
#define IBAPresentModalViewController @"IBAPresentModalViewController"
#define IBADismissModalViewController @"IBADismissModalViewController"
#define IBAViewControllerKey @"IBAViewControllerKey"
#define IBAInputRequestorFormFieldActivated @"IBAInputRequestorFormFieldActivated"
#define IBAInputRequestorFormFieldDeactivated @"IBAInputRequestorFormFieldDeactivated"
#define IBAFormFieldKey @"IBAFormFieldKey"

// Form field label style
#define IBAFormFieldLabelX 15
#define IBAFormFieldLabelY 8
#define IBAFormFieldLabelWidth 95
#define IBAFormFieldLabelHeight 30
#define IBAFormFieldLabelFont [UIFont boldSystemFontOfSize:14]
#define IBAFormFieldLabelTextColor [UIColor blackColor]
#define IBAFormFieldLabelTextAlignment UITextAlignmentLeft
#define IBAFormFieldLabelBackgroundColor [UIColor whiteColor]

// Form field value style
#define IBAFormFieldValueX 105
#define IBAFormFieldValueY 8
#define IBAFormFieldValueWidth 195
#define IBAFormFieldValueHeight 30
#define IBAFormFieldValueFont [UIFont systemFontOfSize:14]
#define IBAFormFieldValueTextColor [UIColor darkGrayColor]
#define IBAFormFieldValueTextAlignment UITextAlignmentRight
#define IBAFormFieldValueBackgroundColor [UIColor whiteColor]

// Form field cell style
#define IBAFormFieldCellAccessoryType UITableViewCellAccessoryNone
#define IBAFormFieldIconX 0
#define IBAFormFieldIconY 0
#define IBAFormFieldIconWidth 40
#define IBAFormFieldIconHeight 40
