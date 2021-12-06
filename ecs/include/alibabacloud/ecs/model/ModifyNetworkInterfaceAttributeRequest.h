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

#ifndef ALIBABACLOUD_ECS_MODEL_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_H_

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
			class ALIBABACLOUD_ECS_EXPORT ModifyNetworkInterfaceAttributeRequest : public RpcServiceRequest
			{

			public:
				ModifyNetworkInterfaceAttributeRequest();
				~ModifyNetworkInterfaceAttributeRequest();

				int getQueueNumber()const;
				void setQueueNumber(int queueNumber);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::vector<std::string> getSecurityGroupId()const;
				void setSecurityGroupId(const std::vector<std::string>& securityGroupId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getNetworkInterfaceName()const;
				void setNetworkInterfaceName(const std::string& networkInterfaceName);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getNetworkInterfaceId()const;
				void setNetworkInterfaceId(const std::string& networkInterfaceId);

            private:
				int queueNumber_;
				long resourceOwnerId_;
				std::vector<std::string> securityGroupId_;
				std::string description_;
				std::string regionId_;
				std::string networkInterfaceName_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				long ownerId_;
				std::string networkInterfaceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_H_