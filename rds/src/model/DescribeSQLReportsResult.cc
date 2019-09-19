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

#include <alibabacloud/rds/model/DescribeSQLReportsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeSQLReportsResult::DescribeSQLReportsResult() :
	ServiceResult()
{}

DescribeSQLReportsResult::DescribeSQLReportsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLReportsResult::~DescribeSQLReportsResult()
{}

void DescribeSQLReportsResult::parse(const std::string &payload)
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
		auto allLatencyTopNItemsNode = allItemsNode["LatencyTopNItems"]["LatencyTopNItem"];
		for (auto allItemsNodeLatencyTopNItemsLatencyTopNItem : allLatencyTopNItemsNode)
		{
			Item::LatencyTopNItem latencyTopNItemsObject;
			if(!allItemsNodeLatencyTopNItemsLatencyTopNItem["SQLText"].isNull())
				latencyTopNItemsObject.sQLText = allItemsNodeLatencyTopNItemsLatencyTopNItem["SQLText"].asString();
			if(!allItemsNodeLatencyTopNItemsLatencyTopNItem["AvgLatency"].isNull())
				latencyTopNItemsObject.avgLatency = std::stol(allItemsNodeLatencyTopNItemsLatencyTopNItem["AvgLatency"].asString());
			if(!allItemsNodeLatencyTopNItemsLatencyTopNItem["SQLExecuteTimes"].isNull())
				latencyTopNItemsObject.sQLExecuteTimes = std::stol(allItemsNodeLatencyTopNItemsLatencyTopNItem["SQLExecuteTimes"].asString());
			itemsObject.latencyTopNItems.push_back(latencyTopNItemsObject);
		}
		auto allQPSTopNItemsNode = allItemsNode["QPSTopNItems"]["QPSTopNItem"];
		for (auto allItemsNodeQPSTopNItemsQPSTopNItem : allQPSTopNItemsNode)
		{
			Item::QPSTopNItem qPSTopNItemsObject;
			if(!allItemsNodeQPSTopNItemsQPSTopNItem["SQLText"].isNull())
				qPSTopNItemsObject.sQLText = allItemsNodeQPSTopNItemsQPSTopNItem["SQLText"].asString();
			if(!allItemsNodeQPSTopNItemsQPSTopNItem["SQLExecuteTimes"].isNull())
				qPSTopNItemsObject.sQLExecuteTimes = std::stol(allItemsNodeQPSTopNItemsQPSTopNItem["SQLExecuteTimes"].asString());
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

int DescribeSQLReportsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeSQLReportsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeSQLReportsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeSQLReportsResult::Item> DescribeSQLReportsResult::getItems()const
{
	return items_;
}

