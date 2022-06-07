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

#include <alibabacloud/adb/model/DescribeSqlPatternResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeSqlPatternResult::DescribeSqlPatternResult() :
	ServiceResult()
{}

DescribeSqlPatternResult::DescribeSqlPatternResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSqlPatternResult::~DescribeSqlPatternResult()
{}

void DescribeSqlPatternResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["ItemsItem"];
	for (auto valueItemsItemsItem : allItemsNode)
	{
		ItemsItem itemsObject;
		if(!valueItemsItemsItem["AvgStageCount"].isNull())
			itemsObject.avgStageCount = valueItemsItemsItem["AvgStageCount"].asString();
		if(!valueItemsItemsItem["MaxCpuTime"].isNull())
			itemsObject.maxCpuTime = valueItemsItemsItem["MaxCpuTime"].asString();
		if(!valueItemsItemsItem["AccessIP"].isNull())
			itemsObject.accessIP = valueItemsItemsItem["AccessIP"].asString();
		if(!valueItemsItemsItem["AvgScanSize"].isNull())
			itemsObject.avgScanSize = valueItemsItemsItem["AvgScanSize"].asString();
		if(!valueItemsItemsItem["MaxScanSize"].isNull())
			itemsObject.maxScanSize = valueItemsItemsItem["MaxScanSize"].asString();
		if(!valueItemsItemsItem["MaxPeakMemory"].isNull())
			itemsObject.maxPeakMemory = valueItemsItemsItem["MaxPeakMemory"].asString();
		if(!valueItemsItemsItem["AvgCpuTime"].isNull())
			itemsObject.avgCpuTime = valueItemsItemsItem["AvgCpuTime"].asString();
		if(!valueItemsItemsItem["User"].isNull())
			itemsObject.user = valueItemsItemsItem["User"].asString();
		if(!valueItemsItemsItem["AvgPeakMemory"].isNull())
			itemsObject.avgPeakMemory = valueItemsItemsItem["AvgPeakMemory"].asString();
		if(!valueItemsItemsItem["MaxStageCount"].isNull())
			itemsObject.maxStageCount = valueItemsItemsItem["MaxStageCount"].asString();
		if(!valueItemsItemsItem["MaxTaskCount"].isNull())
			itemsObject.maxTaskCount = valueItemsItemsItem["MaxTaskCount"].asString();
		if(!valueItemsItemsItem["InstanceName"].isNull())
			itemsObject.instanceName = valueItemsItemsItem["InstanceName"].asString();
		if(!valueItemsItemsItem["QueryCount"].isNull())
			itemsObject.queryCount = valueItemsItemsItem["QueryCount"].asString();
		if(!valueItemsItemsItem["ReportDate"].isNull())
			itemsObject.reportDate = valueItemsItemsItem["ReportDate"].asString();
		if(!valueItemsItemsItem["Pattern"].isNull())
			itemsObject.pattern = valueItemsItemsItem["Pattern"].asString();
		if(!valueItemsItemsItem["AvgTaskCount"].isNull())
			itemsObject.avgTaskCount = valueItemsItemsItem["AvgTaskCount"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeSqlPatternResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSqlPatternResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSqlPatternResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeSqlPatternResult::ItemsItem> DescribeSqlPatternResult::getItems()const
{
	return items_;
}

