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

#include <alibabacloud/rds/model/DescribeMigrateTaskByIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeMigrateTaskByIdResult::DescribeMigrateTaskByIdResult() :
	ServiceResult()
{}

DescribeMigrateTaskByIdResult::DescribeMigrateTaskByIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMigrateTaskByIdResult::~DescribeMigrateTaskByIdResult()
{}

void DescribeMigrateTaskByIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["BackupMode"].isNull())
		backupMode_ = value["BackupMode"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();
	if(!value["DBName"].isNull())
		dBName_ = value["DBName"].asString();
	if(!value["Description"].isNull())
		description_ = value["Description"].asString();
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["IsDBReplaced"].isNull())
		isDBReplaced_ = value["IsDBReplaced"].asString();
	if(!value["MigrateTaskId"].isNull())
		migrateTaskId_ = value["MigrateTaskId"].asString();
	if(!value["Status"].isNull())
		status_ = value["Status"].asString();

}

std::string DescribeMigrateTaskByIdResult::getStatus()const
{
	return status_;
}

std::string DescribeMigrateTaskByIdResult::getDescription()const
{
	return description_;
}

std::string DescribeMigrateTaskByIdResult::getEndTime()const
{
	return endTime_;
}

std::string DescribeMigrateTaskByIdResult::getMigrateTaskId()const
{
	return migrateTaskId_;
}

std::string DescribeMigrateTaskByIdResult::getBackupMode()const
{
	return backupMode_;
}

std::string DescribeMigrateTaskByIdResult::getCreateTime()const
{
	return createTime_;
}

std::string DescribeMigrateTaskByIdResult::getIsDBReplaced()const
{
	return isDBReplaced_;
}

std::string DescribeMigrateTaskByIdResult::getDBName()const
{
	return dBName_;
}

std::string DescribeMigrateTaskByIdResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

