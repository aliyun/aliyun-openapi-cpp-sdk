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

#include <alibabacloud/dms-enterprise/model/ListDatabasesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

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
	auto allDatabaseListNode = value["DatabaseList"]["Database"];
	for (auto valueDatabaseListDatabase : allDatabaseListNode)
	{
		Database databaseListObject;
		if(!valueDatabaseListDatabase["DatabaseId"].isNull())
			databaseListObject.databaseId = valueDatabaseListDatabase["DatabaseId"].asString();
		if(!valueDatabaseListDatabase["Host"].isNull())
			databaseListObject.host = valueDatabaseListDatabase["Host"].asString();
		if(!valueDatabaseListDatabase["CatalogName"].isNull())
			databaseListObject.catalogName = valueDatabaseListDatabase["CatalogName"].asString();
		if(!valueDatabaseListDatabase["DbaName"].isNull())
			databaseListObject.dbaName = valueDatabaseListDatabase["DbaName"].asString();
		if(!valueDatabaseListDatabase["State"].isNull())
			databaseListObject.state = valueDatabaseListDatabase["State"].asString();
		if(!valueDatabaseListDatabase["DbaId"].isNull())
			databaseListObject.dbaId = valueDatabaseListDatabase["DbaId"].asString();
		if(!valueDatabaseListDatabase["SchemaName"].isNull())
			databaseListObject.schemaName = valueDatabaseListDatabase["SchemaName"].asString();
		if(!valueDatabaseListDatabase["InstanceId"].isNull())
			databaseListObject.instanceId = valueDatabaseListDatabase["InstanceId"].asString();
		if(!valueDatabaseListDatabase["Port"].isNull())
			databaseListObject.port = std::stoi(valueDatabaseListDatabase["Port"].asString());
		if(!valueDatabaseListDatabase["EnvType"].isNull())
			databaseListObject.envType = valueDatabaseListDatabase["EnvType"].asString();
		if(!valueDatabaseListDatabase["Sid"].isNull())
			databaseListObject.sid = valueDatabaseListDatabase["Sid"].asString();
		if(!valueDatabaseListDatabase["Encoding"].isNull())
			databaseListObject.encoding = valueDatabaseListDatabase["Encoding"].asString();
		if(!valueDatabaseListDatabase["DbType"].isNull())
			databaseListObject.dbType = valueDatabaseListDatabase["DbType"].asString();
		if(!valueDatabaseListDatabase["SearchName"].isNull())
			databaseListObject.searchName = valueDatabaseListDatabase["SearchName"].asString();
		auto allOwnerIdList = value["OwnerIdList"]["OwnerIds"];
		for (auto value : allOwnerIdList)
			databaseListObject.ownerIdList.push_back(value.asString());
		auto allOwnerNameList = value["OwnerNameList"]["OwnerNames"];
		for (auto value : allOwnerNameList)
			databaseListObject.ownerNameList.push_back(value.asString());
		databaseList_.push_back(databaseListObject);
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

long ListDatabasesResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<ListDatabasesResult::Database> ListDatabasesResult::getDatabaseList()const
{
	return databaseList_;
}

std::string ListDatabasesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListDatabasesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListDatabasesResult::getSuccess()const
{
	return success_;
}

