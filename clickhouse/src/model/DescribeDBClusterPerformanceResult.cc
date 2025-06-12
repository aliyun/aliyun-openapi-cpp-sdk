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

#include <alibabacloud/clickhouse/model/DescribeDBClusterPerformanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Clickhouse;
using namespace AlibabaCloud::Clickhouse::Model;

DescribeDBClusterPerformanceResult::DescribeDBClusterPerformanceResult() :
	ServiceResult()
{}

DescribeDBClusterPerformanceResult::DescribeDBClusterPerformanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterPerformanceResult::~DescribeDBClusterPerformanceResult()
{}

void DescribeDBClusterPerformanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPerformancesNode = value["Performances"]["PerformanceItem"];
	for (auto valuePerformancesPerformanceItem : allPerformancesNode)
	{
		PerformanceItem performancesObject;
		if(!valuePerformancesPerformanceItem["Key"].isNull())
			performancesObject.key = valuePerformancesPerformanceItem["Key"].asString();
		if(!valuePerformancesPerformanceItem["Unit"].isNull())
			performancesObject.unit = valuePerformancesPerformanceItem["Unit"].asString();
		if(!valuePerformancesPerformanceItem["Name"].isNull())
			performancesObject.name = valuePerformancesPerformanceItem["Name"].asString();
		auto allSeriesNode = valuePerformancesPerformanceItem["Series"]["SeriesItem"];
		for (auto valuePerformancesPerformanceItemSeriesSeriesItem : allSeriesNode)
		{
			PerformanceItem::SeriesItem seriesObject;
			if(!valuePerformancesPerformanceItemSeriesSeriesItem["Name"].isNull())
				seriesObject.name = valuePerformancesPerformanceItemSeriesSeriesItem["Name"].asString();
			auto allValuesNode = valuePerformancesPerformanceItemSeriesSeriesItem["Values"]["ValueItem"];
			for (auto valuePerformancesPerformanceItemSeriesSeriesItemValuesValueItem : allValuesNode)
			{
				PerformanceItem::SeriesItem::ValueItem valuesObject;
				auto allPoint = value["Point"]["Point"];
				for (auto value : allPoint)
					valuesObject.point.push_back(value.asString());
				seriesObject.values.push_back(valuesObject);
			}
			performancesObject.series.push_back(seriesObject);
		}
		performances_.push_back(performancesObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();

}

std::string DescribeDBClusterPerformanceResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDBClusterPerformanceResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDBClusterPerformanceResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::vector<DescribeDBClusterPerformanceResult::PerformanceItem> DescribeDBClusterPerformanceResult::getPerformances()const
{
	return performances_;
}

