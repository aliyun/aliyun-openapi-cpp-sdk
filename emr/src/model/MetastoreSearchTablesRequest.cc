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

#include <alibabacloud/emr/model/MetastoreSearchTablesRequest.h>

using AlibabaCloud::Emr::Model::MetastoreSearchTablesRequest;

MetastoreSearchTablesRequest::MetastoreSearchTablesRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MetastoreSearchTables")
{}

MetastoreSearchTablesRequest::~MetastoreSearchTablesRequest()
{}

long MetastoreSearchTablesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MetastoreSearchTablesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string MetastoreSearchTablesRequest::getDbName()const
{
	return dbName_;
}

void MetastoreSearchTablesRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string MetastoreSearchTablesRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreSearchTablesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string MetastoreSearchTablesRequest::getTableName()const
{
	return tableName_;
}

void MetastoreSearchTablesRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setCoreParameter("TableName", tableName);
}

std::string MetastoreSearchTablesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreSearchTablesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

