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
	auto allItems = value["Items"]["Item"];
	for (auto value : allItems)
	{
		Item itemObject;
		itemObject.reportTime = value["ReportTime"].asString();
		auto allLatencyTopNItems = value["LatencyTopNItems"]["LatencyTopNItem"];
		for (auto value : allLatencyTopNItems)
		{
			Item::LatencyTopNItem latencyTopNItemObject;
			latencyTopNItemObject.sQLText = value["SQLText"].asString();
			latencyTopNItemObject.avgLatency = std::stol(value["AvgLatency"].asString());
			latencyTopNItemObject.sQLExecuteTimes = std::stol(value["SQLExecuteTimes"].asString());
			itemObject.latencyTopNItems.push_back(latencyTopNItemObject);
		}
		auto allQPSTopNItems = value["QPSTopNItems"]["QPSTopNItem"];
		for (auto value : allQPSTopNItems)
		{
			Item::QPSTopNItem qPSTopNItemObject;
			qPSTopNItemObject.sQLText = value["SQLText"].asString();
			qPSTopNItemObject.sQLExecuteTimes = std::stol(value["SQLExecuteTimes"].asString());
			itemObject.qPSTopNItems.push_back(qPSTopNItemObject);
		}
		items_.push_back(itemObject);
	}
	totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeSQLReportsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

void DescribeSQLReportsResult::setTotalRecordCount(int totalRecordCount)
{
	totalRecordCount_ = totalRecordCount;
}

int DescribeSQLReportsResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

void DescribeSQLReportsResult::setPageRecordCount(int pageRecordCount)
{
	pageRecordCount_ = pageRecordCount;
}

int DescribeSQLReportsResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSQLReportsResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

