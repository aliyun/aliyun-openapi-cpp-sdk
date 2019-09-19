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

#include <alibabacloud/rds/model/DescribeMigrateTasksForSQLServerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeMigrateTasksForSQLServerResult::DescribeMigrateTasksForSQLServerResult() :
	ServiceResult()
{}

DescribeMigrateTasksForSQLServerResult::DescribeMigrateTasksForSQLServerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMigrateTasksForSQLServerResult::~DescribeMigrateTasksForSQLServerResult()
{}

void DescribeMigrateTasksForSQLServerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["MigrateTask"];
	for (auto valueItemsMigrateTask : allItemsNode)
	{
		MigrateTask itemsObject;
		if(!valueItemsMigrateTask["DBName"].isNull())
			itemsObject.dBName = valueItemsMigrateTask["DBName"].asString();
		if(!valueItemsMigrateTask["MigrateIaskId"].isNull())
			itemsObject.migrateIaskId = valueItemsMigrateTask["MigrateIaskId"].asString();
		if(!valueItemsMigrateTask["CreateTime"].isNull())
			itemsObject.createTime = valueItemsMigrateTask["CreateTime"].asString();
		if(!valueItemsMigrateTask["EndTime"].isNull())
			itemsObject.endTime = valueItemsMigrateTask["EndTime"].asString();
		if(!valueItemsMigrateTask["TaskType"].isNull())
			itemsObject.taskType = valueItemsMigrateTask["TaskType"].asString();
		if(!valueItemsMigrateTask["Status"].isNull())
			itemsObject.status = valueItemsMigrateTask["Status"].asString();
		if(!valueItemsMigrateTask["IsDBReplaced"].isNull())
			itemsObject.isDBReplaced = valueItemsMigrateTask["IsDBReplaced"].asString();
		if(!valueItemsMigrateTask["Desc"].isNull())
			itemsObject.desc = valueItemsMigrateTask["Desc"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["DBInstanceID"].isNull())
		dBInstanceID_ = value["DBInstanceID"].asString();
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeMigrateTasksForSQLServerResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeMigrateTasksForSQLServerResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeMigrateTasksForSQLServerResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeMigrateTasksForSQLServerResult::getDBInstanceID()const
{
	return dBInstanceID_;
}

int DescribeMigrateTasksForSQLServerResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeMigrateTasksForSQLServerResult::getStartTime()const
{
	return startTime_;
}

std::vector<DescribeMigrateTasksForSQLServerResult::MigrateTask> DescribeMigrateTasksForSQLServerResult::getItems()const
{
	return items_;
}

std::string DescribeMigrateTasksForSQLServerResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

