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

#ifndef ALIBABACLOUD_ECS_MODEL_DESCRIBENETWORKINTERFACESRESULT_H_
#define ALIBABACLOUD_ECS_MODEL_DESCRIBENETWORKINTERFACESRESULT_H_

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
			class ALIBABACLOUD_ECS_EXPORT DescribeNetworkInterfacesResult : public ServiceResult
			{
			public:
				struct NetworkInterfaceSet
				{
					struct AssociatedPublicIp
					{
						std::string publicIpAddress;
						std::string allocationId;
					};
					struct PrivateIpSet
					{
						struct AssociatedPublicIp1
						{
							std::string publicIpAddress;
							std::string allocationId;
						};
						AssociatedPublicIp1 associatedPublicIp1;
						std::string privateIpAddress;
						bool primary;
					};
					struct Ipv6Set
					{
						std::string ipv6Address;
					};
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string status;
					std::string privateIpAddress;
					std::string description;
					std::string zoneId;
					std::string resourceGroupId;
					bool serviceManaged;
					std::string instanceId;
					std::string vSwitchId;
					std::string networkInterfaceName;
					std::string networkInterfaceId;
					std::string macAddress;
					std::vector<std::string> securityGroupIds;
					long serviceID;
					std::string type;
					std::vector<NetworkInterfaceSet::Ipv6Set> ipv6Sets;
					std::string vpcId;
					AssociatedPublicIp associatedPublicIp;
					std::string creationTime;
					std::vector<NetworkInterfaceSet::Tag> tags;
					std::vector<NetworkInterfaceSet::PrivateIpSet> privateIpSets;
				};


				DescribeNetworkInterfacesResult();
				explicit DescribeNetworkInterfacesResult(const std::string &payload);
				~DescribeNetworkInterfacesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<NetworkInterfaceSet> getNetworkInterfaceSets()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<NetworkInterfaceSet> networkInterfaceSets_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_DESCRIBENETWORKINTERFACESRESULT_H_