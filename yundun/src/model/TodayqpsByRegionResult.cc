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

#include <alibabacloud/yundun/model/TodayqpsByRegionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Yundun;
using namespace AlibabaCloud::Yundun::Model;

TodayqpsByRegionResult::TodayqpsByRegionResult() :
	ServiceResult()
{}

TodayqpsByRegionResult::TodayqpsByRegionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

TodayqpsByRegionResult::~TodayqpsByRegionResult()
{}

void TodayqpsByRegionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["Region"];
	for (auto valueDataRegion : allDataNode)
	{
		Region dataObject;
		if(!valueDataRegion["RegionId"].isNull())
			dataObject.regionId = valueDataRegion["RegionId"].asString();
		if(!valueDataRegion["RegionNumber"].isNull())
			dataObject.regionNumber = std::stol(valueDataRegion["RegionNumber"].asString());
		if(!valueDataRegion["RegionFlow"].isNull())
			dataObject.regionFlow = std::stol(valueDataRegion["RegionFlow"].asString());
		data_.push_back(dataObject);
	}

}

std::vector<TodayqpsByRegionResult::Region> TodayqpsByRegionResult::getData()const
{
	return data_;
}

