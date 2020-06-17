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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATENETWORKINTERFACERESULT_H_
#define ALIBABACLOUD_ECS_MODEL_CREATENETWORKINTERFACERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT CreateNetworkInterfaceResult : public ServiceResult
			{
			public:
				struct PrivateIpSet
				{
					std::string privateIpAddress;
					bool primary;
				};
				struct Tag
				{
					std::string tagKey;
					std::string tagValue;
				};


				CreateNetworkInterfaceResult();
				explicit CreateNetworkInterfaceResult(const std::string &payload);
				~CreateNetworkInterfaceResult();
				std::string getStatus()const;
				std::string getPrivateIpAddress()const;
				std::string getDescription()const;
				std::string getZoneId()const;
				std::string getResourceGroupId()const;
				bool getServiceManaged()const;
				std::string getVSwitchId()const;
				std::string getNetworkInterfaceName()const;
				std::string getNetworkInterfaceId()const;
				std::string getMacAddress()const;
				std::vector<std::string> getSecurityGroupIds()const;
				long getServiceID()const;
				std::string getType()const;
				std::string getVpcId()const;
				std::string getOwnerId()const;
				std::vector<Tag> getTags()const;
				std::vector<PrivateIpSet> getPrivateIpSets()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				std::string privateIpAddress_;
				std::string description_;
				std::string zoneId_;
				std::string resourceGroupId_;
				bool serviceManaged_;
				std::string vSwitchId_;
				std::string networkInterfaceName_;
				std::string networkInterfaceId_;
				std::string macAddress_;
				std::vector<std::string> securityGroupIds_;
				long serviceID_;
				std::string type_;
				std::string vpcId_;
				std::string ownerId_;
				std::vector<Tag> tags_;
				std::vector<PrivateIpSet> privateIpSets_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_CREATENETWORKINTERFACERESULT_H_