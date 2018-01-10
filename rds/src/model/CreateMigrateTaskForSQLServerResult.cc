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

#include <alibabacloud/rds/model/CreateMigrateTaskForSQLServerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

CreateMigrateTaskForSQLServerResult::CreateMigrateTaskForSQLServerResult() :
	ServiceResult()
{}

CreateMigrateTaskForSQLServerResult::CreateMigrateTaskForSQLServerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateMigrateTaskForSQLServerResult::~CreateMigrateTaskForSQLServerResult()
{}

void CreateMigrateTaskForSQLServerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	dBInstanceId_ = value["DBInstanceId"].asString();
	dBInstanceName_ = value["DBInstanceName"].asString();
	taskId_ = value["TaskId"].asString();
	dBName_ = value["DBName"].asString();
	migrateIaskId_ = value["MigrateIaskId"].asString();
	taskType_ = value["TaskType"].asString();

}

std::string CreateMigrateTaskForSQLServerResult::getTaskId()const
{
	return taskId_;
}

void CreateMigrateTaskForSQLServerResult::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
}

std::string CreateMigrateTaskForSQLServerResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CreateMigrateTaskForSQLServerResult::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
}

std::string CreateMigrateTaskForSQLServerResult::getTaskType()const
{
	return taskType_;
}

void CreateMigrateTaskForSQLServerResult::setTaskType(const std::string& taskType)
{
	taskType_ = taskType;
}

std::string CreateMigrateTaskForSQLServerResult::getDBName()const
{
	return dBName_;
}

void CreateMigrateTaskForSQLServerResult::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
}

std::string CreateMigrateTaskForSQLServerResult::getMigrateIaskId()const
{
	return migrateIaskId_;
}

void CreateMigrateTaskForSQLServerResult::setMigrateIaskId(const std::string& migrateIaskId)
{
	migrateIaskId_ = migrateIaskId;
}

std::string CreateMigrateTaskForSQLServerResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

void CreateMigrateTaskForSQLServerResult::setDBInstanceName(const std::string& dBInstanceName)
{
	dBInstanceName_ = dBInstanceName;
}

