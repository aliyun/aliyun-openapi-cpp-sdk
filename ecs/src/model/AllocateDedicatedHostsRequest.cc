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
{}

AllocateDedicatedHostsRequest::~AllocateDedicatedHostsRequest()
{}

long AllocateDedicatedHostsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AllocateDedicatedHostsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string AllocateDedicatedHostsRequest::getClientToken()const
{
	return clientToken_;
}

void AllocateDedicatedHostsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

long AllocateDedicatedHostsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void AllocateDedicatedHostsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool AllocateDedicatedHostsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void AllocateDedicatedHostsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string AllocateDedicatedHostsRequest::getDescription()const
{
	return description_;
}

void AllocateDedicatedHostsRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string AllocateDedicatedHostsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void AllocateDedicatedHostsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string AllocateDedicatedHostsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void AllocateDedicatedHostsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string AllocateDedicatedHostsRequest::getCallerType()const
{
	return callerType_;
}

void AllocateDedicatedHostsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string AllocateDedicatedHostsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AllocateDedicatedHostsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string AllocateDedicatedHostsRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void AllocateDedicatedHostsRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

std::string AllocateDedicatedHostsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void AllocateDedicatedHostsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", std::to_string(resourceGroupId));
}

std::string AllocateDedicatedHostsRequest::getSecurityToken()const
{
	return securityToken_;
}

void AllocateDedicatedHostsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string AllocateDedicatedHostsRequest::getRegionId()const
{
	return regionId_;
}

void AllocateDedicatedHostsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

bool AllocateDedicatedHostsRequest::getEnable()const
{
	return enable_;
}

void AllocateDedicatedHostsRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string AllocateDedicatedHostsRequest::getRequestContent()const
{
	return requestContent_;
}

void AllocateDedicatedHostsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string AllocateDedicatedHostsRequest::getActionOnMaintenance()const
{
	return actionOnMaintenance_;
}

void AllocateDedicatedHostsRequest::setActionOnMaintenance(const std::string& actionOnMaintenance)
{
	actionOnMaintenance_ = actionOnMaintenance;
	setCoreParameter("ActionOnMaintenance", std::to_string(actionOnMaintenance));
}

std::string AllocateDedicatedHostsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void AllocateDedicatedHostsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::vector<AllocateDedicatedHostsRequest::Tag> AllocateDedicatedHostsRequest::getTag()const
{
	return tag_;
}

void AllocateDedicatedHostsRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Key", std::to_string(obj.key));
		setCoreParameter(str + ".Value", std::to_string(obj.value));
	}
}

std::string AllocateDedicatedHostsRequest::getDedicatedHostType()const
{
	return dedicatedHostType_;
}

void AllocateDedicatedHostsRequest::setDedicatedHostType(const std::string& dedicatedHostType)
{
	dedicatedHostType_ = dedicatedHostType;
	setCoreParameter("DedicatedHostType", std::to_string(dedicatedHostType));
}

std::string AllocateDedicatedHostsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void AllocateDedicatedHostsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long AllocateDedicatedHostsRequest::getCallerUid()const
{
	return callerUid_;
}

void AllocateDedicatedHostsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string AllocateDedicatedHostsRequest::getApp_ip()const
{
	return app_ip_;
}

void AllocateDedicatedHostsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

int AllocateDedicatedHostsRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void AllocateDedicatedHostsRequest::setAutoRenewPeriod(int autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setCoreParameter("AutoRenewPeriod", autoRenewPeriod);
}

int AllocateDedicatedHostsRequest::getPeriod()const
{
	return period_;
}

void AllocateDedicatedHostsRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

int AllocateDedicatedHostsRequest::getQuantity()const
{
	return quantity_;
}

void AllocateDedicatedHostsRequest::setQuantity(int quantity)
{
	quantity_ = quantity;
	setCoreParameter("Quantity", quantity);
}

std::string AllocateDedicatedHostsRequest::getDedicatedHostName()const
{
	return dedicatedHostName_;
}

void AllocateDedicatedHostsRequest::setDedicatedHostName(const std::string& dedicatedHostName)
{
	dedicatedHostName_ = dedicatedHostName;
	setCoreParameter("DedicatedHostName", std::to_string(dedicatedHostName));
}

std::string AllocateDedicatedHostsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AllocateDedicatedHostsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string AllocateDedicatedHostsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AllocateDedicatedHostsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string AllocateDedicatedHostsRequest::getAutoReleaseTime()const
{
	return autoReleaseTime_;
}

void AllocateDedicatedHostsRequest::setAutoReleaseTime(const std::string& autoReleaseTime)
{
	autoReleaseTime_ = autoReleaseTime;
	setCoreParameter("AutoReleaseTime", std::to_string(autoReleaseTime));
}

std::string AllocateDedicatedHostsRequest::getCallerBid()const
{
	return callerBid_;
}

void AllocateDedicatedHostsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long AllocateDedicatedHostsRequest::getOwnerId()const
{
	return ownerId_;
}

void AllocateDedicatedHostsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool AllocateDedicatedHostsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void AllocateDedicatedHostsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool AllocateDedicatedHostsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void AllocateDedicatedHostsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool AllocateDedicatedHostsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void AllocateDedicatedHostsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string AllocateDedicatedHostsRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void AllocateDedicatedHostsRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setCoreParameter("PeriodUnit", std::to_string(periodUnit));
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

std::string AllocateDedicatedHostsRequest::getRequestId()const
{
	return requestId_;
}

void AllocateDedicatedHostsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string AllocateDedicatedHostsRequest::getAkProxy()const
{
	return akProxy_;
}

void AllocateDedicatedHostsRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", std::to_string(akProxy));
}

int AllocateDedicatedHostsRequest::getNetworkAttributesSlbUdpTimeout()const
{
	return networkAttributesSlbUdpTimeout_;
}

void AllocateDedicatedHostsRequest::setNetworkAttributesSlbUdpTimeout(int networkAttributesSlbUdpTimeout)
{
	networkAttributesSlbUdpTimeout_ = networkAttributesSlbUdpTimeout;
	setCoreParameter("NetworkAttributesSlbUdpTimeout", networkAttributesSlbUdpTimeout);
}

std::string AllocateDedicatedHostsRequest::getZoneId()const
{
	return zoneId_;
}

void AllocateDedicatedHostsRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", std::to_string(zoneId));
}

std::string AllocateDedicatedHostsRequest::getAutoPlacement()const
{
	return autoPlacement_;
}

void AllocateDedicatedHostsRequest::setAutoPlacement(const std::string& autoPlacement)
{
	autoPlacement_ = autoPlacement;
	setCoreParameter("AutoPlacement", std::to_string(autoPlacement));
}

std::string AllocateDedicatedHostsRequest::getChargeType()const
{
	return chargeType_;
}

void AllocateDedicatedHostsRequest::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setCoreParameter("ChargeType", std::to_string(chargeType));
}

int AllocateDedicatedHostsRequest::getNetworkAttributesUdpTimeout()const
{
	return networkAttributesUdpTimeout_;
}

void AllocateDedicatedHostsRequest::setNetworkAttributesUdpTimeout(int networkAttributesUdpTimeout)
{
	networkAttributesUdpTimeout_ = networkAttributesUdpTimeout;
	setCoreParameter("NetworkAttributesUdpTimeout", networkAttributesUdpTimeout);
}

