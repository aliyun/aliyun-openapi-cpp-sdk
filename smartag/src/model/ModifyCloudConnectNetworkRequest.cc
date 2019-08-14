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

#include <alibabacloud/smartag/model/ModifyCloudConnectNetworkRequest.h>

using AlibabaCloud::Smartag::Model::ModifyCloudConnectNetworkRequest;

ModifyCloudConnectNetworkRequest::ModifyCloudConnectNetworkRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "ModifyCloudConnectNetwork")
{}

ModifyCloudConnectNetworkRequest::~ModifyCloudConnectNetworkRequest()
{}

long ModifyCloudConnectNetworkRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyCloudConnectNetworkRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyCloudConnectNetworkRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyCloudConnectNetworkRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyCloudConnectNetworkRequest::getRegionId()const
{
	return regionId_;
}

void ModifyCloudConnectNetworkRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyCloudConnectNetworkRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyCloudConnectNetworkRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyCloudConnectNetworkRequest::getCcnId()const
{
	return ccnId_;
}

void ModifyCloudConnectNetworkRequest::setCcnId(const std::string& ccnId)
{
	ccnId_ = ccnId;
	setCoreParameter("CcnId", ccnId);
}

std::string ModifyCloudConnectNetworkRequest::getName()const
{
	return name_;
}

void ModifyCloudConnectNetworkRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string ModifyCloudConnectNetworkRequest::getCidrBlock()const
{
	return cidrBlock_;
}

void ModifyCloudConnectNetworkRequest::setCidrBlock(const std::string& cidrBlock)
{
	cidrBlock_ = cidrBlock;
	setCoreParameter("CidrBlock", cidrBlock);
}

std::string ModifyCloudConnectNetworkRequest::getDescription()const
{
	return description_;
}

void ModifyCloudConnectNetworkRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

long ModifyCloudConnectNetworkRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyCloudConnectNetworkRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyCloudConnectNetworkRequest::getInterworkingStatus()const
{
	return interworkingStatus_;
}

void ModifyCloudConnectNetworkRequest::setInterworkingStatus(const std::string& interworkingStatus)
{
	interworkingStatus_ = interworkingStatus;
	setCoreParameter("InterworkingStatus", interworkingStatus);
}

