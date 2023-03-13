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

#include <alibabacloud/cbn/model/ListGrantVSwitchesToCenResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

ListGrantVSwitchesToCenResult::ListGrantVSwitchesToCenResult() :
	ServiceResult()
{}

ListGrantVSwitchesToCenResult::ListGrantVSwitchesToCenResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListGrantVSwitchesToCenResult::~ListGrantVSwitchesToCenResult()
{}

void ListGrantVSwitchesToCenResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allVSwitchesNode = value["VSwitches"]["VSwitch"];
	for (auto valueVSwitchesVSwitch : allVSwitchesNode)
	{
		VSwitch vSwitchesObject;
		if(!valueVSwitchesVSwitch["VpcId"].isNull())
			vSwitchesObject.vpcId = valueVSwitchesVSwitch["VpcId"].asString();
		if(!valueVSwitchesVSwitch["ZoneId"].isNull())
			vSwitchesObject.zoneId = valueVSwitchesVSwitch["ZoneId"].asString();
		if(!valueVSwitchesVSwitch["VSwitchId"].isNull())
			vSwitchesObject.vSwitchId = valueVSwitchesVSwitch["VSwitchId"].asString();
		if(!valueVSwitchesVSwitch["VSwitchName"].isNull())
			vSwitchesObject.vSwitchName = valueVSwitchesVSwitch["VSwitchName"].asString();
		vSwitches_.push_back(vSwitchesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListGrantVSwitchesToCenResult::getTotalCount()const
{
	return totalCount_;
}

int ListGrantVSwitchesToCenResult::getPageSize()const
{
	return pageSize_;
}

int ListGrantVSwitchesToCenResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListGrantVSwitchesToCenResult::VSwitch> ListGrantVSwitchesToCenResult::getVSwitches()const
{
	return vSwitches_;
}

