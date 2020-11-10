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

#include <alibabacloud/rds/model/DescribeSQLLogReportsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeSQLLogReportsResult::DescribeSQLLogReportsResult() :
	ServiceResult()
{}

DescribeSQLLogReportsResult::DescribeSQLLogReportsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLLogReportsResult::~DescribeSQLLogReportsResult()
{}

void DescribeSQLLogReportsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Item"];
	for (auto valueItemsItem : allItemsNode)
	{
		Item itemsObject;
		if(!valueItemsItem["ReportTime"].isNull())
			itemsObject.reportTime = valueItemsItem["ReportTime"].asString();
		auto allLatencyTopNItemsNode = valueItemsItem["LatencyTopNItems"]["LatencyTopNItem"];
		for (auto valueItemsItemLatencyTopNItemsLatencyTopNItem : allLatencyTopNItemsNode)
		{
			Item::LatencyTopNItem latencyTopNItemsObject;
			if(!valueItemsItemLatencyTopNItemsLatencyTopNItem["SQLText"].isNull())
				latencyTopNItemsObject.sQLText = valueItemsItemLatencyTopNItemsLatencyTopNItem["SQLText"].asString();
			if(!valueItemsItemLatencyTopNItemsLatencyTopNItem["AvgLatency"].isNull())
				latencyTopNItemsObject.avgLatency = std::stol(valueItemsItemLatencyTopNItemsLatencyTopNItem["AvgLatency"].asString());
			if(!valueItemsItemLatencyTopNItemsLatencyTopNItem["SQLExecuteTimes"].isNull())
				latencyTopNItemsObject.sQLExecuteTimes = std::stol(valueItemsItemLatencyTopNItemsLatencyTopNItem["SQLExecuteTimes"].asString());
			itemsObject.latencyTopNItems.push_back(latencyTopNItemsObject);
		}
		auto allQPSTopNItemsNode = valueItemsItem["QPSTopNItems"]["QPSTopNItem"];
		for (auto valueItemsItemQPSTopNItemsQPSTopNItem : allQPSTopNItemsNode)
		{
			Item::QPSTopNItem qPSTopNItemsObject;
			if(!valueItemsItemQPSTopNItemsQPSTopNItem["SQLText"].isNull())
				qPSTopNItemsObject.sQLText = valueItemsItemQPSTopNItemsQPSTopNItem["SQLText"].asString();
			if(!valueItemsItemQPSTopNItemsQPSTopNItem["SQLExecuteTimes"].isNull())
				qPSTopNItemsObject.sQLExecuteTimes = std::stol(valueItemsItemQPSTopNItemsQPSTopNItem["SQLExecuteTimes"].asString());
			itemsObject.qPSTopNItems.push_back(qPSTopNItemsObject);
		}
		items_.push_back(itemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeSQLLogReportsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeSQLLogReportsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeSQLLogReportsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeSQLLogReportsResult::Item> DescribeSQLLogReportsResult::getItems()const
{
	return items_;
}

