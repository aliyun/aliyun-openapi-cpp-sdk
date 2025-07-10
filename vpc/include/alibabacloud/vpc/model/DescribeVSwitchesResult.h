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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEVSWITCHESRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEVSWITCHESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vpc/VpcExport.h>

namespace AlibabaCloud
{
	namespace Vpc
	{
		namespace Model
		{
			class ALIBABACLOUD_VPC_EXPORT DescribeVSwitchesResult : public ServiceResult
			{
			public:
				struct VSwitch
				{
					struct RouteTable
					{
						std::string routeTableId;
						std::string routeTableType;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string status;
					bool isDefault;
					std::string description;
					std::string networkAclId;
					std::string resourceGroupId;
					std::string zoneId;
					long availableIpAddressCount;
					std::string vSwitchId;
					std::string cidrBlock;
					RouteTable routeTable;
					std::string vpcId;
					long ownerId;
					std::string creationTime;
					std::string vSwitchName;
					bool enabledIpv6;
					std::string ipv6CidrBlock;
					std::vector<VSwitch::Tag> tags;
					std::string shareType;
				};


				DescribeVSwitchesResult();
				explicit DescribeVSwitchesResult(const std::string &payload);
				~DescribeVSwitchesResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<VSwitch> getVSwitches()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<VSwitch> vSwitches_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEVSWITCHESRESULT_H_