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

#include <alibabacloud/emr/model/SaveUserAccountInfoRequest.h>

using AlibabaCloud::Emr::Model::SaveUserAccountInfoRequest;

SaveUserAccountInfoRequest::SaveUserAccountInfoRequest() :
	RpcServiceRequest("emr", "2016-04-08", "SaveUserAccountInfo")
{}

SaveUserAccountInfoRequest::~SaveUserAccountInfoRequest()
{}

long SaveUserAccountInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SaveUserAccountInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SaveUserAccountInfoRequest::getAccountType()const
{
	return accountType_;
}

void SaveUserAccountInfoRequest::setAccountType(const std::string& accountType)
{
	accountType_ = accountType;
	setCoreParameter("AccountType", accountType);
}

std::string SaveUserAccountInfoRequest::getGroupName()const
{
	return groupName_;
}

void SaveUserAccountInfoRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", groupName);
}

std::string SaveUserAccountInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SaveUserAccountInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SaveUserAccountInfoRequest::getAuthType()const
{
	return authType_;
}

void SaveUserAccountInfoRequest::setAuthType(const std::string& authType)
{
	authType_ = authType;
	setCoreParameter("AuthType", authType);
}

std::string SaveUserAccountInfoRequest::getAccountPassword()const
{
	return accountPassword_;
}

void SaveUserAccountInfoRequest::setAccountPassword(const std::string& accountPassword)
{
	accountPassword_ = accountPassword;
	setCoreParameter("AccountPassword", accountPassword);
}

std::string SaveUserAccountInfoRequest::getRegionId()const
{
	return regionId_;
}

void SaveUserAccountInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SaveUserAccountInfoRequest::getAliyunUserId()const
{
	return aliyunUserId_;
}

void SaveUserAccountInfoRequest::setAliyunUserId(const std::string& aliyunUserId)
{
	aliyunUserId_ = aliyunUserId;
	setCoreParameter("AliyunUserId", aliyunUserId);
}

