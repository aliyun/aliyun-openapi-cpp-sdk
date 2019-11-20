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

#include <alibabacloud/emr/model/CreateMetaTablePreviewTaskRequest.h>

using AlibabaCloud::Emr::Model::CreateMetaTablePreviewTaskRequest;

CreateMetaTablePreviewTaskRequest::CreateMetaTablePreviewTaskRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateMetaTablePreviewTask")
{
	setMethod(HttpRequest::Method::Post);
}

CreateMetaTablePreviewTaskRequest::~CreateMetaTablePreviewTaskRequest()
{}

long CreateMetaTablePreviewTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateMetaTablePreviewTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateMetaTablePreviewTaskRequest::getClusterId()const
{
	return clusterId_;
}

void CreateMetaTablePreviewTaskRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string CreateMetaTablePreviewTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateMetaTablePreviewTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateMetaTablePreviewTaskRequest::getPassword()const
{
	return password_;
}

void CreateMetaTablePreviewTaskRequest::setPassword(const std::string& password)
{
	password_ = password;
	setCoreParameter("Password", password);
}

std::string CreateMetaTablePreviewTaskRequest::getRegionId()const
{
	return regionId_;
}

void CreateMetaTablePreviewTaskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateMetaTablePreviewTaskRequest::getTableId()const
{
	return tableId_;
}

void CreateMetaTablePreviewTaskRequest::setTableId(const std::string& tableId)
{
	tableId_ = tableId;
	setCoreParameter("TableId", tableId);
}

std::string CreateMetaTablePreviewTaskRequest::getDatabaseId()const
{
	return databaseId_;
}

void CreateMetaTablePreviewTaskRequest::setDatabaseId(const std::string& databaseId)
{
	databaseId_ = databaseId;
	setCoreParameter("DatabaseId", databaseId);
}

std::string CreateMetaTablePreviewTaskRequest::getUser()const
{
	return user_;
}

void CreateMetaTablePreviewTaskRequest::setUser(const std::string& user)
{
	user_ = user;
	setCoreParameter("User", user);
}

