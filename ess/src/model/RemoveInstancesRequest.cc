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

#include <alibabacloud/ess/model/RemoveInstancesRequest.h>

using AlibabaCloud::Ess::Model::RemoveInstancesRequest;

RemoveInstancesRequest::RemoveInstancesRequest() :
	RpcServiceRequest("ess", "2014-08-28", "RemoveInstances")
{}

RemoveInstancesRequest::~RemoveInstancesRequest()
{}

long RemoveInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RemoveInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::vector<std::string> RemoveInstancesRequest::getInstanceId()const
{
	return instanceId_;
}

void RemoveInstancesRequest::setInstanceId(const std::vector<std::string>& instanceId)
{
	instanceId_ = instanceId;
	for(int i = 0; i!= instanceId.size(); i++)
		setCoreParameter("InstanceId."+ std::to_string(i), std::to_string(instanceId.at(i)));
}

std::string RemoveInstancesRequest::getRemovePolicy()const
{
	return removePolicy_;
}

void RemoveInstancesRequest::setRemovePolicy(const std::string& removePolicy)
{
	removePolicy_ = removePolicy;
	setCoreParameter("RemovePolicy", removePolicy);
}

std::string RemoveInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RemoveInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RemoveInstancesRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void RemoveInstancesRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setCoreParameter("ScalingGroupId", scalingGroupId);
}

std::string RemoveInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RemoveInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long RemoveInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void RemoveInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string RemoveInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RemoveInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

