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

#ifndef ALIBABACLOUD_APPSTREAM_CENTER_APPSTREAM_CENTEREXPORT_H_
#define ALIBABACLOUD_APPSTREAM_CENTER_APPSTREAM_CENTEREXPORT_H_

#include <alibabacloud/core/Global.h>

#if defined(ALIBABACLOUD_SHARED)
#	if defined(ALIBABACLOUD_APPSTREAM_CENTER_LIBRARY)
#		define ALIBABACLOUD_APPSTREAM_CENTER_EXPORT ALIBABACLOUD_DECL_EXPORT
#	else
#		define ALIBABACLOUD_APPSTREAM_CENTER_EXPORT ALIBABACLOUD_DECL_IMPORT
#	endif
#else
#	define ALIBABACLOUD_APPSTREAM_CENTER_EXPORT
#endif

#endif // !ALIBABACLOUD_APPSTREAM_CENTER_APPSTREAM_CENTEREXPORT_H_