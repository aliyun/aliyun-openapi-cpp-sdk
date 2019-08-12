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

#include <alibabacloud/emr/model/MetastoreDescribeDatabaseRequest.h>

using AlibabaCloud::Emr::Model::MetastoreDescribeDatabaseRequest;

MetastoreDescribeDatabaseRequest::MetastoreDescribeDatabaseRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MetastoreDescribeDatabase")
{}

MetastoreDescribeDatabaseRequest::~MetastoreDescribeDatabaseRequest()
{}

long MetastoreDescribeDatabaseRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MetastoreDescribeDatabaseRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string MetastoreDescribeDatabaseRequest::getDbName()const
{
	return dbName_;
}

void MetastoreDescribeDatabaseRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", std::to_string(dbName));
}

std::string MetastoreDescribeDatabaseRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreDescribeDatabaseRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string MetastoreDescribeDatabaseRequest::getId()const
{
	return id_;
}

void MetastoreDescribeDatabaseRequest::setId(const std::string& id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

std::string MetastoreDescribeDatabaseRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreDescribeDatabaseRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

