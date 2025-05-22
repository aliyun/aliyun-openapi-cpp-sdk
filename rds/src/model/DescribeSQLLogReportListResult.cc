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

#include <alibabacloud/rds/model/DescribeSQLLogReportListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeSQLLogReportListResult::DescribeSQLLogReportListResult() :
	ServiceResult()
{}

DescribeSQLLogReportListResult::DescribeSQLLogReportListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLLogReportListResult::~DescribeSQLLogReportListResult()
{}

void DescribeSQLLogReportListResult::parse(const std::string &payload)
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
			if(!valueItemsItemLatencyTopNItemsLatencyTopNItem["AvgLatency"].isNull())
				latencyTopNItemsObject.avgLatency = std::stol(valueItemsItemLatencyTopNItemsLatencyTopNItem["AvgLatency"].asString());
			if(!valueItemsItemLatencyTopNItemsLatencyTopNItem["SQLExecuteTimes"].isNull())
				latencyTopNItemsObject.sQLExecuteTimes = std::stol(valueItemsItemLatencyTopNItemsLatencyTopNItem["SQLExecuteTimes"].asString());
			if(!valueItemsItemLatencyTopNItemsLatencyTopNItem["SQLText"].isNull())
				latencyTopNItemsObject.sQLText = valueItemsItemLatencyTopNItemsLatencyTopNItem["SQLText"].asString();
			itemsObject.latencyTopNItems.push_back(latencyTopNItemsObject);
		}
		auto allQPSTopNItemsNode = valueItemsItem["QPSTopNItems"]["QPSTopNItem"];
		for (auto valueItemsItemQPSTopNItemsQPSTopNItem : allQPSTopNItemsNode)
		{
			Item::QPSTopNItem qPSTopNItemsObject;
			if(!valueItemsItemQPSTopNItemsQPSTopNItem["SQLExecuteTimes"].isNull())
				qPSTopNItemsObject.sQLExecuteTimes = std::stol(valueItemsItemQPSTopNItemsQPSTopNItem["SQLExecuteTimes"].asString());
			if(!valueItemsItemQPSTopNItemsQPSTopNItem["SQLText"].isNull())
				qPSTopNItemsObject.sQLText = valueItemsItemQPSTopNItemsQPSTopNItem["SQLText"].asString();
			itemsObject.qPSTopNItems.push_back(qPSTopNItemsObject);
		}
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

}

int DescribeSQLLogReportListResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeSQLLogReportListResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeSQLLogReportListResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeSQLLogReportListResult::Item> DescribeSQLLogReportListResult::getItems()const
{
	return items_;
}

