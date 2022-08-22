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

#include <alibabacloud/dbfs/model/GetServiceLinkedRoleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DBFS;
using namespace AlibabaCloud::DBFS::Model;

GetServiceLinkedRoleResult::GetServiceLinkedRoleResult() :
	ServiceResult()
{}

GetServiceLinkedRoleResult::GetServiceLinkedRoleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetServiceLinkedRoleResult::~GetServiceLinkedRoleResult()
{}

void GetServiceLinkedRoleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["AccountId"].isNull())
		accountId_ = value["AccountId"].asString();
	if(!value["DbfsLinkedRole"].isNull())
		dbfsLinkedRole_ = value["DbfsLinkedRole"].asString() == "true";
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

std::string GetServiceLinkedRoleResult::getAccountId()const
{
	return accountId_;
}

bool GetServiceLinkedRoleResult::getDbfsLinkedRole()const
{
	return dbfsLinkedRole_;
}

std::string GetServiceLinkedRoleResult::getRegionId()const
{
	return regionId_;
}

