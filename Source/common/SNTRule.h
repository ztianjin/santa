/// Copyright 2015 Google Inc. All rights reserved.
///
/// Licensed under the Apache License, Version 2.0 (the "License");
/// you may not use this file except in compliance with the License.
/// You may obtain a copy of the License at
///
///    http://www.apache.org/licenses/LICENSE-2.0
///
///    Unless required by applicable law or agreed to in writing, software
///    distributed under the License is distributed on an "AS IS" BASIS,
///    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
///    See the License for the specific language governing permissions and
///    limitations under the License.

#include "SNTCommonEnums.h"

///
///  Represents a Rule.
///
@interface SNTRule : NSObject<NSSecureCoding>

///
///  The hash of the object this rule is for
///
@property NSString *shasum;

///
///  The state of this rule
///
@property santa_rulestate_t state;

///
///  The type of object this rule is for (binary, certificate)
///
@property santa_ruletype_t type;

///
///  A custom message that will be displayed if this rule blocks a binary from executing
///
@property NSString *customMsg;

///
///  Designated initializer.
///
- (instancetype)initWithShasum:(NSString *)shasum
                         state:(santa_rulestate_t)state
                          type:(santa_ruletype_t)type
                     customMsg:(NSString *)customMsg;

@end
