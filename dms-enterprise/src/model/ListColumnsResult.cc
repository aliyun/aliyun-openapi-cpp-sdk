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

#include <alibabacloud/dms-enterprise/model/ListColumnsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListColumnsResult::ListColumnsResult() :
	ServiceResult()
{}

ListColumnsResult::ListColumnsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListColumnsResult::~ListColumnsResult()
{}

void ListColumnsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allColumnListNode = value["ColumnList"]["Column"];
	for (auto valueColumnListColumn : allColumnListNode)
	{
		Column columnListObject;
		if(!valueColumnListColumn["ColumnType"].isNull())
			columnListObject.columnType = valueColumnListColumn["ColumnType"].asString();
		if(!valueColumnListColumn["AutoIncrement"].isNull())
			columnListObject.autoIncrement = valueColumnListColumn["AutoIncrement"].asString() == "true";
		if(!valueColumnListColumn["ColumnId"].isNull())
			columnListObject.columnId = valueColumnListColumn["ColumnId"].asString();
		if(!valueColumnListColumn["DefaultValue"].isNull())
			columnListObject.defaultValue = valueColumnListColumn["DefaultValue"].asString();
		if(!valueColumnListColumn["Sensitive"].isNull())
			columnListObject.sensitive = valueColumnListColumn["Sensitive"].asString() == "true";
		if(!valueColumnListColumn["ColumnName"].isNull())
			columnListObject.columnName = valueColumnListColumn["ColumnName"].asString();
		if(!valueColumnListColumn["SecurityLevel"].isNull())
			columnListObject.securityLevel = valueColumnListColumn["SecurityLevel"].asString();
		if(!valueColumnListColumn["Description"].isNull())
			columnListObject.description = valueColumnListColumn["Description"].asString();
		if(!valueColumnListColumn["DataPrecision"].isNull())
			columnListObject.dataPrecision = std::stoi(valueColumnListColumn["DataPrecision"].asString());
		if(!valueColumnListColumn["DataScale"].isNull())
			columnListObject.dataScale = std::stoi(valueColumnListColumn["DataScale"].asString());
		if(!valueColumnListColumn["FunctionType"].isNull())
			columnListObject.functionType = valueColumnListColumn["FunctionType"].asString();
		if(!valueColumnListColumn["Nullable"].isNull())
			columnListObject.nullable = valueColumnListColumn["Nullable"].asString() == "true";
		if(!valueColumnListColumn["DataLength"].isNull())
			columnListObject.dataLength = std::stol(valueColumnListColumn["DataLength"].asString());
		columnList_.push_back(columnListObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<ListColumnsResult::Column> ListColumnsResult::getColumnList()const
{
	return columnList_;
}

std::string ListColumnsResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListColumnsResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListColumnsResult::getSuccess()const
{
	return success_;
}

