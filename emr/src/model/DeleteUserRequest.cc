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

#include <alibabacloud/emr/model/DeleteUserRequest.h>

using AlibabaCloud::Emr::Model::DeleteUserRequest;

DeleteUserRequest::DeleteUserRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DeleteUser")
{}

DeleteUserRequest::~DeleteUserRequest()
{}

long DeleteUserRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteUserRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteUserRequest::getRegionId()const
{
	return regionId_;
}

void DeleteUserRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteUserRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteUserRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string DeleteUserRequest::getType()const
{
	return type_;
}

void DeleteUserRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string DeleteUserRequest::getUserId()const
{
	return userId_;
}

void DeleteUserRequest::setUserId(const std::string& userId)
{
	userId_ = userId;
	setCoreParameter("UserId", userId);
}

std::string DeleteUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

