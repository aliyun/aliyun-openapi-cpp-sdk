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

#include <alibabacloud/ram/model/UpdateUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ram;
using namespace AlibabaCloud::Ram::Model;

UpdateUserResult::UpdateUserResult() :
	ServiceResult()
{}

UpdateUserResult::UpdateUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

UpdateUserResult::~UpdateUserResult()
{}

void UpdateUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto userNode = value["User"];
	if(!userNode["DisplayName"].isNull())
		user_.displayName = userNode["DisplayName"].asString();
	if(!userNode["Email"].isNull())
		user_.email = userNode["Email"].asString();
	if(!userNode["UpdateDate"].isNull())
		user_.updateDate = userNode["UpdateDate"].asString();
	if(!userNode["MobilePhone"].isNull())
		user_.mobilePhone = userNode["MobilePhone"].asString();
	if(!userNode["UserId"].isNull())
		user_.userId = userNode["UserId"].asString();
	if(!userNode["Comments"].isNull())
		user_.comments = userNode["Comments"].asString();
	if(!userNode["CreateDate"].isNull())
		user_.createDate = userNode["CreateDate"].asString();
	if(!userNode["UserName"].isNull())
		user_.userName = userNode["UserName"].asString();

}

UpdateUserResult::User UpdateUserResult::getUser()const
{
	return user_;
}

