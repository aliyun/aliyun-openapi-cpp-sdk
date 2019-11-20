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

#include <alibabacloud/smartag/model/ModifySagCidrRequest.h>

using AlibabaCloud::Smartag::Model::ModifySagCidrRequest;

ModifySagCidrRequest::ModifySagCidrRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "ModifySagCidr")
{
	setMethod(HttpRequest::Method::Post);
}

ModifySagCidrRequest::~ModifySagCidrRequest()
{}

long ModifySagCidrRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifySagCidrRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifySagCidrRequest::getRegionId()const
{
	return regionId_;
}

void ModifySagCidrRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifySagCidrRequest::getCidr()const
{
	return cidr_;
}

void ModifySagCidrRequest::setCidr(const std::string& cidr)
{
	cidr_ = cidr;
	setCoreParameter("Cidr", cidr);
}

std::string ModifySagCidrRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifySagCidrRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifySagCidrRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifySagCidrRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifySagCidrRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySagCidrRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool ModifySagCidrRequest::getEnableBackup()const
{
	return enableBackup_;
}

void ModifySagCidrRequest::setEnableBackup(bool enableBackup)
{
	enableBackup_ = enableBackup;
	setCoreParameter("EnableBackup", enableBackup ? "true" : "false");
}

std::string ModifySagCidrRequest::getSmartAGId()const
{
	return smartAGId_;
}

void ModifySagCidrRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", smartAGId);
}

