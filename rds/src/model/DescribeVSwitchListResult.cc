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

#include <alibabacloud/rds/model/DescribeVSwitchListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

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
	auto allVSwitchesNode = value["VSwitches"]["VSwitchesItem"];
	for (auto valueVSwitchesVSwitchesItem : allVSwitchesNode)
	{
		VSwitchesItem vSwitchesObject;
		if(!valueVSwitchesVSwitchesItem["IsDefault"].isNull())
			vSwitchesObject.isDefault = valueVSwitchesVSwitchesItem["IsDefault"].asString();
		if(!valueVSwitchesVSwitchesItem["Status"].isNull())
			vSwitchesObject.status = valueVSwitchesVSwitchesItem["Status"].asString();
		if(!valueVSwitchesVSwitchesItem["IzNo"].isNull())
			vSwitchesObject.izNo = valueVSwitchesVSwitchesItem["IzNo"].asString();
		if(!valueVSwitchesVSwitchesItem["GmtCreate"].isNull())
			vSwitchesObject.gmtCreate = valueVSwitchesVSwitchesItem["GmtCreate"].asString();
		if(!valueVSwitchesVSwitchesItem["Description"].isNull())
			vSwitchesObject.description = valueVSwitchesVSwitchesItem["Description"].asString();
		if(!valueVSwitchesVSwitchesItem["AvailableIpAddressCount"].isNull())
			vSwitchesObject.availableIpAddressCount = valueVSwitchesVSwitchesItem["AvailableIpAddressCount"].asString();
		if(!valueVSwitchesVSwitchesItem["VSwitchId"].isNull())
			vSwitchesObject.vSwitchId = valueVSwitchesVSwitchesItem["VSwitchId"].asString();
		if(!valueVSwitchesVSwitchesItem["CidrBlock"].isNull())
			vSwitchesObject.cidrBlock = valueVSwitchesVSwitchesItem["CidrBlock"].asString();
		if(!valueVSwitchesVSwitchesItem["VSwitchName"].isNull())
			vSwitchesObject.vSwitchName = valueVSwitchesVSwitchesItem["VSwitchName"].asString();
		if(!valueVSwitchesVSwitchesItem["ShareType"].isNull())
			vSwitchesObject.shareType = valueVSwitchesVSwitchesItem["ShareType"].asString();
		vSwitches_.push_back(vSwitchesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

std::vector<DescribeVSwitchListResult::VSwitchesItem> DescribeVSwitchListResult::getVSwitches()const
{
	return vSwitches_;
}

