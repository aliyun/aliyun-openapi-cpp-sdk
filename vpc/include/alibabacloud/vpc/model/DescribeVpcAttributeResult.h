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

#ifndef ALIBABACLOUD_VPC_MODEL_DESCRIBEVPCATTRIBUTERESULT_H_
#define ALIBABACLOUD_VPC_MODEL_DESCRIBEVPCATTRIBUTERESULT_H_

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
			class ALIBABACLOUD_VPC_EXPORT DescribeVpcAttributeResult : public ServiceResult
			{
			public:
				struct AssociatedCen
				{
					std::string cenStatus;
					long cenOwnerId;
					std::string cenId;
				};
				struct CloudResourceSetType
				{
					int resourceCount;
					std::string resourceType;
				};
				struct Ipv6CidrBlock
				{
					std::string ipv6Isp;
					std::string ipv6CidrBlock;
				};
				struct Tag
				{
					std::string value;
					std::string key;
				};
				struct AssociatedPropagationSourcesItem
				{
					std::string status;
					bool routePropagated;
					std::string sourceType;
					long sourceOwnerId;
					std::string sourceInstanceId;
				};


				DescribeVpcAttributeResult();
				explicit DescribeVpcAttributeResult(const std::string &payload);
				~DescribeVpcAttributeResult();
				std::vector<AssociatedPropagationSourcesItem> getAssociatedPropagationSources()const;
				std::string getDescription()const;
				bool getClassicLinkEnabled()const;
				std::string getResourceGroupId()const;
				std::vector<std::string> getSecondaryCidrBlocks()const;
				std::string getCidrBlock()const;
				std::vector<std::string> getUserCidrs()const;
				std::string getNetworkAclNum()const;
				std::string getDnsHostnameStatus()const;
				std::string getVRouterId()const;
				std::string getDhcpOptionsSetId()const;
				long getOwnerId()const;
				std::vector<AssociatedCen> getAssociatedCens()const;
				bool getEnabledIpv6()const;
				std::vector<CloudResourceSetType> getCloudResources()const;
				std::vector<Tag> getTags()const;
				std::string getStatus()const;
				bool getIsDefault()const;
				std::string getDhcpOptionsSetStatus()const;
				bool getSupportIpv4Gateway()const;
				std::string getIpv4GatewayId()const;
				std::vector<std::string> getVSwitchIds()const;
				std::string getVpcId()const;
				std::string getCreationTime()const;
				std::string getVpcName()const;
				std::string getRegionId()const;
				std::vector<Ipv6CidrBlock> getIpv6CidrBlocks()const;
				std::string getIpv6CidrBlock()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<AssociatedPropagationSourcesItem> associatedPropagationSources_;
				std::string description_;
				bool classicLinkEnabled_;
				std::string resourceGroupId_;
				std::vector<std::string> secondaryCidrBlocks_;
				std::string cidrBlock_;
				std::vector<std::string> userCidrs_;
				std::string networkAclNum_;
				std::string dnsHostnameStatus_;
				std::string vRouterId_;
				std::string dhcpOptionsSetId_;
				long ownerId_;
				std::vector<AssociatedCen> associatedCens_;
				bool enabledIpv6_;
				std::vector<CloudResourceSetType> cloudResources_;
				std::vector<Tag> tags_;
				std::string status_;
				bool isDefault_;
				std::string dhcpOptionsSetStatus_;
				bool supportIpv4Gateway_;
				std::string ipv4GatewayId_;
				std::vector<std::string> vSwitchIds_;
				std::string vpcId_;
				std::string creationTime_;
				std::string vpcName_;
				std::string regionId_;
				std::vector<Ipv6CidrBlock> ipv6CidrBlocks_;
				std::string ipv6CidrBlock_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VPC_MODEL_DESCRIBEVPCATTRIBUTERESULT_H_