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

#include <alibabacloud/datalake/model/GetDatabaseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

GetDatabaseResult::GetDatabaseResult() :
	ServiceResult()
{}

GetDatabaseResult::GetDatabaseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDatabaseResult::~GetDatabaseResult()
{}

void GetDatabaseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto databaseNode = value["Database"];
	if(!databaseNode["CreateTime"].isNull())
		database_.createTime = std::stoi(databaseNode["CreateTime"].asString());
	if(!databaseNode["Description"].isNull())
		database_.description = databaseNode["Description"].asString();
	if(!databaseNode["LocationUri"].isNull())
		database_.locationUri = databaseNode["LocationUri"].asString();
	if(!databaseNode["Name"].isNull())
		database_.name = databaseNode["Name"].asString();
	if(!databaseNode["OwnerName"].isNull())
		database_.ownerName = databaseNode["OwnerName"].asString();
	if(!databaseNode["OwnerType"].isNull())
		database_.ownerType = databaseNode["OwnerType"].asString();
	if(!databaseNode["Parameters"].isNull())
		database_.parameters = databaseNode["Parameters"].asString();
	if(!databaseNode["UpdateTime"].isNull())
		database_.updateTime = std::stoi(databaseNode["UpdateTime"].asString());
	if(!databaseNode["CreatedBy"].isNull())
		database_.createdBy = databaseNode["CreatedBy"].asString();
	auto privilegesNode = databaseNode["Privileges"];
	if(!privilegesNode["GroupPrivileges"].isNull())
		database_.privileges.groupPrivileges = privilegesNode["GroupPrivileges"].asString();
	if(!privilegesNode["RolePrivileges"].isNull())
		database_.privileges.rolePrivileges = privilegesNode["RolePrivileges"].asString();
	if(!privilegesNode["UserPrivileges"].isNull())
		database_.privileges.userPrivileges = privilegesNode["UserPrivileges"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetDatabaseResult::getMessage()const
{
	return message_;
}

GetDatabaseResult::Database GetDatabaseResult::getDatabase()const
{
	return database_;
}

std::string GetDatabaseResult::getCode()const
{
	return code_;
}

bool GetDatabaseResult::getSuccess()const
{
	return success_;
}

