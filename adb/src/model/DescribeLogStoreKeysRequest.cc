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

#include <alibabacloud/adb/model/DescribeLogStoreKeysRequest.h>

using AlibabaCloud::Adb::Model::DescribeLogStoreKeysRequest;

DescribeLogStoreKeysRequest::DescribeLogStoreKeysRequest() :
	RpcServiceRequest("adb", "2019-03-15", "DescribeLogStoreKeys")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeLogStoreKeysRequest::~DescribeLogStoreKeysRequest()
{}

long DescribeLogStoreKeysRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeLogStoreKeysRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeLogStoreKeysRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLogStoreKeysRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeLogStoreKeysRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLogStoreKeysRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeLogStoreKeysRequest::getProjectName()const
{
	return projectName_;
}

void DescribeLogStoreKeysRequest::setProjectName(const std::string& projectName)
{
	projectName_ = projectName;
	setCoreParameter("ProjectName", projectName);
}

std::string DescribeLogStoreKeysRequest::getLogStoreName()const
{
	return logStoreName_;
}

void DescribeLogStoreKeysRequest::setLogStoreName(const std::string& logStoreName)
{
	logStoreName_ = logStoreName;
	setCoreParameter("LogStoreName", logStoreName);
}

std::string DescribeLogStoreKeysRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeLogStoreKeysRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeLogStoreKeysRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeLogStoreKeysRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeLogStoreKeysRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLogStoreKeysRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

