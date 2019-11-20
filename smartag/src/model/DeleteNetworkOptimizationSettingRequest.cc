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

#include <alibabacloud/smartag/model/DeleteNetworkOptimizationSettingRequest.h>

using AlibabaCloud::Smartag::Model::DeleteNetworkOptimizationSettingRequest;

DeleteNetworkOptimizationSettingRequest::DeleteNetworkOptimizationSettingRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DeleteNetworkOptimizationSetting")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteNetworkOptimizationSettingRequest::~DeleteNetworkOptimizationSettingRequest()
{}

long DeleteNetworkOptimizationSettingRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteNetworkOptimizationSettingRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteNetworkOptimizationSettingRequest::getType()const
{
	return type_;
}

void DeleteNetworkOptimizationSettingRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string DeleteNetworkOptimizationSettingRequest::getRegionId()const
{
	return regionId_;
}

void DeleteNetworkOptimizationSettingRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteNetworkOptimizationSettingRequest::getNetworkOptId()const
{
	return networkOptId_;
}

void DeleteNetworkOptimizationSettingRequest::setNetworkOptId(const std::string& networkOptId)
{
	networkOptId_ = networkOptId;
	setCoreParameter("NetworkOptId", networkOptId);
}

std::string DeleteNetworkOptimizationSettingRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteNetworkOptimizationSettingRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteNetworkOptimizationSettingRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteNetworkOptimizationSettingRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteNetworkOptimizationSettingRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteNetworkOptimizationSettingRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteNetworkOptimizationSettingRequest::getDomain()const
{
	return domain_;
}

void DeleteNetworkOptimizationSettingRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setCoreParameter("Domain", domain);
}

