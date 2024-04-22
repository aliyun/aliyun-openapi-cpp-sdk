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

#include <alibabacloud/sae/model/GetChangeOrderMetricResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

GetChangeOrderMetricResult::GetChangeOrderMetricResult() :
	ServiceResult()
{}

GetChangeOrderMetricResult::GetChangeOrderMetricResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetChangeOrderMetricResult::~GetChangeOrderMetricResult()
{}

void GetChangeOrderMetricResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["ChangeOrderMetricDto"];
	for (auto valueDataChangeOrderMetricDto : allDataNode)
	{
		ChangeOrderMetricDto dataObject;
		if(!valueDataChangeOrderMetricDto["AppId"].isNull())
			dataObject.appId = valueDataChangeOrderMetricDto["AppId"].asString();
		if(!valueDataChangeOrderMetricDto["Name"].isNull())
			dataObject.name = valueDataChangeOrderMetricDto["Name"].asString();
		if(!valueDataChangeOrderMetricDto["RegionId"].isNull())
			dataObject.regionId = valueDataChangeOrderMetricDto["RegionId"].asString();
		if(!valueDataChangeOrderMetricDto["Total"].isNull())
			dataObject.total = std::stol(valueDataChangeOrderMetricDto["Total"].asString());
		if(!valueDataChangeOrderMetricDto["Error"].isNull())
			dataObject.error = std::stol(valueDataChangeOrderMetricDto["Error"].asString());
		if(!valueDataChangeOrderMetricDto["ErrorPercent"].isNull())
			dataObject.errorPercent = std::stof(valueDataChangeOrderMetricDto["ErrorPercent"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetChangeOrderMetricResult::getMessage()const
{
	return message_;
}

std::vector<GetChangeOrderMetricResult::ChangeOrderMetricDto> GetChangeOrderMetricResult::getData()const
{
	return data_;
}

std::string GetChangeOrderMetricResult::getCode()const
{
	return code_;
}

bool GetChangeOrderMetricResult::getSuccess()const
{
	return success_;
}

