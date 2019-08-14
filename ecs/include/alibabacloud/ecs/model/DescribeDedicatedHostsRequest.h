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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEDEDICATEDHOSTSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEDEDICATEDHOSTSREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeDedicatedHostsRequest : public RpcServiceRequest
			{
				struct Tag
				{
					std::string value;
					std::string key;
				};

			public:
				DescribeDedicatedHostsRequest();
				~DescribeDedicatedHostsRequest();

				std::string getDedicatedHostIds()const;
				void setDedicatedHostIds(const std::string& dedicatedHostIds);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getDedicatedHostName()const;
				void setDedicatedHostName(const std::string& dedicatedHostName);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getSourceRegionId()const;
				void setSourceRegionId(const std::string& sourceRegionId);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getLockReason()const;
				void setLockReason(const std::string& lockReason);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getDedicatedHostType()const;
				void setDedicatedHostType(const std::string& dedicatedHostType);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string dedicatedHostIds_;
				long resourceOwnerId_;
				std::string dedicatedHostName_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				int pageNumber_;
				std::string sourceRegionId_;
				std::string resourceGroupId_;
				std::string lockReason_;
				std::string regionId_;
				int pageSize_;
				std::string zoneId_;
				std::string dedicatedHostType_;
				std::vector<Tag> tag_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEDEDICATEDHOSTSREQUEST_H_