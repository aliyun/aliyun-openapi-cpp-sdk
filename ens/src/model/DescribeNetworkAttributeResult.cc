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

#include <alibabacloud/ens/model/DescribeNetworkAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ens;
using namespace AlibabaCloud::Ens::Model;

DescribeNetworkAttributeResult::DescribeNetworkAttributeResult() :
	ServiceResult()
{}

DescribeNetworkAttributeResult::DescribeNetworkAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeNetworkAttributeResult::~DescribeNetworkAttributeResult()
{}

void DescribeNetworkAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
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
	auto allVSwitchIds = value["VSwitchIds"]["VSwitchId"];
	for (const auto &item : allVSwitchIds)
		vSwitchIds_.push_back(item.asString());
	if(!value["EnsRegionId"].isNull())
		ensRegionId_ = value["EnsRegionId"].asString();
	if(!value["NetworkId"].isNull())
		networkId_ = value["NetworkId"].asString();
	if(!value["NetworkName"].isNull())
		networkName_ = value["NetworkName"].asString();
	if(!value["CidrBlock"].isNull())
		cidrBlock_ = value["CidrBlock"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();
	if(!value["RouterTableId"].isNull())
		routerTableId_ = value["RouterTableId"].asString();
	if(!value["NetworkAclId"].isNull())
		networkAclId_ = value["NetworkAclId"].asString();

}

std::string DescribeNetworkAttributeResult::getStatus()const
{
	return status_;
}

std::string DescribeNetworkAttributeResult::getNetworkName()const
{
	return networkName_;
}

std::string DescribeNetworkAttributeResult::getDescription()const
{
	return description_;
}

std::string DescribeNetworkAttributeResult::getCreatedTime()const
{
	return createdTime_;
}

std::string DescribeNetworkAttributeResult::getNetworkAclId()const
{
	return networkAclId_;
}

std::vector<std::string> DescribeNetworkAttributeResult::getVSwitchIds()const
{
	return vSwitchIds_;
}

std::string DescribeNetworkAttributeResult::getCidrBlock()const
{
	return cidrBlock_;
}

std::string DescribeNetworkAttributeResult::getRouterTableId()const
{
	return routerTableId_;
}

std::string DescribeNetworkAttributeResult::getEnsRegionId()const
{
	return ensRegionId_;
}

std::string DescribeNetworkAttributeResult::getNetworkId()const
{
	return networkId_;
}

std::vector<DescribeNetworkAttributeResult::CloudResourceSetType> DescribeNetworkAttributeResult::getCloudResources()const
{
	return cloudResources_;
}

