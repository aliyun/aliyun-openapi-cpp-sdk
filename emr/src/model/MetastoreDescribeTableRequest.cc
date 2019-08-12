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

#include <alibabacloud/emr/model/MetastoreDescribeTableRequest.h>

using AlibabaCloud::Emr::Model::MetastoreDescribeTableRequest;

MetastoreDescribeTableRequest::MetastoreDescribeTableRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MetastoreDescribeTable")
{}

MetastoreDescribeTableRequest::~MetastoreDescribeTableRequest()
{}

long MetastoreDescribeTableRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MetastoreDescribeTableRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string MetastoreDescribeTableRequest::getDbName()const
{
	return dbName_;
}

void MetastoreDescribeTableRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", std::to_string(dbName));
}

std::string MetastoreDescribeTableRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreDescribeTableRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string MetastoreDescribeTableRequest::getId()const
{
	return id_;
}

void MetastoreDescribeTableRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string MetastoreDescribeTableRequest::getTableName()const
{
	return tableName_;
}

void MetastoreDescribeTableRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setCoreParameter("TableName", std::to_string(tableName));
}

std::string MetastoreDescribeTableRequest::getDatabaseId()const
{
	return databaseId_;
}

void MetastoreDescribeTableRequest::setDatabaseId(const std::string& databaseId)
{
	databaseId_ = databaseId;
	setCoreParameter("DatabaseId", std::to_string(databaseId));
}

std::string MetastoreDescribeTableRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreDescribeTableRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

