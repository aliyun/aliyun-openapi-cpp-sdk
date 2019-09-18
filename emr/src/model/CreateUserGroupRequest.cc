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

#include <alibabacloud/emr/model/CreateUserGroupRequest.h>

using AlibabaCloud::Emr::Model::CreateUserGroupRequest;

CreateUserGroupRequest::CreateUserGroupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateUserGroup")
{}

CreateUserGroupRequest::~CreateUserGroupRequest()
{}

long CreateUserGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateUserGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateUserGroupRequest::getDescription()const
{
	return description_;
}

void CreateUserGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateUserGroupRequest::getType()const
{
	return type_;
}

void CreateUserGroupRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string CreateUserGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateUserGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateUserGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateUserGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateUserGroupRequest::getName()const
{
	return name_;
}

void CreateUserGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::vector<long> CreateUserGroupRequest::getRoleIdList()const
{
	return roleIdList_;
}

void CreateUserGroupRequest::setRoleIdList(const std::vector<long>& roleIdList)
{
	roleIdList_ = roleIdList;
	for(int i = 0; i!= roleIdList.size(); i++)
		setCoreParameter("RoleIdList."+ std::to_string(i), std::to_string(roleIdList.at(i)));
}

