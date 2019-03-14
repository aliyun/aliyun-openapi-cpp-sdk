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

#include <alibabacloud/emr/model/MetastoreCreateDatabaseRequest.h>

using AlibabaCloud::Emr::Model::MetastoreCreateDatabaseRequest;

MetastoreCreateDatabaseRequest::MetastoreCreateDatabaseRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MetastoreCreateDatabase")
{}

MetastoreCreateDatabaseRequest::~MetastoreCreateDatabaseRequest()
{}

std::string MetastoreCreateDatabaseRequest::getDbSource()const
{
	return dbSource_;
}

void MetastoreCreateDatabaseRequest::setDbSource(const std::string& dbSource)
{
	dbSource_ = dbSource;
	setParameter("DbSource", dbSource);
}

long MetastoreCreateDatabaseRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MetastoreCreateDatabaseRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string MetastoreCreateDatabaseRequest::getDbName()const
{
	return dbName_;
}

void MetastoreCreateDatabaseRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setParameter("DbName", dbName);
}

std::string MetastoreCreateDatabaseRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreCreateDatabaseRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string MetastoreCreateDatabaseRequest::getDataSourceId()const
{
	return dataSourceId_;
}

void MetastoreCreateDatabaseRequest::setDataSourceId(const std::string& dataSourceId)
{
	dataSourceId_ = dataSourceId;
	setParameter("DataSourceId", dataSourceId);
}

std::string MetastoreCreateDatabaseRequest::getDescription()const
{
	return description_;
}

void MetastoreCreateDatabaseRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string MetastoreCreateDatabaseRequest::getComment()const
{
	return comment_;
}

void MetastoreCreateDatabaseRequest::setComment(const std::string& comment)
{
	comment_ = comment;
	setParameter("Comment", comment);
}

std::string MetastoreCreateDatabaseRequest::getLocationUri()const
{
	return locationUri_;
}

void MetastoreCreateDatabaseRequest::setLocationUri(const std::string& locationUri)
{
	locationUri_ = locationUri;
	setParameter("LocationUri", locationUri);
}

std::string MetastoreCreateDatabaseRequest::getClusterBizId()const
{
	return clusterBizId_;
}

void MetastoreCreateDatabaseRequest::setClusterBizId(const std::string& clusterBizId)
{
	clusterBizId_ = clusterBizId;
	setParameter("ClusterBizId", clusterBizId);
}

std::string MetastoreCreateDatabaseRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreCreateDatabaseRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

