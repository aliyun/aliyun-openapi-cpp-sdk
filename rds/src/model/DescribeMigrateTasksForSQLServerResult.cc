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
	auto allItems = value["Items"]["MigrateTask"];
	for (auto value : allItems)
	{
		MigrateTask itemsObject;
		if(!value["DBName"].isNull())
			itemsObject.dBName = value["DBName"].asString();
		if(!value["MigrateIaskId"].isNull())
			itemsObject.migrateIaskId = value["MigrateIaskId"].asString();
		if(!value["CreateTime"].isNull())
			itemsObject.createTime = value["CreateTime"].asString();
		if(!value["EndTime"].isNull())
			itemsObject.endTime = value["EndTime"].asString();
		if(!value["TaskType"].isNull())
			itemsObject.taskType = value["TaskType"].asString();
		if(!value["Status"].isNull())
			itemsObject.status = value["Status"].asString();
		if(!value["IsDBReplaced"].isNull())
			itemsObject.isDBReplaced = value["IsDBReplaced"].asString();
		if(!value["Desc"].isNull())
			itemsObject.desc = value["Desc"].asString();
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

