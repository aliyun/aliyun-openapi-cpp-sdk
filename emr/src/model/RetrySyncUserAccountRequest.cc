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

#include <alibabacloud/emr/model/RetrySyncUserAccountRequest.h>

using AlibabaCloud::Emr::Model::RetrySyncUserAccountRequest;

RetrySyncUserAccountRequest::RetrySyncUserAccountRequest() :
	RpcServiceRequest("emr", "2016-04-08", "RetrySyncUserAccount")
{}

RetrySyncUserAccountRequest::~RetrySyncUserAccountRequest()
{}

long RetrySyncUserAccountRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RetrySyncUserAccountRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RetrySyncUserAccountRequest::getResourceId()const
{
	return resourceId_;
}

void RetrySyncUserAccountRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", resourceId);
}

std::vector<std::string> RetrySyncUserAccountRequest::getAliyunUserIdList()const
{
	return aliyunUserIdList_;
}

void RetrySyncUserAccountRequest::setAliyunUserIdList(const std::vector<std::string>& aliyunUserIdList)
{
	aliyunUserIdList_ = aliyunUserIdList;
	for(int i = 0; i!= aliyunUserIdList.size(); i++)
		setCoreParameter("AliyunUserIdList."+ std::to_string(i), aliyunUserIdList.at(i));
}

std::string RetrySyncUserAccountRequest::getAccountType()const
{
	return accountType_;
}

void RetrySyncUserAccountRequest::setAccountType(const std::string& accountType)
{
	accountType_ = accountType;
	setCoreParameter("AccountType", accountType);
}

std::string RetrySyncUserAccountRequest::getResourceType()const
{
	return resourceType_;
}

void RetrySyncUserAccountRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

std::string RetrySyncUserAccountRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RetrySyncUserAccountRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string RetrySyncUserAccountRequest::getRegionId()const
{
	return regionId_;
}

void RetrySyncUserAccountRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

