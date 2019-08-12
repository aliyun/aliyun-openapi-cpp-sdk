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

#include <alibabacloud/emr/model/ListUsersRequest.h>

using AlibabaCloud::Emr::Model::ListUsersRequest;

ListUsersRequest::ListUsersRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListUsers")
{}

ListUsersRequest::~ListUsersRequest()
{}

long ListUsersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListUsersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ListUsersRequest::getRegionId()const
{
	return regionId_;
}

void ListUsersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ListUsersRequest::getClusterId()const
{
	return clusterId_;
}

void ListUsersRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

std::string ListUsersRequest::getType()const
{
	return type_;
}

void ListUsersRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string ListUsersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListUsersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

