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

#include <alibabacloud/dms-enterprise/model/GetMetaTableDetailInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetMetaTableDetailInfoResult::GetMetaTableDetailInfoResult() :
	ServiceResult()
{}

GetMetaTableDetailInfoResult::GetMetaTableDetailInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMetaTableDetailInfoResult::~GetMetaTableDetailInfoResult()
{}

void GetMetaTableDetailInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto detailInfoNode = value["DetailInfo"];
	auto allIndexListNode = detailInfoNode["IndexList"]["Index"];
	for (auto detailInfoNodeIndexListIndex : allIndexListNode)
	{
		DetailInfo::Index indexObject;
		if(!detailInfoNodeIndexListIndex["IndexName"].isNull())
			indexObject.indexName = detailInfoNodeIndexListIndex["IndexName"].asString();
		if(!detailInfoNodeIndexListIndex["Unique"].isNull())
			indexObject.unique = detailInfoNodeIndexListIndex["Unique"].asString() == "true";
		if(!detailInfoNodeIndexListIndex["IndexType"].isNull())
			indexObject.indexType = detailInfoNodeIndexListIndex["IndexType"].asString();
		if(!detailInfoNodeIndexListIndex["IndexId"].isNull())
			indexObject.indexId = detailInfoNodeIndexListIndex["IndexId"].asString();
		auto allIndexColumns = value["IndexColumns"]["ColumnNames"];
		for (auto value : allIndexColumns)
			indexObject.indexColumns.push_back(value.asString());
		detailInfo_.indexList.push_back(indexObject);
	}
	auto allColumnListNode = detailInfoNode["ColumnList"]["Column"];
	for (auto detailInfoNodeColumnListColumn : allColumnListNode)
	{
		DetailInfo::Column columnObject;
		if(!detailInfoNodeColumnListColumn["ColumnName"].isNull())
			columnObject.columnName = detailInfoNodeColumnListColumn["ColumnName"].asString();
		if(!detailInfoNodeColumnListColumn["Description"].isNull())
			columnObject.description = detailInfoNodeColumnListColumn["Description"].asString();
		if(!detailInfoNodeColumnListColumn["DataScale"].isNull())
			columnObject.dataScale = std::stoi(detailInfoNodeColumnListColumn["DataScale"].asString());
		if(!detailInfoNodeColumnListColumn["DataPrecision"].isNull())
			columnObject.dataPrecision = std::stoi(detailInfoNodeColumnListColumn["DataPrecision"].asString());
		if(!detailInfoNodeColumnListColumn["ColumnType"].isNull())
			columnObject.columnType = detailInfoNodeColumnListColumn["ColumnType"].asString();
		if(!detailInfoNodeColumnListColumn["AutoIncrement"].isNull())
			columnObject.autoIncrement = detailInfoNodeColumnListColumn["AutoIncrement"].asString() == "true";
		if(!detailInfoNodeColumnListColumn["Position"].isNull())
			columnObject.position = detailInfoNodeColumnListColumn["Position"].asString();
		if(!detailInfoNodeColumnListColumn["Nullable"].isNull())
			columnObject.nullable = detailInfoNodeColumnListColumn["Nullable"].asString() == "true";
		if(!detailInfoNodeColumnListColumn["ColumnId"].isNull())
			columnObject.columnId = detailInfoNodeColumnListColumn["ColumnId"].asString();
		if(!detailInfoNodeColumnListColumn["DataLength"].isNull())
			columnObject.dataLength = std::stol(detailInfoNodeColumnListColumn["DataLength"].asString());
		detailInfo_.columnList.push_back(columnObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

GetMetaTableDetailInfoResult::DetailInfo GetMetaTableDetailInfoResult::getDetailInfo()const
{
	return detailInfo_;
}

std::string GetMetaTableDetailInfoResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetMetaTableDetailInfoResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetMetaTableDetailInfoResult::getSuccess()const
{
	return success_;
}

