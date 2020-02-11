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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBEDEMANDSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBEDEMANDSREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeDemandsRequest : public RpcServiceRequest
			{
			public:
				struct Tag
				{
					std::string key;
					std::string value;
				};

			public:
				DescribeDemandsRequest();
				~DescribeDemandsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::string getInstanceType()const;
				void setInstanceType(const std::string& instanceType);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				std::string getInstanceChargeType()const;
				void setInstanceChargeType(const std::string& instanceChargeType);
				bool getDryRun()const;
				void setDryRun(bool dryRun);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getInstanceTypeFamily()const;
				void setInstanceTypeFamily(const std::string& instanceTypeFamily);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::vector<std::string> getDemandStatus()const;
				void setDemandStatus(const std::vector<std::string>& demandStatus);
				std::string getDemandId()const;
				void setDemandId(const std::string& demandId);
				std::string getZoneId()const;
				void setZoneId(const std::string& zoneId);
				std::string getDemandType()const;
				void setDemandType(const std::string& demandType);

            private:
				long resourceOwnerId_;
				int pageNumber_;
				std::string regionId_;
				int pageSize_;
				std::string instanceType_;
				std::vector<Tag> tag_;
				std::string instanceChargeType_;
				bool dryRun_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string instanceTypeFamily_;
				long ownerId_;
				std::vector<std::string> demandStatus_;
				std::string demandId_;
				std::string zoneId_;
				std::string demandType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBEDEMANDSREQUEST_H_