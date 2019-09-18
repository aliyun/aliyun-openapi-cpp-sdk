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

#include <alibabacloud/emr/model/AddResourceToUsersRequest.h>

using AlibabaCloud::Emr::Model::AddResourceToUsersRequest;

AddResourceToUsersRequest::AddResourceToUsersRequest() :
	RpcServiceRequest("emr", "2016-04-08", "AddResourceToUsers")
{}

AddResourceToUsersRequest::~AddResourceToUsersRequest()
{}

long AddResourceToUsersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddResourceToUsersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddResourceToUsersRequest::getResourceId()const
{
	return resourceId_;
}

void AddResourceToUsersRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", resourceId);
}

std::vector<std::string> AddResourceToUsersRequest::getUserIdList()const
{
	return userIdList_;
}

void AddResourceToUsersRequest::setUserIdList(const std::vector<std::string>& userIdList)
{
	userIdList_ = userIdList;
	for(int i = 0; i!= userIdList.size(); i++)
		setCoreParameter("UserIdList."+ std::to_string(i), userIdList.at(i));
}

std::string AddResourceToUsersRequest::getResourceType()const
{
	return resourceType_;
}

void AddResourceToUsersRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

std::string AddResourceToUsersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddResourceToUsersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string AddResourceToUsersRequest::getRegionId()const
{
	return regionId_;
}

void AddResourceToUsersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<long> AddResourceToUsersRequest::getRoleIdList()const
{
	return roleIdList_;
}

void AddResourceToUsersRequest::setRoleIdList(const std::vector<long>& roleIdList)
{
	roleIdList_ = roleIdList;
	for(int i = 0; i!= roleIdList.size(); i++)
		setCoreParameter("RoleIdList."+ std::to_string(i), std::to_string(roleIdList.at(i)));
}

