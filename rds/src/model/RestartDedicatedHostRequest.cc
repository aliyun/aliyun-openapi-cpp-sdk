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

#include <alibabacloud/rds/model/RestartDedicatedHostRequest.h>

using AlibabaCloud::Rds::Model::RestartDedicatedHostRequest;

RestartDedicatedHostRequest::RestartDedicatedHostRequest() :
	RpcServiceRequest("rds", "2014-08-15", "RestartDedicatedHost")
{}

RestartDedicatedHostRequest::~RestartDedicatedHostRequest()
{}

long RestartDedicatedHostRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RestartDedicatedHostRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RestartDedicatedHostRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RestartDedicatedHostRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RestartDedicatedHostRequest::getDedicatedHostId()const
{
	return dedicatedHostId_;
}

void RestartDedicatedHostRequest::setDedicatedHostId(const std::string& dedicatedHostId)
{
	dedicatedHostId_ = dedicatedHostId;
	setCoreParameter("DedicatedHostId", dedicatedHostId);
}

long RestartDedicatedHostRequest::getOwnerId()const
{
	return ownerId_;
}

void RestartDedicatedHostRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string RestartDedicatedHostRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RestartDedicatedHostRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string RestartDedicatedHostRequest::getRegionId()const
{
	return regionId_;
}

void RestartDedicatedHostRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string RestartDedicatedHostRequest::getFailoverMode()const
{
	return failoverMode_;
}

void RestartDedicatedHostRequest::setFailoverMode(const std::string& failoverMode)
{
	failoverMode_ = failoverMode;
	setCoreParameter("FailoverMode", failoverMode);
}

