<<<<<<< HEAD
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

#include <alibabacloud/ecs/model/PurchaseReservedInstancesOfferingRequest.h>

using AlibabaCloud::Ecs::Model::PurchaseReservedInstancesOfferingRequest;

PurchaseReservedInstancesOfferingRequest::PurchaseReservedInstancesOfferingRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "PurchaseReservedInstancesOffering")
{}

PurchaseReservedInstancesOfferingRequest::~PurchaseReservedInstancesOfferingRequest()
{}

long PurchaseReservedInstancesOfferingRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PurchaseReservedInstancesOfferingRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string PurchaseReservedInstancesOfferingRequest::getClientToken()const
{
	return clientToken_;
}

void PurchaseReservedInstancesOfferingRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

long PurchaseReservedInstancesOfferingRequest::getCallerParentId()const
{
	return callerParentId_;
}

void PurchaseReservedInstancesOfferingRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool PurchaseReservedInstancesOfferingRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void PurchaseReservedInstancesOfferingRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string PurchaseReservedInstancesOfferingRequest::getDescription()const
{
	return description_;
}

void PurchaseReservedInstancesOfferingRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string PurchaseReservedInstancesOfferingRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void PurchaseReservedInstancesOfferingRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string PurchaseReservedInstancesOfferingRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void PurchaseReservedInstancesOfferingRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string PurchaseReservedInstancesOfferingRequest::getCallerType()const
{
	return callerType_;
}

void PurchaseReservedInstancesOfferingRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string PurchaseReservedInstancesOfferingRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PurchaseReservedInstancesOfferingRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string PurchaseReservedInstancesOfferingRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void PurchaseReservedInstancesOfferingRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string PurchaseReservedInstancesOfferingRequest::getSecurityToken()const
{
	return securityToken_;
}

void PurchaseReservedInstancesOfferingRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string PurchaseReservedInstancesOfferingRequest::getRegionId()const
{
	return regionId_;
}

void PurchaseReservedInstancesOfferingRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool PurchaseReservedInstancesOfferingRequest::getEnable()const
{
	return enable_;
}

void PurchaseReservedInstancesOfferingRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string PurchaseReservedInstancesOfferingRequest::getRequestContent()const
{
	return requestContent_;
}

void PurchaseReservedInstancesOfferingRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string PurchaseReservedInstancesOfferingRequest::getScope()const
{
	return scope_;
}

void PurchaseReservedInstancesOfferingRequest::setScope(const std::string& scope)
{
	scope_ = scope;
	setCoreParameter("Scope", scope);
}

std::string PurchaseReservedInstancesOfferingRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void PurchaseReservedInstancesOfferingRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string PurchaseReservedInstancesOfferingRequest::getInstanceType()const
{
	return instanceType_;
}

void PurchaseReservedInstancesOfferingRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::string PurchaseReservedInstancesOfferingRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void PurchaseReservedInstancesOfferingRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long PurchaseReservedInstancesOfferingRequest::getCallerUid()const
{
	return callerUid_;
}

void PurchaseReservedInstancesOfferingRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string PurchaseReservedInstancesOfferingRequest::getApp_ip()const
{
	return app_ip_;
}

void PurchaseReservedInstancesOfferingRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

int PurchaseReservedInstancesOfferingRequest::getPeriod()const
{
	return period_;
}

void PurchaseReservedInstancesOfferingRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

std::string PurchaseReservedInstancesOfferingRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void PurchaseReservedInstancesOfferingRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string PurchaseReservedInstancesOfferingRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void PurchaseReservedInstancesOfferingRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string PurchaseReservedInstancesOfferingRequest::getCallerBid()const
{
	return callerBid_;
}

void PurchaseReservedInstancesOfferingRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long PurchaseReservedInstancesOfferingRequest::getOwnerId()const
{
	return ownerId_;
}

void PurchaseReservedInstancesOfferingRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool PurchaseReservedInstancesOfferingRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void PurchaseReservedInstancesOfferingRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool PurchaseReservedInstancesOfferingRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void PurchaseReservedInstancesOfferingRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool PurchaseReservedInstancesOfferingRequest::getSecurity_transport()const
{
	return security_transport_;
}

void PurchaseReservedInstancesOfferingRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string PurchaseReservedInstancesOfferingRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void PurchaseReservedInstancesOfferingRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setCoreParameter("PeriodUnit", periodUnit);
}

std::string PurchaseReservedInstancesOfferingRequest::getOfferingType()const
{
	return offeringType_;
}

void PurchaseReservedInstancesOfferingRequest::setOfferingType(const std::string& offeringType)
{
	offeringType_ = offeringType;
	setCoreParameter("OfferingType", offeringType);
}

std::string PurchaseReservedInstancesOfferingRequest::getRequestId()const
{
	return requestId_;
}

void PurchaseReservedInstancesOfferingRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string PurchaseReservedInstancesOfferingRequest::getAkProxy()const
{
	return akProxy_;
}

void PurchaseReservedInstancesOfferingRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

std::string PurchaseReservedInstancesOfferingRequest::getZoneId()const
{
	return zoneId_;
}

void PurchaseReservedInstancesOfferingRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string PurchaseReservedInstancesOfferingRequest::getReservedInstanceName()const
{
	return reservedInstanceName_;
}

void PurchaseReservedInstancesOfferingRequest::setReservedInstanceName(const std::string& reservedInstanceName)
{
	reservedInstanceName_ = reservedInstanceName;
	setCoreParameter("ReservedInstanceName", reservedInstanceName);
}

int PurchaseReservedInstancesOfferingRequest::getInstanceAmount()const
{
	return instanceAmount_;
}

void PurchaseReservedInstancesOfferingRequest::setInstanceAmount(int instanceAmount)
{
	instanceAmount_ = instanceAmount;
	setCoreParameter("InstanceAmount", std::to_string(instanceAmount));
}

=======
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

#include <alibabacloud/ecs/model/PurchaseReservedInstancesOfferingRequest.h>

using AlibabaCloud::Ecs::Model::PurchaseReservedInstancesOfferingRequest;

PurchaseReservedInstancesOfferingRequest::PurchaseReservedInstancesOfferingRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "PurchaseReservedInstancesOffering")
{}

PurchaseReservedInstancesOfferingRequest::~PurchaseReservedInstancesOfferingRequest()
{}

long PurchaseReservedInstancesOfferingRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PurchaseReservedInstancesOfferingRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string PurchaseReservedInstancesOfferingRequest::getClientToken()const
{
	return clientToken_;
}

void PurchaseReservedInstancesOfferingRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

long PurchaseReservedInstancesOfferingRequest::getCallerParentId()const
{
	return callerParentId_;
}

void PurchaseReservedInstancesOfferingRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool PurchaseReservedInstancesOfferingRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void PurchaseReservedInstancesOfferingRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string PurchaseReservedInstancesOfferingRequest::getDescription()const
{
	return description_;
}

void PurchaseReservedInstancesOfferingRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string PurchaseReservedInstancesOfferingRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void PurchaseReservedInstancesOfferingRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string PurchaseReservedInstancesOfferingRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void PurchaseReservedInstancesOfferingRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string PurchaseReservedInstancesOfferingRequest::getCallerType()const
{
	return callerType_;
}

void PurchaseReservedInstancesOfferingRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string PurchaseReservedInstancesOfferingRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PurchaseReservedInstancesOfferingRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string PurchaseReservedInstancesOfferingRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void PurchaseReservedInstancesOfferingRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string PurchaseReservedInstancesOfferingRequest::getSecurityToken()const
{
	return securityToken_;
}

void PurchaseReservedInstancesOfferingRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string PurchaseReservedInstancesOfferingRequest::getRegionId()const
{
	return regionId_;
}

void PurchaseReservedInstancesOfferingRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool PurchaseReservedInstancesOfferingRequest::getEnable()const
{
	return enable_;
}

void PurchaseReservedInstancesOfferingRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string PurchaseReservedInstancesOfferingRequest::getRequestContent()const
{
	return requestContent_;
}

void PurchaseReservedInstancesOfferingRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string PurchaseReservedInstancesOfferingRequest::getScope()const
{
	return scope_;
}

void PurchaseReservedInstancesOfferingRequest::setScope(const std::string& scope)
{
	scope_ = scope;
	setCoreParameter("Scope", scope);
}

std::string PurchaseReservedInstancesOfferingRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void PurchaseReservedInstancesOfferingRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string PurchaseReservedInstancesOfferingRequest::getInstanceType()const
{
	return instanceType_;
}

void PurchaseReservedInstancesOfferingRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::string PurchaseReservedInstancesOfferingRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void PurchaseReservedInstancesOfferingRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long PurchaseReservedInstancesOfferingRequest::getCallerUid()const
{
	return callerUid_;
}

void PurchaseReservedInstancesOfferingRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string PurchaseReservedInstancesOfferingRequest::getApp_ip()const
{
	return app_ip_;
}

void PurchaseReservedInstancesOfferingRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

int PurchaseReservedInstancesOfferingRequest::getPeriod()const
{
	return period_;
}

void PurchaseReservedInstancesOfferingRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

std::string PurchaseReservedInstancesOfferingRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void PurchaseReservedInstancesOfferingRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string PurchaseReservedInstancesOfferingRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void PurchaseReservedInstancesOfferingRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string PurchaseReservedInstancesOfferingRequest::getCallerBid()const
{
	return callerBid_;
}

void PurchaseReservedInstancesOfferingRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long PurchaseReservedInstancesOfferingRequest::getOwnerId()const
{
	return ownerId_;
}

void PurchaseReservedInstancesOfferingRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool PurchaseReservedInstancesOfferingRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void PurchaseReservedInstancesOfferingRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool PurchaseReservedInstancesOfferingRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void PurchaseReservedInstancesOfferingRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool PurchaseReservedInstancesOfferingRequest::getSecurity_transport()const
{
	return security_transport_;
}

void PurchaseReservedInstancesOfferingRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string PurchaseReservedInstancesOfferingRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void PurchaseReservedInstancesOfferingRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setCoreParameter("PeriodUnit", periodUnit);
}

std::string PurchaseReservedInstancesOfferingRequest::getOfferingType()const
{
	return offeringType_;
}

void PurchaseReservedInstancesOfferingRequest::setOfferingType(const std::string& offeringType)
{
	offeringType_ = offeringType;
	setCoreParameter("OfferingType", offeringType);
}

std::string PurchaseReservedInstancesOfferingRequest::getRequestId()const
{
	return requestId_;
}

void PurchaseReservedInstancesOfferingRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string PurchaseReservedInstancesOfferingRequest::getAkProxy()const
{
	return akProxy_;
}

void PurchaseReservedInstancesOfferingRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

std::string PurchaseReservedInstancesOfferingRequest::getZoneId()const
{
	return zoneId_;
}

void PurchaseReservedInstancesOfferingRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string PurchaseReservedInstancesOfferingRequest::getReservedInstanceName()const
{
	return reservedInstanceName_;
}

void PurchaseReservedInstancesOfferingRequest::setReservedInstanceName(const std::string& reservedInstanceName)
{
	reservedInstanceName_ = reservedInstanceName;
	setCoreParameter("ReservedInstanceName", reservedInstanceName);
}

int PurchaseReservedInstancesOfferingRequest::getInstanceAmount()const
{
	return instanceAmount_;
}

void PurchaseReservedInstancesOfferingRequest::setInstanceAmount(int instanceAmount)
{
	instanceAmount_ = instanceAmount;
	setCoreParameter("InstanceAmount", std::to_string(instanceAmount));
}

>>>>>>> master
