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

#include <alibabacloud/companyreg/model/GetSsoUserInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

GetSsoUserInfoResult::GetSsoUserInfoResult() :
	ServiceResult()
{}

GetSsoUserInfoResult::GetSsoUserInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetSsoUserInfoResult::~GetSsoUserInfoResult()
{}

void GetSsoUserInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["OpsAppKey"].isNull())
		opsAppKey_ = value["OpsAppKey"].asString();
	if(!value["AliUserId"].isNull())
		aliUserId_ = value["AliUserId"].asString();
	if(!value["RamUserId"].isNull())
		ramUserId_ = std::stol(value["RamUserId"].asString());
	if(!value["AliUserAccount"].isNull())
		aliUserAccount_ = value["AliUserAccount"].asString();
	if(!value["RamUserAccount"].isNull())
		ramUserAccount_ = value["RamUserAccount"].asString();
	if(!value["RamUserName"].isNull())
		ramUserName_ = value["RamUserName"].asString();
	if(!value["UserType"].isNull())
		userType_ = std::stoi(value["UserType"].asString());

}

long GetSsoUserInfoResult::getRamUserId()const
{
	return ramUserId_;
}

std::string GetSsoUserInfoResult::getAliUserAccount()const
{
	return aliUserAccount_;
}

std::string GetSsoUserInfoResult::getRamUserAccount()const
{
	return ramUserAccount_;
}

std::string GetSsoUserInfoResult::getOpsAppKey()const
{
	return opsAppKey_;
}

std::string GetSsoUserInfoResult::getAliUserId()const
{
	return aliUserId_;
}

std::string GetSsoUserInfoResult::getRamUserName()const
{
	return ramUserName_;
}

int GetSsoUserInfoResult::getUserType()const
{
	return userType_;
}

