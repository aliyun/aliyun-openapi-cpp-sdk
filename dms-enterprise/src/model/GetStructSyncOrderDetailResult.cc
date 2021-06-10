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

#include <alibabacloud/dms-enterprise/model/GetStructSyncOrderDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetStructSyncOrderDetailResult::GetStructSyncOrderDetailResult() :
	ServiceResult()
{}

GetStructSyncOrderDetailResult::GetStructSyncOrderDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetStructSyncOrderDetailResult::~GetStructSyncOrderDetailResult()
{}

void GetStructSyncOrderDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto structSyncOrderDetailNode = value["StructSyncOrderDetail"];
	if(!structSyncOrderDetailNode["SourceType"].isNull())
		structSyncOrderDetail_.sourceType = structSyncOrderDetailNode["SourceType"].asString();
	if(!structSyncOrderDetailNode["TargetType"].isNull())
		structSyncOrderDetail_.targetType = structSyncOrderDetailNode["TargetType"].asString();
	if(!structSyncOrderDetailNode["IgnoreError"].isNull())
		structSyncOrderDetail_.ignoreError = structSyncOrderDetailNode["IgnoreError"].asString() == "true";
	auto allTableInfoListNode = structSyncOrderDetailNode["TableInfoList"]["TableInfo"];
	for (auto structSyncOrderDetailNodeTableInfoListTableInfo : allTableInfoListNode)
	{
		StructSyncOrderDetail::TableInfo tableInfoObject;
		if(!structSyncOrderDetailNodeTableInfoListTableInfo["SourceTableName"].isNull())
			tableInfoObject.sourceTableName = structSyncOrderDetailNodeTableInfoListTableInfo["SourceTableName"].asString();
		if(!structSyncOrderDetailNodeTableInfoListTableInfo["TargetTableName"].isNull())
			tableInfoObject.targetTableName = structSyncOrderDetailNodeTableInfoListTableInfo["TargetTableName"].asString();
		structSyncOrderDetail_.tableInfoList.push_back(tableInfoObject);
	}
	auto sourceDatabaseInfoNode = structSyncOrderDetailNode["SourceDatabaseInfo"];
	if(!sourceDatabaseInfoNode["DbId"].isNull())
		structSyncOrderDetail_.sourceDatabaseInfo.dbId = std::stol(sourceDatabaseInfoNode["DbId"].asString());
	if(!sourceDatabaseInfoNode["SearchName"].isNull())
		structSyncOrderDetail_.sourceDatabaseInfo.searchName = sourceDatabaseInfoNode["SearchName"].asString();
	if(!sourceDatabaseInfoNode["DbType"].isNull())
		structSyncOrderDetail_.sourceDatabaseInfo.dbType = sourceDatabaseInfoNode["DbType"].asString();
	if(!sourceDatabaseInfoNode["EnvType"].isNull())
		structSyncOrderDetail_.sourceDatabaseInfo.envType = sourceDatabaseInfoNode["EnvType"].asString();
	if(!sourceDatabaseInfoNode["Logic"].isNull())
		structSyncOrderDetail_.sourceDatabaseInfo.logic = sourceDatabaseInfoNode["Logic"].asString() == "true";
	auto targetDatabaseInfoNode = structSyncOrderDetailNode["TargetDatabaseInfo"];
	if(!targetDatabaseInfoNode["DbId"].isNull())
		structSyncOrderDetail_.targetDatabaseInfo.dbId = std::stol(targetDatabaseInfoNode["DbId"].asString());
	if(!targetDatabaseInfoNode["SearchName"].isNull())
		structSyncOrderDetail_.targetDatabaseInfo.searchName = targetDatabaseInfoNode["SearchName"].asString();
	if(!targetDatabaseInfoNode["DbType"].isNull())
		structSyncOrderDetail_.targetDatabaseInfo.dbType = targetDatabaseInfoNode["DbType"].asString();
	if(!targetDatabaseInfoNode["EnvType"].isNull())
		structSyncOrderDetail_.targetDatabaseInfo.envType = targetDatabaseInfoNode["EnvType"].asString();
	if(!targetDatabaseInfoNode["Logic"].isNull())
		structSyncOrderDetail_.targetDatabaseInfo.logic = targetDatabaseInfoNode["Logic"].asString() == "true";
	auto sourceVersionInfoNode = structSyncOrderDetailNode["SourceVersionInfo"];
	if(!sourceVersionInfoNode["VersionId"].isNull())
		structSyncOrderDetail_.sourceVersionInfo.versionId = sourceVersionInfoNode["VersionId"].asString();
	auto targetVersionInfoNode = structSyncOrderDetailNode["TargetVersionInfo"];
	if(!targetVersionInfoNode["VersionId"].isNull())
		structSyncOrderDetail_.targetVersionInfo.versionId = targetVersionInfoNode["VersionId"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

GetStructSyncOrderDetailResult::StructSyncOrderDetail GetStructSyncOrderDetailResult::getStructSyncOrderDetail()const
{
	return structSyncOrderDetail_;
}

std::string GetStructSyncOrderDetailResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetStructSyncOrderDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetStructSyncOrderDetailResult::getSuccess()const
{
	return success_;
}

