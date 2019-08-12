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

#include <alibabacloud/vpc/model/ModifyNetworkAclAttributesRequest.h>

using AlibabaCloud::Vpc::Model::ModifyNetworkAclAttributesRequest;

ModifyNetworkAclAttributesRequest::ModifyNetworkAclAttributesRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyNetworkAclAttributes")
{}

ModifyNetworkAclAttributesRequest::~ModifyNetworkAclAttributesRequest()
{}

long ModifyNetworkAclAttributesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyNetworkAclAttributesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyNetworkAclAttributesRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyNetworkAclAttributesRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

long ModifyNetworkAclAttributesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyNetworkAclAttributesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

std::string ModifyNetworkAclAttributesRequest::getDescription()const
{
	return description_;
}

void ModifyNetworkAclAttributesRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

bool ModifyNetworkAclAttributesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyNetworkAclAttributesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ModifyNetworkAclAttributesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyNetworkAclAttributesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string ModifyNetworkAclAttributesRequest::getCallerType()const
{
	return callerType_;
}

void ModifyNetworkAclAttributesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string ModifyNetworkAclAttributesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyNetworkAclAttributesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string ModifyNetworkAclAttributesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyNetworkAclAttributesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string ModifyNetworkAclAttributesRequest::getRegionId()const
{
	return regionId_;
}

void ModifyNetworkAclAttributesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyNetworkAclAttributesRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyNetworkAclAttributesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

bool ModifyNetworkAclAttributesRequest::getEnable()const
{
	return enable_;
}

void ModifyNetworkAclAttributesRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string ModifyNetworkAclAttributesRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyNetworkAclAttributesRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string ModifyNetworkAclAttributesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyNetworkAclAttributesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string ModifyNetworkAclAttributesRequest::getNetworkAclId()const
{
	return networkAclId_;
}

void ModifyNetworkAclAttributesRequest::setNetworkAclId(const std::string& networkAclId)
{
	networkAclId_ = networkAclId;
	setCoreParameter("NetworkAclId", std::to_string(networkAclId));
}

std::string ModifyNetworkAclAttributesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyNetworkAclAttributesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long ModifyNetworkAclAttributesRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyNetworkAclAttributesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string ModifyNetworkAclAttributesRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyNetworkAclAttributesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string ModifyNetworkAclAttributesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyNetworkAclAttributesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyNetworkAclAttributesRequest::getNetworkAclName()const
{
	return networkAclName_;
}

void ModifyNetworkAclAttributesRequest::setNetworkAclName(const std::string& networkAclName)
{
	networkAclName_ = networkAclName;
	setCoreParameter("NetworkAclName", std::to_string(networkAclName));
}

std::string ModifyNetworkAclAttributesRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyNetworkAclAttributesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long ModifyNetworkAclAttributesRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyNetworkAclAttributesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool ModifyNetworkAclAttributesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyNetworkAclAttributesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ModifyNetworkAclAttributesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyNetworkAclAttributesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ModifyNetworkAclAttributesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyNetworkAclAttributesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ModifyNetworkAclAttributesRequest::getRequestId()const
{
	return requestId_;
}

void ModifyNetworkAclAttributesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

