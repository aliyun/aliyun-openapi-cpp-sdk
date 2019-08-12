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

#include <alibabacloud/ram/model/UpdateRoleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ram;
using namespace AlibabaCloud::Ram::Model;

UpdateRoleResult::UpdateRoleResult() :
	ServiceResult()
{}

UpdateRoleResult::UpdateRoleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateRoleResult::~UpdateRoleResult()
{}

void UpdateRoleResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto roleNode = value["Role"];
	if(!roleNode["RoleId"].isNull())
		role_.roleId = roleNode["RoleId"].asString();
	if(!roleNode["RoleName"].isNull())
		role_.roleName = roleNode["RoleName"].asString();
	if(!roleNode["Arn"].isNull())
		role_.arn = roleNode["Arn"].asString();
	if(!roleNode["Description"].isNull())
		role_.description = roleNode["Description"].asString();
	if(!roleNode["AssumeRolePolicyDocument"].isNull())
		role_.assumeRolePolicyDocument = roleNode["AssumeRolePolicyDocument"].asString();
	if(!roleNode["CreateDate"].isNull())
		role_.createDate = roleNode["CreateDate"].asString();
	if(!roleNode["UpdateDate"].isNull())
		role_.updateDate = roleNode["UpdateDate"].asString();

}

UpdateRoleResult::Role UpdateRoleResult::getRole()const
{
	return role_;
}

