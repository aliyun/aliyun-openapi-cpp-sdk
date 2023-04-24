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

#include <alibabacloud/dms-enterprise/model/GetDatabaseExportOrderDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetDatabaseExportOrderDetailResult::GetDatabaseExportOrderDetailResult() :
	ServiceResult()
{}

GetDatabaseExportOrderDetailResult::GetDatabaseExportOrderDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDatabaseExportOrderDetailResult::~GetDatabaseExportOrderDetailResult()
{}

void GetDatabaseExportOrderDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto databaseExportOrderDetailNode = value["DatabaseExportOrderDetail"];
	if(!databaseExportOrderDetailNode["Id"].isNull())
		databaseExportOrderDetail_.id = std::stol(databaseExportOrderDetailNode["Id"].asString());
	if(!databaseExportOrderDetailNode["Committer"].isNull())
		databaseExportOrderDetail_.committer = databaseExportOrderDetailNode["Committer"].asString();
	if(!databaseExportOrderDetailNode["CommitterId"].isNull())
		databaseExportOrderDetail_.committerId = databaseExportOrderDetailNode["CommitterId"].asString();
	if(!databaseExportOrderDetailNode["Comment"].isNull())
		databaseExportOrderDetail_.comment = databaseExportOrderDetailNode["Comment"].asString();
	if(!databaseExportOrderDetailNode["SearchName"].isNull())
		databaseExportOrderDetail_.searchName = databaseExportOrderDetailNode["SearchName"].asString();
	if(!databaseExportOrderDetailNode["StatusDesc"].isNull())
		databaseExportOrderDetail_.statusDesc = databaseExportOrderDetailNode["StatusDesc"].asString();
	if(!databaseExportOrderDetailNode["WorkflowStatusDesc"].isNull())
		databaseExportOrderDetail_.workflowStatusDesc = databaseExportOrderDetailNode["WorkflowStatusDesc"].asString();
	if(!databaseExportOrderDetailNode["Log"].isNull())
		databaseExportOrderDetail_.log = databaseExportOrderDetailNode["Log"].asString();
	auto keyInfoNode = databaseExportOrderDetailNode["KeyInfo"];
	if(!keyInfoNode["DbId"].isNull())
		databaseExportOrderDetail_.keyInfo.dbId = std::stol(keyInfoNode["DbId"].asString());
	if(!keyInfoNode["DownloadURL"].isNull())
		databaseExportOrderDetail_.keyInfo.downloadURL = keyInfoNode["DownloadURL"].asString();
	if(!keyInfoNode["AuditDate"].isNull())
		databaseExportOrderDetail_.keyInfo.auditDate = keyInfoNode["AuditDate"].asString();
	auto configNode = keyInfoNode["Config"];
	if(!configNode["DbName"].isNull())
		databaseExportOrderDetail_.keyInfo.config.dbName = configNode["DbName"].asString();
	if(!configNode["ExportContent"].isNull())
		databaseExportOrderDetail_.keyInfo.config.exportContent = configNode["ExportContent"].asString();
	if(!configNode["TargetOption"].isNull())
		databaseExportOrderDetail_.keyInfo.config.targetOption = configNode["TargetOption"].asString();
		auto allExportTypes = configNode["ExportTypes"]["ExportTypes"];
		for (auto value : allExportTypes)
			databaseExportOrderDetail_.keyInfo.config.exportTypes.push_back(value.asString());
		auto allSelectedTables = configNode["SelectedTables"]["SelectedTables"];
		for (auto value : allSelectedTables)
			databaseExportOrderDetail_.keyInfo.config.selectedTables.push_back(value.asString());
		auto allSQLExtOption = configNode["SQLExtOption"]["SQLExtOption"];
		for (auto value : allSQLExtOption)
			databaseExportOrderDetail_.keyInfo.config.sQLExtOption.push_back(value.asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetDatabaseExportOrderDetailResult::DatabaseExportOrderDetail GetDatabaseExportOrderDetailResult::getDatabaseExportOrderDetail()const
{
	return databaseExportOrderDetail_;
}

std::string GetDatabaseExportOrderDetailResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetDatabaseExportOrderDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetDatabaseExportOrderDetailResult::getSuccess()const
{
	return success_;
}

