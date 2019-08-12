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

#include <alibabacloud/smartag/model/CreateCloudConnectNetworkRequest.h>

using AlibabaCloud::Smartag::Model::CreateCloudConnectNetworkRequest;

CreateCloudConnectNetworkRequest::CreateCloudConnectNetworkRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "CreateCloudConnectNetwork")
{}

CreateCloudConnectNetworkRequest::~CreateCloudConnectNetworkRequest()
{}

long CreateCloudConnectNetworkRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateCloudConnectNetworkRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateCloudConnectNetworkRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateCloudConnectNetworkRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateCloudConnectNetworkRequest::getRegionId()const
{
	return regionId_;
}

void CreateCloudConnectNetworkRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateCloudConnectNetworkRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateCloudConnectNetworkRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateCloudConnectNetworkRequest::getName()const
{
	return name_;
}

void CreateCloudConnectNetworkRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string CreateCloudConnectNetworkRequest::getCidrBlock()const
{
	return cidrBlock_;
}

void CreateCloudConnectNetworkRequest::setCidrBlock(const std::string& cidrBlock)
{
	cidrBlock_ = cidrBlock;
	setCoreParameter("CidrBlock", cidrBlock);
}

std::string CreateCloudConnectNetworkRequest::getDescription()const
{
	return description_;
}

void CreateCloudConnectNetworkRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateCloudConnectNetworkRequest::getSnatCidrBlock()const
{
	return snatCidrBlock_;
}

void CreateCloudConnectNetworkRequest::setSnatCidrBlock(const std::string& snatCidrBlock)
{
	snatCidrBlock_ = snatCidrBlock;
	setCoreParameter("SnatCidrBlock", snatCidrBlock);
}

bool CreateCloudConnectNetworkRequest::getIsDefault()const
{
	return isDefault_;
}

void CreateCloudConnectNetworkRequest::setIsDefault(bool isDefault)
{
	isDefault_ = isDefault;
	setCoreParameter("IsDefault", isDefault ? "true" : "false");
}

long CreateCloudConnectNetworkRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateCloudConnectNetworkRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

