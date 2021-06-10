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

#include <alibabacloud/dms-enterprise/model/ListSensitiveColumnsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListSensitiveColumnsResult::ListSensitiveColumnsResult() :
	ServiceResult()
{}

ListSensitiveColumnsResult::ListSensitiveColumnsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSensitiveColumnsResult::~ListSensitiveColumnsResult()
{}

void ListSensitiveColumnsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSensitiveColumnListNode = value["SensitiveColumnList"]["SensitiveColumn"];
	for (auto valueSensitiveColumnListSensitiveColumn : allSensitiveColumnListNode)
	{
		SensitiveColumn sensitiveColumnListObject;
		if(!valueSensitiveColumnListSensitiveColumn["ColumnName"].isNull())
			sensitiveColumnListObject.columnName = valueSensitiveColumnListSensitiveColumn["ColumnName"].asString();
		if(!valueSensitiveColumnListSensitiveColumn["TableName"].isNull())
			sensitiveColumnListObject.tableName = valueSensitiveColumnListSensitiveColumn["TableName"].asString();
		if(!valueSensitiveColumnListSensitiveColumn["SecurityLevel"].isNull())
			sensitiveColumnListObject.securityLevel = valueSensitiveColumnListSensitiveColumn["SecurityLevel"].asString();
		if(!valueSensitiveColumnListSensitiveColumn["ColumnCount"].isNull())
			sensitiveColumnListObject.columnCount = std::stol(valueSensitiveColumnListSensitiveColumn["ColumnCount"].asString());
		if(!valueSensitiveColumnListSensitiveColumn["SchemaName"].isNull())
			sensitiveColumnListObject.schemaName = valueSensitiveColumnListSensitiveColumn["SchemaName"].asString();
		if(!valueSensitiveColumnListSensitiveColumn["FunctionType"].isNull())
			sensitiveColumnListObject.functionType = valueSensitiveColumnListSensitiveColumn["FunctionType"].asString();
		sensitiveColumnList_.push_back(sensitiveColumnListObject);
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

long ListSensitiveColumnsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListSensitiveColumnsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListSensitiveColumnsResult::getErrorMessage()const
{
	return errorMessage_;
}

std::vector<ListSensitiveColumnsResult::SensitiveColumn> ListSensitiveColumnsResult::getSensitiveColumnList()const
{
	return sensitiveColumnList_;
}

bool ListSensitiveColumnsResult::getSuccess()const
{
	return success_;
}

