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

#include <alibabacloud/smartag/model/DetachNetworkOptimizationSagsRequest.h>

using AlibabaCloud::Smartag::Model::DetachNetworkOptimizationSagsRequest;

DetachNetworkOptimizationSagsRequest::DetachNetworkOptimizationSagsRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DetachNetworkOptimizationSags")
{}

DetachNetworkOptimizationSagsRequest::~DetachNetworkOptimizationSagsRequest()
{}

long DetachNetworkOptimizationSagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DetachNetworkOptimizationSagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DetachNetworkOptimizationSagsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DetachNetworkOptimizationSagsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DetachNetworkOptimizationSagsRequest::getRegionId()const
{
	return regionId_;
}

void DetachNetworkOptimizationSagsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DetachNetworkOptimizationSagsRequest::getNetworkOptId()const
{
	return networkOptId_;
}

void DetachNetworkOptimizationSagsRequest::setNetworkOptId(const std::string& networkOptId)
{
	networkOptId_ = networkOptId;
	setCoreParameter("NetworkOptId", networkOptId);
}

std::string DetachNetworkOptimizationSagsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DetachNetworkOptimizationSagsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::vector<std::string> DetachNetworkOptimizationSagsRequest::getSmartAGIds()const
{
	return smartAGIds_;
}

void DetachNetworkOptimizationSagsRequest::setSmartAGIds(const std::vector<std::string>& smartAGIds)
{
	smartAGIds_ = smartAGIds;
	for(int i = 0; i!= smartAGIds.size(); i++)
		setCoreParameter("SmartAGIds."+ std::to_string(i), std::to_string(smartAGIds.at(i)));
}

long DetachNetworkOptimizationSagsRequest::getOwnerId()const
{
	return ownerId_;
}

void DetachNetworkOptimizationSagsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

