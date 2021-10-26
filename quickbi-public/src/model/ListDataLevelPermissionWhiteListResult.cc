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

#include <alibabacloud/quickbi-public/model/ListDataLevelPermissionWhiteListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

ListDataLevelPermissionWhiteListResult::ListDataLevelPermissionWhiteListResult() :
	ServiceResult()
{}

ListDataLevelPermissionWhiteListResult::ListDataLevelPermissionWhiteListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataLevelPermissionWhiteListResult::~ListDataLevelPermissionWhiteListResult()
{}

void ListDataLevelPermissionWhiteListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["CubeId"].isNull())
		result_.cubeId = resultNode["CubeId"].asString();
	if(!resultNode["RuleType"].isNull())
		result_.ruleType = resultNode["RuleType"].asString();
	auto usersModelNode = resultNode["UsersModel"];
		auto allUserGroups = usersModelNode["UserGroups"]["UserGroups"];
		for (auto value : allUserGroups)
			result_.usersModel.userGroups.push_back(value.asString());
		auto allUsers = usersModelNode["Users"]["Users"];
		for (auto value : allUsers)
			result_.usersModel.users.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool ListDataLevelPermissionWhiteListResult::getSuccess()const
{
	return success_;
}

ListDataLevelPermissionWhiteListResult::Result ListDataLevelPermissionWhiteListResult::getResult()const
{
	return result_;
}

