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

#include <alibabacloud/emr/model/ModifyAlertUserGroupRequest.h>

using AlibabaCloud::Emr::Model::ModifyAlertUserGroupRequest;

ModifyAlertUserGroupRequest::ModifyAlertUserGroupRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ModifyAlertUserGroup")
{}

ModifyAlertUserGroupRequest::~ModifyAlertUserGroupRequest()
{}

std::string ModifyAlertUserGroupRequest::getUserList()const
{
	return userList_;
}

void ModifyAlertUserGroupRequest::setUserList(const std::string& userList)
{
	userList_ = userList;
	setCoreParameter("UserList", userList);
}

long ModifyAlertUserGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyAlertUserGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyAlertUserGroupRequest::getDescription()const
{
	return description_;
}

void ModifyAlertUserGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ModifyAlertUserGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyAlertUserGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyAlertUserGroupRequest::getRegionId()const
{
	return regionId_;
}

void ModifyAlertUserGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyAlertUserGroupRequest::getBizId()const
{
	return bizId_;
}

void ModifyAlertUserGroupRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setCoreParameter("BizId", bizId);
}

std::string ModifyAlertUserGroupRequest::getName()const
{
	return name_;
}

void ModifyAlertUserGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

