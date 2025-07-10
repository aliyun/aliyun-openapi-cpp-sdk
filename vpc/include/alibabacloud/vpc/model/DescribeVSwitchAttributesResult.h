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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEVSWITCHATTRIBUTESRESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEVSWITCHATTRIBUTESRESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeVSwitchAttributesResult : public ServiceResult
			{
			public:
				struct RouteTable
				{
					std::string routeTableId;
					std::string routeTableType;
				};
				struct CloudResourceSetType
				{
					int resourceCount;
					std::string resourceType;
				};
				struct Tag
				{
					std::string value;
					std::string key;
				};


				DescribeVSwitchAttributesResult();
				explicit DescribeVSwitchAttributesResult(const std::string &payload);
				~DescribeVSwitchAttributesResult();
				std::string getStatus()const;
				bool getIsDefault()const;
				std::string getDescription()const;
				std::string getNetworkAclId()const;
				std::string getResourceGroupId()const;
				std::string getZoneId()const;
				long getAvailableIpAddressCount()const;
				std::string getVSwitchId()const;
				std::string getCidrBlock()const;
				RouteTable getRouteTable()const;
				std::string getVpcId()const;
				long getOwnerId()const;
				std::string getCreationTime()const;
				std::string getVSwitchName()const;
				bool getEnabledIpv6()const;
				std::string getIpv6CidrBlock()const;
				std::vector<CloudResourceSetType> getCloudResources()const;
				std::vector<Tag> getTags()const;
				std::string getShareType()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string status_;
				bool isDefault_;
				std::string description_;
				std::string networkAclId_;
				std::string resourceGroupId_;
				std::string zoneId_;
				long availableIpAddressCount_;
				std::string vSwitchId_;
				std::string cidrBlock_;
				RouteTable routeTable_;
				std::string vpcId_;
				long ownerId_;
				std::string creationTime_;
				std::string vSwitchName_;
				bool enabledIpv6_;
				std::string ipv6CidrBlock_;
				std::vector<CloudResourceSetType> cloudResources_;
				std::vector<Tag> tags_;
				std::string shareType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEVSWITCHATTRIBUTESRESULT_H_