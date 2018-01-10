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
	auto allAssociatedCbns = value["AssociatedCbns"]["AssociatedCbn"];
	for (auto value : allAssociatedCbns)
	{
		AssociatedCbn associatedCbnObject;
		associatedCbnObject.cbnStatus = value["CbnStatus"].asString();
		associatedCbnObject.cbnId = value["CbnId"].asString();
		associatedCbnObject.cbnOwnerUid = std::stol(value["CbnOwnerUid"].asString());
		associatedCbns_.push_back(associatedCbnObject);
	}
	auto allCloudResources = value["CloudResources"]["CloudResourceSetType"];
	for (auto value : allCloudResources)
	{
		CloudResourceSetType cloudResourceSetTypeObject;
		cloudResourceSetTypeObject.resourceType = value["ResourceType"].asString();
		cloudResourceSetTypeObject.resourceCount = std::stoi(value["ResourceCount"].asString());
		cloudResources_.push_back(cloudResourceSetTypeObject);
	}
	auto allVSwitchIds = value["VSwitchIds"]["VSwitchId"];
	for (const auto &item : allVSwitchIds)
		vSwitchIds_.push_back(item.asString());
	auto allUserCidrs = value["UserCidrs"]["UserCidr"];
	for (const auto &item : allUserCidrs)
		userCidrs_.push_back(item.asString());
	vpcId_ = value["VpcId"].asString();
	regionId_ = value["RegionId"].asString();
	status_ = value["Status"].asString();
	vpcName_ = value["VpcName"].asString();
	creationTime_ = value["CreationTime"].asString();
	cidrBlock_ = value["CidrBlock"].asString();
	vRouterId_ = value["VRouterId"].asString();
	description_ = value["Description"].asString();
	isDefault_ = std::stoi(value["IsDefault"].asString());
	classicLinkEnabled_ = std::stoi(value["ClassicLinkEnabled"].asString());

}

std::string DescribeVpcAttributeResult::getStatus()const
{
	return status_;
}

void DescribeVpcAttributeResult::setStatus(const std::string& status)
{
	status_ = status;
}

std::string DescribeVpcAttributeResult::getVRouterId()const
{
	return vRouterId_;
}

void DescribeVpcAttributeResult::setVRouterId(const std::string& vRouterId)
{
	vRouterId_ = vRouterId;
}

bool DescribeVpcAttributeResult::getIsDefault()const
{
	return isDefault_;
}

void DescribeVpcAttributeResult::setIsDefault(bool isDefault)
{
	isDefault_ = isDefault;
}

std::string DescribeVpcAttributeResult::getDescription()const
{
	return description_;
}

void DescribeVpcAttributeResult::setDescription(const std::string& description)
{
	description_ = description;
}

std::string DescribeVpcAttributeResult::getVpcId()const
{
	return vpcId_;
}

void DescribeVpcAttributeResult::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
}

bool DescribeVpcAttributeResult::getClassicLinkEnabled()const
{
	return classicLinkEnabled_;
}

void DescribeVpcAttributeResult::setClassicLinkEnabled(bool classicLinkEnabled)
{
	classicLinkEnabled_ = classicLinkEnabled;
}

std::vector<std::string> DescribeVpcAttributeResult::getVSwitchIds()const
{
	return vSwitchIds_;
}

void DescribeVpcAttributeResult::setVSwitchIds(const std::vector<std::string>& vSwitchIds)
{
	vSwitchIds_ = vSwitchIds;
}

std::string DescribeVpcAttributeResult::getCreationTime()const
{
	return creationTime_;
}

void DescribeVpcAttributeResult::setCreationTime(const std::string& creationTime)
{
	creationTime_ = creationTime;
}

std::string DescribeVpcAttributeResult::getCidrBlock()const
{
	return cidrBlock_;
}

void DescribeVpcAttributeResult::setCidrBlock(const std::string& cidrBlock)
{
	cidrBlock_ = cidrBlock;
}

std::string DescribeVpcAttributeResult::getVpcName()const
{
	return vpcName_;
}

void DescribeVpcAttributeResult::setVpcName(const std::string& vpcName)
{
	vpcName_ = vpcName;
}

std::vector<std::string> DescribeVpcAttributeResult::getUserCidrs()const
{
	return userCidrs_;
}

void DescribeVpcAttributeResult::setUserCidrs(const std::vector<std::string>& userCidrs)
{
	userCidrs_ = userCidrs;
}

std::string DescribeVpcAttributeResult::getRegionId()const
{
	return regionId_;
}

void DescribeVpcAttributeResult::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
}

