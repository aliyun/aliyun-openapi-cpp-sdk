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

#include <alibabacloud/adb/model/DescribePatternPerformanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribePatternPerformanceResult::DescribePatternPerformanceResult() :
	ServiceResult()
{}

DescribePatternPerformanceResult::DescribePatternPerformanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePatternPerformanceResult::~DescribePatternPerformanceResult()
{}

void DescribePatternPerformanceResult::parse(const std::string &payload)
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
		auto allSeriesNode = valuePerformancesPerformanceItem["Series"]["SeriesItem"];
		for (auto valuePerformancesPerformanceItemSeriesSeriesItem : allSeriesNode)
		{
			PerformanceItem::SeriesItem seriesObject;
			if(!valuePerformancesPerformanceItemSeriesSeriesItem["Name"].isNull())
				seriesObject.name = valuePerformancesPerformanceItemSeriesSeriesItem["Name"].asString();
			auto allValues = value["Values"]["values"];
			for (auto value : allValues)
				seriesObject.values.push_back(value.asString());
			performancesObject.series.push_back(seriesObject);
		}
		performances_.push_back(performancesObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();

}

std::string DescribePatternPerformanceResult::getEndTime()const
{
	return endTime_;
}

std::string DescribePatternPerformanceResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribePatternPerformanceResult::PerformanceItem> DescribePatternPerformanceResult::getPerformances()const
{
	return performances_;
}

