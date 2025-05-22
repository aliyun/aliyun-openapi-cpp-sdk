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

#include <alibabacloud/rds/model/ModifyDTCSecurityIpHostsForSQLServerResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

ModifyDTCSecurityIpHostsForSQLServerResult::ModifyDTCSecurityIpHostsForSQLServerResult() :
	ServiceResult()
{}

ModifyDTCSecurityIpHostsForSQLServerResult::ModifyDTCSecurityIpHostsForSQLServerResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifyDTCSecurityIpHostsForSQLServerResult::~ModifyDTCSecurityIpHostsForSQLServerResult()
{}

void ModifyDTCSecurityIpHostsForSQLServerResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["DBInstanceId"].isNull())
		dBInstanceId_ = value["DBInstanceId"].asString();
	if(!value["DTCSetResult"].isNull())
		dTCSetResult_ = value["DTCSetResult"].asString();
	if(!value["TaskId"].isNull())
		taskId_ = value["TaskId"].asString();

}

std::string ModifyDTCSecurityIpHostsForSQLServerResult::getDTCSetResult()const
{
	return dTCSetResult_;
}

std::string ModifyDTCSecurityIpHostsForSQLServerResult::getTaskId()const
{
	return taskId_;
}

std::string ModifyDTCSecurityIpHostsForSQLServerResult::getDBInstanceId()const
{
	return dBInstanceId_;
}

