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
		MigrateTask migrateTaskObject;
		migrateTaskObject.dBName = value["DBName"].asString();
		migrateTaskObject.migrateIaskId = value["MigrateIaskId"].asString();
		migrateTaskObject.createTime = value["CreateTime"].asString();
		migrateTaskObject.endTime = value["EndTime"].asString();
		migrateTaskObject.taskType = value["TaskType"].asString();
		migrateTaskObject.status = value["Status"].asString();
		migrateTaskObject.isDBReplaced = value["IsDBReplaced"].asString();
		migrateTaskObject.desc = value["Desc"].asString();
		items_.push_back(migrateTaskObject);
	}
	dBInstanceID_ = value["DBInstanceID"].asString();
	dBInstanceName_ = value["DBInstanceName"].asString();
	startTime_ = value["StartTime"].asString();
	endTime_ = value["EndTime"].asString();
	totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeMigrateTasksForSQLServerResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

void DescribeMigrateTasksForSQLServerResult::setTotalRecordCount(int totalRecordCount)
{
	totalRecordCount_ = totalRecordCount;
}

int DescribeMigrateTasksForSQLServerResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

void DescribeMigrateTasksForSQLServerResult::setPageRecordCount(int pageRecordCount)
{
	pageRecordCount_ = pageRecordCount;
}

std::string DescribeMigrateTasksForSQLServerResult::getEndTime()const
{
	return endTime_;
}

void DescribeMigrateTasksForSQLServerResult::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
}

std::string DescribeMigrateTasksForSQLServerResult::getDBInstanceID()const
{
	return dBInstanceID_;
}

void DescribeMigrateTasksForSQLServerResult::setDBInstanceID(const std::string& dBInstanceID)
{
	dBInstanceID_ = dBInstanceID;
}

int DescribeMigrateTasksForSQLServerResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeMigrateTasksForSQLServerResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

std::string DescribeMigrateTasksForSQLServerResult::getStartTime()const
{
	return startTime_;
}

void DescribeMigrateTasksForSQLServerResult::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
}

std::string DescribeMigrateTasksForSQLServerResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

void DescribeMigrateTasksForSQLServerResult::setDBInstanceName(const std::string& dBInstanceName)
{
	dBInstanceName_ = dBInstanceName;
}

