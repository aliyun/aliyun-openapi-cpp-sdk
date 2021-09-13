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

#include <alibabacloud/linkwan/model/ListFreqBandPlanGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::LinkWAN;
using namespace AlibabaCloud::LinkWAN::Model;

ListFreqBandPlanGroupsResult::ListFreqBandPlanGroupsResult() :
	ServiceResult()
{}

ListFreqBandPlanGroupsResult::ListFreqBandPlanGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListFreqBandPlanGroupsResult::~ListFreqBandPlanGroupsResult()
{}

void ListFreqBandPlanGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Group"];
	for (auto valueDataGroup : allDataNode)
	{
		Group dataObject;
		if(!valueDataGroup["GroupId"].isNull())
			dataObject.groupId = std::stol(valueDataGroup["GroupId"].asString());
		if(!valueDataGroup["FrequencyRegionId"].isNull())
			dataObject.frequencyRegionId = valueDataGroup["FrequencyRegionId"].asString();
		if(!valueDataGroup["FrequencyType"].isNull())
			dataObject.frequencyType = valueDataGroup["FrequencyType"].asString();
		if(!valueDataGroup["BeginFrequency"].isNull())
			dataObject.beginFrequency = std::stol(valueDataGroup["BeginFrequency"].asString());
		if(!valueDataGroup["EndFrequency"].isNull())
			dataObject.endFrequency = std::stol(valueDataGroup["EndFrequency"].asString());
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListFreqBandPlanGroupsResult::Group> ListFreqBandPlanGroupsResult::getData()const
{
	return data_;
}

bool ListFreqBandPlanGroupsResult::getSuccess()const
{
	return success_;
}

