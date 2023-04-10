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

#include <alibabacloud/datalake/model/BatchGrantPermissionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

BatchGrantPermissionsResult::BatchGrantPermissionsResult() :
	ServiceResult()
{}

BatchGrantPermissionsResult::BatchGrantPermissionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

BatchGrantPermissionsResult::~BatchGrantPermissionsResult()
{}

void BatchGrantPermissionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allBatchGrantRevokeFailureResultNode = value["BatchGrantRevokeFailureResult"]["BatchGrantRevokeFailureResultItem"];
	for (auto valueBatchGrantRevokeFailureResultBatchGrantRevokeFailureResultItem : allBatchGrantRevokeFailureResultNode)
	{
		BatchGrantRevokeFailureResultItem batchGrantRevokeFailureResultObject;
		auto grantRevokeEntryNode = value["GrantRevokeEntry"];
		if(!grantRevokeEntryNode["Id"].isNull())
			batchGrantRevokeFailureResultObject.grantRevokeEntry.id = grantRevokeEntryNode["Id"].asString();
		auto metaResourceNode = grantRevokeEntryNode["MetaResource"];
		if(!metaResourceNode["ResourceType"].isNull())
			batchGrantRevokeFailureResultObject.grantRevokeEntry.metaResource.resourceType = metaResourceNode["ResourceType"].asString();
		auto catalogResourceNode = metaResourceNode["CatalogResource"];
		if(!catalogResourceNode["CatalogId"].isNull())
			batchGrantRevokeFailureResultObject.grantRevokeEntry.metaResource.catalogResource.catalogId = catalogResourceNode["CatalogId"].asString();
		auto databaseResourceNode = metaResourceNode["DatabaseResource"];
		if(!databaseResourceNode["DatabaseName"].isNull())
			batchGrantRevokeFailureResultObject.grantRevokeEntry.metaResource.databaseResource.databaseName = databaseResourceNode["DatabaseName"].asString();
		if(!databaseResourceNode["DatabaseWildcard"].isNull())
			batchGrantRevokeFailureResultObject.grantRevokeEntry.metaResource.databaseResource.databaseWildcard = databaseResourceNode["DatabaseWildcard"].asString();
		auto tableResourceNode = metaResourceNode["TableResource"];
		if(!tableResourceNode["DatabaseName"].isNull())
			batchGrantRevokeFailureResultObject.grantRevokeEntry.metaResource.tableResource.databaseName = tableResourceNode["DatabaseName"].asString();
		if(!tableResourceNode["TableName"].isNull())
			batchGrantRevokeFailureResultObject.grantRevokeEntry.metaResource.tableResource.tableName = tableResourceNode["TableName"].asString();
		auto functionResourceNode = metaResourceNode["FunctionResource"];
		if(!functionResourceNode["DatabaseName"].isNull())
			batchGrantRevokeFailureResultObject.grantRevokeEntry.metaResource.functionResource.databaseName = functionResourceNode["DatabaseName"].asString();
		if(!functionResourceNode["FunctionName"].isNull())
			batchGrantRevokeFailureResultObject.grantRevokeEntry.metaResource.functionResource.functionName = functionResourceNode["FunctionName"].asString();
		auto columnResourceNode = metaResourceNode["ColumnResource"];
		if(!columnResourceNode["DatabaseName"].isNull())
			batchGrantRevokeFailureResultObject.grantRevokeEntry.metaResource.columnResource.databaseName = columnResourceNode["DatabaseName"].asString();
		if(!columnResourceNode["TableName"].isNull())
			batchGrantRevokeFailureResultObject.grantRevokeEntry.metaResource.columnResource.tableName = columnResourceNode["TableName"].asString();
			auto allColumnNames = columnResourceNode["ColumnNames"]["ColumnName"];
			for (auto value : allColumnNames)
				batchGrantRevokeFailureResultObject.grantRevokeEntry.metaResource.columnResource.columnNames.push_back(value.asString());
		auto principalNode = grantRevokeEntryNode["Principal"];
		if(!principalNode["PrincipalArn"].isNull())
			batchGrantRevokeFailureResultObject.grantRevokeEntry.principal.principalArn = principalNode["PrincipalArn"].asString();
			auto allAccesses = grantRevokeEntryNode["Accesses"]["null"];
			for (auto value : allAccesses)
				batchGrantRevokeFailureResultObject.grantRevokeEntry.accesses.push_back(value.asString());
			auto allDelegateAccesses = grantRevokeEntryNode["DelegateAccesses"]["null"];
			for (auto value : allDelegateAccesses)
				batchGrantRevokeFailureResultObject.grantRevokeEntry.delegateAccesses.push_back(value.asString());
		auto errorDetailNode = value["ErrorDetail"];
		if(!errorDetailNode["Code"].isNull())
			batchGrantRevokeFailureResultObject.errorDetail.code = errorDetailNode["Code"].asString();
		if(!errorDetailNode["Message"].isNull())
			batchGrantRevokeFailureResultObject.errorDetail.message = errorDetailNode["Message"].asString();
		batchGrantRevokeFailureResult_.push_back(batchGrantRevokeFailureResultObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string BatchGrantPermissionsResult::getMessage()const
{
	return message_;
}

std::vector<BatchGrantPermissionsResult::BatchGrantRevokeFailureResultItem> BatchGrantPermissionsResult::getBatchGrantRevokeFailureResult()const
{
	return batchGrantRevokeFailureResult_;
}

std::string BatchGrantPermissionsResult::getCode()const
{
	return code_;
}

bool BatchGrantPermissionsResult::getSuccess()const
{
	return success_;
}

