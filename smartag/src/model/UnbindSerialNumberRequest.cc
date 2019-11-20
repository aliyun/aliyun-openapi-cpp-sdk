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

#include <alibabacloud/smartag/model/UnbindSerialNumberRequest.h>

using AlibabaCloud::Smartag::Model::UnbindSerialNumberRequest;

UnbindSerialNumberRequest::UnbindSerialNumberRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "UnbindSerialNumber")
{
	setMethod(HttpRequest::Method::Post);
}

UnbindSerialNumberRequest::~UnbindSerialNumberRequest()
{}

long UnbindSerialNumberRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnbindSerialNumberRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UnbindSerialNumberRequest::getRegionId()const
{
	return regionId_;
}

void UnbindSerialNumberRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UnbindSerialNumberRequest::getSerialNumber()const
{
	return serialNumber_;
}

void UnbindSerialNumberRequest::setSerialNumber(const std::string& serialNumber)
{
	serialNumber_ = serialNumber;
	setCoreParameter("SerialNumber", serialNumber);
}

std::string UnbindSerialNumberRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UnbindSerialNumberRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UnbindSerialNumberRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UnbindSerialNumberRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long UnbindSerialNumberRequest::getOwnerId()const
{
	return ownerId_;
}

void UnbindSerialNumberRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UnbindSerialNumberRequest::getSmartAGId()const
{
	return smartAGId_;
}

void UnbindSerialNumberRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", smartAGId);
}

