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
		CloudResourceSetType cloudResourceSetTypeObject;
		cloudResourceSetTypeObject.resourceType = value["ResourceType"].asString();
		cloudResourceSetTypeObject.resourceCount = std::stoi(value["ResourceCount"].asString());
		cloudResources_.push_back(cloudResourceSetTypeObject);
	}
	vSwitchId_ = value["VSwitchId"].asString();
	vpcId_ = value["VpcId"].asString();
	status_ = value["Status"].asString();
	cidrBlock_ = value["CidrBlock"].asString();
	zoneId_ = value["ZoneId"].asString();
	availableIpAddressCount_ = std::stol(value["AvailableIpAddressCount"].asString());
	description_ = value["Description"].asString();
	vSwitchName_ = value["VSwitchName"].asString();
	creationTime_ = value["CreationTime"].asString();
	isDefault_ = std::stoi(value["IsDefault"].asString());

}

std::string DescribeVSwitchAttributesResult::getStatus()const
{
	return status_;
}

void DescribeVSwitchAttributesResult::setStatus(const std::string& status)
{
	status_ = status;
}

bool DescribeVSwitchAttributesResult::getIsDefault()const
{
	return isDefault_;
}

void DescribeVSwitchAttributesResult::setIsDefault(bool isDefault)
{
	isDefault_ = isDefault;
}

std::string DescribeVSwitchAttributesResult::getDescription()const
{
	return description_;
}

void DescribeVSwitchAttributesResult::setDescription(const std::string& description)
{
	description_ = description;
}

std::string DescribeVSwitchAttributesResult::getVpcId()const
{
	return vpcId_;
}

void DescribeVSwitchAttributesResult::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
}

std::string DescribeVSwitchAttributesResult::getZoneId()const
{
	return zoneId_;
}

void DescribeVSwitchAttributesResult::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
}

std::string DescribeVSwitchAttributesResult::getVSwitchId()const
{
	return vSwitchId_;
}

void DescribeVSwitchAttributesResult::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
}

long DescribeVSwitchAttributesResult::getAvailableIpAddressCount()const
{
	return availableIpAddressCount_;
}

void DescribeVSwitchAttributesResult::setAvailableIpAddressCount(long availableIpAddressCount)
{
	availableIpAddressCount_ = availableIpAddressCount;
}

std::string DescribeVSwitchAttributesResult::getCreationTime()const
{
	return creationTime_;
}

void DescribeVSwitchAttributesResult::setCreationTime(const std::string& creationTime)
{
	creationTime_ = creationTime;
}

std::string DescribeVSwitchAttributesResult::getCidrBlock()const
{
	return cidrBlock_;
}

void DescribeVSwitchAttributesResult::setCidrBlock(const std::string& cidrBlock)
{
	cidrBlock_ = cidrBlock;
}

std::string DescribeVSwitchAttributesResult::getVSwitchName()const
{
	return vSwitchName_;
}

void DescribeVSwitchAttributesResult::setVSwitchName(const std::string& vSwitchName)
{
	vSwitchName_ = vSwitchName;
}

