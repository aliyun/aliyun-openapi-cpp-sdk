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

#include <alibabacloud/ecs/model/ModifyReservedInstancesRequest.h>

using AlibabaCloud::Ecs::Model::ModifyReservedInstancesRequest;

ModifyReservedInstancesRequest::ModifyReservedInstancesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyReservedInstances")
{}

ModifyReservedInstancesRequest::~ModifyReservedInstancesRequest()
{}

long ModifyReservedInstancesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyReservedInstancesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::vector<ModifyReservedInstancesRequest::Configuration> ModifyReservedInstancesRequest::getConfiguration()const
{
	return configuration_;
}

void ModifyReservedInstancesRequest::setConfiguration(const std::vector<Configuration>& configuration)
{
	configuration_ = configuration;
	int i = 0;
	for(int i = 0; i!= configuration.size(); i++)	{
		auto obj = configuration.at(i);
		std::string str ="Configuration."+ std::to_string(i);
		setCoreParameter(str + ".ZoneId", std::to_string(obj.zoneId));
		setCoreParameter(str + ".ReservedInstanceName", std::to_string(obj.reservedInstanceName));
		setCoreParameter(str + ".InstanceType", std::to_string(obj.instanceType));
		setCoreParameter(str + ".Scope", std::to_string(obj.scope));
		setCoreParameter(str + ".InstanceAmount", obj.instanceAmount);
	}
}

long ModifyReservedInstancesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyReservedInstancesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool ModifyReservedInstancesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyReservedInstancesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ModifyReservedInstancesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyReservedInstancesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string ModifyReservedInstancesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyReservedInstancesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string ModifyReservedInstancesRequest::getCallerType()const
{
	return callerType_;
}

void ModifyReservedInstancesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string ModifyReservedInstancesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyReservedInstancesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string ModifyReservedInstancesRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyReservedInstancesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string ModifyReservedInstancesRequest::getRegionId()const
{
	return regionId_;
}

void ModifyReservedInstancesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

bool ModifyReservedInstancesRequest::getEnable()const
{
	return enable_;
}

void ModifyReservedInstancesRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string ModifyReservedInstancesRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyReservedInstancesRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string ModifyReservedInstancesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyReservedInstancesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string ModifyReservedInstancesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyReservedInstancesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long ModifyReservedInstancesRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyReservedInstancesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string ModifyReservedInstancesRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyReservedInstancesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string ModifyReservedInstancesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyReservedInstancesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyReservedInstancesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyReservedInstancesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ModifyReservedInstancesRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyReservedInstancesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long ModifyReservedInstancesRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyReservedInstancesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool ModifyReservedInstancesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyReservedInstancesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ModifyReservedInstancesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyReservedInstancesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ModifyReservedInstancesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyReservedInstancesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::vector<std::string> ModifyReservedInstancesRequest::getReservedInstanceId()const
{
	return reservedInstanceId_;
}

void ModifyReservedInstancesRequest::setReservedInstanceId(const std::vector<std::string>& reservedInstanceId)
{
	reservedInstanceId_ = reservedInstanceId;
	for(int i = 0; i!= reservedInstanceId.size(); i++)
		setCoreParameter("ReservedInstanceId."+ std::to_string(i), std::to_string(reservedInstanceId.at(i)));
}

std::string ModifyReservedInstancesRequest::getRequestId()const
{
	return requestId_;
}

void ModifyReservedInstancesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string ModifyReservedInstancesRequest::getAkProxy()const
{
	return akProxy_;
}

void ModifyReservedInstancesRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", std::to_string(akProxy));
}

