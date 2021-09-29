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

#include <alibabacloud/sts/model/GetCallerIdentityResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sts;
using namespace AlibabaCloud::Sts::Model;

GetCallerIdentityResult::GetCallerIdentityResult() :
	ServiceResult()
{}

GetCallerIdentityResult::GetCallerIdentityResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetCallerIdentityResult::~GetCallerIdentityResult()
{}

void GetCallerIdentityResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["IdentityType"].isNull())
		identityType_ = value["IdentityType"].asString();
	if(!value["AccountId"].isNull())
		accountId_ = value["AccountId"].asString();
	if(!value["PrincipalId"].isNull())
		principalId_ = value["PrincipalId"].asString();
	if(!value["UserId"].isNull())
		userId_ = value["UserId"].asString();
	if(!value["Arn"].isNull())
		arn_ = value["Arn"].asString();
	if(!value["RoleId"].isNull())
		roleId_ = value["RoleId"].asString();

}

std::string GetCallerIdentityResult::getIdentityType()const
{
	return identityType_;
}

std::string GetCallerIdentityResult::getAccountId()const
{
	return accountId_;
}

std::string GetCallerIdentityResult::getPrincipalId()const
{
	return principalId_;
}

std::string GetCallerIdentityResult::getUserId()const
{
	return userId_;
}

std::string GetCallerIdentityResult::getArn()const
{
	return arn_;
}

std::string GetCallerIdentityResult::getRoleId()const
{
	return roleId_;
}

