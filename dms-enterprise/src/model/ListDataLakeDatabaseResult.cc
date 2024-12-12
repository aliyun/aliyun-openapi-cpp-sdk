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

#include <alibabacloud/dms-enterprise/model/ListDataLakeDatabaseResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListDataLakeDatabaseResult::ListDataLakeDatabaseResult() :
	ServiceResult()
{}

ListDataLakeDatabaseResult::ListDataLakeDatabaseResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDataLakeDatabaseResult::~ListDataLakeDatabaseResult()
{}

void ListDataLakeDatabaseResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDatabaseListNode = value["DatabaseList"]["Database"];
	for (auto valueDatabaseListDatabase : allDatabaseListNode)
	{
		Database databaseListObject;
		if(!valueDatabaseListDatabase["Description"].isNull())
			databaseListObject.description = valueDatabaseListDatabase["Description"].asString();
		if(!valueDatabaseListDatabase["Parameters"].isNull())
			databaseListObject.parameters = valueDatabaseListDatabase["Parameters"].asString();
		if(!valueDatabaseListDatabase["DbId"].isNull())
			databaseListObject.dbId = std::stol(valueDatabaseListDatabase["DbId"].asString());
		if(!valueDatabaseListDatabase["CatalogName"].isNull())
			databaseListObject.catalogName = valueDatabaseListDatabase["CatalogName"].asString();
		if(!valueDatabaseListDatabase["Name"].isNull())
			databaseListObject.name = valueDatabaseListDatabase["Name"].asString();
		if(!valueDatabaseListDatabase["Location"].isNull())
			databaseListObject.location = valueDatabaseListDatabase["Location"].asString();
		databaseList_.push_back(databaseListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::vector<ListDataLakeDatabaseResult::Database> ListDataLakeDatabaseResult::getDatabaseList()const
{
	return databaseList_;
}

std::string ListDataLakeDatabaseResult::getNextToken()const
{
	return nextToken_;
}

int ListDataLakeDatabaseResult::getMaxResults()const
{
	return maxResults_;
}

std::string ListDataLakeDatabaseResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListDataLakeDatabaseResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListDataLakeDatabaseResult::getSuccess()const
{
	return success_;
}

