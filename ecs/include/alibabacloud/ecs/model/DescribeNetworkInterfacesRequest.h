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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBENETWORKINTERFACESREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBENETWORKINTERFACESREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeNetworkInterfacesRequest : public RpcServiceRequest
			{
			public:
				struct Tag
				{
					std::string key;
					std::string value;
				};

			public:
				DescribeNetworkInterfacesRequest();
				~DescribeNetworkInterfacesRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				bool getServiceManaged()const;
				void setServiceManaged(bool serviceManaged);
				std::string getSecurityGroupId()const;
				void setSecurityGroupId(const std::string& securityGroupId);
				std::string getType()const;
				void setType(const std::string& type);
				int getPageNumber()const;
				void setPageNumber(int pageNumber);
				std::string getResourceGroupId()const;
				void setResourceGroupId(const std::string& resourceGroupId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				int getPageSize()const;
				void setPageSize(int pageSize);
				std::vector<Tag> getTag()const;
				void setTag(const std::vector<Tag>& tag);
				std::string getNetworkInterfaceName()const;
				void setNetworkInterfaceName(const std::string& networkInterfaceName);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getVSwitchId()const;
				void setVSwitchId(const std::string& vSwitchId);
				std::vector<std::string> getPrivateIpAddress()const;
				void setPrivateIpAddress(const std::vector<std::string>& privateIpAddress);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getVpcId()const;
				void setVpcId(const std::string& vpcId);
				std::string getPrimaryIpAddress()const;
				void setPrimaryIpAddress(const std::string& primaryIpAddress);
				int getMaxResults()const;
				void setMaxResults(int maxResults);
				std::vector<std::string> getNetworkInterfaceId()const;
				void setNetworkInterfaceId(const std::vector<std::string>& networkInterfaceId);

            private:
				long resourceOwnerId_;
				bool serviceManaged_;
				std::string securityGroupId_;
				std::string type_;
				int pageNumber_;
				std::string resourceGroupId_;
				std::string regionId_;
				std::string nextToken_;
				int pageSize_;
				std::vector<Tag> tag_;
				std::string networkInterfaceName_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string vSwitchId_;
				std::vector<std::string> privateIpAddress_;
				std::string instanceId_;
				std::string vpcId_;
				std::string primaryIpAddress_;
				int maxResults_;
				std::vector<std::string> networkInterfaceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBENETWORKINTERFACESREQUEST_H_