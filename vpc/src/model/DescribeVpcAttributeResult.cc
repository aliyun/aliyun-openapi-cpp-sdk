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
	auto allAssociatedCens = value["AssociatedCens"]["AssociatedCen"];
	for (auto value : allAssociatedCens)
	{
		AssociatedCen associatedCensObject;
		if(!value["CenId"].isNull())
			associatedCensObject.cenId = value["CenId"].asString();
		if(!value["CenOwnerId"].isNull())
			associatedCensObject.cenOwnerId = std::stol(value["CenOwnerId"].asString());
		if(!value["CenStatus"].isNull())
			associatedCensObject.cenStatus = value["CenStatus"].asString();
		associatedCens_.push_back(associatedCensObject);
	}
	auto allCloudResources = value["CloudResources"]["CloudResourceSetType"];
	for (auto value : allCloudResources)
	{
		CloudResourceSetType cloudResourcesObject;
		if(!value["ResourceType"].isNull())
			cloudResourcesObject.resourceType = value["ResourceType"].asString();
		if(!value["ResourceCount"].isNull())
			cloudResourcesObject.resourceCount = std::stoi(value["ResourceCount"].asString());
		cloudResources_.push_back(cloudResourcesObject);
	}
	auto allVSwitchIds = value["VSwitchIds"]["VSwitchId"];
	for (const auto &item : allVSwitchIds)
		vSwitchIds_.push_back(item.asString());
	auto allUserCidrs = value["UserCidrs"]["UserCidr"];
	for (const auto &item : allUserCidrs)
		userCidrs_.push_back(item.asString());
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["VpcName"].isNull())
		vpcName_ = value["VpcName"].asString();
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["CidrBlock"].isNull())
		cidrBlock_ = value["CidrBlock"].asString();
	if(!value["Ipv6CidrBlock"].isNull())
		ipv6CidrBlock_ = value["Ipv6CidrBlock"].asString();
	if(!value["VRouterId"].isNull())
		vRouterId_ = value["VRouterId"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["IsDefault"].isNull())
		isDefault_ = value["IsDefault"].asString() == "true";
	if(!value["ClassicLinkEnabled"].isNull())
		classicLinkEnabled_ = value["ClassicLinkEnabled"].asString() == "true";
	if(!value["ResourceGroupId"].isNull())
		resourceGroupId_ = value["ResourceGroupId"].asString();

}

std::string DescribeVpcAttributeResult::getStatus()const
{
	return status_;
}

bool DescribeVpcAttributeResult::getIsDefault()const
{
	return isDefault_;
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

std::vector<std::string> DescribeVpcAttributeResult::getVSwitchIds()const
{
	return vSwitchIds_;
}

std::string DescribeVpcAttributeResult::getCidrBlock()const
{
	return cidrBlock_;
}

std::vector<std::string> DescribeVpcAttributeResult::getUserCidrs()const
{
	return userCidrs_;
}

std::string DescribeVpcAttributeResult::getVRouterId()const
{
	return vRouterId_;
}

std::string DescribeVpcAttributeResult::getVpcId()const
{
	return vpcId_;
}

std::vector<DescribeVpcAttributeResult::AssociatedCen> DescribeVpcAttributeResult::getAssociatedCens()const
{
	return associatedCens_;
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

std::string DescribeVpcAttributeResult::getIpv6CidrBlock()const
{
	return ipv6CidrBlock_;
}

std::vector<DescribeVpcAttributeResult::CloudResourceSetType> DescribeVpcAttributeResult::getCloudResources()const
{
	return cloudResources_;
}

