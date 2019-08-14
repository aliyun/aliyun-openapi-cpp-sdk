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
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string MetastoreListTablesRequest::getDbName()const
{
	return dbName_;
}

void MetastoreListTablesRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string MetastoreListTablesRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreListTablesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int MetastoreListTablesRequest::getPageSize()const
{
	return pageSize_;
}

void MetastoreListTablesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string MetastoreListTablesRequest::getTableId()const
{
	return tableId_;
}

void MetastoreListTablesRequest::setTableId(const std::string& tableId)
{
	tableId_ = tableId;
	setCoreParameter("TableId", tableId);
}

std::string MetastoreListTablesRequest::getDatabaseId()const
{
	return databaseId_;
}

void MetastoreListTablesRequest::setDatabaseId(const std::string& databaseId)
{
	databaseId_ = databaseId;
	setCoreParameter("DatabaseId", databaseId);
}

std::string MetastoreListTablesRequest::getTableName()const
{
	return tableName_;
}

void MetastoreListTablesRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setCoreParameter("TableName", tableName);
}

int MetastoreListTablesRequest::getPageNumber()const
{
	return pageNumber_;
}

void MetastoreListTablesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string MetastoreListTablesRequest::getFuzzyTableName()const
{
	return fuzzyTableName_;
}

void MetastoreListTablesRequest::setFuzzyTableName(const std::string& fuzzyTableName)
{
	fuzzyTableName_ = fuzzyTableName;
	setCoreParameter("FuzzyTableName", fuzzyTableName);
}

std::string MetastoreListTablesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreListTablesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

