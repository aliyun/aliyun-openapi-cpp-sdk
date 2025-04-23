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

#include <alibabacloud/eds-user/model/GetManagerInfoByAuthCodeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eds_user;
using namespace AlibabaCloud::Eds_user::Model;

GetManagerInfoByAuthCodeResult::GetManagerInfoByAuthCodeResult() :
	ServiceResult()
{}

GetManagerInfoByAuthCodeResult::GetManagerInfoByAuthCodeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetManagerInfoByAuthCodeResult::~GetManagerInfoByAuthCodeResult()
{}

void GetManagerInfoByAuthCodeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["WaId"].isNull())
		waId_ = std::stol(value["WaId"].asString());
	if(!value["OrgId"].isNull())
		orgId_ = value["OrgId"].asString();
	if(!value["UserName"].isNull())
		userName_ = value["UserName"].asString();
	if(!value["Phone"].isNull())
		phone_ = value["Phone"].asString();
	if(!value["TeamName"].isNull())
		teamName_ = value["TeamName"].asString();

}

std::string GetManagerInfoByAuthCodeResult::getOrgId()const
{
	return orgId_;
}

std::string GetManagerInfoByAuthCodeResult::getUserName()const
{
	return userName_;
}

std::string GetManagerInfoByAuthCodeResult::getPhone()const
{
	return phone_;
}

std::string GetManagerInfoByAuthCodeResult::getTeamName()const
{
	return teamName_;
}

long GetManagerInfoByAuthCodeResult::getWaId()const
{
	return waId_;
}

