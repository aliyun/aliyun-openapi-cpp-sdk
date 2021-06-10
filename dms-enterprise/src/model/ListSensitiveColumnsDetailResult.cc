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

#include <alibabacloud/dms-enterprise/model/ListSensitiveColumnsDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListSensitiveColumnsDetailResult::ListSensitiveColumnsDetailResult() :
	ServiceResult()
{}

ListSensitiveColumnsDetailResult::ListSensitiveColumnsDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListSensitiveColumnsDetailResult::~ListSensitiveColumnsDetailResult()
{}

void ListSensitiveColumnsDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSensitiveColumnsDetailListNode = value["SensitiveColumnsDetailList"]["SensitiveColumnsDetail"];
	for (auto valueSensitiveColumnsDetailListSensitiveColumnsDetail : allSensitiveColumnsDetailListNode)
	{
		SensitiveColumnsDetail sensitiveColumnsDetailListObject;
		if(!valueSensitiveColumnsDetailListSensitiveColumnsDetail["DbId"].isNull())
			sensitiveColumnsDetailListObject.dbId = std::stol(valueSensitiveColumnsDetailListSensitiveColumnsDetail["DbId"].asString());
		if(!valueSensitiveColumnsDetailListSensitiveColumnsDetail["ColumnName"].isNull())
			sensitiveColumnsDetailListObject.columnName = valueSensitiveColumnsDetailListSensitiveColumnsDetail["ColumnName"].asString();
		if(!valueSensitiveColumnsDetailListSensitiveColumnsDetail["ColumnDescription"].isNull())
			sensitiveColumnsDetailListObject.columnDescription = valueSensitiveColumnsDetailListSensitiveColumnsDetail["ColumnDescription"].asString();
		if(!valueSensitiveColumnsDetailListSensitiveColumnsDetail["TableName"].isNull())
			sensitiveColumnsDetailListObject.tableName = valueSensitiveColumnsDetailListSensitiveColumnsDetail["TableName"].asString();
		if(!valueSensitiveColumnsDetailListSensitiveColumnsDetail["DbType"].isNull())
			sensitiveColumnsDetailListObject.dbType = valueSensitiveColumnsDetailListSensitiveColumnsDetail["DbType"].asString();
		if(!valueSensitiveColumnsDetailListSensitiveColumnsDetail["ColumnType"].isNull())
			sensitiveColumnsDetailListObject.columnType = valueSensitiveColumnsDetailListSensitiveColumnsDetail["ColumnType"].asString();
		if(!valueSensitiveColumnsDetailListSensitiveColumnsDetail["Logic"].isNull())
			sensitiveColumnsDetailListObject.logic = valueSensitiveColumnsDetailListSensitiveColumnsDetail["Logic"].asString() == "true";
		if(!valueSensitiveColumnsDetailListSensitiveColumnsDetail["SchemaName"].isNull())
			sensitiveColumnsDetailListObject.schemaName = valueSensitiveColumnsDetailListSensitiveColumnsDetail["SchemaName"].asString();
		if(!valueSensitiveColumnsDetailListSensitiveColumnsDetail["SearchName"].isNull())
			sensitiveColumnsDetailListObject.searchName = valueSensitiveColumnsDetailListSensitiveColumnsDetail["SearchName"].asString();
		if(!valueSensitiveColumnsDetailListSensitiveColumnsDetail["EnvType"].isNull())
			sensitiveColumnsDetailListObject.envType = valueSensitiveColumnsDetailListSensitiveColumnsDetail["EnvType"].asString();
		sensitiveColumnsDetailList_.push_back(sensitiveColumnsDetailListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListSensitiveColumnsDetailResult::SensitiveColumnsDetail> ListSensitiveColumnsDetailResult::getSensitiveColumnsDetailList()const
{
	return sensitiveColumnsDetailList_;
}

std::string ListSensitiveColumnsDetailResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListSensitiveColumnsDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListSensitiveColumnsDetailResult::getSuccess()const
{
	return success_;
}

