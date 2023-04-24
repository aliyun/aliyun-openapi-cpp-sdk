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

#include <alibabacloud/dms-enterprise/model/GetDataTrackJobTableMetaResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetDataTrackJobTableMetaResult::GetDataTrackJobTableMetaResult() :
	ServiceResult()
{}

GetDataTrackJobTableMetaResult::GetDataTrackJobTableMetaResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDataTrackJobTableMetaResult::~GetDataTrackJobTableMetaResult()
{}

void GetDataTrackJobTableMetaResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTableMetaListNode = value["TableMetaList"]["TableMeta"];
	for (auto valueTableMetaListTableMeta : allTableMetaListNode)
	{
		TableMeta tableMetaListObject;
		if(!valueTableMetaListTableMeta["SchemaName"].isNull())
			tableMetaListObject.schemaName = valueTableMetaListTableMeta["SchemaName"].asString();
		if(!valueTableMetaListTableMeta["TableName"].isNull())
			tableMetaListObject.tableName = valueTableMetaListTableMeta["TableName"].asString();
		auto allColumnsNode = valueTableMetaListTableMeta["Columns"]["Column"];
		for (auto valueTableMetaListTableMetaColumnsColumn : allColumnsNode)
		{
			TableMeta::Column columnsObject;
			if(!valueTableMetaListTableMetaColumnsColumn["ColumnName"].isNull())
				columnsObject.columnName = valueTableMetaListTableMetaColumnsColumn["ColumnName"].asString();
			if(!valueTableMetaListTableMetaColumnsColumn["ColumnPosition"].isNull())
				columnsObject.columnPosition = std::stoi(valueTableMetaListTableMetaColumnsColumn["ColumnPosition"].asString());
			if(!valueTableMetaListTableMetaColumnsColumn["ColumnType"].isNull())
				columnsObject.columnType = valueTableMetaListTableMetaColumnsColumn["ColumnType"].asString();
			if(!valueTableMetaListTableMetaColumnsColumn["Fictive"].isNull())
				columnsObject.fictive = valueTableMetaListTableMetaColumnsColumn["Fictive"].asString() == "true";
			if(!valueTableMetaListTableMetaColumnsColumn["Charset"].isNull())
				columnsObject.charset = valueTableMetaListTableMetaColumnsColumn["Charset"].asString();
			tableMetaListObject.columns.push_back(columnsObject);
		}
		tableMetaList_.push_back(tableMetaListObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

std::vector<GetDataTrackJobTableMetaResult::TableMeta> GetDataTrackJobTableMetaResult::getTableMetaList()const
{
	return tableMetaList_;
}

std::string GetDataTrackJobTableMetaResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetDataTrackJobTableMetaResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetDataTrackJobTableMetaResult::getSuccess()const
{
	return success_;
}

