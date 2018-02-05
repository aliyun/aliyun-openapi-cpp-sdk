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

#include <alibabacloud/vpc/model/DescribeVSwitchAttributesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeVSwitchAttributesResult::DescribeVSwitchAttributesResult() :
	ServiceResult()
{}

DescribeVSwitchAttributesResult::DescribeVSwitchAttributesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVSwitchAttributesResult::~DescribeVSwitchAttributesResult()
{}

void DescribeVSwitchAttributesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
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
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["VpcId"].isNull())
		vpcId_ = value["VpcId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["CidrBlock"].isNull())
		cidrBlock_ = value["CidrBlock"].asString();
	if(!value["ZoneId"].isNull())
		zoneId_ = value["ZoneId"].asString();
	if(!value["AvailableIpAddressCount"].isNull())
		availableIpAddressCount_ = std::stol(value["AvailableIpAddressCount"].asString());
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["VSwitchName"].isNull())
		vSwitchName_ = value["VSwitchName"].asString();
	if(!value["CreationTime"].isNull())
		creationTime_ = value["CreationTime"].asString();
	if(!value["IsDefault"].isNull())
		isDefault_ = value["IsDefault"].asString() == "true";

}

std::string DescribeVSwitchAttributesResult::getStatus()const
{
	return status_;
}

bool DescribeVSwitchAttributesResult::getIsDefault()const
{
	return isDefault_;
}

std::string DescribeVSwitchAttributesResult::getDescription()const
{
	return description_;
}

std::string DescribeVSwitchAttributesResult::getVpcId()const
{
	return vpcId_;
}

std::string DescribeVSwitchAttributesResult::getZoneId()const
{
	return zoneId_;
}

std::string DescribeVSwitchAttributesResult::getVSwitchId()const
{
	return vSwitchId_;
}

long DescribeVSwitchAttributesResult::getAvailableIpAddressCount()const
{
	return availableIpAddressCount_;
}

std::string DescribeVSwitchAttributesResult::getCreationTime()const
{
	return creationTime_;
}

std::string DescribeVSwitchAttributesResult::getCidrBlock()const
{
	return cidrBlock_;
}

std::string DescribeVSwitchAttributesResult::getVSwitchName()const
{
	return vSwitchName_;
}

std::vector<DescribeVSwitchAttributesResult::CloudResourceSetType> DescribeVSwitchAttributesResult::getCloudResources()const
{
	return cloudResources_;
}

