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

#include <alibabacloud/polardb/model/DescribeVSwitchListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeVSwitchListResult::DescribeVSwitchListResult() :
	ServiceResult()
{}

DescribeVSwitchListResult::DescribeVSwitchListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVSwitchListResult::~DescribeVSwitchListResult()
{}

void DescribeVSwitchListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVSwitchsNode = value["VSwitchs"]["VSwitch"];
	for (auto valueVSwitchsVSwitch : allVSwitchsNode)
	{
		VSwitch vSwitchsObject;
		if(!valueVSwitchsVSwitch["CidrBlock"].isNull())
			vSwitchsObject.cidrBlock = valueVSwitchsVSwitch["CidrBlock"].asString();
		if(!valueVSwitchsVSwitch["Description"].isNull())
			vSwitchsObject.description = valueVSwitchsVSwitch["Description"].asString();
		if(!valueVSwitchsVSwitch["IsDefault"].isNull())
			vSwitchsObject.isDefault = valueVSwitchsVSwitch["IsDefault"].asString() == "true";
		if(!valueVSwitchsVSwitch["IzNo"].isNull())
			vSwitchsObject.izNo = valueVSwitchsVSwitch["IzNo"].asString();
		if(!valueVSwitchsVSwitch["RegionNo"].isNull())
			vSwitchsObject.regionNo = valueVSwitchsVSwitch["RegionNo"].asString();
		if(!valueVSwitchsVSwitch["Status"].isNull())
			vSwitchsObject.status = valueVSwitchsVSwitch["Status"].asString();
		if(!valueVSwitchsVSwitch["VSwitchId"].isNull())
			vSwitchsObject.vSwitchId = valueVSwitchsVSwitch["VSwitchId"].asString();
		if(!valueVSwitchsVSwitch["VSwitchName"].isNull())
			vSwitchsObject.vSwitchName = valueVSwitchsVSwitch["VSwitchName"].asString();
		if(!valueVSwitchsVSwitch["AvailableIpAddressCount"].isNull())
			vSwitchsObject.availableIpAddressCount = std::stol(valueVSwitchsVSwitch["AvailableIpAddressCount"].asString());
		if(!valueVSwitchsVSwitch["VpcId"].isNull())
			vSwitchsObject.vpcId = valueVSwitchsVSwitch["VpcId"].asString();
		if(!valueVSwitchsVSwitch["ShareType"].isNull())
			vSwitchsObject.shareType = valueVSwitchsVSwitch["ShareType"].asString();
		if(!valueVSwitchsVSwitch["ResourceGroupId"].isNull())
			vSwitchsObject.resourceGroupId = valueVSwitchsVSwitch["ResourceGroupId"].asString();
		if(!valueVSwitchsVSwitch["OwnerId"].isNull())
			vSwitchsObject.ownerId = valueVSwitchsVSwitch["OwnerId"].asString();
		vSwitchs_.push_back(vSwitchsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<DescribeVSwitchListResult::VSwitch> DescribeVSwitchListResult::getVSwitchs()const
{
	return vSwitchs_;
}

int DescribeVSwitchListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeVSwitchListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeVSwitchListResult::getPageNumber()const
{
	return pageNumber_;
}

