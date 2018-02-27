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

#ifndef ALIBABACLOUD_TESLADAM_MODEL_ACTIONREQUEST_H_
#define ALIBABACLOUD_TESLADAM_MODEL_ACTIONREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/tesladam/TeslaDamExport.h>

namespace AlibabaCloud
{
	namespace TeslaDam
	{
		namespace Model
		{
			class ALIBABACLOUD_TESLADAM_EXPORT ActionRequest : public RpcServiceRequest
			{

			public:
				ActionRequest();
				~ActionRequest();

				int getOrderId()const;
				void setOrderId(int orderId);
				std::string getStepCode()const;
				void setStepCode(const std::string& stepCode);

            private:
				int orderId_;
				std::string stepCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TESLADAM_MODEL_ACTIONREQUEST_H_