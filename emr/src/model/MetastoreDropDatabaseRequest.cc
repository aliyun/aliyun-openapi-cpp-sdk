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

#include <alibabacloud/emr/model/MetastoreDropDatabaseRequest.h>

using AlibabaCloud::Emr::Model::MetastoreDropDatabaseRequest;

MetastoreDropDatabaseRequest::MetastoreDropDatabaseRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MetastoreDropDatabase")
{}

MetastoreDropDatabaseRequest::~MetastoreDropDatabaseRequest()
{}

long MetastoreDropDatabaseRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MetastoreDropDatabaseRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string MetastoreDropDatabaseRequest::getDbName()const
{
	return dbName_;
}

void MetastoreDropDatabaseRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string MetastoreDropDatabaseRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreDropDatabaseRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string MetastoreDropDatabaseRequest::getDatabaseId()const
{
	return databaseId_;
}

void MetastoreDropDatabaseRequest::setDatabaseId(const std::string& databaseId)
{
	databaseId_ = databaseId;
	setParameter("DatabaseId", databaseId);
}

std::string MetastoreDropDatabaseRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreDropDatabaseRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

