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

#include <alibabacloud/sae/model/GetArmsTopNMetricResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sae;
using namespace AlibabaCloud::Sae::Model;

GetArmsTopNMetricResult::GetArmsTopNMetricResult() :
	ServiceResult()
{}

GetArmsTopNMetricResult::GetArmsTopNMetricResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetArmsTopNMetricResult::~GetArmsTopNMetricResult()
{}

void GetArmsTopNMetricResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["ArmsMetricDto"];
	for (auto valueDataArmsMetricDto : allDataNode)
	{
		ArmsMetricDto dataObject;
		if(!valueDataArmsMetricDto["AppId"].isNull())
			dataObject.appId = valueDataArmsMetricDto["AppId"].asString();
		if(!valueDataArmsMetricDto["Name"].isNull())
			dataObject.name = valueDataArmsMetricDto["Name"].asString();
		if(!valueDataArmsMetricDto["RegionId"].isNull())
			dataObject.regionId = valueDataArmsMetricDto["RegionId"].asString();
		if(!valueDataArmsMetricDto["Count"].isNull())
			dataObject.count = std::stol(valueDataArmsMetricDto["Count"].asString());
		if(!valueDataArmsMetricDto["Error"].isNull())
			dataObject.error = std::stol(valueDataArmsMetricDto["Error"].asString());
		if(!valueDataArmsMetricDto["Rt"].isNull())
			dataObject.rt = std::stol(valueDataArmsMetricDto["Rt"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetArmsTopNMetricResult::getMessage()const
{
	return message_;
}

std::vector<GetArmsTopNMetricResult::ArmsMetricDto> GetArmsTopNMetricResult::getData()const
{
	return data_;
}

std::string GetArmsTopNMetricResult::getCode()const
{
	return code_;
}

bool GetArmsTopNMetricResult::getSuccess()const
{
	return success_;
}

