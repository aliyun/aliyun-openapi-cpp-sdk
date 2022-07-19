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

#include <alibabacloud/dataworks-public/model/GetMetaTableBasicInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetMetaTableBasicInfoResult::GetMetaTableBasicInfoResult() :
	ServiceResult()
{}

GetMetaTableBasicInfoResult::GetMetaTableBasicInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetMetaTableBasicInfoResult::~GetMetaTableBasicInfoResult()
{}

void GetMetaTableBasicInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["TableName"].isNull())
		data_.tableName = dataNode["TableName"].asString();
	if(!dataNode["FavoriteCount"].isNull())
		data_.favoriteCount = std::stol(dataNode["FavoriteCount"].asString());
	if(!dataNode["Comment"].isNull())
		data_.comment = dataNode["Comment"].asString();
	if(!dataNode["ColumnCount"].isNull())
		data_.columnCount = std::stoi(dataNode["ColumnCount"].asString());
	if(!dataNode["CreateTime"].isNull())
		data_.createTime = std::stol(dataNode["CreateTime"].asString());
	if(!dataNode["ProjectId"].isNull())
		data_.projectId = std::stol(dataNode["ProjectId"].asString());
	if(!dataNode["OwnerId"].isNull())
		data_.ownerId = dataNode["OwnerId"].asString();
	if(!dataNode["EnvType"].isNull())
		data_.envType = std::stoi(dataNode["EnvType"].asString());
	if(!dataNode["DatabaseName"].isNull())
		data_.databaseName = dataNode["DatabaseName"].asString();
	if(!dataNode["IsVisible"].isNull())
		data_.isVisible = std::stoi(dataNode["IsVisible"].asString());
	if(!dataNode["TableGuid"].isNull())
		data_.tableGuid = dataNode["TableGuid"].asString();
	if(!dataNode["ReadCount"].isNull())
		data_.readCount = std::stol(dataNode["ReadCount"].asString());
	if(!dataNode["ClusterId"].isNull())
		data_.clusterId = dataNode["ClusterId"].asString();
	if(!dataNode["IsPartitionTable"].isNull())
		data_.isPartitionTable = dataNode["IsPartitionTable"].asString() == "true";
	if(!dataNode["IsView"].isNull())
		data_.isView = dataNode["IsView"].asString() == "true";
	if(!dataNode["LifeCycle"].isNull())
		data_.lifeCycle = std::stoi(dataNode["LifeCycle"].asString());
	if(!dataNode["ProjectName"].isNull())
		data_.projectName = dataNode["ProjectName"].asString();
	if(!dataNode["ViewCount"].isNull())
		data_.viewCount = std::stol(dataNode["ViewCount"].asString());
	if(!dataNode["LastAccessTime"].isNull())
		data_.lastAccessTime = std::stol(dataNode["LastAccessTime"].asString());
	if(!dataNode["DataSize"].isNull())
		data_.dataSize = std::stol(dataNode["DataSize"].asString());
	if(!dataNode["LastModifyTime"].isNull())
		data_.lastModifyTime = std::stol(dataNode["LastModifyTime"].asString());
	if(!dataNode["LastDdlTime"].isNull())
		data_.lastDdlTime = std::stol(dataNode["LastDdlTime"].asString());
	if(!dataNode["PartitionKeys"].isNull())
		data_.partitionKeys = dataNode["PartitionKeys"].asString();
	if(!dataNode["Location"].isNull())
		data_.location = dataNode["Location"].asString();
	if(!dataNode["Caption"].isNull())
		data_.caption = dataNode["Caption"].asString();
	if(!dataNode["TenantId"].isNull())
		data_.tenantId = std::stol(dataNode["TenantId"].asString());
	if(!dataNode["Schema"].isNull())
		data_.schema = dataNode["Schema"].asString();
	if(!value["HttpStatusCode"].isNull())
		httpStatusCode_ = std::stoi(value["HttpStatusCode"].asString());
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();

}

int GetMetaTableBasicInfoResult::getHttpStatusCode()const
{
	return httpStatusCode_;
}

GetMetaTableBasicInfoResult::Data GetMetaTableBasicInfoResult::getData()const
{
	return data_;
}

std::string GetMetaTableBasicInfoResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetMetaTableBasicInfoResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetMetaTableBasicInfoResult::getSuccess()const
{
	return success_;
}

