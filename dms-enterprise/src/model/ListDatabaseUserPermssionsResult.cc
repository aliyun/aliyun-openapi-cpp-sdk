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

#include <alibabacloud/dms-enterprise/model/ListDatabaseUserPermssionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListDatabaseUserPermssionsResult::ListDatabaseUserPermssionsResult() :
	ServiceResult()
{}

ListDatabaseUserPermssionsResult::ListDatabaseUserPermssionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDatabaseUserPermssionsResult::~ListDatabaseUserPermssionsResult()
{}

void ListDatabaseUserPermssionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allUserPermissionsNode = value["UserPermissions"]["UserPermission"];
	for (auto valueUserPermissionsUserPermission : allUserPermissionsNode)
	{
		UserPermission userPermissionsObject;
		if(!valueUserPermissionsUserPermission["DbId"].isNull())
			userPermissionsObject.dbId = valueUserPermissionsUserPermission["DbId"].asString();
		if(!valueUserPermissionsUserPermission["TableName"].isNull())
			userPermissionsObject.tableName = valueUserPermissionsUserPermission["TableName"].asString();
		if(!valueUserPermissionsUserPermission["UserId"].isNull())
			userPermissionsObject.userId = valueUserPermissionsUserPermission["UserId"].asString();
		if(!valueUserPermissionsUserPermission["SchemaName"].isNull())
			userPermissionsObject.schemaName = valueUserPermissionsUserPermission["SchemaName"].asString();
		if(!valueUserPermissionsUserPermission["Logic"].isNull())
			userPermissionsObject.logic = valueUserPermissionsUserPermission["Logic"].asString() == "true";
		if(!valueUserPermissionsUserPermission["UserNickName"].isNull())
			userPermissionsObject.userNickName = valueUserPermissionsUserPermission["UserNickName"].asString();
		if(!valueUserPermissionsUserPermission["InstanceId"].isNull())
			userPermissionsObject.instanceId = valueUserPermissionsUserPermission["InstanceId"].asString();
		if(!valueUserPermissionsUserPermission["EnvType"].isNull())
			userPermissionsObject.envType = valueUserPermissionsUserPermission["EnvType"].asString();
		if(!valueUserPermissionsUserPermission["ColumnName"].isNull())
			userPermissionsObject.columnName = valueUserPermissionsUserPermission["ColumnName"].asString();
		if(!valueUserPermissionsUserPermission["DbType"].isNull())
			userPermissionsObject.dbType = valueUserPermissionsUserPermission["DbType"].asString();
		if(!valueUserPermissionsUserPermission["DsType"].isNull())
			userPermissionsObject.dsType = valueUserPermissionsUserPermission["DsType"].asString();
		if(!valueUserPermissionsUserPermission["TableId"].isNull())
			userPermissionsObject.tableId = valueUserPermissionsUserPermission["TableId"].asString();
		if(!valueUserPermissionsUserPermission["SearchName"].isNull())
			userPermissionsObject.searchName = valueUserPermissionsUserPermission["SearchName"].asString();
		if(!valueUserPermissionsUserPermission["Alias"].isNull())
			userPermissionsObject.alias = valueUserPermissionsUserPermission["Alias"].asString();
		auto allPermDetailsNode = valueUserPermissionsUserPermission["PermDetails"]["PermDetail"];
		for (auto valueUserPermissionsUserPermissionPermDetailsPermDetail : allPermDetailsNode)
		{
			UserPermission::PermDetail permDetailsObject;
			if(!valueUserPermissionsUserPermissionPermDetailsPermDetail["OriginFrom"].isNull())
				permDetailsObject.originFrom = valueUserPermissionsUserPermissionPermDetailsPermDetail["OriginFrom"].asString();
			if(!valueUserPermissionsUserPermissionPermDetailsPermDetail["PermType"].isNull())
				permDetailsObject.permType = valueUserPermissionsUserPermissionPermDetailsPermDetail["PermType"].asString();
			if(!valueUserPermissionsUserPermissionPermDetailsPermDetail["ExpireDate"].isNull())
				permDetailsObject.expireDate = valueUserPermissionsUserPermissionPermDetailsPermDetail["ExpireDate"].asString();
			if(!valueUserPermissionsUserPermissionPermDetailsPermDetail["CreateDate"].isNull())
				permDetailsObject.createDate = valueUserPermissionsUserPermissionPermDetailsPermDetail["CreateDate"].asString();
			if(!valueUserPermissionsUserPermissionPermDetailsPermDetail["UserAccessId"].isNull())
				permDetailsObject.userAccessId = valueUserPermissionsUserPermissionPermDetailsPermDetail["UserAccessId"].asString();
			if(!valueUserPermissionsUserPermissionPermDetailsPermDetail["ExtraData"].isNull())
				permDetailsObject.extraData = valueUserPermissionsUserPermissionPermDetailsPermDetail["ExtraData"].asString();
			userPermissionsObject.permDetails.push_back(permDetailsObject);
		}
		userPermissions_.push_back(userPermissionsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

long ListDatabaseUserPermssionsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListDatabaseUserPermssionsResult::getErrorCode()const
{
	return errorCode_;
}

std::vector<ListDatabaseUserPermssionsResult::UserPermission> ListDatabaseUserPermssionsResult::getUserPermissions()const
{
	return userPermissions_;
}

std::string ListDatabaseUserPermssionsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListDatabaseUserPermssionsResult::getSuccess()const
{
	return success_;
}

