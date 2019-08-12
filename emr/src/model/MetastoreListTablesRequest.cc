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

#include <alibabacloud/emr/model/MetastoreListTablesRequest.h>

using AlibabaCloud::Emr::Model::MetastoreListTablesRequest;

MetastoreListTablesRequest::MetastoreListTablesRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MetastoreListTables")
{}

MetastoreListTablesRequest::~MetastoreListTablesRequest()
{}

long MetastoreListTablesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MetastoreListTablesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string MetastoreListTablesRequest::getDbName()const
{
	return dbName_;
}

void MetastoreListTablesRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", std::to_string(dbName));
}

std::string MetastoreListTablesRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreListTablesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

int MetastoreListTablesRequest::getPageSize()const
{
	return pageSize_;
}

void MetastoreListTablesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string MetastoreListTablesRequest::getTableId()const
{
	return tableId_;
}

void MetastoreListTablesRequest::setTableId(const std::string& tableId)
{
	tableId_ = tableId;
	setCoreParameter("TableId", std::to_string(tableId));
}

std::string MetastoreListTablesRequest::getDatabaseId()const
{
	return databaseId_;
}

void MetastoreListTablesRequest::setDatabaseId(const std::string& databaseId)
{
	databaseId_ = databaseId;
	setCoreParameter("DatabaseId", std::to_string(databaseId));
}

std::string MetastoreListTablesRequest::getTableName()const
{
	return tableName_;
}

void MetastoreListTablesRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setCoreParameter("TableName", std::to_string(tableName));
}

int MetastoreListTablesRequest::getPageNumber()const
{
	return pageNumber_;
}

void MetastoreListTablesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string MetastoreListTablesRequest::getFuzzyTableName()const
{
	return fuzzyTableName_;
}

void MetastoreListTablesRequest::setFuzzyTableName(const std::string& fuzzyTableName)
{
	fuzzyTableName_ = fuzzyTableName;
	setCoreParameter("FuzzyTableName", std::to_string(fuzzyTableName));
}

std::string MetastoreListTablesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreListTablesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

