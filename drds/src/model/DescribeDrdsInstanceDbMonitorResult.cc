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

#include <alibabacloud/drds/model/DescribeDrdsInstanceDbMonitorResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsInstanceDbMonitorResult::DescribeDrdsInstanceDbMonitorResult() :
	ServiceResult()
{}

DescribeDrdsInstanceDbMonitorResult::DescribeDrdsInstanceDbMonitorResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsInstanceDbMonitorResult::~DescribeDrdsInstanceDbMonitorResult()
{}

void DescribeDrdsInstanceDbMonitorResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allData = value["Data"]["PartialPerformanceData"];
	for (auto value : allData)
	{
		PartialPerformanceData dataObject;
		if(!value["Key"].isNull())
			dataObject.key = value["Key"].asString();
		if(!value["Unit"].isNull())
			dataObject.unit = value["Unit"].asString();
		auto allValues = value["Values"]["PerformanceValue"];
		for (auto value : allValues)
		{
			PartialPerformanceData::PerformanceValue valuesObject;
			if(!value["Date"].isNull())
				valuesObject.date = std::stol(value["Date"].asString());
			if(!value["Value"].isNull())
				valuesObject.value = value["Value"].asString();
			dataObject.values.push_back(valuesObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeDrdsInstanceDbMonitorResult::PartialPerformanceData> DescribeDrdsInstanceDbMonitorResult::getData()const
{
	return data_;
}

bool DescribeDrdsInstanceDbMonitorResult::getSuccess()const
{
	return success_;
}

