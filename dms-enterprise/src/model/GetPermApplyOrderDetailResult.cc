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

#include <alibabacloud/dms-enterprise/model/GetPermApplyOrderDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetPermApplyOrderDetailResult::GetPermApplyOrderDetailResult() :
	ServiceResult()
{}

GetPermApplyOrderDetailResult::GetPermApplyOrderDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPermApplyOrderDetailResult::~GetPermApplyOrderDetailResult()
{}

void GetPermApplyOrderDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto permApplyOrderDetailNode = value["PermApplyOrderDetail"];
	if(!permApplyOrderDetailNode["PermType"].isNull())
		permApplyOrderDetail_.permType = std::stol(permApplyOrderDetailNode["PermType"].asString());
	if(!permApplyOrderDetailNode["Seconds"].isNull())
		permApplyOrderDetail_.seconds = std::stol(permApplyOrderDetailNode["Seconds"].asString());
	if(!permApplyOrderDetailNode["ApplyType"].isNull())
		permApplyOrderDetail_.applyType = permApplyOrderDetailNode["ApplyType"].asString();
	auto allResourcesNode = permApplyOrderDetailNode["Resources"]["Resource"];
	for (auto permApplyOrderDetailNodeResourcesResource : allResourcesNode)
	{
		PermApplyOrderDetail::Resource resourceObject;
		auto databaseInfoNode = value["DatabaseInfo"];
		if(!databaseInfoNode["DbId"].isNull())
			resourceObject.databaseInfo.dbId = std::stol(databaseInfoNode["DbId"].asString());
		if(!databaseInfoNode["Logic"].isNull())
			resourceObject.databaseInfo.logic = databaseInfoNode["Logic"].asString() == "true";
		if(!databaseInfoNode["DbType"].isNull())
			resourceObject.databaseInfo.dbType = databaseInfoNode["DbType"].asString();
		if(!databaseInfoNode["SearchName"].isNull())
			resourceObject.databaseInfo.searchName = databaseInfoNode["SearchName"].asString();
		if(!databaseInfoNode["EnvType"].isNull())
			resourceObject.databaseInfo.envType = databaseInfoNode["EnvType"].asString();
			auto allOwnerIds = databaseInfoNode["OwnerIds"]["OwnerId"];
			for (auto value : allOwnerIds)
				resourceObject.databaseInfo.ownerIds.push_back(value.asString());
			auto allOwnerNickNames = databaseInfoNode["OwnerNickNames"]["OwnerNickName"];
			for (auto value : allOwnerNickNames)
				resourceObject.databaseInfo.ownerNickNames.push_back(value.asString());
		auto tableInfoNode = value["TableInfo"];
		if(!tableInfoNode["TableName"].isNull())
			resourceObject.tableInfo.tableName = tableInfoNode["TableName"].asString();
		auto columnInfoNode = value["ColumnInfo"];
		if(!columnInfoNode["TableName"].isNull())
			resourceObject.columnInfo.tableName = columnInfoNode["TableName"].asString();
		if(!columnInfoNode["ColumnName"].isNull())
			resourceObject.columnInfo.columnName = columnInfoNode["ColumnName"].asString();
		auto instanceInfoNode = value["InstanceInfo"];
		if(!instanceInfoNode["InstanceId"].isNull())
			resourceObject.instanceInfo.instanceId = instanceInfoNode["InstanceId"].asString();
		if(!instanceInfoNode["SearchName"].isNull())
			resourceObject.instanceInfo.searchName = instanceInfoNode["SearchName"].asString();
		if(!instanceInfoNode["DbType"].isNull())
			resourceObject.instanceInfo.dbType = instanceInfoNode["DbType"].asString();
		if(!instanceInfoNode["EnvType"].isNull())
			resourceObject.instanceInfo.envType = instanceInfoNode["EnvType"].asString();
		if(!instanceInfoNode["Host"].isNull())
			resourceObject.instanceInfo.host = instanceInfoNode["Host"].asString();
		if(!instanceInfoNode["Port"].isNull())
			resourceObject.instanceInfo.port = std::stol(instanceInfoNode["Port"].asString());
		if(!instanceInfoNode["DbaId"].isNull())
			resourceObject.instanceInfo.dbaId = std::stol(instanceInfoNode["DbaId"].asString());
		if(!instanceInfoNode["DbaNickName"].isNull())
			resourceObject.instanceInfo.dbaNickName = instanceInfoNode["DbaNickName"].asString();
			auto allOwnerIds1 = instanceInfoNode["OwnerIds"]["OwnerId"];
			for (auto value : allOwnerIds1)
				resourceObject.instanceInfo.ownerIds1.push_back(value.asString());
			auto allOwnerNickName = instanceInfoNode["OwnerNickName"]["OwnerNickName"];
			for (auto value : allOwnerNickName)
				resourceObject.instanceInfo.ownerNickName.push_back(value.asString());
		permApplyOrderDetail_.resources.push_back(resourceObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

GetPermApplyOrderDetailResult::PermApplyOrderDetail GetPermApplyOrderDetailResult::getPermApplyOrderDetail()const
{
	return permApplyOrderDetail_;
}

std::string GetPermApplyOrderDetailResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetPermApplyOrderDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetPermApplyOrderDetailResult::getSuccess()const
{
	return success_;
}

