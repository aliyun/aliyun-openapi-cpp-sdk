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

#include <alibabacloud/polardb/model/ModifySQLExplorerRetentionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

ModifySQLExplorerRetentionResult::ModifySQLExplorerRetentionResult() :
	ServiceResult()
{}

ModifySQLExplorerRetentionResult::ModifySQLExplorerRetentionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifySQLExplorerRetentionResult::~ModifySQLExplorerRetentionResult()
{}

void ModifySQLExplorerRetentionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["TaskId"].isNull())
		taskId_ = std::stoi(value["TaskId"].asString());
	if(!value["DBInstanceID"].isNull())
		dBInstanceID_ = std::stoi(value["DBInstanceID"].asString());
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();

}

int ModifySQLExplorerRetentionResult::getTaskId()const
{
	return taskId_;
}

int ModifySQLExplorerRetentionResult::getDBInstanceID()const
{
	return dBInstanceID_;
}

std::string ModifySQLExplorerRetentionResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

