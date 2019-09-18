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

#include <alibabacloud/emr/model/UpdateUserRequest.h>

using AlibabaCloud::Emr::Model::UpdateUserRequest;

UpdateUserRequest::UpdateUserRequest() :
	RpcServiceRequest("emr", "2016-04-08", "UpdateUser")
{}

UpdateUserRequest::~UpdateUserRequest()
{}

long UpdateUserRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateUserRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateUserRequest::getUserType()const
{
	return userType_;
}

void UpdateUserRequest::setUserType(const std::string& userType)
{
	userType_ = userType;
	setCoreParameter("UserType", userType);
}

std::string UpdateUserRequest::getDescription()const
{
	return description_;
}

void UpdateUserRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string UpdateUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::vector<UpdateUserRequest::UserAccountParamList> UpdateUserRequest::getUserAccountParamList()const
{
	return userAccountParamList_;
}

void UpdateUserRequest::setUserAccountParamList(const std::vector<UserAccountParamList>& userAccountParamList)
{
	userAccountParamList_ = userAccountParamList;
	int i = 0;
	for(int i = 0; i!= userAccountParamList.size(); i++)	{
		auto obj = userAccountParamList.at(i);
		std::string str ="UserAccountParamList."+ std::to_string(i);
		setCoreParameter(str + ".AccountType", obj.accountType);
		setCoreParameter(str + ".AuthType", obj.authType);
		setCoreParameter(str + ".AccountPassword", obj.accountPassword);
	}
}

std::vector<long> UpdateUserRequest::getGroupIdList()const
{
	return groupIdList_;
}

void UpdateUserRequest::setGroupIdList(const std::vector<long>& groupIdList)
{
	groupIdList_ = groupIdList;
	for(int i = 0; i!= groupIdList.size(); i++)
		setCoreParameter("GroupIdList."+ std::to_string(i), std::to_string(groupIdList.at(i)));
}

std::string UpdateUserRequest::getRegionId()const
{
	return regionId_;
}

void UpdateUserRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<long> UpdateUserRequest::getRoleIdList()const
{
	return roleIdList_;
}

void UpdateUserRequest::setRoleIdList(const std::vector<long>& roleIdList)
{
	roleIdList_ = roleIdList;
	for(int i = 0; i!= roleIdList.size(); i++)
		setCoreParameter("RoleIdList."+ std::to_string(i), std::to_string(roleIdList.at(i)));
}

std::string UpdateUserRequest::getAliyunUserId()const
{
	return aliyunUserId_;
}

void UpdateUserRequest::setAliyunUserId(const std::string& aliyunUserId)
{
	aliyunUserId_ = aliyunUserId;
	setCoreParameter("AliyunUserId", aliyunUserId);
}

std::string UpdateUserRequest::getUserName()const
{
	return userName_;
}

void UpdateUserRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setCoreParameter("UserName", userName);
}

std::string UpdateUserRequest::getStatus()const
{
	return status_;
}

void UpdateUserRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

