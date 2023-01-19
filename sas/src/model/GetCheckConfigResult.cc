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

#include <alibabacloud/sas/model/GetCheckConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

GetCheckConfigResult::GetCheckConfigResult() :
	ServiceResult()
{}

GetCheckConfigResult::GetCheckConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCheckConfigResult::~GetCheckConfigResult()
{}

void GetCheckConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStandardsNode = value["Standards"]["StandardsItem"];
	for (auto valueStandardsStandardsItem : allStandardsNode)
	{
		StandardsItem standardsObject;
		if(!valueStandardsStandardsItem["Id"].isNull())
			standardsObject.id = std::stol(valueStandardsStandardsItem["Id"].asString());
		if(!valueStandardsStandardsItem["ShowName"].isNull())
			standardsObject.showName = valueStandardsStandardsItem["ShowName"].asString();
		if(!valueStandardsStandardsItem["Type"].isNull())
			standardsObject.type = valueStandardsStandardsItem["Type"].asString();
		if(!valueStandardsStandardsItem["Status"].isNull())
			standardsObject.status = valueStandardsStandardsItem["Status"].asString();
		standards_.push_back(standardsObject);
	}
	auto allCycleDays = value["CycleDays"]["CycleDays"];
	for (const auto &item : allCycleDays)
		cycleDays_.push_back(item.asString());
	if(!value["StartTime"].isNull())
		startTime_ = std::stoi(value["StartTime"].asString());
	if(!value["EndTime"].isNull())
		endTime_ = std::stoi(value["EndTime"].asString());
	if(!value["Data"].isNull())
		data_ = value["Data"].asString();

}

int GetCheckConfigResult::getEndTime()const
{
	return endTime_;
}

std::vector<std::string> GetCheckConfigResult::getCycleDays()const
{
	return cycleDays_;
}

int GetCheckConfigResult::getStartTime()const
{
	return startTime_;
}

std::string GetCheckConfigResult::getData()const
{
	return data_;
}

std::vector<GetCheckConfigResult::StandardsItem> GetCheckConfigResult::getStandards()const
{
	return standards_;
}

