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

#include <alibabacloud/emr/model/CreateAlertUserGroupRequest.h>

using AlibabaCloud::Emr::Model::CreateAlertUserGroupRequest;

CreateAlertUserGroupRequest::CreateAlertUserGroupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateAlertUserGroup")
{}

CreateAlertUserGroupRequest::~CreateAlertUserGroupRequest()
{}

std::string CreateAlertUserGroupRequest::getUserList()const
{
	return userList_;
}

void CreateAlertUserGroupRequest::setUserList(const std::string& userList)
{
	userList_ = userList;
	setCoreParameter("UserList", userList);
}

long CreateAlertUserGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateAlertUserGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateAlertUserGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateAlertUserGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateAlertUserGroupRequest::getName()const
{
	return name_;
}

void CreateAlertUserGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string CreateAlertUserGroupRequest::getDescription()const
{
	return description_;
}

void CreateAlertUserGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateAlertUserGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateAlertUserGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

