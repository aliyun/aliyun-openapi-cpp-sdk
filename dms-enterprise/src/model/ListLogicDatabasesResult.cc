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

#include <alibabacloud/dms-enterprise/model/ListLogicDatabasesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListLogicDatabasesResult::ListLogicDatabasesResult() :
	ServiceResult()
{}

ListLogicDatabasesResult::ListLogicDatabasesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListLogicDatabasesResult::~ListLogicDatabasesResult()
{}

void ListLogicDatabasesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLogicDatabaseListNode = value["LogicDatabaseList"]["LogicDatabase"];
	for (auto valueLogicDatabaseListLogicDatabase : allLogicDatabaseListNode)
	{
		LogicDatabase logicDatabaseListObject;
		if(!valueLogicDatabaseListLogicDatabase["DatabaseId"].isNull())
			logicDatabaseListObject.databaseId = valueLogicDatabaseListLogicDatabase["DatabaseId"].asString();
		if(!valueLogicDatabaseListLogicDatabase["DbType"].isNull())
			logicDatabaseListObject.dbType = valueLogicDatabaseListLogicDatabase["DbType"].asString();
		if(!valueLogicDatabaseListLogicDatabase["Logic"].isNull())
			logicDatabaseListObject.logic = valueLogicDatabaseListLogicDatabase["Logic"].asString() == "true";
		if(!valueLogicDatabaseListLogicDatabase["SchemaName"].isNull())
			logicDatabaseListObject.schemaName = valueLogicDatabaseListLogicDatabase["SchemaName"].asString();
		if(!valueLogicDatabaseListLogicDatabase["SearchName"].isNull())
			logicDatabaseListObject.searchName = valueLogicDatabaseListLogicDatabase["SearchName"].asString();
		if(!valueLogicDatabaseListLogicDatabase["EnvType"].isNull())
			logicDatabaseListObject.envType = valueLogicDatabaseListLogicDatabase["EnvType"].asString();
		if(!valueLogicDatabaseListLogicDatabase["Alias"].isNull())
			logicDatabaseListObject.alias = valueLogicDatabaseListLogicDatabase["Alias"].asString();
		auto allOwnerIdList = value["OwnerIdList"]["OwnerIds"];
		for (auto value : allOwnerIdList)
			logicDatabaseListObject.ownerIdList.push_back(value.asString());
		auto allOwnerNameList = value["OwnerNameList"]["OwnerNames"];
		for (auto value : allOwnerNameList)
			logicDatabaseListObject.ownerNameList.push_back(value.asString());
		auto allDatabaseIds = value["DatabaseIds"]["DatabaseIds"];
		for (auto value : allDatabaseIds)
			logicDatabaseListObject.databaseIds.push_back(value.asString());
		logicDatabaseList_.push_back(logicDatabaseListObject);
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

std::vector<ListLogicDatabasesResult::LogicDatabase> ListLogicDatabasesResult::getLogicDatabaseList()const
{
	return logicDatabaseList_;
}

long ListLogicDatabasesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListLogicDatabasesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListLogicDatabasesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListLogicDatabasesResult::getSuccess()const
{
	return success_;
}

