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

#include <alibabacloud/emr/model/SaveBatchUserAccountInfoRequest.h>

using AlibabaCloud::Emr::Model::SaveBatchUserAccountInfoRequest;

SaveBatchUserAccountInfoRequest::SaveBatchUserAccountInfoRequest() :
	RpcServiceRequest("emr", "2016-04-08", "SaveBatchUserAccountInfo")
{}

SaveBatchUserAccountInfoRequest::~SaveBatchUserAccountInfoRequest()
{}

long SaveBatchUserAccountInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SaveBatchUserAccountInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SaveBatchUserAccountInfoRequest::getResourceId()const
{
	return resourceId_;
}

void SaveBatchUserAccountInfoRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", resourceId);
}

std::vector<std::string> SaveBatchUserAccountInfoRequest::getAliyunUserIdList()const
{
	return aliyunUserIdList_;
}

void SaveBatchUserAccountInfoRequest::setAliyunUserIdList(const std::vector<std::string>& aliyunUserIdList)
{
	aliyunUserIdList_ = aliyunUserIdList;
	for(int i = 0; i!= aliyunUserIdList.size(); i++)
		setCoreParameter("AliyunUserIdList."+ std::to_string(i), aliyunUserIdList.at(i));
}

std::string SaveBatchUserAccountInfoRequest::getAccountType()const
{
	return accountType_;
}

void SaveBatchUserAccountInfoRequest::setAccountType(const std::string& accountType)
{
	accountType_ = accountType;
	setCoreParameter("AccountType", accountType);
}

std::string SaveBatchUserAccountInfoRequest::getGroupName()const
{
	return groupName_;
}

void SaveBatchUserAccountInfoRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", groupName);
}

std::string SaveBatchUserAccountInfoRequest::getResourceType()const
{
	return resourceType_;
}

void SaveBatchUserAccountInfoRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

std::string SaveBatchUserAccountInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SaveBatchUserAccountInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SaveBatchUserAccountInfoRequest::getAuthType()const
{
	return authType_;
}

void SaveBatchUserAccountInfoRequest::setAuthType(const std::string& authType)
{
	authType_ = authType;
	setCoreParameter("AuthType", authType);
}

std::string SaveBatchUserAccountInfoRequest::getAccountPassword()const
{
	return accountPassword_;
}

void SaveBatchUserAccountInfoRequest::setAccountPassword(const std::string& accountPassword)
{
	accountPassword_ = accountPassword;
	setCoreParameter("AccountPassword", accountPassword);
}

std::string SaveBatchUserAccountInfoRequest::getRegionId()const
{
	return regionId_;
}

void SaveBatchUserAccountInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

