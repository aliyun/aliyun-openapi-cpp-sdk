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

#include <alibabacloud/smartag/model/ModifySmartAccessGatewayClientUserRequest.h>

using AlibabaCloud::Smartag::Model::ModifySmartAccessGatewayClientUserRequest;

ModifySmartAccessGatewayClientUserRequest::ModifySmartAccessGatewayClientUserRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "ModifySmartAccessGatewayClientUser")
{
	setMethod(HttpRequest::Method::Post);
}

ModifySmartAccessGatewayClientUserRequest::~ModifySmartAccessGatewayClientUserRequest()
{}

long ModifySmartAccessGatewayClientUserRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifySmartAccessGatewayClientUserRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifySmartAccessGatewayClientUserRequest::getRegionId()const
{
	return regionId_;
}

void ModifySmartAccessGatewayClientUserRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifySmartAccessGatewayClientUserRequest::getEmail()const
{
	return email_;
}

void ModifySmartAccessGatewayClientUserRequest::setEmail(const std::string& email)
{
	email_ = email;
	setParameter("Email", email);
}

std::string ModifySmartAccessGatewayClientUserRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifySmartAccessGatewayClientUserRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int ModifySmartAccessGatewayClientUserRequest::getBandwidth()const
{
	return bandwidth_;
}

void ModifySmartAccessGatewayClientUserRequest::setBandwidth(int bandwidth)
{
	bandwidth_ = bandwidth;
	setParameter("Bandwidth", std::to_string(bandwidth));
}

std::string ModifySmartAccessGatewayClientUserRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifySmartAccessGatewayClientUserRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifySmartAccessGatewayClientUserRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySmartAccessGatewayClientUserRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifySmartAccessGatewayClientUserRequest::getSmartAGId()const
{
	return smartAGId_;
}

void ModifySmartAccessGatewayClientUserRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setParameter("SmartAGId", smartAGId);
}

std::string ModifySmartAccessGatewayClientUserRequest::getUserName()const
{
	return userName_;
}

void ModifySmartAccessGatewayClientUserRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setParameter("UserName", userName);
}

