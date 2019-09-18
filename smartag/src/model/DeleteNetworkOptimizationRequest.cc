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

#include <alibabacloud/smartag/model/DeleteNetworkOptimizationRequest.h>

using AlibabaCloud::Smartag::Model::DeleteNetworkOptimizationRequest;

DeleteNetworkOptimizationRequest::DeleteNetworkOptimizationRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DeleteNetworkOptimization")
{}

DeleteNetworkOptimizationRequest::~DeleteNetworkOptimizationRequest()
{}

long DeleteNetworkOptimizationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteNetworkOptimizationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteNetworkOptimizationRequest::getRegionId()const
{
	return regionId_;
}

void DeleteNetworkOptimizationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteNetworkOptimizationRequest::getNetworkOptId()const
{
	return networkOptId_;
}

void DeleteNetworkOptimizationRequest::setNetworkOptId(const std::string& networkOptId)
{
	networkOptId_ = networkOptId;
	setCoreParameter("NetworkOptId", networkOptId);
}

std::string DeleteNetworkOptimizationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteNetworkOptimizationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteNetworkOptimizationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteNetworkOptimizationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteNetworkOptimizationRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteNetworkOptimizationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

