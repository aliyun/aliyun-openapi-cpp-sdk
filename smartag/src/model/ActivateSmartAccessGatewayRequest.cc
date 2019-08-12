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

#include <alibabacloud/smartag/model/ActivateSmartAccessGatewayRequest.h>

using AlibabaCloud::Smartag::Model::ActivateSmartAccessGatewayRequest;

ActivateSmartAccessGatewayRequest::ActivateSmartAccessGatewayRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "ActivateSmartAccessGateway")
{}

ActivateSmartAccessGatewayRequest::~ActivateSmartAccessGatewayRequest()
{}

long ActivateSmartAccessGatewayRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ActivateSmartAccessGatewayRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ActivateSmartAccessGatewayRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ActivateSmartAccessGatewayRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ActivateSmartAccessGatewayRequest::getRegionId()const
{
	return regionId_;
}

void ActivateSmartAccessGatewayRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ActivateSmartAccessGatewayRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ActivateSmartAccessGatewayRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ActivateSmartAccessGatewayRequest::getSmartAGId()const
{
	return smartAGId_;
}

void ActivateSmartAccessGatewayRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", smartAGId);
}

long ActivateSmartAccessGatewayRequest::getOwnerId()const
{
	return ownerId_;
}

void ActivateSmartAccessGatewayRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

