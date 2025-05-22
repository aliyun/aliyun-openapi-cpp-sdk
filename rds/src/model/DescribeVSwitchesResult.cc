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

#include <alibabacloud/rds/model/DescribeVSwitchesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

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
	auto allVSwitchsNode = value["VSwitchs"]["VSwitch"];
	for (auto valueVSwitchsVSwitch : allVSwitchsNode)
	{
		VSwitch vSwitchsObject;
		if(!valueVSwitchsVSwitch["AliUid"].isNull())
			vSwitchsObject.aliUid = valueVSwitchsVSwitch["AliUid"].asString();
		if(!valueVSwitchsVSwitch["AvailableIpAddressCount"].isNull())
			vSwitchsObject.availableIpAddressCount = valueVSwitchsVSwitch["AvailableIpAddressCount"].asString();
		if(!valueVSwitchsVSwitch["Bid"].isNull())
			vSwitchsObject.bid = valueVSwitchsVSwitch["Bid"].asString();
		if(!valueVSwitchsVSwitch["CidrBlock"].isNull())
			vSwitchsObject.cidrBlock = valueVSwitchsVSwitch["CidrBlock"].asString();
		if(!valueVSwitchsVSwitch["Description"].isNull())
			vSwitchsObject.description = valueVSwitchsVSwitch["Description"].asString();
		if(!valueVSwitchsVSwitch["GmtCreate"].isNull())
			vSwitchsObject.gmtCreate = valueVSwitchsVSwitch["GmtCreate"].asString();
		if(!valueVSwitchsVSwitch["GmtModified"].isNull())
			vSwitchsObject.gmtModified = valueVSwitchsVSwitch["GmtModified"].asString();
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
		vSwitchs_.push_back(vSwitchsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeVSwitchesResult::VSwitch> DescribeVSwitchesResult::getVSwitchs()const
{
	return vSwitchs_;
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

