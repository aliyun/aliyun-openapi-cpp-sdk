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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEAUTOPROVISIONINGGROUPSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEAUTOPROVISIONINGGROUPSREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeAutoProvisioningGroupsRequest : public RpcServiceRequest
			{

			public:
				DescribeAutoProvisioningGroupsRequest();
				~DescribeAutoProvisioningGroupsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::vector<std::string> getAutoProvisioningGroupStatus()const;
				void setAutoProvisioningGroupStatus(const std::vector<std::string>& autoProvisioningGroupStatus);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::vector<std::string> getAutoProvisioningGroupId()const;
				void setAutoProvisioningGroupId(const std::vector<std::string>& autoProvisioningGroupId);
				std::string getAutoProvisioningGroupName()const;
				void setAutoProvisioningGroupName(const std::string& autoProvisioningGroupName);

            private:
				long resourceOwnerId_;
				int pageNumber_;
				std::string regionId_;
				int pageSize_;
				std::vector<std::string> autoProvisioningGroupStatus_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::vector<std::string> autoProvisioningGroupId_;
				std::string autoProvisioningGroupName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEAUTOPROVISIONINGGROUPSREQUEST_H_