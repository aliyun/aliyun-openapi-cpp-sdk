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

#ifndef ALIBABACLOUD_ENS_MODEL_DESCRIBENETWORKINTERFACESRESULT_H_
#define ALIBABACLOUD_ENS_MODEL_DESCRIBENETWORKINTERFACESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ens/EnsExport.h>

namespace AlibabaCloud
{
	namespace Ens
	{
		namespace Model
		{
			class ALIBABACLOUD_ENS_EXPORT DescribeNetworkInterfacesResult : public ServiceResult
			{
			public:
				struct NetworkInterfaceSet
				{
					struct PrivateIpSet
					{
						std::string privateIpAddress;
						bool primary;
					};
					struct Ipv6Set
					{
						std::string ipv6Address;
					};
					std::string status;
					std::string description;
					std::string instanceId;
					std::string vSwitchId;
					std::string networkInterfaceName;
					std::string primaryIpType;
					std::string primaryIp;
					std::string macAddress;
					std::string networkInterfaceId;
					std::string networkId;
					std::vector<std::string> securityGroupIds;
					std::string instanceName;
					std::string type;
					std::vector<NetworkInterfaceSet::Ipv6Set> ipv6Sets;
					std::string creationTime;
					std::string ensRegionId;
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
#endif // !ALIBABACLOUD_ENS_MODEL_DESCRIBENETWORKINTERFACESRESULT_H_