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

#include <alibabacloud/ecs/model/DescribeUserDataRequest.h>

using AlibabaCloud::Ecs::Model::DescribeUserDataRequest;

DescribeUserDataRequest::DescribeUserDataRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeUserData")
{}

DescribeUserDataRequest::~DescribeUserDataRequest()
{}

std::string DescribeUserDataRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeUserDataRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

long DescribeUserDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeUserDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeUserDataRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeUserDataRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DescribeUserDataRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeUserDataRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeUserDataRequest::getRegionId()const
{
	return regionId_;
}

void DescribeUserDataRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

long DescribeUserDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeUserDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

