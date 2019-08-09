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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allItems = value["Items"]["Item"];
	for (auto value : allItems)
	{
		Item itemsObject;
		if(!value["ReportTime"].isNull())
			itemsObject.reportTime = value["ReportTime"].asString();
		auto allLatencyTopNItems = value["LatencyTopNItems"]["LatencyTopNItem"];
		for (auto value : allLatencyTopNItems)
		{
			Item::LatencyTopNItem latencyTopNItemsObject;
			if(!value["SQLText"].isNull())
				latencyTopNItemsObject.sQLText = value["SQLText"].asString();
			if(!value["AvgLatency"].isNull())
				latencyTopNItemsObject.avgLatency = std::stol(value["AvgLatency"].asString());
			if(!value["SQLExecuteTimes"].isNull())
				latencyTopNItemsObject.sQLExecuteTimes = std::stol(value["SQLExecuteTimes"].asString());
			itemsObject.latencyTopNItems.push_back(latencyTopNItemsObject);
		}
		auto allQPSTopNItems = value["QPSTopNItems"]["QPSTopNItem"];
		for (auto value : allQPSTopNItems)
		{
			Item::QPSTopNItem qPSTopNItemsObject;
			if(!value["SQLText"].isNull())
				qPSTopNItemsObject.sQLText = value["SQLText"].asString();
			if(!value["SQLExecuteTimes"].isNull())
				qPSTopNItemsObject.sQLExecuteTimes = std::stol(value["SQLExecuteTimes"].asString());
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

