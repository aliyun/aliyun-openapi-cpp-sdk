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

#include <alibabacloud/smartag/model/DowngradeSmartAccessGatewayRequest.h>

using AlibabaCloud::Smartag::Model::DowngradeSmartAccessGatewayRequest;

DowngradeSmartAccessGatewayRequest::DowngradeSmartAccessGatewayRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "DowngradeSmartAccessGateway")
{}

DowngradeSmartAccessGatewayRequest::~DowngradeSmartAccessGatewayRequest()
{}

long DowngradeSmartAccessGatewayRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DowngradeSmartAccessGatewayRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool DowngradeSmartAccessGatewayRequest::getAutoPay()const
{
	return autoPay_;
}

void DowngradeSmartAccessGatewayRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

long DowngradeSmartAccessGatewayRequest::getBandWidthSpec()const
{
	return bandWidthSpec_;
}

void DowngradeSmartAccessGatewayRequest::setBandWidthSpec(long bandWidthSpec)
{
	bandWidthSpec_ = bandWidthSpec;
	setCoreParameter("BandWidthSpec", std::to_string(bandWidthSpec));
}

std::string DowngradeSmartAccessGatewayRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DowngradeSmartAccessGatewayRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DowngradeSmartAccessGatewayRequest::getRegionId()const
{
	return regionId_;
}

void DowngradeSmartAccessGatewayRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DowngradeSmartAccessGatewayRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DowngradeSmartAccessGatewayRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int DowngradeSmartAccessGatewayRequest::getUserCount()const
{
	return userCount_;
}

void DowngradeSmartAccessGatewayRequest::setUserCount(int userCount)
{
	userCount_ = userCount;
	setCoreParameter("UserCount", std::to_string(userCount));
}

std::string DowngradeSmartAccessGatewayRequest::getSmartAGId()const
{
	return smartAGId_;
}

void DowngradeSmartAccessGatewayRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", smartAGId);
}

long DowngradeSmartAccessGatewayRequest::getOwnerId()const
{
	return ownerId_;
}

void DowngradeSmartAccessGatewayRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

long DowngradeSmartAccessGatewayRequest::getDataPlan()const
{
	return dataPlan_;
}

void DowngradeSmartAccessGatewayRequest::setDataPlan(long dataPlan)
{
	dataPlan_ = dataPlan;
	setCoreParameter("DataPlan", std::to_string(dataPlan));
}

