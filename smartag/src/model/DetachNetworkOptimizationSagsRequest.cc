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
{
	setMethod(HttpRequest::Method::Post);
}

DetachNetworkOptimizationSagsRequest::~DetachNetworkOptimizationSagsRequest()
{}

long DetachNetworkOptimizationSagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DetachNetworkOptimizationSagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DetachNetworkOptimizationSagsRequest::getRegionId()const
{
	return regionId_;
}

void DetachNetworkOptimizationSagsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DetachNetworkOptimizationSagsRequest::getNetworkOptId()const
{
	return networkOptId_;
}

void DetachNetworkOptimizationSagsRequest::setNetworkOptId(const std::string& networkOptId)
{
	networkOptId_ = networkOptId;
	setParameter("NetworkOptId", networkOptId);
}

std::vector<std::string> DetachNetworkOptimizationSagsRequest::getSmartAGIds()const
{
	return smartAGIds_;
}

void DetachNetworkOptimizationSagsRequest::setSmartAGIds(const std::vector<std::string>& smartAGIds)
{
	smartAGIds_ = smartAGIds;
	for(int dep1 = 0; dep1!= smartAGIds.size(); dep1++) {
		setParameter("SmartAGIds."+ std::to_string(dep1), smartAGIds.at(dep1));
	}
}

std::string DetachNetworkOptimizationSagsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DetachNetworkOptimizationSagsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DetachNetworkOptimizationSagsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DetachNetworkOptimizationSagsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DetachNetworkOptimizationSagsRequest::getOwnerId()const
{
	return ownerId_;
}

void DetachNetworkOptimizationSagsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

