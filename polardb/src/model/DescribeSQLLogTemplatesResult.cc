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

#include <alibabacloud/polardb/model/DescribeSQLLogTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeSQLLogTemplatesResult::DescribeSQLLogTemplatesResult() :
	ServiceResult()
{}

DescribeSQLLogTemplatesResult::DescribeSQLLogTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSQLLogTemplatesResult::~DescribeSQLLogTemplatesResult()
{}

void DescribeSQLLogTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["Template"];
	for (auto valueItemsTemplate : allItemsNode)
	{
		_Template itemsObject;
		if(!valueItemsTemplate["AvgScanRows"].isNull())
			itemsObject.avgScanRows = std::stof(valueItemsTemplate["AvgScanRows"].asString());
		if(!valueItemsTemplate["TemplateHash"].isNull())
			itemsObject.templateHash = valueItemsTemplate["TemplateHash"].asString();
		if(!valueItemsTemplate["AvgConsume"].isNull())
			itemsObject.avgConsume = std::stof(valueItemsTemplate["AvgConsume"].asString());
		if(!valueItemsTemplate["TotalScanRows"].isNull())
			itemsObject.totalScanRows = std::stol(valueItemsTemplate["TotalScanRows"].asString());
		if(!valueItemsTemplate["TotalUpdateRows"].isNull())
			itemsObject.totalUpdateRows = std::stol(valueItemsTemplate["TotalUpdateRows"].asString());
		if(!valueItemsTemplate["TotalCounts"].isNull())
			itemsObject.totalCounts = std::stol(valueItemsTemplate["TotalCounts"].asString());
		if(!valueItemsTemplate["SqlType"].isNull())
			itemsObject.sqlType = valueItemsTemplate["SqlType"].asString();
		if(!valueItemsTemplate["AvgUpdateRows"].isNull())
			itemsObject.avgUpdateRows = std::stof(valueItemsTemplate["AvgUpdateRows"].asString());
		if(!valueItemsTemplate["ItemID"].isNull())
			itemsObject.itemID = std::stoi(valueItemsTemplate["ItemID"].asString());
		if(!valueItemsTemplate["Template"].isNull())
			itemsObject._template = valueItemsTemplate["Template"].asString();
		if(!valueItemsTemplate["TotalConsume"].isNull())
			itemsObject.totalConsume = std::stol(valueItemsTemplate["TotalConsume"].asString());
		items_.push_back(itemsObject);
	}
	if(!value["MaxRecordsPerPage"].isNull())
		maxRecordsPerPage_ = std::stoi(value["MaxRecordsPerPage"].asString());
	if(!value["ItemsNumbers"].isNull())
		itemsNumbers_ = std::stoi(value["ItemsNumbers"].asString());
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["DBInstanceID"].isNull())
		dBInstanceID_ = std::stoi(value["DBInstanceID"].asString());
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["TotalRecords"].isNull())
		totalRecords_ = std::stoi(value["TotalRecords"].asString());
	if(!value["Finish"].isNull())
		finish_ = value["Finish"].asString();
	if(!value["PageNumbers"].isNull())
		pageNumbers_ = std::stoi(value["PageNumbers"].asString());
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();
	if(!value["PagingID"].isNull())
		pagingID_ = value["PagingID"].asString();
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();

}

int DescribeSQLLogTemplatesResult::getMaxRecordsPerPage()const
{
	return maxRecordsPerPage_;
}

int DescribeSQLLogTemplatesResult::getItemsNumbers()const
{
	return itemsNumbers_;
}

std::string DescribeSQLLogTemplatesResult::getEndTime()const
{
	return endTime_;
}

int DescribeSQLLogTemplatesResult::getDBInstanceID()const
{
	return dBInstanceID_;
}

std::string DescribeSQLLogTemplatesResult::getStartTime()const
{
	return startTime_;
}

int DescribeSQLLogTemplatesResult::getTotalRecords()const
{
	return totalRecords_;
}

std::vector<DescribeSQLLogTemplatesResult::_Template> DescribeSQLLogTemplatesResult::getItems()const
{
	return items_;
}

std::string DescribeSQLLogTemplatesResult::getFinish()const
{
	return finish_;
}

int DescribeSQLLogTemplatesResult::getPageNumbers()const
{
	return pageNumbers_;
}

std::string DescribeSQLLogTemplatesResult::getJobId()const
{
	return jobId_;
}

std::string DescribeSQLLogTemplatesResult::getPagingID()const
{
	return pagingID_;
}

std::string DescribeSQLLogTemplatesResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

