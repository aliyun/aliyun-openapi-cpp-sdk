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

#include <alibabacloud/rds/model/ReplaceDedicatedHostRequest.h>

using AlibabaCloud::Rds::Model::ReplaceDedicatedHostRequest;

ReplaceDedicatedHostRequest::ReplaceDedicatedHostRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ReplaceDedicatedHost")
{
	setMethod(HttpRequest::Method::Post);
}

ReplaceDedicatedHostRequest::~ReplaceDedicatedHostRequest()
{}

long ReplaceDedicatedHostRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReplaceDedicatedHostRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ReplaceDedicatedHostRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReplaceDedicatedHostRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ReplaceDedicatedHostRequest::getDedicatedHostId()const
{
	return dedicatedHostId_;
}

void ReplaceDedicatedHostRequest::setDedicatedHostId(const std::string& dedicatedHostId)
{
	dedicatedHostId_ = dedicatedHostId;
	setCoreParameter("DedicatedHostId", dedicatedHostId);
}

long ReplaceDedicatedHostRequest::getOwnerId()const
{
	return ownerId_;
}

void ReplaceDedicatedHostRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ReplaceDedicatedHostRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReplaceDedicatedHostRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ReplaceDedicatedHostRequest::getRegionId()const
{
	return regionId_;
}

void ReplaceDedicatedHostRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ReplaceDedicatedHostRequest::getFailoverMode()const
{
	return failoverMode_;
}

void ReplaceDedicatedHostRequest::setFailoverMode(const std::string& failoverMode)
{
	failoverMode_ = failoverMode;
	setCoreParameter("FailoverMode", failoverMode);
}

