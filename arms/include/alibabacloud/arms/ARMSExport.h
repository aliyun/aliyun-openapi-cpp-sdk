/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_ARMS_ARMSEXPORT_H_
#define ALIBABACLOUD_ARMS_ARMSEXPORT_H_

#include <alibabacloud/core/Global.h>

#if defined(ALIBABACLOUD_SHARED)
#	if defined(ALIBABACLOUD_ARMS_LIBRARY)
#		define ALIBABACLOUD_ARMS_EXPORT ALIBABACLOUD_DECL_EXPORT
#	else
#		define ALIBABACLOUD_ARMS_EXPORT ALIBABACLOUD_DECL_IMPORT
#	endif
#else
#	define ALIBABACLOUD_ARMS_EXPORT
#endif

#endif // !ALIBABACLOUD_ARMS_ARMSEXPORT_H_