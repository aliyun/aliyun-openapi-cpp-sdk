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

#include <alibabacloud/dms-enterprise/model/ListAuthorizedDatabasesForUserResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListAuthorizedDatabasesForUserResult::ListAuthorizedDatabasesForUserResult() :
	ServiceResult()
{}

ListAuthorizedDatabasesForUserResult::ListAuthorizedDatabasesForUserResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAuthorizedDatabasesForUserResult::~ListAuthorizedDatabasesForUserResult()
{}

void ListAuthorizedDatabasesForUserResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDatabasesNode = value["Databases"]["databasesItem"];
	for (auto valueDatabasesdatabasesItem : allDatabasesNode)
	{
		DatabasesItem databasesObject;
		if(!valueDatabasesdatabasesItem["DbId"].isNull())
			databasesObject.dbId = valueDatabasesdatabasesItem["DbId"].asString();
		if(!valueDatabasesdatabasesItem["SchemaName"].isNull())
			databasesObject.schemaName = valueDatabasesdatabasesItem["SchemaName"].asString();
		if(!valueDatabasesdatabasesItem["SearchName"].isNull())
			databasesObject.searchName = valueDatabasesdatabasesItem["SearchName"].asString();
		if(!valueDatabasesdatabasesItem["InstanceId"].isNull())
			databasesObject.instanceId = valueDatabasesdatabasesItem["InstanceId"].asString();
		if(!valueDatabasesdatabasesItem["Logic"].isNull())
			databasesObject.logic = valueDatabasesdatabasesItem["Logic"].asString() == "true";
		if(!valueDatabasesdatabasesItem["DbType"].isNull())
			databasesObject.dbType = valueDatabasesdatabasesItem["DbType"].asString();
		if(!valueDatabasesdatabasesItem["UserId"].isNull())
			databasesObject.userId = valueDatabasesdatabasesItem["UserId"].asString();
		if(!valueDatabasesdatabasesItem["EnvType"].isNull())
			databasesObject.envType = valueDatabasesdatabasesItem["EnvType"].asString();
		auto permissionDetailNode = value["PermissionDetail"];
		if(!permissionDetailNode["DsType"].isNull())
			databasesObject.permissionDetail.dsType = permissionDetailNode["DsType"].asString();
		if(!permissionDetailNode["PermType"].isNull())
			databasesObject.permissionDetail.permType = permissionDetailNode["PermType"].asString();
		if(!permissionDetailNode["ExpireDate"].isNull())
			databasesObject.permissionDetail.expireDate = permissionDetailNode["ExpireDate"].asString();
		if(!permissionDetailNode["Message"].isNull())
			databasesObject.permissionDetail.message = permissionDetailNode["Message"].asString();
		databases_.push_back(databasesObject);
	}

}

std::vector<ListAuthorizedDatabasesForUserResult::DatabasesItem> ListAuthorizedDatabasesForUserResult::getDatabases()const
{
	return databases_;
}

