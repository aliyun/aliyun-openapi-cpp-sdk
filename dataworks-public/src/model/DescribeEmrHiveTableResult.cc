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

#include <alibabacloud/dataworks-public/model/DescribeEmrHiveTableResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

DescribeEmrHiveTableResult::DescribeEmrHiveTableResult() :
	ServiceResult()
{}

DescribeEmrHiveTableResult::DescribeEmrHiveTableResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEmrHiveTableResult::~DescribeEmrHiveTableResult()
{}

void DescribeEmrHiveTableResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["ClusterBizId"].isNull())
		data_.clusterBizId = dataNode["ClusterBizId"].asString();
	if(!dataNode["TableName"].isNull())
		data_.tableName = dataNode["TableName"].asString();
	if(!dataNode["TableType"].isNull())
		data_.tableType = dataNode["TableType"].asString();
	if(!dataNode["Owner"].isNull())
		data_.owner = dataNode["Owner"].asString();
	if(!dataNode["OwnerType"].isNull())
		data_.ownerType = dataNode["OwnerType"].asString();
	if(!dataNode["IsTemporary"].isNull())
		data_.isTemporary = dataNode["IsTemporary"].asString() == "true";
	if(!dataNode["SerializationLib"].isNull())
		data_.serializationLib = dataNode["SerializationLib"].asString();
	if(!dataNode["InputFormat"].isNull())
		data_.inputFormat = dataNode["InputFormat"].asString();
	if(!dataNode["OutputFormat"].isNull())
		data_.outputFormat = dataNode["OutputFormat"].asString();
	if(!dataNode["Location"].isNull())
		data_.location = dataNode["Location"].asString();
	if(!dataNode["LastAccessTime"].isNull())
		data_.lastAccessTime = dataNode["LastAccessTime"].asString();
	if(!dataNode["GmtCreate"].isNull())
		data_.gmtCreate = dataNode["GmtCreate"].asString();
	if(!dataNode["GmtModified"].isNull())
		data_.gmtModified = dataNode["GmtModified"].asString();
	if(!dataNode["TableComment"].isNull())
		data_.tableComment = dataNode["TableComment"].asString();
	if(!dataNode["TableParameters"].isNull())
		data_.tableParameters = dataNode["TableParameters"].asString();
	if(!dataNode["PartitionKeys"].isNull())
		data_.partitionKeys = dataNode["PartitionKeys"].asString();
	if(!dataNode["IsCompressed"].isNull())
		data_.isCompressed = dataNode["IsCompressed"].asString() == "true";
	if(!dataNode["ClusterBizName"].isNull())
		data_.clusterBizName = dataNode["ClusterBizName"].asString();
	if(!dataNode["DatabaseName"].isNull())
		data_.databaseName = dataNode["DatabaseName"].asString();
	if(!dataNode["OwnerId"].isNull())
		data_.ownerId = dataNode["OwnerId"].asString();
	if(!dataNode["TableDesc"].isNull())
		data_.tableDesc = dataNode["TableDesc"].asString();
	if(!dataNode["LastModifyTime"].isNull())
		data_.lastModifyTime = dataNode["LastModifyTime"].asString();
	if(!dataNode["TableSize"].isNull())
		data_.tableSize = std::stol(dataNode["TableSize"].asString());
	auto allColumnsNode = dataNode["Columns"]["TableColumn"];
	for (auto dataNodeColumnsTableColumn : allColumnsNode)
	{
		Data::TableColumn tableColumnObject;
		if(!dataNodeColumnsTableColumn["ColumnPosition"].isNull())
			tableColumnObject.columnPosition = std::stoi(dataNodeColumnsTableColumn["ColumnPosition"].asString());
		if(!dataNodeColumnsTableColumn["ColumnName"].isNull())
			tableColumnObject.columnName = dataNodeColumnsTableColumn["ColumnName"].asString();
		if(!dataNodeColumnsTableColumn["ColumnType"].isNull())
			tableColumnObject.columnType = dataNodeColumnsTableColumn["ColumnType"].asString();
		if(!dataNodeColumnsTableColumn["ColumnComment"].isNull())
			tableColumnObject.columnComment = dataNodeColumnsTableColumn["ColumnComment"].asString();
		if(!dataNodeColumnsTableColumn["GmtCreate"].isNull())
			tableColumnObject.gmtCreate = dataNodeColumnsTableColumn["GmtCreate"].asString();
		if(!dataNodeColumnsTableColumn["GmtModified"].isNull())
			tableColumnObject.gmtModified = dataNodeColumnsTableColumn["GmtModified"].asString();
		if(!dataNodeColumnsTableColumn["Comment"].isNull())
			tableColumnObject.comment = dataNodeColumnsTableColumn["Comment"].asString();
		data_.columns.push_back(tableColumnObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

DescribeEmrHiveTableResult::Data DescribeEmrHiveTableResult::getData()const
{
	return data_;
}

std::string DescribeEmrHiveTableResult::getErrorCode()const
{
	return errorCode_;
}

std::string DescribeEmrHiveTableResult::getErrorMessage()const
{
	return errorMessage_;
}

