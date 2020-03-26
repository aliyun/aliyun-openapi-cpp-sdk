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

#include <alibabacloud/emr/model/CreateUserRequest.h>

using AlibabaCloud::Emr::Model::CreateUserRequest;

CreateUserRequest::CreateUserRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateUser")
{
	setMethod(HttpRequest::Method::Post);
}

CreateUserRequest::~CreateUserRequest()
{}

long CreateUserRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateUserRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateUserRequest::getUserType()const
{
	return userType_;
}

void CreateUserRequest::setUserType(const std::string& userType)
{
	userType_ = userType;
	setParameter("UserType", userType);
}

std::string CreateUserRequest::getDescription()const
{
	return description_;
}

void CreateUserRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::vector<CreateUserRequest::UserAccountParamList> CreateUserRequest::getUserAccountParamList()const
{
	return userAccountParamList_;
}

void CreateUserRequest::setUserAccountParamList(const std::vector<UserAccountParamList>& userAccountParamList)
{
	userAccountParamList_ = userAccountParamList;
	for(int dep1 = 0; dep1!= userAccountParamList.size(); dep1++) {
		auto userAccountParamListObj = userAccountParamList.at(dep1);
		std::string userAccountParamListObjStr = "UserAccountParamList." + std::to_string(dep1 + 1);
		setParameter(userAccountParamListObjStr + ".AccountType", userAccountParamListObj.accountType);
		setParameter(userAccountParamListObjStr + ".AuthType", userAccountParamListObj.authType);
		setParameter(userAccountParamListObjStr + ".AccountPassword", userAccountParamListObj.accountPassword);
	}
}

std::vector<long> CreateUserRequest::getGroupIdList()const
{
	return groupIdList_;
}

void CreateUserRequest::setGroupIdList(const std::vector<long>& groupIdList)
{
	groupIdList_ = groupIdList;
	for(int dep1 = 0; dep1!= groupIdList.size(); dep1++) {
		setParameter("GroupIdList."+ std::to_string(dep1), std::to_string(groupIdList.at(dep1)));
	}
}

std::string CreateUserRequest::getRegionId()const
{
	return regionId_;
}

void CreateUserRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::vector<long> CreateUserRequest::getRoleIdList()const
{
	return roleIdList_;
}

void CreateUserRequest::setRoleIdList(const std::vector<long>& roleIdList)
{
	roleIdList_ = roleIdList;
	for(int dep1 = 0; dep1!= roleIdList.size(); dep1++) {
		setParameter("RoleIdList."+ std::to_string(dep1), std::to_string(roleIdList.at(dep1)));
	}
}

std::string CreateUserRequest::getAliyunUserId()const
{
	return aliyunUserId_;
}

void CreateUserRequest::setAliyunUserId(const std::string& aliyunUserId)
{
	aliyunUserId_ = aliyunUserId;
	setParameter("AliyunUserId", aliyunUserId);
}

std::string CreateUserRequest::getUserName()const
{
	return userName_;
}

void CreateUserRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

std::string CreateUserRequest::getStatus()const
{
	return status_;
}

void CreateUserRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

