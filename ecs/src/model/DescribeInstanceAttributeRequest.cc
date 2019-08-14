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

#include <alibabacloud/ecs/model/DescribeInstanceAttributeRequest.h>

using AlibabaCloud::Ecs::Model::DescribeInstanceAttributeRequest;

DescribeInstanceAttributeRequest::DescribeInstanceAttributeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeInstanceAttribute")
{}

DescribeInstanceAttributeRequest::~DescribeInstanceAttributeRequest()
{}

std::string DescribeInstanceAttributeRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeInstanceAttributeRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

long DescribeInstanceAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeInstanceAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeInstanceAttributeRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeInstanceAttributeRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string DescribeInstanceAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeInstanceAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeInstanceAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeInstanceAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeInstanceAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeInstanceAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

