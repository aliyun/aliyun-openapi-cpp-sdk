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

#include <alibabacloud/smartag/model/UpdateSmartAccessGatewayVersionRequest.h>

using AlibabaCloud::Smartag::Model::UpdateSmartAccessGatewayVersionRequest;

UpdateSmartAccessGatewayVersionRequest::UpdateSmartAccessGatewayVersionRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "UpdateSmartAccessGatewayVersion")
{}

UpdateSmartAccessGatewayVersionRequest::~UpdateSmartAccessGatewayVersionRequest()
{}

long UpdateSmartAccessGatewayVersionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateSmartAccessGatewayVersionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string UpdateSmartAccessGatewayVersionRequest::getSerialNumber()const
{
	return serialNumber_;
}

void UpdateSmartAccessGatewayVersionRequest::setSerialNumber(const std::string& serialNumber)
{
	serialNumber_ = serialNumber;
	setCoreParameter("SerialNumber", serialNumber);
}

std::string UpdateSmartAccessGatewayVersionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateSmartAccessGatewayVersionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UpdateSmartAccessGatewayVersionRequest::getRegionId()const
{
	return regionId_;
}

void UpdateSmartAccessGatewayVersionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UpdateSmartAccessGatewayVersionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpdateSmartAccessGatewayVersionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string UpdateSmartAccessGatewayVersionRequest::getSmartAGId()const
{
	return smartAGId_;
}

void UpdateSmartAccessGatewayVersionRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", smartAGId);
}

long UpdateSmartAccessGatewayVersionRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateSmartAccessGatewayVersionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string UpdateSmartAccessGatewayVersionRequest::getVersionCode()const
{
	return versionCode_;
}

void UpdateSmartAccessGatewayVersionRequest::setVersionCode(const std::string& versionCode)
{
	versionCode_ = versionCode;
	setCoreParameter("VersionCode", versionCode);
}

