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

#include <alibabacloud/emr/model/SyncDataSourceSchemaTableRequest.h>

using AlibabaCloud::Emr::Model::SyncDataSourceSchemaTableRequest;

SyncDataSourceSchemaTableRequest::SyncDataSourceSchemaTableRequest() :
	RpcServiceRequest("emr", "2016-04-08", "SyncDataSourceSchemaTable")
{}

SyncDataSourceSchemaTableRequest::~SyncDataSourceSchemaTableRequest()
{}

long SyncDataSourceSchemaTableRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SyncDataSourceSchemaTableRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SyncDataSourceSchemaTableRequest::getDbName()const
{
	return dbName_;
}

void SyncDataSourceSchemaTableRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", std::to_string(dbName));
}

std::string SyncDataSourceSchemaTableRequest::getRegionId()const
{
	return regionId_;
}

void SyncDataSourceSchemaTableRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string SyncDataSourceSchemaTableRequest::getEtlJobId()const
{
	return etlJobId_;
}

void SyncDataSourceSchemaTableRequest::setEtlJobId(const std::string& etlJobId)
{
	etlJobId_ = etlJobId;
	setCoreParameter("EtlJobId", std::to_string(etlJobId));
}

std::string SyncDataSourceSchemaTableRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void SyncDataSourceSchemaTableRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setCoreParameter("DataSourceId", std::to_string(dataSourceId));
}

std::string SyncDataSourceSchemaTableRequest::getTableName()const
{
	return tableName_;
}

void SyncDataSourceSchemaTableRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setCoreParameter("TableName", std::to_string(tableName));
}

std::string SyncDataSourceSchemaTableRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SyncDataSourceSchemaTableRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

