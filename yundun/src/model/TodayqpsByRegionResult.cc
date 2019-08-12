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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["Region"];
	for (auto value : allData)
	{
		Region dataObject;
		if(!value["RegionId"].isNull())
			dataObject.regionId = value["RegionId"].asString();
		if(!value["RegionNumber"].isNull())
			dataObject.regionNumber = std::stol(value["RegionNumber"].asString());
		if(!value["RegionFlow"].isNull())
			dataObject.regionFlow = std::stol(value["RegionFlow"].asString());
		data_.push_back(dataObject);
	}

}

std::vector<TodayqpsByRegionResult::Region> TodayqpsByRegionResult::getData()const
{
	return data_;
}

