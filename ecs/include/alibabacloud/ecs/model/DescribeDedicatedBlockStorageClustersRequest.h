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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEDEDICATEDBLOCKSTORAGECLUSTERSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEDEDICATEDBLOCKSTORAGECLUSTERSREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeDedicatedBlockStorageClustersRequest : public RpcServiceRequest
			{

			public:
				DescribeDedicatedBlockStorageClustersRequest();
				~DescribeDedicatedBlockStorageClustersRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				std::vector<std::string> getDedicatedBlockStorageClusterId()const;
				void setDedicatedBlockStorageClusterId(const std::vector<std::string>& dedicatedBlockStorageClusterId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				int getMaxResults()const;
				void setMaxResults(int maxResults);
				std::string getCategory()const;
				void setCategory(const std::string& category);
				std::vector<std::string> getStatus()const;
				void setStatus(const std::vector<std::string>& status);

            private:
				long resourceOwnerId_;
				std::string regionId_;
				std::string nextToken_;
				std::vector<std::string> dedicatedBlockStorageClusterId_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string zoneId_;
				int maxResults_;
				std::string category_;
				std::vector<std::string> status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEDEDICATEDBLOCKSTORAGECLUSTERSREQUEST_H_