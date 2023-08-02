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

#include <alibabacloud/gpdb/model/DescribeDataSharePerformanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeDataSharePerformanceResult::DescribeDataSharePerformanceResult() :
	ServiceResult()
{}

DescribeDataSharePerformanceResult::DescribeDataSharePerformanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDataSharePerformanceResult::~DescribeDataSharePerformanceResult()
{}

void DescribeDataSharePerformanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPerformanceKeysNode = value["PerformanceKeys"]["PerformanceItem"];
	for (auto valuePerformanceKeysPerformanceItem : allPerformanceKeysNode)
	{
		PerformanceItem performanceKeysObject;
		if(!valuePerformanceKeysPerformanceItem["Name"].isNull())
			performanceKeysObject.name = valuePerformanceKeysPerformanceItem["Name"].asString();
		if(!valuePerformanceKeysPerformanceItem["Unit"].isNull())
			performanceKeysObject.unit = valuePerformanceKeysPerformanceItem["Unit"].asString();
		auto allSeriesNode = valuePerformanceKeysPerformanceItem["Series"]["SeriesItem"];
		for (auto valuePerformanceKeysPerformanceItemSeriesSeriesItem : allSeriesNode)
		{
			PerformanceItem::SeriesItem seriesObject;
			if(!valuePerformanceKeysPerformanceItemSeriesSeriesItem["Name"].isNull())
				seriesObject.name = valuePerformanceKeysPerformanceItemSeriesSeriesItem["Name"].asString();
			auto allValuesNode = valuePerformanceKeysPerformanceItemSeriesSeriesItem["Values"]["ValuesItem"];
			for (auto valuePerformanceKeysPerformanceItemSeriesSeriesItemValuesValuesItem : allValuesNode)
			{
				PerformanceItem::SeriesItem::ValuesItem valuesObject;
				auto allPoint = value["Point"]["Point"];
				for (auto value : allPoint)
					valuesObject.point.push_back(value.asString());
				seriesObject.values.push_back(valuesObject);
			}
			performanceKeysObject.series.push_back(seriesObject);
		}
		performanceKeys_.push_back(performanceKeysObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();

}

std::vector<DescribeDataSharePerformanceResult::PerformanceItem> DescribeDataSharePerformanceResult::getPerformanceKeys()const
{
	return performanceKeys_;
}

std::string DescribeDataSharePerformanceResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDataSharePerformanceResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDataSharePerformanceResult::getDBClusterId()const
{
	return dBClusterId_;
}

