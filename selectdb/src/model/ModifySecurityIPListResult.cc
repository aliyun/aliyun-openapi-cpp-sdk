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

#include <alibabacloud/selectdb/model/ModifySecurityIPListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Selectdb;
using namespace AlibabaCloud::Selectdb::Model;

ModifySecurityIPListResult::ModifySecurityIPListResult() :
	ServiceResult()
{}

ModifySecurityIPListResult::ModifySecurityIPListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ModifySecurityIPListResult::~ModifySecurityIPListResult()
{}

void ModifySecurityIPListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["GroupName"].isNull())
		groupName_ = value["GroupName"].asString();
	if(!value["SecurityIPType"].isNull())
		securityIPType_ = value["SecurityIPType"].asString();
	if(!value["GroupTag"].isNull())
		groupTag_ = value["GroupTag"].asString();
	if(!value["TaskId"].isNull())
		taskId_ = std::stol(value["TaskId"].asString());
	if(!value["SecurityIPList"].isNull())
		securityIPList_ = value["SecurityIPList"].asString();
	if(!value["WhitelistNetType"].isNull())
		whitelistNetType_ = value["WhitelistNetType"].asString();
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();

}

std::string ModifySecurityIPListResult::getGroupName()const
{
	return groupName_;
}

std::string ModifySecurityIPListResult::getSecurityIPType()const
{
	return securityIPType_;
}

std::string ModifySecurityIPListResult::getGroupTag()const
{
	return groupTag_;
}

long ModifySecurityIPListResult::getTaskId()const
{
	return taskId_;
}

std::string ModifySecurityIPListResult::getSecurityIPList()const
{
	return securityIPList_;
}

std::string ModifySecurityIPListResult::getWhitelistNetType()const
{
	return whitelistNetType_;
}

std::string ModifySecurityIPListResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

