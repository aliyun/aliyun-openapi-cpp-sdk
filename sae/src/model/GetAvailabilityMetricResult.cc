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

#include <alibabacloud/sae/model/GetAvailabilityMetricResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

GetAvailabilityMetricResult::GetAvailabilityMetricResult() :
	ServiceResult()
{}

GetAvailabilityMetricResult::GetAvailabilityMetricResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAvailabilityMetricResult::~GetAvailabilityMetricResult()
{}

void GetAvailabilityMetricResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["AvailabilityMetricDto"];
	for (auto valueDataAvailabilityMetricDto : allDataNode)
	{
		AvailabilityMetricDto dataObject;
		if(!valueDataAvailabilityMetricDto["AppId"].isNull())
			dataObject.appId = valueDataAvailabilityMetricDto["AppId"].asString();
		if(!valueDataAvailabilityMetricDto["Name"].isNull())
			dataObject.name = valueDataAvailabilityMetricDto["Name"].asString();
		if(!valueDataAvailabilityMetricDto["RegionId"].isNull())
			dataObject.regionId = valueDataAvailabilityMetricDto["RegionId"].asString();
		if(!valueDataAvailabilityMetricDto["Runnings"].isNull())
			dataObject.runnings = std::stol(valueDataAvailabilityMetricDto["Runnings"].asString());
		if(!valueDataAvailabilityMetricDto["Instances"].isNull())
			dataObject.instances = std::stol(valueDataAvailabilityMetricDto["Instances"].asString());
		if(!valueDataAvailabilityMetricDto["ErrorInstances"].isNull())
			dataObject.errorInstances = std::stol(valueDataAvailabilityMetricDto["ErrorInstances"].asString());
		if(!valueDataAvailabilityMetricDto["EnableAutoscale"].isNull())
			dataObject.enableAutoscale = std::stol(valueDataAvailabilityMetricDto["EnableAutoscale"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetAvailabilityMetricResult::getMessage()const
{
	return message_;
}

std::vector<GetAvailabilityMetricResult::AvailabilityMetricDto> GetAvailabilityMetricResult::getData()const
{
	return data_;
}

std::string GetAvailabilityMetricResult::getCode()const
{
	return code_;
}

bool GetAvailabilityMetricResult::getSuccess()const
{
	return success_;
}

