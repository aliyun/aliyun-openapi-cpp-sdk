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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBECLASSICLINKINSTANCESREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBECLASSICLINKINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT DescribeClassicLinkInstancesRequest : public RpcServiceRequest
			{

			public:
				DescribeClassicLinkInstancesRequest();
				~DescribeClassicLinkInstancesRequest();

				std::string getSourceRegionId()const;
				void setSourceRegionId(const std::string& sourceRegionId);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getPageSize()const;
				void setPageSize(const std::string& pageSize);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getPageNumber()const;
				void setPageNumber(const std::string& pageNumber);

            private:
				std::string sourceRegionId_;
				long resourceOwnerId_;
				std::string instanceId_;
				std::string resourceOwnerAccount_;
				std::string regionId_;
				std::string vpcId_;
				std::string pageSize_;
				long ownerId_;
				std::string pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBECLASSICLINKINSTANCESREQUEST_H_