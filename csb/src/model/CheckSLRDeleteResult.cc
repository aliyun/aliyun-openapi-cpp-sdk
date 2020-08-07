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

#include <alibabacloud/csb/model/CheckSLRDeleteResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CSB;
using namespace AlibabaCloud::CSB::Model;

CheckSLRDeleteResult::CheckSLRDeleteResult() :
	ServiceResult()
{}

CheckSLRDeleteResult::CheckSLRDeleteResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CheckSLRDeleteResult::~CheckSLRDeleteResult()
{}

void CheckSLRDeleteResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRoleUsagesNode = value["RoleUsages"]["RoleUsage"];
	for (auto valueRoleUsagesRoleUsage : allRoleUsagesNode)
	{
		RoleUsage roleUsagesObject;
		if(!valueRoleUsagesRoleUsage["Region"].isNull())
			roleUsagesObject.region = valueRoleUsagesRoleUsage["Region"].asString();
		auto allResources = value["Resources"]["Resource"];
		for (auto value : allResources)
			roleUsagesObject.resources.push_back(value.asString());
		roleUsages_.push_back(roleUsagesObject);
	}
	if(!value["Deletable"].isNull())
		deletable_ = value["Deletable"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string CheckSLRDeleteResult::getMessage()const
{
	return message_;
}

bool CheckSLRDeleteResult::getDeletable()const
{
	return deletable_;
}

std::vector<CheckSLRDeleteResult::RoleUsage> CheckSLRDeleteResult::getRoleUsages()const
{
	return roleUsages_;
}

int CheckSLRDeleteResult::getCode()const
{
	return code_;
}

