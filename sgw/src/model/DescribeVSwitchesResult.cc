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

#include <alibabacloud/sgw/model/DescribeVSwitchesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sgw;
using namespace AlibabaCloud::Sgw::Model;

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
	auto allVSwitchesNode = value["VSwitches"]["VSwitch"];
	for (auto valueVSwitchesVSwitch : allVSwitchesNode)
	{
		VSwitch vSwitchesObject;
		if(!valueVSwitchesVSwitch["Name"].isNull())
			vSwitchesObject.name = valueVSwitchesVSwitch["Name"].asString();
		if(!valueVSwitchesVSwitch["Id"].isNull())
			vSwitchesObject.id = valueVSwitchesVSwitch["Id"].asString();
		if(!valueVSwitchesVSwitch["IsDefault"].isNull())
			vSwitchesObject.isDefault = valueVSwitchesVSwitch["IsDefault"].asString() == "true";
		if(!valueVSwitchesVSwitch["ZoneId"].isNull())
			vSwitchesObject.zoneId = valueVSwitchesVSwitch["ZoneId"].asString();
		if(!valueVSwitchesVSwitch["AvailableSelectionInfo"].isNull())
			vSwitchesObject.availableSelectionInfo = valueVSwitchesVSwitch["AvailableSelectionInfo"].asString();
		vSwitches_.push_back(vSwitchesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
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

std::string DescribeVSwitchesResult::getMessage()const
{
	return message_;
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

std::string DescribeVSwitchesResult::getCode()const
{
	return code_;
}

bool DescribeVSwitchesResult::getSuccess()const
{
	return success_;
}

