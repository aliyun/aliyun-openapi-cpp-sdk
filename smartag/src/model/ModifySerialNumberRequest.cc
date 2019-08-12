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

#include <alibabacloud/smartag/model/ModifySerialNumberRequest.h>

using AlibabaCloud::Smartag::Model::ModifySerialNumberRequest;

ModifySerialNumberRequest::ModifySerialNumberRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "ModifySerialNumber")
{}

ModifySerialNumberRequest::~ModifySerialNumberRequest()
{}

long ModifySerialNumberRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifySerialNumberRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifySerialNumberRequest::getSerialNumber()const
{
	return serialNumber_;
}

void ModifySerialNumberRequest::setSerialNumber(const std::string& serialNumber)
{
	serialNumber_ = serialNumber;
	setCoreParameter("SerialNumber", std::to_string(serialNumber));
}

std::string ModifySerialNumberRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifySerialNumberRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifySerialNumberRequest::getRegionId()const
{
	return regionId_;
}

void ModifySerialNumberRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifySerialNumberRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifySerialNumberRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ModifySerialNumberRequest::getSmartAGId()const
{
	return smartAGId_;
}

void ModifySerialNumberRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", std::to_string(smartAGId));
}

long ModifySerialNumberRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySerialNumberRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

