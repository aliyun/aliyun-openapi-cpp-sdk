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

#include <alibabacloud/smartag/model/UpgradeSmartAccessGatewayRequest.h>

using AlibabaCloud::Smartag::Model::UpgradeSmartAccessGatewayRequest;

UpgradeSmartAccessGatewayRequest::UpgradeSmartAccessGatewayRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "UpgradeSmartAccessGateway")
{}

UpgradeSmartAccessGatewayRequest::~UpgradeSmartAccessGatewayRequest()
{}

long UpgradeSmartAccessGatewayRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpgradeSmartAccessGatewayRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

bool UpgradeSmartAccessGatewayRequest::getAutoPay()const
{
	return autoPay_;
}

void UpgradeSmartAccessGatewayRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

long UpgradeSmartAccessGatewayRequest::getBandWidthSpec()const
{
	return bandWidthSpec_;
}

void UpgradeSmartAccessGatewayRequest::setBandWidthSpec(long bandWidthSpec)
{
	bandWidthSpec_ = bandWidthSpec;
	setCoreParameter("BandWidthSpec", bandWidthSpec);
}

std::string UpgradeSmartAccessGatewayRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpgradeSmartAccessGatewayRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string UpgradeSmartAccessGatewayRequest::getRegionId()const
{
	return regionId_;
}

void UpgradeSmartAccessGatewayRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string UpgradeSmartAccessGatewayRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpgradeSmartAccessGatewayRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

int UpgradeSmartAccessGatewayRequest::getUserCount()const
{
	return userCount_;
}

void UpgradeSmartAccessGatewayRequest::setUserCount(int userCount)
{
	userCount_ = userCount;
	setCoreParameter("UserCount", userCount);
}

std::string UpgradeSmartAccessGatewayRequest::getSmartAGId()const
{
	return smartAGId_;
}

void UpgradeSmartAccessGatewayRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", std::to_string(smartAGId));
}

long UpgradeSmartAccessGatewayRequest::getOwnerId()const
{
	return ownerId_;
}

void UpgradeSmartAccessGatewayRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

long UpgradeSmartAccessGatewayRequest::getDataPlan()const
{
	return dataPlan_;
}

void UpgradeSmartAccessGatewayRequest::setDataPlan(long dataPlan)
{
	dataPlan_ = dataPlan;
	setCoreParameter("DataPlan", dataPlan);
}

