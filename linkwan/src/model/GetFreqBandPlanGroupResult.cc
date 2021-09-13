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

#include <alibabacloud/linkwan/model/GetFreqBandPlanGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

GetFreqBandPlanGroupResult::GetFreqBandPlanGroupResult() :
	ServiceResult()
{}

GetFreqBandPlanGroupResult::GetFreqBandPlanGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetFreqBandPlanGroupResult::~GetFreqBandPlanGroupResult()
{}

void GetFreqBandPlanGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["GroupId"].isNull())
		data_.groupId = std::stol(dataNode["GroupId"].asString());
	if(!dataNode["FrequencyRegionId"].isNull())
		data_.frequencyRegionId = dataNode["FrequencyRegionId"].asString();
	if(!dataNode["FrequencyType"].isNull())
		data_.frequencyType = dataNode["FrequencyType"].asString();
	if(!dataNode["BeginFrequency"].isNull())
		data_.beginFrequency = std::stol(dataNode["BeginFrequency"].asString());
	if(!dataNode["EndFrequency"].isNull())
		data_.endFrequency = std::stol(dataNode["EndFrequency"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetFreqBandPlanGroupResult::Data GetFreqBandPlanGroupResult::getData()const
{
	return data_;
}

bool GetFreqBandPlanGroupResult::getSuccess()const
{
	return success_;
}

