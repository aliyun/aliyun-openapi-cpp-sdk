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

#include <alibabacloud/ccc/model/ListPrivilegesOfUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::CCC;
using namespace AlibabaCloud::CCC::Model;

ListPrivilegesOfUserResult::ListPrivilegesOfUserResult() :
	ServiceResult()
{}

ListPrivilegesOfUserResult::ListPrivilegesOfUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPrivilegesOfUserResult::~ListPrivilegesOfUserResult()
{}

void ListPrivilegesOfUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPrivilegesNode = value["Privileges"]["Privilege"];
	for (auto valuePrivilegesPrivilege : allPrivilegesNode)
	{
		Privilege privilegesObject;
		if(!valuePrivilegesPrivilege["PrivilegeId"].isNull())
			privilegesObject.privilegeId = valuePrivilegesPrivilege["PrivilegeId"].asString();
		if(!valuePrivilegesPrivilege["PrivilegeName"].isNull())
			privilegesObject.privilegeName = valuePrivilegesPrivilege["PrivilegeName"].asString();
		if(!valuePrivilegesPrivilege["PrivilegeDescription"].isNull())
			privilegesObject.privilegeDescription = valuePrivilegesPrivilege["PrivilegeDescription"].asString();
		privileges_.push_back(privilegesObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());

}

std::string ListPrivilegesOfUserResult::getMessage()const
{
	return message_;
}

std::vector<ListPrivilegesOfUserResult::Privilege> ListPrivilegesOfUserResult::getPrivileges()const
{
	return privileges_;
}

int ListPrivilegesOfUserResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

std::string ListPrivilegesOfUserResult::getCode()const
{
	return code_;
}

bool ListPrivilegesOfUserResult::getSuccess()const
{
	return success_;
}

