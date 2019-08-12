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

#include <alibabacloud/smartag/model/ResetSmartAccessGatewayClientUserPasswordRequest.h>

using AlibabaCloud::Smartag::Model::ResetSmartAccessGatewayClientUserPasswordRequest;

ResetSmartAccessGatewayClientUserPasswordRequest::ResetSmartAccessGatewayClientUserPasswordRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "ResetSmartAccessGatewayClientUserPassword")
{}

ResetSmartAccessGatewayClientUserPasswordRequest::~ResetSmartAccessGatewayClientUserPasswordRequest()
{}

long ResetSmartAccessGatewayClientUserPasswordRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ResetSmartAccessGatewayClientUserPasswordRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ResetSmartAccessGatewayClientUserPasswordRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ResetSmartAccessGatewayClientUserPasswordRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ResetSmartAccessGatewayClientUserPasswordRequest::getRegionId()const
{
	return regionId_;
}

void ResetSmartAccessGatewayClientUserPasswordRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ResetSmartAccessGatewayClientUserPasswordRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ResetSmartAccessGatewayClientUserPasswordRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ResetSmartAccessGatewayClientUserPasswordRequest::getSmartAGId()const
{
	return smartAGId_;
}

void ResetSmartAccessGatewayClientUserPasswordRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", smartAGId);
}

long ResetSmartAccessGatewayClientUserPasswordRequest::getOwnerId()const
{
	return ownerId_;
}

void ResetSmartAccessGatewayClientUserPasswordRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ResetSmartAccessGatewayClientUserPasswordRequest::getUserName()const
{
	return userName_;
}

void ResetSmartAccessGatewayClientUserPasswordRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setCoreParameter("UserName", userName);
}

