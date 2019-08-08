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

#include <alibabacloud/ecs/model/DescribeVSwitchesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeVSwitchesResult::DescribeVSwitchesResult() :
	ServiceResult()
{}

DescribeVSwitchesResult::DescribeVSwitchesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVSwitchesResult::~DescribeVSwitchesResult()
{}

void DescribeVSwitchesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allVSwitches = value["VSwitches"]["VSwitch"];
	for (auto value : allVSwitches)
	{
		VSwitch vSwitchesObject;
		if(!value["VSwitchId"].isNull())
			vSwitchesObject.vSwitchId = value["VSwitchId"].asString();
		if(!value["VpcId"].isNull())
			vSwitchesObject.vpcId = value["VpcId"].asString();
		if(!value["Status"].isNull())
			vSwitchesObject.status = value["Status"].asString();
		if(!value["CidrBlock"].isNull())
			vSwitchesObject.cidrBlock = value["CidrBlock"].asString();
		if(!value["ZoneId"].isNull())
			vSwitchesObject.zoneId = value["ZoneId"].asString();
		if(!value["AvailableIpAddressCount"].isNull())
			vSwitchesObject.availableIpAddressCount = std::stol(value["AvailableIpAddressCount"].asString());
		if(!value["Description"].isNull())
			vSwitchesObject.description = value["Description"].asString();
		if(!value["VSwitchName"].isNull())
			vSwitchesObject.vSwitchName = value["VSwitchName"].asString();
		if(!value["CreationTime"].isNull())
			vSwitchesObject.creationTime = value["CreationTime"].asString();
		if(!value["IsDefault"].isNull())
			vSwitchesObject.isDefault = value["IsDefault"].asString() == "true";
		if(!value["ResourceGroupId"].isNull())
			vSwitchesObject.resourceGroupId = value["ResourceGroupId"].asString();
		vSwitches_.push_back(vSwitchesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeVSwitchesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeVSwitchesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeVSwitchesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeVSwitchesResult::VSwitch> DescribeVSwitchesResult::getVSwitches()const
{
	return vSwitches_;
}

