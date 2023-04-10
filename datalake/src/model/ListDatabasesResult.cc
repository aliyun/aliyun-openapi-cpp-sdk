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

#include <alibabacloud/datalake/model/ListDatabasesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

ListDatabasesResult::ListDatabasesResult() :
	ServiceResult()
{}

ListDatabasesResult::ListDatabasesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDatabasesResult::~ListDatabasesResult()
{}

void ListDatabasesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDatabasesNode = value["Databases"]["Database"];
	for (auto valueDatabasesDatabase : allDatabasesNode)
	{
		Database databasesObject;
		if(!valueDatabasesDatabase["CreateTime"].isNull())
			databasesObject.createTime = std::stoi(valueDatabasesDatabase["CreateTime"].asString());
		if(!valueDatabasesDatabase["Description"].isNull())
			databasesObject.description = valueDatabasesDatabase["Description"].asString();
		if(!valueDatabasesDatabase["LocationUri"].isNull())
			databasesObject.locationUri = valueDatabasesDatabase["LocationUri"].asString();
		if(!valueDatabasesDatabase["Name"].isNull())
			databasesObject.name = valueDatabasesDatabase["Name"].asString();
		if(!valueDatabasesDatabase["OwnerName"].isNull())
			databasesObject.ownerName = valueDatabasesDatabase["OwnerName"].asString();
		if(!valueDatabasesDatabase["OwnerType"].isNull())
			databasesObject.ownerType = valueDatabasesDatabase["OwnerType"].asString();
		if(!valueDatabasesDatabase["Parameters"].isNull())
			databasesObject.parameters = valueDatabasesDatabase["Parameters"].asString();
		if(!valueDatabasesDatabase["UpdateTime"].isNull())
			databasesObject.updateTime = std::stoi(valueDatabasesDatabase["UpdateTime"].asString());
		if(!valueDatabasesDatabase["CreatedBy"].isNull())
			databasesObject.createdBy = valueDatabasesDatabase["CreatedBy"].asString();
		auto privilegesNode = value["Privileges"];
		if(!privilegesNode["GroupPrivileges"].isNull())
			databasesObject.privileges.groupPrivileges = privilegesNode["GroupPrivileges"].asString();
		if(!privilegesNode["RolePrivileges"].isNull())
			databasesObject.privileges.rolePrivileges = privilegesNode["RolePrivileges"].asString();
		if(!privilegesNode["UserPrivileges"].isNull())
			databasesObject.privileges.userPrivileges = privilegesNode["UserPrivileges"].asString();
		databases_.push_back(databasesObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListDatabasesResult::Database> ListDatabasesResult::getDatabases()const
{
	return databases_;
}

std::string ListDatabasesResult::getMessage()const
{
	return message_;
}

std::string ListDatabasesResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::string ListDatabasesResult::getCode()const
{
	return code_;
}

bool ListDatabasesResult::getSuccess()const
{
	return success_;
}

