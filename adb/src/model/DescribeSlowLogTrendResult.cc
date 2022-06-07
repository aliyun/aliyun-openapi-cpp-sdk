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

#include <alibabacloud/adb/model/DescribeSlowLogTrendResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeSlowLogTrendResult::DescribeSlowLogTrendResult() :
	ServiceResult()
{}

DescribeSlowLogTrendResult::DescribeSlowLogTrendResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSlowLogTrendResult::~DescribeSlowLogTrendResult()
{}

void DescribeSlowLogTrendResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["SlowLogTrendItem"];
	for (auto valueItemsSlowLogTrendItem : allItemsNode)
	{
		SlowLogTrendItem itemsObject;
		if(!valueItemsSlowLogTrendItem["Key"].isNull())
			itemsObject.key = valueItemsSlowLogTrendItem["Key"].asString();
		if(!valueItemsSlowLogTrendItem["Unit"].isNull())
			itemsObject.unit = valueItemsSlowLogTrendItem["Unit"].asString();
		auto allSeriesNode = valueItemsSlowLogTrendItem["Series"]["SeriesItem"];
		for (auto valueItemsSlowLogTrendItemSeriesSeriesItem : allSeriesNode)
		{
			SlowLogTrendItem::SeriesItem seriesObject;
			if(!valueItemsSlowLogTrendItemSeriesSeriesItem["Values"].isNull())
				seriesObject.values = valueItemsSlowLogTrendItemSeriesSeriesItem["Values"].asString();
			if(!valueItemsSlowLogTrendItemSeriesSeriesItem["Name"].isNull())
				seriesObject.name = valueItemsSlowLogTrendItemSeriesSeriesItem["Name"].asString();
			itemsObject.series.push_back(seriesObject);
		}
		items_.push_back(itemsObject);
	}
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();

}

std::string DescribeSlowLogTrendResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeSlowLogTrendResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeSlowLogTrendResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::vector<DescribeSlowLogTrendResult::SlowLogTrendItem> DescribeSlowLogTrendResult::getItems()const
{
	return items_;
}

