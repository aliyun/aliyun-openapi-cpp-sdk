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

#include <alibabacloud/dataworks-public/model/GetMetaTableColumnResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetMetaTableColumnResult::GetMetaTableColumnResult() :
	ServiceResult()
{}

GetMetaTableColumnResult::GetMetaTableColumnResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMetaTableColumnResult::~GetMetaTableColumnResult()
{}

void GetMetaTableColumnResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNum"].isNull())
		data_.pageNum = std::stoi(dataNode["PageNum"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stol(dataNode["TotalCount"].asString());
	auto allColumnListNode = dataNode["ColumnList"]["ColumnListItem"];
	for (auto dataNodeColumnListColumnListItem : allColumnListNode)
	{
		Data::ColumnListItem columnListItemObject;
		if(!dataNodeColumnListColumnListItem["ColumnGuid"].isNull())
			columnListItemObject.columnGuid = dataNodeColumnListColumnListItem["ColumnGuid"].asString();
		if(!dataNodeColumnListColumnListItem["ColumnName"].isNull())
			columnListItemObject.columnName = dataNodeColumnListColumnListItem["ColumnName"].asString();
		if(!dataNodeColumnListColumnListItem["IsPartitionColumn"].isNull())
			columnListItemObject.isPartitionColumn = dataNodeColumnListColumnListItem["IsPartitionColumn"].asString() == "true";
		if(!dataNodeColumnListColumnListItem["Comment"].isNull())
			columnListItemObject.comment = dataNodeColumnListColumnListItem["Comment"].asString();
		if(!dataNodeColumnListColumnListItem["ColumnType"].isNull())
			columnListItemObject.columnType = dataNodeColumnListColumnListItem["ColumnType"].asString();
		if(!dataNodeColumnListColumnListItem["IsPrimaryKey"].isNull())
			columnListItemObject.isPrimaryKey = dataNodeColumnListColumnListItem["IsPrimaryKey"].asString() == "true";
		if(!dataNodeColumnListColumnListItem["Position"].isNull())
			columnListItemObject.position = std::stoi(dataNodeColumnListColumnListItem["Position"].asString());
		if(!dataNodeColumnListColumnListItem["Caption"].isNull())
			columnListItemObject.caption = dataNodeColumnListColumnListItem["Caption"].asString();
		if(!dataNodeColumnListColumnListItem["IsForeignKey"].isNull())
			columnListItemObject.isForeignKey = dataNodeColumnListColumnListItem["IsForeignKey"].asString() == "true";
		if(!dataNodeColumnListColumnListItem["RelationCount"].isNull())
			columnListItemObject.relationCount = std::stol(dataNodeColumnListColumnListItem["RelationCount"].asString());
		data_.columnList.push_back(columnListItemObject);
	}
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

int GetMetaTableColumnResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetMetaTableColumnResult::Data GetMetaTableColumnResult::getData()const
{
	return data_;
}

std::string GetMetaTableColumnResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetMetaTableColumnResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetMetaTableColumnResult::getSuccess()const
{
	return success_;
}

