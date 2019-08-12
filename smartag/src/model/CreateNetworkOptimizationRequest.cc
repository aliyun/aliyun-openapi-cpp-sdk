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

#include <alibabacloud/smartag/model/CreateNetworkOptimizationRequest.h>

using AlibabaCloud::Smartag::Model::CreateNetworkOptimizationRequest;

CreateNetworkOptimizationRequest::CreateNetworkOptimizationRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "CreateNetworkOptimization")
{}

CreateNetworkOptimizationRequest::~CreateNetworkOptimizationRequest()
{}

long CreateNetworkOptimizationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateNetworkOptimizationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateNetworkOptimizationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateNetworkOptimizationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateNetworkOptimizationRequest::getRegionId()const
{
	return regionId_;
}

void CreateNetworkOptimizationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateNetworkOptimizationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateNetworkOptimizationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateNetworkOptimizationRequest::getName()const
{
	return name_;
}

void CreateNetworkOptimizationRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string CreateNetworkOptimizationRequest::getCcnId()const
{
	return ccnId_;
}

void CreateNetworkOptimizationRequest::setCcnId(const std::string& ccnId)
{
	ccnId_ = ccnId;
	setCoreParameter("CcnId", ccnId);
}

long CreateNetworkOptimizationRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateNetworkOptimizationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

