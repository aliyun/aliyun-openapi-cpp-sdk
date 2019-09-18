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

#include <alibabacloud/emr/model/UpdateUserGroupRequest.h>

using AlibabaCloud::Emr::Model::UpdateUserGroupRequest;

UpdateUserGroupRequest::UpdateUserGroupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "UpdateUserGroup")
{}

UpdateUserGroupRequest::~UpdateUserGroupRequest()
{}

long UpdateUserGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateUserGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::vector<long> UpdateUserGroupRequest::getRoleId()const
{
	return roleId_;
}

void UpdateUserGroupRequest::setRoleId(const std::vector<long>& roleId)
{
	roleId_ = roleId;
	for(int i = 0; i!= roleId.size(); i++)
		setCoreParameter("RoleId."+ std::to_string(i), std::to_string(roleId.at(i)));
}

std::string UpdateUserGroupRequest::getDescription()const
{
	return description_;
}

void UpdateUserGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string UpdateUserGroupRequest::getType()const
{
	return type_;
}

void UpdateUserGroupRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string UpdateUserGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateUserGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string UpdateUserGroupRequest::getRegionId()const
{
	return regionId_;
}

void UpdateUserGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UpdateUserGroupRequest::getName()const
{
	return name_;
}

void UpdateUserGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

long UpdateUserGroupRequest::getId()const
{
	return id_;
}

void UpdateUserGroupRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

