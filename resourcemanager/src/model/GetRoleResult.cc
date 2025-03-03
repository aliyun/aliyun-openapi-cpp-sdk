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

#include <alibabacloud/resourcemanager/model/GetRoleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

GetRoleResult::GetRoleResult() :
	ServiceResult()
{}

GetRoleResult::GetRoleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetRoleResult::~GetRoleResult()
{}

void GetRoleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto roleNode = value["Role"];
	if(!roleNode["Arn"].isNull())
		role_.arn = roleNode["Arn"].asString();
	if(!roleNode["AssumeRolePolicyDocument"].isNull())
		role_.assumeRolePolicyDocument = roleNode["AssumeRolePolicyDocument"].asString();
	if(!roleNode["CreateDate"].isNull())
		role_.createDate = roleNode["CreateDate"].asString();
	if(!roleNode["Description"].isNull())
		role_.description = roleNode["Description"].asString();
	if(!roleNode["IsServiceLinkedRole"].isNull())
		role_.isServiceLinkedRole = roleNode["IsServiceLinkedRole"].asString() == "true";
	if(!roleNode["MaxSessionDuration"].isNull())
		role_.maxSessionDuration = std::stol(roleNode["MaxSessionDuration"].asString());
	if(!roleNode["RoleId"].isNull())
		role_.roleId = roleNode["RoleId"].asString();
	if(!roleNode["RoleName"].isNull())
		role_.roleName = roleNode["RoleName"].asString();
	if(!roleNode["RolePrincipalName"].isNull())
		role_.rolePrincipalName = roleNode["RolePrincipalName"].asString();
	if(!roleNode["UpdateDate"].isNull())
		role_.updateDate = roleNode["UpdateDate"].asString();
	auto latestDeletionTaskNode = roleNode["LatestDeletionTask"];
	if(!latestDeletionTaskNode["CreateDate"].isNull())
		role_.latestDeletionTask.createDate = latestDeletionTaskNode["CreateDate"].asString();
	if(!latestDeletionTaskNode["DeletionTaskId"].isNull())
		role_.latestDeletionTask.deletionTaskId = latestDeletionTaskNode["DeletionTaskId"].asString();

}

GetRoleResult::Role GetRoleResult::getRole()const
{
	return role_;
}

