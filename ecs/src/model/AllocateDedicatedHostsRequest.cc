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
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AllocateDedicatedHostsRequest::getClientToken()const
{
	return clientToken_;
}

void AllocateDedicatedHostsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

long AllocateDedicatedHostsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void AllocateDedicatedHostsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool AllocateDedicatedHostsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void AllocateDedicatedHostsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string AllocateDedicatedHostsRequest::getDescription()const
{
	return description_;
}

void AllocateDedicatedHostsRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string AllocateDedicatedHostsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void AllocateDedicatedHostsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string AllocateDedicatedHostsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void AllocateDedicatedHostsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string AllocateDedicatedHostsRequest::getCallerType()const
{
	return callerType_;
}

void AllocateDedicatedHostsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string AllocateDedicatedHostsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AllocateDedicatedHostsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string AllocateDedicatedHostsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void AllocateDedicatedHostsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string AllocateDedicatedHostsRequest::getSecurityToken()const
{
	return securityToken_;
}

void AllocateDedicatedHostsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string AllocateDedicatedHostsRequest::getRegionId()const
{
	return regionId_;
}

void AllocateDedicatedHostsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool AllocateDedicatedHostsRequest::getEnable()const
{
	return enable_;
}

void AllocateDedicatedHostsRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string AllocateDedicatedHostsRequest::getRequestContent()const
{
	return requestContent_;
}

void AllocateDedicatedHostsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string AllocateDedicatedHostsRequest::getActionOnMaintenance()const
{
	return actionOnMaintenance_;
}

void AllocateDedicatedHostsRequest::setActionOnMaintenance(const std::string& actionOnMaintenance)
{
	actionOnMaintenance_ = actionOnMaintenance;
	setParameter("ActionOnMaintenance", actionOnMaintenance);
}

std::string AllocateDedicatedHostsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void AllocateDedicatedHostsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
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
		setParameter(str + ".Key", obj.key);
		setParameter(str + ".Value", obj.value);
	}
}

std::string AllocateDedicatedHostsRequest::getDedicatedHostType()const
{
	return dedicatedHostType_;
}

void AllocateDedicatedHostsRequest::setDedicatedHostType(const std::string& dedicatedHostType)
{
	dedicatedHostType_ = dedicatedHostType;
	setParameter("DedicatedHostType", dedicatedHostType);
}

std::string AllocateDedicatedHostsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void AllocateDedicatedHostsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long AllocateDedicatedHostsRequest::getCallerUid()const
{
	return callerUid_;
}

void AllocateDedicatedHostsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string AllocateDedicatedHostsRequest::getApp_ip()const
{
	return app_ip_;
}

void AllocateDedicatedHostsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

int AllocateDedicatedHostsRequest::getAutoRenewPeriod()const
{
	return autoRenewPeriod_;
}

void AllocateDedicatedHostsRequest::setAutoRenewPeriod(int autoRenewPeriod)
{
	autoRenewPeriod_ = autoRenewPeriod;
	setParameter("AutoRenewPeriod", std::to_string(autoRenewPeriod));
}

int AllocateDedicatedHostsRequest::getPeriod()const
{
	return period_;
}

void AllocateDedicatedHostsRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

int AllocateDedicatedHostsRequest::getQuantity()const
{
	return quantity_;
}

void AllocateDedicatedHostsRequest::setQuantity(int quantity)
{
	quantity_ = quantity;
	setParameter("Quantity", std::to_string(quantity));
}

std::string AllocateDedicatedHostsRequest::getDedicatedHostName()const
{
	return dedicatedHostName_;
}

void AllocateDedicatedHostsRequest::setDedicatedHostName(const std::string& dedicatedHostName)
{
	dedicatedHostName_ = dedicatedHostName;
	setParameter("DedicatedHostName", dedicatedHostName);
}

std::string AllocateDedicatedHostsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AllocateDedicatedHostsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AllocateDedicatedHostsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AllocateDedicatedHostsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string AllocateDedicatedHostsRequest::getAutoReleaseTime()const
{
	return autoReleaseTime_;
}

void AllocateDedicatedHostsRequest::setAutoReleaseTime(const std::string& autoReleaseTime)
{
	autoReleaseTime_ = autoReleaseTime;
	setParameter("AutoReleaseTime", autoReleaseTime);
}

std::string AllocateDedicatedHostsRequest::getCallerBid()const
{
	return callerBid_;
}

void AllocateDedicatedHostsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long AllocateDedicatedHostsRequest::getOwnerId()const
{
	return ownerId_;
}

void AllocateDedicatedHostsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool AllocateDedicatedHostsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void AllocateDedicatedHostsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool AllocateDedicatedHostsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void AllocateDedicatedHostsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool AllocateDedicatedHostsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void AllocateDedicatedHostsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string AllocateDedicatedHostsRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void AllocateDedicatedHostsRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

bool AllocateDedicatedHostsRequest::getAutoRenew()const
{
	return autoRenew_;
}

void AllocateDedicatedHostsRequest::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setParameter("AutoRenew", std::to_string(autoRenew));
}

std::string AllocateDedicatedHostsRequest::getRequestId()const
{
	return requestId_;
}

void AllocateDedicatedHostsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

int AllocateDedicatedHostsRequest::getNetworkAttributesSlbUdpTimeout()const
{
	return networkAttributesSlbUdpTimeout_;
}

void AllocateDedicatedHostsRequest::setNetworkAttributesSlbUdpTimeout(int networkAttributesSlbUdpTimeout)
{
	networkAttributesSlbUdpTimeout_ = networkAttributesSlbUdpTimeout;
	setParameter("NetworkAttributesSlbUdpTimeout", std::to_string(networkAttributesSlbUdpTimeout));
}

std::string AllocateDedicatedHostsRequest::getZoneId()const
{
	return zoneId_;
}

void AllocateDedicatedHostsRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string AllocateDedicatedHostsRequest::getChargeType()const
{
	return chargeType_;
}

void AllocateDedicatedHostsRequest::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setParameter("ChargeType", chargeType);
}

int AllocateDedicatedHostsRequest::getNetworkAttributesUdpTimeout()const
{
	return networkAttributesUdpTimeout_;
}

void AllocateDedicatedHostsRequest::setNetworkAttributesUdpTimeout(int networkAttributesUdpTimeout)
{
	networkAttributesUdpTimeout_ = networkAttributesUdpTimeout;
	setParameter("NetworkAttributesUdpTimeout", std::to_string(networkAttributesUdpTimeout));
}

