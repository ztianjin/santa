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

#include "SNTKernelCommon.h"

@class SNTNotificationMessage;

///
///  Manages the connection between daemon and kernel.
///
@interface SNTDriverManager : NSObject

///
///  Handles requests from the kernel using the given block.
///  @note Loops indefinitely unless there is an error trying to read data from the data queue.
///
- (void)listenWithBlock:(void (^)(santa_message_t message))callback;

///
///  Sends a response to a query back to the kernel.
///
- (kern_return_t)postToKernelAction:(santa_action_t)action forVnodeID:(uint64_t)vnodeId;

///
///  Get the number of binaries in the kernel's cache.
///
- (uint64_t)cacheCount;

///
///  Flush the kernel's binary cache.
///
- (BOOL)flushCache;

@end
