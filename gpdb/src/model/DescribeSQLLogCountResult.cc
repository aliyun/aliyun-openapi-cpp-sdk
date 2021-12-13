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

#include <alibabacloud/gpdb/model/DescribeSQLLogCountResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeSQLLogCountResult::DescribeSQLLogCountResult() :
	ServiceResult()
{}

DescribeSQLLogCountResult::DescribeSQLLogCountResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLLogCountResult::~DescribeSQLLogCountResult()
{}

void DescribeSQLLogCountResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["Name"].isNull())
			itemsObject.name = valueItemsItem["Name"].asString();
		auto allSeriesNode = valueItemsItem["Series"]["SeriesItem"];
		for (auto valueItemsItemSeriesSeriesItem : allSeriesNode)
		{
			Item::SeriesItem seriesObject;
			auto allValuesNode = valueItemsItemSeriesSeriesItem["Values"]["ValueItem"];
			for (auto valueItemsItemSeriesSeriesItemValuesValueItem : allValuesNode)
			{
				Item::SeriesItem::ValueItem valuesObject;
				auto allPoint = value["Point"]["Point"];
				for (auto value : allPoint)
					valuesObject.point.push_back(value.asString());
				seriesObject.values.push_back(valuesObject);
			}
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

std::string DescribeSQLLogCountResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeSQLLogCountResult::getStartTime()const
{
	return startTime_;
}

std::string DescribeSQLLogCountResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::vector<DescribeSQLLogCountResult::Item> DescribeSQLLogCountResult::getItems()const
{
	return items_;
}

