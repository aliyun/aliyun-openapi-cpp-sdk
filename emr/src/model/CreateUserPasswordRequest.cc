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

#include <alibabacloud/emr/model/CreateUserPasswordRequest.h>

using AlibabaCloud::Emr::Model::CreateUserPasswordRequest;

CreateUserPasswordRequest::CreateUserPasswordRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateUserPassword")
{}

CreateUserPasswordRequest::~CreateUserPasswordRequest()
{}

long CreateUserPasswordRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateUserPasswordRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateUserPasswordRequest::getPassword()const
{
	return password_;
}

void CreateUserPasswordRequest::setPassword(const std::string& password)
{
	password_ = password;
	setCoreParameter("Password", std::to_string(password));
}

std::string CreateUserPasswordRequest::getRegionId()const
{
	return regionId_;
}

void CreateUserPasswordRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateUserPasswordRequest::getClusterId()const
{
	return clusterId_;
}

void CreateUserPasswordRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", std::to_string(clusterId));
}

std::vector<CreateUserPasswordRequest::UserInfo> CreateUserPasswordRequest::getUserInfo()const
{
	return userInfo_;
}

void CreateUserPasswordRequest::setUserInfo(const std::vector<UserInfo>& userInfo)
{
	userInfo_ = userInfo;
	int i = 0;
	for(int i = 0; i!= userInfo.size(); i++)	{
		auto obj = userInfo.at(i);
		std::string str ="UserInfo."+ std::to_string(i);
		setCoreParameter(str + ".Type", std::to_string(obj.type));
		setCoreParameter(str + ".GroupName", std::to_string(obj.groupName));
		setCoreParameter(str + ".UserId", std::to_string(obj.userId));
		setCoreParameter(str + ".UserName", std::to_string(obj.userName));
	}
}

std::string CreateUserPasswordRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateUserPasswordRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

