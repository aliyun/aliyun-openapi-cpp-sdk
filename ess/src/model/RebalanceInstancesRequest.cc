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

#include <alibabacloud/ess/model/RebalanceInstancesRequest.h>

using AlibabaCloud::Ess::Model::RebalanceInstancesRequest;

RebalanceInstancesRequest::RebalanceInstancesRequest() :
	RpcServiceRequest("ess", "2014-08-28", "RebalanceInstances")
{}

RebalanceInstancesRequest::~RebalanceInstancesRequest()
{}

long RebalanceInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RebalanceInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string RebalanceInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RebalanceInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RebalanceInstancesRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void RebalanceInstancesRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setCoreParameter("ScalingGroupId", scalingGroupId);
}

std::string RebalanceInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RebalanceInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long RebalanceInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void RebalanceInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string RebalanceInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RebalanceInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

