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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();
	if(!value["DBName"].isNull())
		dBName_ = value["DBName"].asString();
	if(!value["MigrateIaskId"].isNull())
		migrateIaskId_ = value["MigrateIaskId"].asString();
	if(!value["TaskType"].isNull())
		taskType_ = value["TaskType"].asString();

}

std::string CreateMigrateTaskForSQLServerResult::getTaskId()const
{
	return taskId_;
}

std::string CreateMigrateTaskForSQLServerResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

std::string CreateMigrateTaskForSQLServerResult::getTaskType()const
{
	return taskType_;
}

std::string CreateMigrateTaskForSQLServerResult::getDBName()const
{
	return dBName_;
}

std::string CreateMigrateTaskForSQLServerResult::getMigrateIaskId()const
{
	return migrateIaskId_;
}

std::string CreateMigrateTaskForSQLServerResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

