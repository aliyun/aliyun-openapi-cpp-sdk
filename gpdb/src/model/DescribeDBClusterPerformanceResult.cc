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

#include <alibabacloud/gpdb/model/DescribeDBClusterPerformanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

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
	auto allPerformanceKeysNode = value["PerformanceKeys"]["PerformanceKey"];
	for (auto valuePerformanceKeysPerformanceKey : allPerformanceKeysNode)
	{
		PerformanceKey performanceKeysObject;
		if(!valuePerformanceKeysPerformanceKey["Unit"].isNull())
			performanceKeysObject.unit = valuePerformanceKeysPerformanceKey["Unit"].asString();
		if(!valuePerformanceKeysPerformanceKey["Name"].isNull())
			performanceKeysObject.name = valuePerformanceKeysPerformanceKey["Name"].asString();
		auto allSeriesNode = valuePerformanceKeysPerformanceKey["Series"]["SeriesItem"];
		for (auto valuePerformanceKeysPerformanceKeySeriesSeriesItem : allSeriesNode)
		{
			PerformanceKey::SeriesItem seriesObject;
			if(!valuePerformanceKeysPerformanceKeySeriesSeriesItem["Role"].isNull())
				seriesObject.role = valuePerformanceKeysPerformanceKeySeriesSeriesItem["Role"].asString();
			if(!valuePerformanceKeysPerformanceKeySeriesSeriesItem["Name"].isNull())
				seriesObject.name = valuePerformanceKeysPerformanceKeySeriesSeriesItem["Name"].asString();
			auto allValuesNode = valuePerformanceKeysPerformanceKeySeriesSeriesItem["Values"]["ValueItem"];
			for (auto valuePerformanceKeysPerformanceKeySeriesSeriesItemValuesValueItem : allValuesNode)
			{
				PerformanceKey::SeriesItem::ValueItem valuesObject;
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

std::vector<DescribeDBClusterPerformanceResult::PerformanceKey> DescribeDBClusterPerformanceResult::getPerformanceKeys()const
{
	return performanceKeys_;
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

