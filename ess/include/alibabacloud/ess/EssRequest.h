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

#ifndef ALIBABACLOUD_ESS_ESSREQUEST_H_
#define ALIBABACLOUD_ESS_ESSREQUEST_H_

#include <alibabacloud/core/RpcServiceRequest.h>
#include "EssExport.h"

namespace AlibabaCloud
{
	namespace Ess
	{
		class ALIBABACLOUD_ESS_EXPORT EssRequest : public RpcServiceRequest
		{
		public:
			explicit EssRequest(const std::string & action);
			virtual ~EssRequest();

		private:

		};
	}
}

#endif // !ALIBABACLOUD_ESS_ESSREQUEST_H_