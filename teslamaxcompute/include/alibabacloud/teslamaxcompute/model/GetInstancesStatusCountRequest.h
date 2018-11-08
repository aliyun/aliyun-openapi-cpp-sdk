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

#ifndef ALIBABACLOUD_TESLAMAXCOMPUTE_MODEL_GETINSTANCESSTATUSCOUNTREQUEST_H_
#define ALIBABACLOUD_TESLAMAXCOMPUTE_MODEL_GETINSTANCESSTATUSCOUNTREQUEST_H_

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
			class ALIBABACLOUD_TESLAMAXCOMPUTE_EXPORT GetInstancesStatusCountRequest : public RpcServiceRequest
			{

			public:
				GetInstancesStatusCountRequest();
				~GetInstancesStatusCountRequest();

				std::string getCluster()const;
				void setCluster(const std::string& cluster);
				std::string getQuotaId()const;
				void setQuotaId(const std::string& quotaId);
				std::string getRegion()const;
				void setRegion(const std::string& region);
				std::string getQuotaName()const;
				void setQuotaName(const std::string& quotaName);

            private:
				std::string cluster_;
				std::string quotaId_;
				std::string region_;
				std::string quotaName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TESLAMAXCOMPUTE_MODEL_GETINSTANCESSTATUSCOUNTREQUEST_H_