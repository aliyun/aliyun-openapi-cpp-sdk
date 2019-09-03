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
		MigrateTask itemsObject;
		if(!value["DBName"].isNull())
			itemsObject.dBName = value["DBName"].asString();
		if(!value["MigrateTaskId"].isNull())
			itemsObject.migrateTaskId = value["MigrateTaskId"].asString();
		if(!value["CreateTime"].isNull())
			itemsObject.createTime = value["CreateTime"].asString();
		if(!value["EndTime"].isNull())
			itemsObject.endTime = value["EndTime"].asString();
		if(!value["BackupMode"].isNull())
			itemsObject.backupMode = value["BackupMode"].asString();
		if(!value["Status"].isNull())
			itemsObject.status = value["Status"].asString();
		if(!value["IsDBReplaced"].isNull())
			itemsObject.isDBReplaced = value["IsDBReplaced"].asString();
		if(!value["Description"].isNull())
			itemsObject.description = value["Description"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeMigrateTasksResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeMigrateTasksResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

std::string DescribeMigrateTasksResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

int DescribeMigrateTasksResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeMigrateTasksResult::MigrateTask> DescribeMigrateTasksResult::getItems()const
{
	return items_;
}

