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

#include <alibabacloud/dataworks-public/model/GetMetaTableFullInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetMetaTableFullInfoResult::GetMetaTableFullInfoResult() :
	ServiceResult()
{}

GetMetaTableFullInfoResult::GetMetaTableFullInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMetaTableFullInfoResult::~GetMetaTableFullInfoResult()
{}

void GetMetaTableFullInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TableName"].isNull())
		data_.tableName = dataNode["TableName"].asString();
	if(!dataNode["Comment"].isNull())
		data_.comment = dataNode["Comment"].asString();
	if(!dataNode["LifeCycle"].isNull())
		data_.lifeCycle = std::stoi(dataNode["LifeCycle"].asString());
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stol(dataNode["CreateTime"].asString());
	if(!dataNode["ProjectName"].isNull())
		data_.projectName = dataNode["ProjectName"].asString();
	if(!dataNode["ProjectId"].isNull())
		data_.projectId = std::stol(dataNode["ProjectId"].asString());
	if(!dataNode["OwnerId"].isNull())
		data_.ownerId = dataNode["OwnerId"].asString();
	if(!dataNode["EnvType"].isNull())
		data_.envType = std::stoi(dataNode["EnvType"].asString());
	if(!dataNode["LastAccessTime"].isNull())
		data_.lastAccessTime = std::stol(dataNode["LastAccessTime"].asString());
	if(!dataNode["DataSize"].isNull())
		data_.dataSize = std::stol(dataNode["DataSize"].asString());
	if(!dataNode["LastModifyTime"].isNull())
		data_.lastModifyTime = std::stol(dataNode["LastModifyTime"].asString());
	if(!dataNode["DatabaseName"].isNull())
		data_.databaseName = dataNode["DatabaseName"].asString();
	if(!dataNode["IsVisible"].isNull())
		data_.isVisible = std::stoi(dataNode["IsVisible"].asString());
	if(!dataNode["TotalColumnCount"].isNull())
		data_.totalColumnCount = std::stol(dataNode["TotalColumnCount"].asString());
	if(!dataNode["TableGuid"].isNull())
		data_.tableGuid = dataNode["TableGuid"].asString();
	if(!dataNode["PartitionKeys"].isNull())
		data_.partitionKeys = dataNode["PartitionKeys"].asString();
	if(!dataNode["LastDdlTime"].isNull())
		data_.lastDdlTime = std::stol(dataNode["LastDdlTime"].asString());
	if(!dataNode["Location"].isNull())
		data_.location = dataNode["Location"].asString();
	if(!dataNode["ClusterId"].isNull())
		data_.clusterId = dataNode["ClusterId"].asString();
	if(!dataNode["TenantId"].isNull())
		data_.tenantId = std::stol(dataNode["TenantId"].asString());
	if(!dataNode["Schema"].isNull())
		data_.schema = dataNode["Schema"].asString();
	auto allColumnListNode = dataNode["ColumnList"]["ColumnListItem"];
	for (auto dataNodeColumnListColumnListItem : allColumnListNode)
	{
		Data::ColumnListItem columnListItemObject;
		if(!dataNodeColumnListColumnListItem["ColumnName"].isNull())
			columnListItemObject.columnName = dataNodeColumnListColumnListItem["ColumnName"].asString();
		if(!dataNodeColumnListColumnListItem["ColumnGuid"].isNull())
			columnListItemObject.columnGuid = dataNodeColumnListColumnListItem["ColumnGuid"].asString();
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

int GetMetaTableFullInfoResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetMetaTableFullInfoResult::Data GetMetaTableFullInfoResult::getData()const
{
	return data_;
}

std::string GetMetaTableFullInfoResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetMetaTableFullInfoResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetMetaTableFullInfoResult::getSuccess()const
{
	return success_;
}

