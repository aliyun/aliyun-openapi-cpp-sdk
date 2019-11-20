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

#include <alibabacloud/smartag/model/AttachNetworkOptimizationSagsRequest.h>

using AlibabaCloud::Smartag::Model::AttachNetworkOptimizationSagsRequest;

AttachNetworkOptimizationSagsRequest::AttachNetworkOptimizationSagsRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "AttachNetworkOptimizationSags")
{
	setMethod(HttpRequest::Method::Post);
}

AttachNetworkOptimizationSagsRequest::~AttachNetworkOptimizationSagsRequest()
{}

long AttachNetworkOptimizationSagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AttachNetworkOptimizationSagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AttachNetworkOptimizationSagsRequest::getRegionId()const
{
	return regionId_;
}

void AttachNetworkOptimizationSagsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string AttachNetworkOptimizationSagsRequest::getNetworkOptId()const
{
	return networkOptId_;
}

void AttachNetworkOptimizationSagsRequest::setNetworkOptId(const std::string& networkOptId)
{
	networkOptId_ = networkOptId;
	setCoreParameter("NetworkOptId", networkOptId);
}

std::vector<std::string> AttachNetworkOptimizationSagsRequest::getSmartAGIds()const
{
	return smartAGIds_;
}

void AttachNetworkOptimizationSagsRequest::setSmartAGIds(const std::vector<std::string>& smartAGIds)
{
	smartAGIds_ = smartAGIds;
	for(int dep1 = 0; dep1!= smartAGIds.size(); dep1++)
		setCoreParameter("SmartAGIds."+ std::to_string(dep1), smartAGIds.at(dep1));
}

std::string AttachNetworkOptimizationSagsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AttachNetworkOptimizationSagsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AttachNetworkOptimizationSagsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AttachNetworkOptimizationSagsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long AttachNetworkOptimizationSagsRequest::getOwnerId()const
{
	return ownerId_;
}

void AttachNetworkOptimizationSagsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

