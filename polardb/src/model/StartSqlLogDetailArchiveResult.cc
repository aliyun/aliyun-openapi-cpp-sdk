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

#include <alibabacloud/polardb/model/StartSqlLogDetailArchiveResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

StartSqlLogDetailArchiveResult::StartSqlLogDetailArchiveResult() :
	ServiceResult()
{}

StartSqlLogDetailArchiveResult::StartSqlLogDetailArchiveResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StartSqlLogDetailArchiveResult::~StartSqlLogDetailArchiveResult()
{}

void StartSqlLogDetailArchiveResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["EndTime"].isNull())
		endTime_ = value["EndTime"].asString();
	if(!value["DBInstanceID"].isNull())
		dBInstanceID_ = std::stoi(value["DBInstanceID"].asString());
	if(!value["ArchiveJobID"].isNull())
		archiveJobID_ = value["ArchiveJobID"].asString();
	if(!value["StartTime"].isNull())
		startTime_ = value["StartTime"].asString();
	if(!value["OssTableName"].isNull())
		ossTableName_ = value["OssTableName"].asString();
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();

}

std::string StartSqlLogDetailArchiveResult::getEndTime()const
{
	return endTime_;
}

int StartSqlLogDetailArchiveResult::getDBInstanceID()const
{
	return dBInstanceID_;
}

std::string StartSqlLogDetailArchiveResult::getArchiveJobID()const
{
	return archiveJobID_;
}

std::string StartSqlLogDetailArchiveResult::getStartTime()const
{
	return startTime_;
}

std::string StartSqlLogDetailArchiveResult::getOssTableName()const
{
	return ossTableName_;
}

std::string StartSqlLogDetailArchiveResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

