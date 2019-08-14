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

#include <alibabacloud/emr/model/MetastoreDataPreviewRequest.h>

using AlibabaCloud::Emr::Model::MetastoreDataPreviewRequest;

MetastoreDataPreviewRequest::MetastoreDataPreviewRequest() :
	RpcServiceRequest("emr", "2016-04-08", "MetastoreDataPreview")
{}

MetastoreDataPreviewRequest::~MetastoreDataPreviewRequest()
{}

long MetastoreDataPreviewRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MetastoreDataPreviewRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string MetastoreDataPreviewRequest::getDbName()const
{
	return dbName_;
}

void MetastoreDataPreviewRequest::setDbName(const std::string& dbName)
{
	dbName_ = dbName;
	setCoreParameter("DbName", dbName);
}

std::string MetastoreDataPreviewRequest::getRegionId()const
{
	return regionId_;
}

void MetastoreDataPreviewRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string MetastoreDataPreviewRequest::getTableName()const
{
	return tableName_;
}

void MetastoreDataPreviewRequest::setTableName(const std::string& tableName)
{
	tableName_ = tableName;
	setCoreParameter("TableName", tableName);
}

std::string MetastoreDataPreviewRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MetastoreDataPreviewRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

