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

#include <alibabacloud/smartag/model/ModifyNetworkOptimizationRequest.h>

using AlibabaCloud::Smartag::Model::ModifyNetworkOptimizationRequest;

ModifyNetworkOptimizationRequest::ModifyNetworkOptimizationRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "ModifyNetworkOptimization")
{}

ModifyNetworkOptimizationRequest::~ModifyNetworkOptimizationRequest()
{}

long ModifyNetworkOptimizationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyNetworkOptimizationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyNetworkOptimizationRequest::getRegionId()const
{
	return regionId_;
}

void ModifyNetworkOptimizationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyNetworkOptimizationRequest::getNetworkOptId()const
{
	return networkOptId_;
}

void ModifyNetworkOptimizationRequest::setNetworkOptId(const std::string& networkOptId)
{
	networkOptId_ = networkOptId;
	setCoreParameter("NetworkOptId", networkOptId);
}

std::string ModifyNetworkOptimizationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyNetworkOptimizationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyNetworkOptimizationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyNetworkOptimizationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyNetworkOptimizationRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyNetworkOptimizationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyNetworkOptimizationRequest::getName()const
{
	return name_;
}

void ModifyNetworkOptimizationRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

