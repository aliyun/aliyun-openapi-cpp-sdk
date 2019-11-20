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

#include <alibabacloud/ecs/model/AllocateDedicatedHostsRequest.h>

using AlibabaCloud::Ecs::Model::AllocateDedicatedHostsRequest;

AllocateDedicatedHostsRequest::AllocateDedicatedHostsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "AllocateDedicatedHosts")
{
	setMethod(HttpRequest::Method::Post);
}

AllocateDedicatedHostsRequest::~AllocateDedicatedHostsRequest()
{}

long AllocateDedicatedHostsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AllocateDedicatedHostsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AllocateDedicatedHostsRequest::getClientToken()const
{
	return clientToken_;
}

void AllocateDedicatedHostsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string AllocateDedicatedHostsRequest::getDescription()const
{
	return description_;
}

void AllocateDedicatedHostsRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string AllocateDedicatedHostsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void AllocateDedicatedHostsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string AllocateDedicatedHostsRequest::getRegionId()const
{
	return regionId_;
}

void AllocateDedicatedHostsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string AllocateDedicatedHostsRequest::getActionOnMaintenance()const
{
	return actionOnMaintenance_;
}

void AllocateDedicatedHostsRequest::setActionOnMaintenance(const std::string& actionOnMaintenance)
{
	actionOnMaintenance_ = actionOnMaintenance;
	setCoreParameter("ActionOnMaintenance", actionOnMaintenance);
}

std::vector<AllocateDedicatedHostsRequest::Tag> AllocateDedicatedHostsRequest::getTag()const
{
	return tag_;
}

void AllocateDedicatedHostsRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	for(int dep1 = 0; dep1!= tag.size(); dep1++) {
		auto tagObj = tag.at(dep1);
		std::string tagObjStr = "Tag." + std::to_string(dep1);
		setCoreParameter(tagObjStr + ".Key", tagObj.key);
		setCoreParameter(tagObjStr + ".Value", tagObj.value);
	}
}

std::string AllocateDedicatedHostsRequest::getDedicatedHostType()const
{
	return dedicatedHostType_;
}

void AllocateDedicatedHostsRequest::setDedicatedHostType(const std::string& dedicatedHostType)
{
	dedicatedHostType_ = dedicatedHostType;
	setCoreParameter("DedicatedHostType", dedicatedHostType);
}

int AllocateDedicatedHostsRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void AllocateDedicatedHostsRequest::setAutoRenewPeriod(int autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setCoreParameter("AutoRenewPeriod", std::to_string(autoRenewPeriod));
}

int AllocateDedicatedHostsRequest::getPeriod()const
{
	return period_;
}

void AllocateDedicatedHostsRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

int AllocateDedicatedHostsRequest::getQuantity()const
{
	return quantity_;
}

void AllocateDedicatedHostsRequest::setQuantity(int quantity)
{
	quantity_ = quantity;
	setCoreParameter("Quantity", std::to_string(quantity));
}

std::string AllocateDedicatedHostsRequest::getDedicatedHostName()const
{
	return dedicatedHostName_;
}

void AllocateDedicatedHostsRequest::setDedicatedHostName(const std::string& dedicatedHostName)
{
	dedicatedHostName_ = dedicatedHostName;
	setCoreParameter("DedicatedHostName", dedicatedHostName);
}

std::string AllocateDedicatedHostsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AllocateDedicatedHostsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AllocateDedicatedHostsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AllocateDedicatedHostsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string AllocateDedicatedHostsRequest::getAutoReleaseTime()const
{
	return autoReleaseTime_;
}

void AllocateDedicatedHostsRequest::setAutoReleaseTime(const std::string& autoReleaseTime)
{
	autoReleaseTime_ = autoReleaseTime;
	setCoreParameter("AutoReleaseTime", autoReleaseTime);
}

long AllocateDedicatedHostsRequest::getOwnerId()const
{
	return ownerId_;
}

void AllocateDedicatedHostsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string AllocateDedicatedHostsRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void AllocateDedicatedHostsRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setCoreParameter("PeriodUnit", periodUnit);
}

bool AllocateDedicatedHostsRequest::getAutoRenew()const
{
	return autoRenew_;
}

void AllocateDedicatedHostsRequest::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setCoreParameter("AutoRenew", autoRenew ? "true" : "false");
}

int AllocateDedicatedHostsRequest::getNetworkAttributesSlbUdpTimeout()const
{
	return networkAttributesSlbUdpTimeout_;
}

void AllocateDedicatedHostsRequest::setNetworkAttributesSlbUdpTimeout(int networkAttributesSlbUdpTimeout)
{
	networkAttributesSlbUdpTimeout_ = networkAttributesSlbUdpTimeout;
	setCoreParameter("NetworkAttributesSlbUdpTimeout", std::to_string(networkAttributesSlbUdpTimeout));
}

std::string AllocateDedicatedHostsRequest::getZoneId()const
{
	return zoneId_;
}

void AllocateDedicatedHostsRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string AllocateDedicatedHostsRequest::getAutoPlacement()const
{
	return autoPlacement_;
}

void AllocateDedicatedHostsRequest::setAutoPlacement(const std::string& autoPlacement)
{
	autoPlacement_ = autoPlacement;
	setCoreParameter("AutoPlacement", autoPlacement);
}

std::string AllocateDedicatedHostsRequest::getChargeType()const
{
	return chargeType_;
}

void AllocateDedicatedHostsRequest::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setCoreParameter("ChargeType", chargeType);
}

int AllocateDedicatedHostsRequest::getNetworkAttributesUdpTimeout()const
{
	return networkAttributesUdpTimeout_;
}

void AllocateDedicatedHostsRequest::setNetworkAttributesUdpTimeout(int networkAttributesUdpTimeout)
{
	networkAttributesUdpTimeout_ = networkAttributesUdpTimeout;
	setCoreParameter("NetworkAttributesUdpTimeout", std::to_string(networkAttributesUdpTimeout));
}

