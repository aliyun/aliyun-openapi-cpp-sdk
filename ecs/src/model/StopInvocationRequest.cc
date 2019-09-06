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

#include <alibabacloud/ecs/model/StopInvocationRequest.h>

using AlibabaCloud::Ecs::Model::StopInvocationRequest;

StopInvocationRequest::StopInvocationRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "StopInvocation")
{}

StopInvocationRequest::~StopInvocationRequest()
{}

long StopInvocationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void StopInvocationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string StopInvocationRequest::getRegionId()const
{
	return regionId_;
}

void StopInvocationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string StopInvocationRequest::getInvokeId()const
{
	return invokeId_;
}

void StopInvocationRequest::setInvokeId(const std::string& invokeId)
{
	invokeId_ = invokeId;
	setCoreParameter("InvokeId", invokeId);
}

std::string StopInvocationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void StopInvocationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string StopInvocationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void StopInvocationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long StopInvocationRequest::getOwnerId()const
{
	return ownerId_;
}

void StopInvocationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::vector<std::string> StopInvocationRequest::getInstanceId()const
{
	return instanceId_;
}

void StopInvocationRequest::setInstanceId(const std::vector<std::string>& instanceId)
{
	instanceId_ = instanceId;
	for(int i = 0; i!= instanceId.size(); i++)
		setCoreParameter("InstanceId."+ std::to_string(i), instanceId.at(i));
}

