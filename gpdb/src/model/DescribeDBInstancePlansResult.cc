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

#include <alibabacloud/gpdb/model/DescribeDBInstancePlansResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeDBInstancePlansResult::DescribeDBInstancePlansResult() :
	ServiceResult()
{}

DescribeDBInstancePlansResult::DescribeDBInstancePlansResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstancePlansResult::~DescribeDBInstancePlansResult()
{}

void DescribeDBInstancePlansResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["PlanList"];
	for (auto valueItemsPlanList : allItemsNode)
	{
		PlanList itemsObject;
		if(!valueItemsPlanList["PlanName"].isNull())
			itemsObject.planName = valueItemsPlanList["PlanName"].asString();
		if(!valueItemsPlanList["PlanDesc"].isNull())
			itemsObject.planDesc = valueItemsPlanList["PlanDesc"].asString();
		if(!valueItemsPlanList["PlanId"].isNull())
			itemsObject.planId = valueItemsPlanList["PlanId"].asString();
		if(!valueItemsPlanList["PlanStatus"].isNull())
			itemsObject.planStatus = valueItemsPlanList["PlanStatus"].asString();
		if(!valueItemsPlanList["PlanType"].isNull())
			itemsObject.planType = valueItemsPlanList["PlanType"].asString();
		if(!valueItemsPlanList["PlanScheduleType"].isNull())
			itemsObject.planScheduleType = valueItemsPlanList["PlanScheduleType"].asString();
		if(!valueItemsPlanList["PlanStartDate"].isNull())
			itemsObject.planStartDate = valueItemsPlanList["PlanStartDate"].asString();
		if(!valueItemsPlanList["PlanEndDate"].isNull())
			itemsObject.planEndDate = valueItemsPlanList["PlanEndDate"].asString();
		if(!valueItemsPlanList["PlanConfig"].isNull())
			itemsObject.planConfig = valueItemsPlanList["PlanConfig"].asString();
		if(!valueItemsPlanList["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = valueItemsPlanList["DBInstanceId"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

std::string DescribeDBInstancePlansResult::getStatus()const
{
	return status_;
}

int DescribeDBInstancePlansResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeDBInstancePlansResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeDBInstancePlansResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDBInstancePlansResult::PlanList> DescribeDBInstancePlansResult::getItems()const
{
	return items_;
}

std::string DescribeDBInstancePlansResult::getErrorMessage()const
{
	return errorMessage_;
}

