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

#include <alibabacloud/rds/model/DescribeMigrateTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeMigrateTasksResult::DescribeMigrateTasksResult() :
	ServiceResult()
{}

DescribeMigrateTasksResult::DescribeMigrateTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMigrateTasksResult::~DescribeMigrateTasksResult()
{}

void DescribeMigrateTasksResult::parse(const std::string &payload)
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
		migrateTaskObject.migrateTaskId = value["MigrateTaskId"].asString();
		migrateTaskObject.createTime = value["CreateTime"].asString();
		migrateTaskObject.endTime = value["EndTime"].asString();
		migrateTaskObject.backupMode = value["BackupMode"].asString();
		migrateTaskObject.status = value["Status"].asString();
		migrateTaskObject.isDBReplaced = value["IsDBReplaced"].asString();
		migrateTaskObject.description = value["Description"].asString();
		items_.push_back(migrateTaskObject);
	}
	dBInstanceId_ = value["DBInstanceId"].asString();
	totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeMigrateTasksResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

void DescribeMigrateTasksResult::setTotalRecordCount(int totalRecordCount)
{
	totalRecordCount_ = totalRecordCount;
}

int DescribeMigrateTasksResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

void DescribeMigrateTasksResult::setPageRecordCount(int pageRecordCount)
{
	pageRecordCount_ = pageRecordCount;
}

std::string DescribeMigrateTasksResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeMigrateTasksResult::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
}

int DescribeMigrateTasksResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeMigrateTasksResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

