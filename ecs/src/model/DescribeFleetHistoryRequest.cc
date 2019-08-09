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

#include <alibabacloud/ecs/model/DescribeFleetHistoryRequest.h>

using AlibabaCloud::Ecs::Model::DescribeFleetHistoryRequest;

DescribeFleetHistoryRequest::DescribeFleetHistoryRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeFleetHistory")
{}

DescribeFleetHistoryRequest::~DescribeFleetHistoryRequest()
{}

long DescribeFleetHistoryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeFleetHistoryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeFleetHistoryRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeFleetHistoryRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeFleetHistoryRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeFleetHistoryRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeFleetHistoryRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeFleetHistoryRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeFleetHistoryRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeFleetHistoryRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeFleetHistoryRequest::getCallerType()const
{
	return callerType_;
}

void DescribeFleetHistoryRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeFleetHistoryRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeFleetHistoryRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeFleetHistoryRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeFleetHistoryRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeFleetHistoryRequest::getRegionId()const
{
	return regionId_;
}

void DescribeFleetHistoryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool DescribeFleetHistoryRequest::getEnable()const
{
	return enable_;
}

void DescribeFleetHistoryRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeFleetHistoryRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeFleetHistoryRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeFleetHistoryRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeFleetHistoryRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeFleetHistoryRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeFleetHistoryRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeFleetHistoryRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeFleetHistoryRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeFleetHistoryRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeFleetHistoryRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeFleetHistoryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeFleetHistoryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeFleetHistoryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeFleetHistoryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeFleetHistoryRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeFleetHistoryRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeFleetHistoryRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeFleetHistoryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeFleetHistoryRequest::getFleetId()const
{
	return fleetId_;
}

void DescribeFleetHistoryRequest::setFleetId(const std::string& fleetId)
{
	fleetId_ = fleetId;
	setCoreParameter("FleetId", fleetId);
}

bool DescribeFleetHistoryRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeFleetHistoryRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeFleetHistoryRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeFleetHistoryRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeFleetHistoryRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeFleetHistoryRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeFleetHistoryRequest::getRequestId()const
{
	return requestId_;
}

void DescribeFleetHistoryRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeFleetHistoryRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeFleetHistoryRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
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

#include <alibabacloud/ecs/model/DescribeFleetHistoryRequest.h>

using AlibabaCloud::Ecs::Model::DescribeFleetHistoryRequest;

DescribeFleetHistoryRequest::DescribeFleetHistoryRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeFleetHistory")
{}

DescribeFleetHistoryRequest::~DescribeFleetHistoryRequest()
{}

long DescribeFleetHistoryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeFleetHistoryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeFleetHistoryRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeFleetHistoryRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeFleetHistoryRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeFleetHistoryRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeFleetHistoryRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeFleetHistoryRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeFleetHistoryRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeFleetHistoryRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeFleetHistoryRequest::getCallerType()const
{
	return callerType_;
}

void DescribeFleetHistoryRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeFleetHistoryRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeFleetHistoryRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeFleetHistoryRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeFleetHistoryRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeFleetHistoryRequest::getRegionId()const
{
	return regionId_;
}

void DescribeFleetHistoryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool DescribeFleetHistoryRequest::getEnable()const
{
	return enable_;
}

void DescribeFleetHistoryRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeFleetHistoryRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeFleetHistoryRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeFleetHistoryRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeFleetHistoryRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeFleetHistoryRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeFleetHistoryRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeFleetHistoryRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeFleetHistoryRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeFleetHistoryRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeFleetHistoryRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeFleetHistoryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeFleetHistoryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeFleetHistoryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeFleetHistoryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeFleetHistoryRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeFleetHistoryRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeFleetHistoryRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeFleetHistoryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeFleetHistoryRequest::getFleetId()const
{
	return fleetId_;
}

void DescribeFleetHistoryRequest::setFleetId(const std::string& fleetId)
{
	fleetId_ = fleetId;
	setCoreParameter("FleetId", fleetId);
}

bool DescribeFleetHistoryRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeFleetHistoryRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeFleetHistoryRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeFleetHistoryRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeFleetHistoryRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeFleetHistoryRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeFleetHistoryRequest::getRequestId()const
{
	return requestId_;
}

void DescribeFleetHistoryRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeFleetHistoryRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeFleetHistoryRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

>>>>>>> master
