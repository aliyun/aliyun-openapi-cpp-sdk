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

#include <alibabacloud/sae/model/GetWarningEventMetricResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

GetWarningEventMetricResult::GetWarningEventMetricResult() :
	ServiceResult()
{}

GetWarningEventMetricResult::GetWarningEventMetricResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetWarningEventMetricResult::~GetWarningEventMetricResult()
{}

void GetWarningEventMetricResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["EventMetricDto"];
	for (auto valueDataEventMetricDto : allDataNode)
	{
		EventMetricDto dataObject;
		if(!valueDataEventMetricDto["AppId"].isNull())
			dataObject.appId = valueDataEventMetricDto["AppId"].asString();
		if(!valueDataEventMetricDto["Name"].isNull())
			dataObject.name = valueDataEventMetricDto["Name"].asString();
		if(!valueDataEventMetricDto["RegionId"].isNull())
			dataObject.regionId = valueDataEventMetricDto["RegionId"].asString();
		if(!valueDataEventMetricDto["WarningCount"].isNull())
			dataObject.warningCount = std::stol(valueDataEventMetricDto["WarningCount"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetWarningEventMetricResult::getMessage()const
{
	return message_;
}

std::vector<GetWarningEventMetricResult::EventMetricDto> GetWarningEventMetricResult::getData()const
{
	return data_;
}

std::string GetWarningEventMetricResult::getCode()const
{
	return code_;
}

bool GetWarningEventMetricResult::getSuccess()const
{
	return success_;
}

