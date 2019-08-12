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

#include <alibabacloud/smartag/model/AddNetworkOptimizationSettingRequest.h>

using AlibabaCloud::Smartag::Model::AddNetworkOptimizationSettingRequest;

AddNetworkOptimizationSettingRequest::AddNetworkOptimizationSettingRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "AddNetworkOptimizationSetting")
{}

AddNetworkOptimizationSettingRequest::~AddNetworkOptimizationSettingRequest()
{}

long AddNetworkOptimizationSettingRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddNetworkOptimizationSettingRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string AddNetworkOptimizationSettingRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddNetworkOptimizationSettingRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddNetworkOptimizationSettingRequest::getRegionId()const
{
	return regionId_;
}

void AddNetworkOptimizationSettingRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string AddNetworkOptimizationSettingRequest::getNetworkOptId()const
{
	return networkOptId_;
}

void AddNetworkOptimizationSettingRequest::setNetworkOptId(const std::string& networkOptId)
{
	networkOptId_ = networkOptId;
	setCoreParameter("NetworkOptId", networkOptId);
}

std::string AddNetworkOptimizationSettingRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddNetworkOptimizationSettingRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string AddNetworkOptimizationSettingRequest::getDomain()const
{
	return domain_;
}

void AddNetworkOptimizationSettingRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setCoreParameter("Domain", domain);
}

long AddNetworkOptimizationSettingRequest::getOwnerId()const
{
	return ownerId_;
}

void AddNetworkOptimizationSettingRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string AddNetworkOptimizationSettingRequest::getType()const
{
	return type_;
}

void AddNetworkOptimizationSettingRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

