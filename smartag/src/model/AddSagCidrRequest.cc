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

#include <alibabacloud/smartag/model/AddSagCidrRequest.h>

using AlibabaCloud::Smartag::Model::AddSagCidrRequest;

AddSagCidrRequest::AddSagCidrRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "AddSagCidr")
{
	setMethod(HttpRequest::Method::Post);
}

AddSagCidrRequest::~AddSagCidrRequest()
{}

long AddSagCidrRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddSagCidrRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddSagCidrRequest::getRegionId()const
{
	return regionId_;
}

void AddSagCidrRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AddSagCidrRequest::getCidr()const
{
	return cidr_;
}

void AddSagCidrRequest::setCidr(const std::string& cidr)
{
	cidr_ = cidr;
	setParameter("Cidr", cidr);
}

std::string AddSagCidrRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddSagCidrRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddSagCidrRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddSagCidrRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long AddSagCidrRequest::getOwnerId()const
{
	return ownerId_;
}

void AddSagCidrRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool AddSagCidrRequest::getEnableBackup()const
{
	return enableBackup_;
}

void AddSagCidrRequest::setEnableBackup(bool enableBackup)
{
	enableBackup_ = enableBackup;
	setParameter("EnableBackup", enableBackup ? "true" : "false");
}

std::string AddSagCidrRequest::getSmartAGId()const
{
	return smartAGId_;
}

void AddSagCidrRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setParameter("SmartAGId", smartAGId);
}

