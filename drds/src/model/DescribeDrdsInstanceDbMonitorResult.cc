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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["PartialPerformanceData"];
	for (auto valueDataPartialPerformanceData : allDataNode)
	{
		PartialPerformanceData dataObject;
		if(!valueDataPartialPerformanceData["Key"].isNull())
			dataObject.key = valueDataPartialPerformanceData["Key"].asString();
		if(!valueDataPartialPerformanceData["Unit"].isNull())
			dataObject.unit = valueDataPartialPerformanceData["Unit"].asString();
		auto allValuesNode = valueDataPartialPerformanceData["Values"]["PerformanceValue"];
		for (auto valueDataPartialPerformanceDataValuesPerformanceValue : allValuesNode)
		{
			PartialPerformanceData::PerformanceValue valuesObject;
			if(!valueDataPartialPerformanceDataValuesPerformanceValue["Date"].isNull())
				valuesObject.date = std::stol(valueDataPartialPerformanceDataValuesPerformanceValue["Date"].asString());
			if(!valueDataPartialPerformanceDataValuesPerformanceValue["Value"].isNull())
				valuesObject.value = valueDataPartialPerformanceDataValuesPerformanceValue["Value"].asString();
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

