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

#include <alibabacloud/ess/model/DetachInstancesRequest.h>

using AlibabaCloud::Ess::Model::DetachInstancesRequest;

DetachInstancesRequest::DetachInstancesRequest() :
	RpcServiceRequest("ess", "2014-08-28", "DetachInstances")
{
	setMethod(HttpRequest::Method::Post);
}

DetachInstancesRequest::~DetachInstancesRequest()
{}

long DetachInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DetachInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DetachInstancesRequest::getScalingGroupId()const
{
	return scalingGroupId_;
}

void DetachInstancesRequest::setScalingGroupId(const std::string& scalingGroupId)
{
	scalingGroupId_ = scalingGroupId;
	setParameter("ScalingGroupId", scalingGroupId);
}

std::string DetachInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DetachInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool DetachInstancesRequest::getDecreaseDesiredCapacity()const
{
	return decreaseDesiredCapacity_;
}

void DetachInstancesRequest::setDecreaseDesiredCapacity(bool decreaseDesiredCapacity)
{
	decreaseDesiredCapacity_ = decreaseDesiredCapacity;
	setParameter("DecreaseDesiredCapacity", decreaseDesiredCapacity ? "true" : "false");
}

std::string DetachInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DetachInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DetachInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DetachInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DetachInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void DetachInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::vector<std::string> DetachInstancesRequest::getInstanceId()const
{
	return instanceId_;
}

void DetachInstancesRequest::setInstanceId(const std::vector<std::string>& instanceId)
{
	instanceId_ = instanceId;
	for(int dep1 = 0; dep1!= instanceId.size(); dep1++) {
		setParameter("InstanceId."+ std::to_string(dep1), instanceId.at(dep1));
	}
}

