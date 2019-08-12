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

#include <alibabacloud/smartag/model/EnableSmartAccessGatewayUserRequest.h>

using AlibabaCloud::Smartag::Model::EnableSmartAccessGatewayUserRequest;

EnableSmartAccessGatewayUserRequest::EnableSmartAccessGatewayUserRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "EnableSmartAccessGatewayUser")
{}

EnableSmartAccessGatewayUserRequest::~EnableSmartAccessGatewayUserRequest()
{}

long EnableSmartAccessGatewayUserRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void EnableSmartAccessGatewayUserRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string EnableSmartAccessGatewayUserRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void EnableSmartAccessGatewayUserRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string EnableSmartAccessGatewayUserRequest::getRegionId()const
{
	return regionId_;
}

void EnableSmartAccessGatewayUserRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string EnableSmartAccessGatewayUserRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void EnableSmartAccessGatewayUserRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string EnableSmartAccessGatewayUserRequest::getSmartAGId()const
{
	return smartAGId_;
}

void EnableSmartAccessGatewayUserRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", std::to_string(smartAGId));
}

long EnableSmartAccessGatewayUserRequest::getOwnerId()const
{
	return ownerId_;
}

void EnableSmartAccessGatewayUserRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string EnableSmartAccessGatewayUserRequest::getUserName()const
{
	return userName_;
}

void EnableSmartAccessGatewayUserRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setCoreParameter("UserName", std::to_string(userName));
}

