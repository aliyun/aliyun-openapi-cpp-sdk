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

#ifndef ALIBABACLOUD_TESLAMAXCOMPUTE_MODEL_QUERYCUSTOMERSALEINFOREQUEST_H_
#define ALIBABACLOUD_TESLAMAXCOMPUTE_MODEL_QUERYCUSTOMERSALEINFOREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/teslamaxcompute/TeslaMaxComputeExport.h>

namespace AlibabaCloud
{
	namespace TeslaMaxCompute
	{
		namespace Model
		{
			class ALIBABACLOUD_TESLAMAXCOMPUTE_EXPORT QueryCustomerSaleInfoRequest : public RpcServiceRequest
			{

			public:
				QueryCustomerSaleInfoRequest();
				~QueryCustomerSaleInfoRequest();

				std::string getRegionName()const;
				void setRegionName(const std::string& regionName);

            private:
				std::string regionName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TESLAMAXCOMPUTE_MODEL_QUERYCUSTOMERSALEINFOREQUEST_H_