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

#include <alibabacloud/dataworks-public/model/ListEmrHiveTablesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListEmrHiveTablesResult::ListEmrHiveTablesResult() :
	ServiceResult()
{}

ListEmrHiveTablesResult::ListEmrHiveTablesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEmrHiveTablesResult::~ListEmrHiveTablesResult()
{}

void ListEmrHiveTablesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["PageNumber"].isNull())
		data_.pageNumber = std::stoi(dataNode["PageNumber"].asString());
	if(!dataNode["PageSize"].isNull())
		data_.pageSize = std::stoi(dataNode["PageSize"].asString());
	if(!dataNode["TotalCount"].isNull())
		data_.totalCount = std::stoi(dataNode["TotalCount"].asString());
	auto allPagedDataNode = dataNode["PagedData"]["HiveTables"];
	for (auto dataNodePagedDataHiveTables : allPagedDataNode)
	{
		Data::HiveTables hiveTablesObject;
		if(!dataNodePagedDataHiveTables["ClusterBizId"].isNull())
			hiveTablesObject.clusterBizId = dataNodePagedDataHiveTables["ClusterBizId"].asString();
		if(!dataNodePagedDataHiveTables["TableName"].isNull())
			hiveTablesObject.tableName = dataNodePagedDataHiveTables["TableName"].asString();
		if(!dataNodePagedDataHiveTables["TableType"].isNull())
			hiveTablesObject.tableType = dataNodePagedDataHiveTables["TableType"].asString();
		if(!dataNodePagedDataHiveTables["Owner"].isNull())
			hiveTablesObject.owner = dataNodePagedDataHiveTables["Owner"].asString();
		if(!dataNodePagedDataHiveTables["OwnerType"].isNull())
			hiveTablesObject.ownerType = dataNodePagedDataHiveTables["OwnerType"].asString();
		if(!dataNodePagedDataHiveTables["IsTemporary"].isNull())
			hiveTablesObject.isTemporary = dataNodePagedDataHiveTables["IsTemporary"].asString() == "true";
		if(!dataNodePagedDataHiveTables["SerializationLib"].isNull())
			hiveTablesObject.serializationLib = dataNodePagedDataHiveTables["SerializationLib"].asString();
		if(!dataNodePagedDataHiveTables["InputFormat"].isNull())
			hiveTablesObject.inputFormat = dataNodePagedDataHiveTables["InputFormat"].asString();
		if(!dataNodePagedDataHiveTables["OutputFormat"].isNull())
			hiveTablesObject.outputFormat = dataNodePagedDataHiveTables["OutputFormat"].asString();
		if(!dataNodePagedDataHiveTables["Location"].isNull())
			hiveTablesObject.location = dataNodePagedDataHiveTables["Location"].asString();
		if(!dataNodePagedDataHiveTables["LastAccessTime"].isNull())
			hiveTablesObject.lastAccessTime = dataNodePagedDataHiveTables["LastAccessTime"].asString();
		if(!dataNodePagedDataHiveTables["GmtCreate"].isNull())
			hiveTablesObject.gmtCreate = dataNodePagedDataHiveTables["GmtCreate"].asString();
		if(!dataNodePagedDataHiveTables["GmtModified"].isNull())
			hiveTablesObject.gmtModified = dataNodePagedDataHiveTables["GmtModified"].asString();
		if(!dataNodePagedDataHiveTables["TableComment"].isNull())
			hiveTablesObject.tableComment = dataNodePagedDataHiveTables["TableComment"].asString();
		if(!dataNodePagedDataHiveTables["TableParameters"].isNull())
			hiveTablesObject.tableParameters = dataNodePagedDataHiveTables["TableParameters"].asString();
		if(!dataNodePagedDataHiveTables["PartitionKeys"].isNull())
			hiveTablesObject.partitionKeys = dataNodePagedDataHiveTables["PartitionKeys"].asString();
		if(!dataNodePagedDataHiveTables["IsCompressed"].isNull())
			hiveTablesObject.isCompressed = dataNodePagedDataHiveTables["IsCompressed"].asString() == "true";
		if(!dataNodePagedDataHiveTables["ClusterBizName"].isNull())
			hiveTablesObject.clusterBizName = dataNodePagedDataHiveTables["ClusterBizName"].asString();
		if(!dataNodePagedDataHiveTables["DatabaseName"].isNull())
			hiveTablesObject.databaseName = dataNodePagedDataHiveTables["DatabaseName"].asString();
		if(!dataNodePagedDataHiveTables["OwnerId"].isNull())
			hiveTablesObject.ownerId = dataNodePagedDataHiveTables["OwnerId"].asString();
		if(!dataNodePagedDataHiveTables["LastModifyTime"].isNull())
			hiveTablesObject.lastModifyTime = dataNodePagedDataHiveTables["LastModifyTime"].asString();
		if(!dataNodePagedDataHiveTables["TableDesc"].isNull())
			hiveTablesObject.tableDesc = dataNodePagedDataHiveTables["TableDesc"].asString();
		data_.pagedData.push_back(hiveTablesObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();

}

ListEmrHiveTablesResult::Data ListEmrHiveTablesResult::getData()const
{
	return data_;
}

std::string ListEmrHiveTablesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListEmrHiveTablesResult::getErrorMessage()const
{
	return errorMessage_;
}

