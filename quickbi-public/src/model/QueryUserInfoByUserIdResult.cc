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

#include <alibabacloud/quickbi-public/model/QueryUserInfoByUserIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Quickbi_public;
using namespace AlibabaCloud::Quickbi_public::Model;

QueryUserInfoByUserIdResult::QueryUserInfoByUserIdResult() :
	ServiceResult()
{}

QueryUserInfoByUserIdResult::QueryUserInfoByUserIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryUserInfoByUserIdResult::~QueryUserInfoByUserIdResult()
{}

void QueryUserInfoByUserIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resultNode = value["Result"];
	if(!resultNode["AccountId"].isNull())
		result_.accountId = resultNode["AccountId"].asString();
	if(!resultNode["AccountName"].isNull())
		result_.accountName = resultNode["AccountName"].asString();
	if(!resultNode["AdminUser"].isNull())
		result_.adminUser = resultNode["AdminUser"].asString() == "true";
	if(!resultNode["AuthAdminUser"].isNull())
		result_.authAdminUser = resultNode["AuthAdminUser"].asString() == "true";
	if(!resultNode["Email"].isNull())
		result_.email = resultNode["Email"].asString();
	if(!resultNode["NickName"].isNull())
		result_.nickName = resultNode["NickName"].asString();
	if(!resultNode["Phone"].isNull())
		result_.phone = resultNode["Phone"].asString();
	if(!resultNode["UserId"].isNull())
		result_.userId = resultNode["UserId"].asString();
	if(!resultNode["UserType"].isNull())
		result_.userType = std::stoi(resultNode["UserType"].asString());
		auto allRoleIdList = resultNode["RoleIdList"]["RoleIdList"];
		for (auto value : allRoleIdList)
			result_.roleIdList.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

bool QueryUserInfoByUserIdResult::getSuccess()const
{
	return success_;
}

QueryUserInfoByUserIdResult::Result QueryUserInfoByUserIdResult::getResult()const
{
	return result_;
}

