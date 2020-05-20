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

#include <alibabacloud/arms/model/CheckServiceLinkedRoleForDeletingResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

CheckServiceLinkedRoleForDeletingResult::CheckServiceLinkedRoleForDeletingResult() :
	ServiceResult()
{}

CheckServiceLinkedRoleForDeletingResult::CheckServiceLinkedRoleForDeletingResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CheckServiceLinkedRoleForDeletingResult::~CheckServiceLinkedRoleForDeletingResult()
{}

void CheckServiceLinkedRoleForDeletingResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRoleUsagesNode = value["RoleUsages"]["RoleUsagesItem"];
	for (auto valueRoleUsagesRoleUsagesItem : allRoleUsagesNode)
	{
		RoleUsagesItem roleUsagesObject;
		if(!valueRoleUsagesRoleUsagesItem["Region"].isNull())
			roleUsagesObject.region = valueRoleUsagesRoleUsagesItem["Region"].asString();
		auto allResources = value["Resources"]["Resources"];
		for (auto value : allResources)
			roleUsagesObject.resources.push_back(value.asString());
		roleUsages_.push_back(roleUsagesObject);
	}
	if(!value["Deletable"].isNull())
		deletable_ = value["Deletable"].asString() == "true";

}

bool CheckServiceLinkedRoleForDeletingResult::getDeletable()const
{
	return deletable_;
}

std::vector<CheckServiceLinkedRoleForDeletingResult::RoleUsagesItem> CheckServiceLinkedRoleForDeletingResult::getRoleUsages()const
{
	return roleUsages_;
}

