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

#include <alibabacloud/emr/model/SyncDataSourceSchemaDatabaseRequest.h>

using AlibabaCloud::Emr::Model::SyncDataSourceSchemaDatabaseRequest;

SyncDataSourceSchemaDatabaseRequest::SyncDataSourceSchemaDatabaseRequest() :
	RpcServiceRequest("emr", "2016-04-08", "SyncDataSourceSchemaDatabase")
{}

SyncDataSourceSchemaDatabaseRequest::~SyncDataSourceSchemaDatabaseRequest()
{}

long SyncDataSourceSchemaDatabaseRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SyncDataSourceSchemaDatabaseRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SyncDataSourceSchemaDatabaseRequest::getDbName()const
{
	return dbName_;
}

void SyncDataSourceSchemaDatabaseRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string SyncDataSourceSchemaDatabaseRequest::getRegionId()const
{
	return regionId_;
}

void SyncDataSourceSchemaDatabaseRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SyncDataSourceSchemaDatabaseRequest::getEtlJobId()const
{
	return etlJobId_;
}

void SyncDataSourceSchemaDatabaseRequest::setEtlJobId(const std::string& etlJobId)
{
	etlJobId_ = etlJobId;
	setCoreParameter("EtlJobId", etlJobId);
}

std::string SyncDataSourceSchemaDatabaseRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void SyncDataSourceSchemaDatabaseRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setCoreParameter("DataSourceId", dataSourceId);
}

std::string SyncDataSourceSchemaDatabaseRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SyncDataSourceSchemaDatabaseRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

