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
	auto allItemsNode = value["Items"]["MigrateTask"];
	for (auto valueItemsMigrateTask : allItemsNode)
	{
		MigrateTask itemsObject;
		if(!valueItemsMigrateTask["BackupMode"].isNull())
			itemsObject.backupMode = valueItemsMigrateTask["BackupMode"].asString();
		if(!valueItemsMigrateTask["CreateTime"].isNull())
			itemsObject.createTime = valueItemsMigrateTask["CreateTime"].asString();
		if(!valueItemsMigrateTask["DBName"].isNull())
			itemsObject.dBName = valueItemsMigrateTask["DBName"].asString();
		if(!valueItemsMigrateTask["Description"].isNull())
			itemsObject.description = valueItemsMigrateTask["Description"].asString();
		if(!valueItemsMigrateTask["EndTime"].isNull())
			itemsObject.endTime = valueItemsMigrateTask["EndTime"].asString();
		if(!valueItemsMigrateTask["IsDBReplaced"].isNull())
			itemsObject.isDBReplaced = valueItemsMigrateTask["IsDBReplaced"].asString();
		if(!valueItemsMigrateTask["MigrateTaskId"].isNull())
			itemsObject.migrateTaskId = valueItemsMigrateTask["MigrateTaskId"].asString();
		if(!valueItemsMigrateTask["Status"].isNull())
			itemsObject.status = valueItemsMigrateTask["Status"].asString();
		items_.push_back(itemsObject);
	}
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

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

