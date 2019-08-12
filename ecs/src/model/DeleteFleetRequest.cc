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

#include <alibabacloud/ecs/model/DeleteFleetRequest.h>

using AlibabaCloud::Ecs::Model::DeleteFleetRequest;

DeleteFleetRequest::DeleteFleetRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteFleet")
{}

DeleteFleetRequest::~DeleteFleetRequest()
{}

long DeleteFleetRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteFleetRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DeleteFleetRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteFleetRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteFleetRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteFleetRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteFleetRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteFleetRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteFleetRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteFleetRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteFleetRequest::getCallerType()const
{
	return callerType_;
}

void DeleteFleetRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DeleteFleetRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteFleetRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteFleetRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteFleetRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteFleetRequest::getRegionId()const
{
	return regionId_;
}

void DeleteFleetRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool DeleteFleetRequest::getEnable()const
{
	return enable_;
}

void DeleteFleetRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DeleteFleetRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteFleetRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

bool DeleteFleetRequest::getTerminateInstances()const
{
	return terminateInstances_;
}

void DeleteFleetRequest::setTerminateInstances(bool terminateInstances)
{
	terminateInstances_ = terminateInstances;
	setCoreParameter("TerminateInstances", terminateInstances ? "true" : "false");
}

std::string DeleteFleetRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteFleetRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteFleetRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteFleetRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DeleteFleetRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteFleetRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DeleteFleetRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteFleetRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DeleteFleetRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteFleetRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteFleetRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteFleetRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DeleteFleetRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteFleetRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DeleteFleetRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteFleetRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteFleetRequest::getFleetId()const
{
	return fleetId_;
}

void DeleteFleetRequest::setFleetId(const std::string& fleetId)
{
	fleetId_ = fleetId;
	setCoreParameter("FleetId", fleetId);
}

bool DeleteFleetRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteFleetRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeleteFleetRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteFleetRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DeleteFleetRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteFleetRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteFleetRequest::getRequestId()const
{
	return requestId_;
}

void DeleteFleetRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DeleteFleetRequest::getAkProxy()const
{
	return akProxy_;
}

void DeleteFleetRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

