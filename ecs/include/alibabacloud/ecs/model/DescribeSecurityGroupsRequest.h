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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBESECURITYGROUPSREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBESECURITYGROUPSREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeSecurityGroupsRequest : public RpcServiceRequest
			{
			public:
				struct Tag
				{
					std::string value;
					std::string key;
				};

			public:
				DescribeSecurityGroupsRequest();
				~DescribeSecurityGroupsRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				bool getFuzzyQuery()const;
				void setFuzzyQuery(bool fuzzyQuery);
				std::string getSecurityGroupId()const;
				void setSecurityGroupId(const std::string& securityGroupId);
				bool getIsQueryEcsCount()const;
				void setIsQueryEcsCount(bool isQueryEcsCount);
				std::string getNetworkType()const;
				void setNetworkType(const std::string& networkType);
				std::string getSecurityGroupName()const;
				void setSecurityGroupName(const std::string& securityGroupName);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				bool getDryRun()const;
				void setDryRun(bool dryRun);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getSecurityGroupIds()const;
				void setSecurityGroupIds(const std::string& securityGroupIds);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);

            private:
				long resourceOwnerId_;
				bool fuzzyQuery_;
				std::string securityGroupId_;
				bool isQueryEcsCount_;
				std::string networkType_;
				std::string securityGroupName_;
				int pageNumber_;
				std::string resourceGroupId_;
				std::string regionId_;
				int pageSize_;
				std::vector<Tag> tag_;
				bool dryRun_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string securityGroupIds_;
				std::string vpcId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBESECURITYGROUPSREQUEST_H_