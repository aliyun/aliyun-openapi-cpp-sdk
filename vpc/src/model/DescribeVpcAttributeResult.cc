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

#include <alibabacloud/vpc/model/DescribeVpcAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeVpcAttributeResult::DescribeVpcAttributeResult() :
	ServiceResult()
{}

DescribeVpcAttributeResult::DescribeVpcAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVpcAttributeResult::~DescribeVpcAttributeResult()
{}

void DescribeVpcAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAssociatedCensNode = value["AssociatedCens"]["AssociatedCen"];
	for (auto valueAssociatedCensAssociatedCen : allAssociatedCensNode)
	{
		AssociatedCen associatedCensObject;
		if(!valueAssociatedCensAssociatedCen["CenOwnerId"].isNull())
			associatedCensObject.cenOwnerId = std::stol(valueAssociatedCensAssociatedCen["CenOwnerId"].asString());
		if(!valueAssociatedCensAssociatedCen["CenId"].isNull())
			associatedCensObject.cenId = valueAssociatedCensAssociatedCen["CenId"].asString();
		if(!valueAssociatedCensAssociatedCen["CenStatus"].isNull())
			associatedCensObject.cenStatus = valueAssociatedCensAssociatedCen["CenStatus"].asString();
		associatedCens_.push_back(associatedCensObject);
	}
	auto allCloudResourcesNode = value["CloudResources"]["CloudResourceSetType"];
	for (auto valueCloudResourcesCloudResourceSetType : allCloudResourcesNode)
	{
		CloudResourceSetType cloudResourcesObject;
		if(!valueCloudResourcesCloudResourceSetType["ResourceCount"].isNull())
			cloudResourcesObject.resourceCount = std::stoi(valueCloudResourcesCloudResourceSetType["ResourceCount"].asString());
		if(!valueCloudResourcesCloudResourceSetType["ResourceType"].isNull())
			cloudResourcesObject.resourceType = valueCloudResourcesCloudResourceSetType["ResourceType"].asString();
		cloudResources_.push_back(cloudResourcesObject);
	}
	auto allIpv6CidrBlocksNode = value["Ipv6CidrBlocks"]["Ipv6CidrBlock"];
	for (auto valueIpv6CidrBlocksIpv6CidrBlock : allIpv6CidrBlocksNode)
	{
		Ipv6CidrBlock ipv6CidrBlocksObject;
		if(!valueIpv6CidrBlocksIpv6CidrBlock["Ipv6Isp"].isNull())
			ipv6CidrBlocksObject.ipv6Isp = valueIpv6CidrBlocksIpv6CidrBlock["Ipv6Isp"].asString();
		if(!valueIpv6CidrBlocksIpv6CidrBlock["Ipv6CidrBlock"].isNull())
			ipv6CidrBlocksObject.ipv6CidrBlock = valueIpv6CidrBlocksIpv6CidrBlock["Ipv6CidrBlock"].asString();
		ipv6CidrBlocks_.push_back(ipv6CidrBlocksObject);
	}
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["Key"].isNull())
			tagsObject.key = valueTagsTag["Key"].asString();
		if(!valueTagsTag["Value"].isNull())
			tagsObject.value = valueTagsTag["Value"].asString();
		tags_.push_back(tagsObject);
	}
	auto allAssociatedPropagationSourcesNode = value["AssociatedPropagationSources"]["AssociatedPropagationSourcesItem"];
	for (auto valueAssociatedPropagationSourcesAssociatedPropagationSourcesItem : allAssociatedPropagationSourcesNode)
	{
		AssociatedPropagationSourcesItem associatedPropagationSourcesObject;
		if(!valueAssociatedPropagationSourcesAssociatedPropagationSourcesItem["SourceType"].isNull())
			associatedPropagationSourcesObject.sourceType = valueAssociatedPropagationSourcesAssociatedPropagationSourcesItem["SourceType"].asString();
		if(!valueAssociatedPropagationSourcesAssociatedPropagationSourcesItem["SourceOwnerId"].isNull())
			associatedPropagationSourcesObject.sourceOwnerId = std::stol(valueAssociatedPropagationSourcesAssociatedPropagationSourcesItem["SourceOwnerId"].asString());
		if(!valueAssociatedPropagationSourcesAssociatedPropagationSourcesItem["SourceInstanceId"].isNull())
			associatedPropagationSourcesObject.sourceInstanceId = valueAssociatedPropagationSourcesAssociatedPropagationSourcesItem["SourceInstanceId"].asString();
		if(!valueAssociatedPropagationSourcesAssociatedPropagationSourcesItem["Status"].isNull())
			associatedPropagationSourcesObject.status = valueAssociatedPropagationSourcesAssociatedPropagationSourcesItem["Status"].asString();
		if(!valueAssociatedPropagationSourcesAssociatedPropagationSourcesItem["RoutePropagated"].isNull())
			associatedPropagationSourcesObject.routePropagated = valueAssociatedPropagationSourcesAssociatedPropagationSourcesItem["RoutePropagated"].asString() == "true";
		associatedPropagationSources_.push_back(associatedPropagationSourcesObject);
	}
	auto allVSwitchIds = value["VSwitchIds"]["VSwitchId"];
	for (const auto &item : allVSwitchIds)
		vSwitchIds_.push_back(item.asString());
	auto allUserCidrs = value["UserCidrs"]["UserCidr"];
	for (const auto &item : allUserCidrs)
		userCidrs_.push_back(item.asString());
	auto allSecondaryCidrBlocks = value["SecondaryCidrBlocks"]["SecondaryCidrBlock"];
	for (const auto &item : allSecondaryCidrBlocks)
		secondaryCidrBlocks_.push_back(item.asString());
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["IsDefault"].isNull())
		isDefault_ = value["IsDefault"].asString() == "true";
	if(!value["ClassicLinkEnabled"].isNull())
		classicLinkEnabled_ = value["ClassicLinkEnabled"].asString() == "true";
	if(!value["OwnerId"].isNull())
		ownerId_ = std::stol(value["OwnerId"].asString());
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["VpcName"].isNull())
		vpcName_ = value["VpcName"].asString();
	if(!value["VRouterId"].isNull())
		vRouterId_ = value["VRouterId"].asString();
	if(!value["DhcpOptionsSetStatus"].isNull())
		dhcpOptionsSetStatus_ = value["DhcpOptionsSetStatus"].asString();
	if(!value["CidrBlock"].isNull())
		cidrBlock_ = value["CidrBlock"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["NetworkAclNum"].isNull())
		networkAclNum_ = value["NetworkAclNum"].asString();
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();
	if(!value["DhcpOptionsSetId"].isNull())
		dhcpOptionsSetId_ = value["DhcpOptionsSetId"].asString();
	if(!value["Ipv6CidrBlock"].isNull())
		ipv6CidrBlock_ = value["Ipv6CidrBlock"].asString();
	if(!value["SupportIpv4Gateway"].isNull())
		supportIpv4Gateway_ = value["SupportIpv4Gateway"].asString() == "true";
	if(!value["Ipv4GatewayId"].isNull())
		ipv4GatewayId_ = value["Ipv4GatewayId"].asString();
	if(!value["EnabledIpv6"].isNull())
		enabledIpv6_ = value["EnabledIpv6"].asString() == "true";
	if(!value["DnsHostnameStatus"].isNull())
		dnsHostnameStatus_ = value["DnsHostnameStatus"].asString();

}

std::vector<DescribeVpcAttributeResult::AssociatedPropagationSourcesItem> DescribeVpcAttributeResult::getAssociatedPropagationSources()const
{
	return associatedPropagationSources_;
}

std::string DescribeVpcAttributeResult::getDescription()const
{
	return description_;
}

bool DescribeVpcAttributeResult::getClassicLinkEnabled()const
{
	return classicLinkEnabled_;
}

std::string DescribeVpcAttributeResult::getResourceGroupId()const
{
	return resourceGroupId_;
}

std::vector<std::string> DescribeVpcAttributeResult::getSecondaryCidrBlocks()const
{
	return secondaryCidrBlocks_;
}

std::string DescribeVpcAttributeResult::getCidrBlock()const
{
	return cidrBlock_;
}

std::vector<std::string> DescribeVpcAttributeResult::getUserCidrs()const
{
	return userCidrs_;
}

std::string DescribeVpcAttributeResult::getNetworkAclNum()const
{
	return networkAclNum_;
}

std::string DescribeVpcAttributeResult::getDnsHostnameStatus()const
{
	return dnsHostnameStatus_;
}

std::string DescribeVpcAttributeResult::getVRouterId()const
{
	return vRouterId_;
}

std::string DescribeVpcAttributeResult::getDhcpOptionsSetId()const
{
	return dhcpOptionsSetId_;
}

long DescribeVpcAttributeResult::getOwnerId()const
{
	return ownerId_;
}

std::vector<DescribeVpcAttributeResult::AssociatedCen> DescribeVpcAttributeResult::getAssociatedCens()const
{
	return associatedCens_;
}

bool DescribeVpcAttributeResult::getEnabledIpv6()const
{
	return enabledIpv6_;
}

std::vector<DescribeVpcAttributeResult::CloudResourceSetType> DescribeVpcAttributeResult::getCloudResources()const
{
	return cloudResources_;
}

std::vector<DescribeVpcAttributeResult::Tag> DescribeVpcAttributeResult::getTags()const
{
	return tags_;
}

std::string DescribeVpcAttributeResult::getStatus()const
{
	return status_;
}

bool DescribeVpcAttributeResult::getIsDefault()const
{
	return isDefault_;
}

std::string DescribeVpcAttributeResult::getDhcpOptionsSetStatus()const
{
	return dhcpOptionsSetStatus_;
}

bool DescribeVpcAttributeResult::getSupportIpv4Gateway()const
{
	return supportIpv4Gateway_;
}

std::string DescribeVpcAttributeResult::getIpv4GatewayId()const
{
	return ipv4GatewayId_;
}

std::vector<std::string> DescribeVpcAttributeResult::getVSwitchIds()const
{
	return vSwitchIds_;
}

std::string DescribeVpcAttributeResult::getVpcId()const
{
	return vpcId_;
}

std::string DescribeVpcAttributeResult::getCreationTime()const
{
	return creationTime_;
}

std::string DescribeVpcAttributeResult::getVpcName()const
{
	return vpcName_;
}

std::string DescribeVpcAttributeResult::getRegionId()const
{
	return regionId_;
}

std::vector<DescribeVpcAttributeResult::Ipv6CidrBlock> DescribeVpcAttributeResult::getIpv6CidrBlocks()const
{
	return ipv6CidrBlocks_;
}

std::string DescribeVpcAttributeResult::getIpv6CidrBlock()const
{
	return ipv6CidrBlock_;
}

