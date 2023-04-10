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

#include <alibabacloud/datalake/model/ListPermissionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::DataLake;
using namespace AlibabaCloud::DataLake::Model;

ListPermissionsResult::ListPermissionsResult() :
	ServiceResult()
{}

ListPermissionsResult::ListPermissionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPermissionsResult::~ListPermissionsResult()
{}

void ListPermissionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPrincipalResourcePermissionsListNode = value["PrincipalResourcePermissionsList"]["PrincipalResourcePermissionsListItem"];
	for (auto valuePrincipalResourcePermissionsListPrincipalResourcePermissionsListItem : allPrincipalResourcePermissionsListNode)
	{
		PrincipalResourcePermissionsListItem principalResourcePermissionsListObject;
		auto principalNode = value["Principal"];
		if(!principalNode["PrincipalArn"].isNull())
			principalResourcePermissionsListObject.principal.principalArn = principalNode["PrincipalArn"].asString();
		auto metaResourceNode = value["MetaResource"];
		if(!metaResourceNode["ResourceType"].isNull())
			principalResourcePermissionsListObject.metaResource.resourceType = metaResourceNode["ResourceType"].asString();
		auto catalogResourceNode = metaResourceNode["CatalogResource"];
		if(!catalogResourceNode["CatalogId"].isNull())
			principalResourcePermissionsListObject.metaResource.catalogResource.catalogId = catalogResourceNode["CatalogId"].asString();
		auto databaseResourceNode = metaResourceNode["DatabaseResource"];
		if(!databaseResourceNode["DatabaseName"].isNull())
			principalResourcePermissionsListObject.metaResource.databaseResource.databaseName = databaseResourceNode["DatabaseName"].asString();
		if(!databaseResourceNode["DatabaseWildcard"].isNull())
			principalResourcePermissionsListObject.metaResource.databaseResource.databaseWildcard = databaseResourceNode["DatabaseWildcard"].asString();
		auto tableResourceNode = metaResourceNode["TableResource"];
		if(!tableResourceNode["DatabaseName"].isNull())
			principalResourcePermissionsListObject.metaResource.tableResource.databaseName = tableResourceNode["DatabaseName"].asString();
		if(!tableResourceNode["TableName"].isNull())
			principalResourcePermissionsListObject.metaResource.tableResource.tableName = tableResourceNode["TableName"].asString();
		auto functionResourceNode = metaResourceNode["FunctionResource"];
		if(!functionResourceNode["DatabaseName"].isNull())
			principalResourcePermissionsListObject.metaResource.functionResource.databaseName = functionResourceNode["DatabaseName"].asString();
		if(!functionResourceNode["FunctionName"].isNull())
			principalResourcePermissionsListObject.metaResource.functionResource.functionName = functionResourceNode["FunctionName"].asString();
		auto columnResourceNode = metaResourceNode["ColumnResource"];
		if(!columnResourceNode["DatabaseName"].isNull())
			principalResourcePermissionsListObject.metaResource.columnResource.databaseName = columnResourceNode["DatabaseName"].asString();
		if(!columnResourceNode["TableName"].isNull())
			principalResourcePermissionsListObject.metaResource.columnResource.tableName = columnResourceNode["TableName"].asString();
			auto allColumnNames = columnResourceNode["ColumnNames"]["ColumnName"];
			for (auto value : allColumnNames)
				principalResourcePermissionsListObject.metaResource.columnResource.columnNames.push_back(value.asString());
		auto allAccesses = value["Accesses"]["null"];
		for (auto value : allAccesses)
			principalResourcePermissionsListObject.accesses.push_back(value.asString());
		auto allDelegateAccesses = value["DelegateAccesses"]["null"];
		for (auto value : allDelegateAccesses)
			principalResourcePermissionsListObject.delegateAccesses.push_back(value.asString());
		principalResourcePermissionsList_.push_back(principalResourcePermissionsListObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

long ListPermissionsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListPermissionsResult::getMessage()const
{
	return message_;
}

std::string ListPermissionsResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::vector<ListPermissionsResult::PrincipalResourcePermissionsListItem> ListPermissionsResult::getPrincipalResourcePermissionsList()const
{
	return principalResourcePermissionsList_;
}

std::string ListPermissionsResult::getCode()const
{
	return code_;
}

bool ListPermissionsResult::getSuccess()const
{
	return success_;
}

