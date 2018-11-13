/*
 * Copyright (c) 2018, Psiphon Inc.
 * All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NotificationCenter.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Notification is posted when the privacy policy view controller is dismissed by the user.
 * Whether the user accepted the PP or not is stored as a boolean in user info with key
 * PrivacyPolicyDismissedActionBoolKey.
 */
extern NSNotificationName const PrivacyPolicyDismissedNotification;

/**
 * User info key with bool value for PrivacyPolicyDismissedNotification.
 */
extern NotificationUserInfoKey const PrivacyPolicyAcceptedNotificationBoolKey;

@interface PrivacyPolicyViewController : UIViewController

@end

NS_ASSUME_NONNULL_END