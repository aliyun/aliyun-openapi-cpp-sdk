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

#include <alibabacloud/adb/model/DescribeDBClusterResourcePoolPerformanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeDBClusterResourcePoolPerformanceResult::DescribeDBClusterResourcePoolPerformanceResult() :
	ServiceResult()
{}

DescribeDBClusterResourcePoolPerformanceResult::DescribeDBClusterResourcePoolPerformanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBClusterResourcePoolPerformanceResult::~DescribeDBClusterResourcePoolPerformanceResult()
{}

void DescribeDBClusterResourcePoolPerformanceResult::parse(const std::string &payload)
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
		auto allResourcePoolPerformancesNode = valuePerformancesPerformanceItem["ResourcePoolPerformances"]["ResourcePoolPerformancesItem"];
		for (auto valuePerformancesPerformanceItemResourcePoolPerformancesResourcePoolPerformancesItem : allResourcePoolPerformancesNode)
		{
			PerformanceItem::ResourcePoolPerformancesItem resourcePoolPerformancesObject;
			if(!valuePerformancesPerformanceItemResourcePoolPerformancesResourcePoolPerformancesItem["ResourcePoolName"].isNull())
				resourcePoolPerformancesObject.resourcePoolName = valuePerformancesPerformanceItemResourcePoolPerformancesResourcePoolPerformancesItem["ResourcePoolName"].asString();
			auto allResourcePoolSeriesNode = valuePerformancesPerformanceItemResourcePoolPerformancesResourcePoolPerformancesItem["ResourcePoolSeries"]["ResourcePoolSeriesItem"];
			for (auto valuePerformancesPerformanceItemResourcePoolPerformancesResourcePoolPerformancesItemResourcePoolSeriesResourcePoolSeriesItem : allResourcePoolSeriesNode)
			{
				PerformanceItem::ResourcePoolPerformancesItem::ResourcePoolSeriesItem resourcePoolSeriesObject;
				if(!valuePerformancesPerformanceItemResourcePoolPerformancesResourcePoolPerformancesItemResourcePoolSeriesResourcePoolSeriesItem["Name"].isNull())
					resourcePoolSeriesObject.name = valuePerformancesPerformanceItemResourcePoolPerformancesResourcePoolPerformancesItemResourcePoolSeriesResourcePoolSeriesItem["Name"].asString();
				auto allValues = value["Values"]["Values"];
				for (auto value : allValues)
					resourcePoolSeriesObject.values.push_back(value.asString());
				resourcePoolPerformancesObject.resourcePoolSeries.push_back(resourcePoolSeriesObject);
			}
			performancesObject.resourcePoolPerformances.push_back(resourcePoolPerformancesObject);
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

std::string DescribeDBClusterResourcePoolPerformanceResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeDBClusterResourcePoolPerformanceResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeDBClusterResourcePoolPerformanceResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::vector<DescribeDBClusterResourcePoolPerformanceResult::PerformanceItem> DescribeDBClusterResourcePoolPerformanceResult::getPerformances()const
{
	return performances_;
}

