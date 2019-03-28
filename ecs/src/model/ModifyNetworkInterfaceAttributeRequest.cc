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

#include <alibabacloud/ecs/model/ModifyNetworkInterfaceAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyNetworkInterfaceAttributeRequest;

ModifyNetworkInterfaceAttributeRequest::ModifyNetworkInterfaceAttributeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyNetworkInterfaceAttribute")
{}

ModifyNetworkInterfaceAttributeRequest::~ModifyNetworkInterfaceAttributeRequest()
{}

long ModifyNetworkInterfaceAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyNetworkInterfaceAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ModifyNetworkInterfaceAttributeRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyNetworkInterfaceAttributeRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

std::vector<std::string> ModifyNetworkInterfaceAttributeRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void ModifyNetworkInterfaceAttributeRequest::setSecurityGroupId(const std::vector<std::string>& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	for(int i = 0; i!= securityGroupId.size(); i++)
		setCoreParameter("SecurityGroupId."+ std::to_string(i), securityGroupId.at(i));
}

bool ModifyNetworkInterfaceAttributeRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyNetworkInterfaceAttributeRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ModifyNetworkInterfaceAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyNetworkInterfaceAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ModifyNetworkInterfaceAttributeRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyNetworkInterfaceAttributeRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyNetworkInterfaceAttributeRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyNetworkInterfaceAttributeRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyNetworkInterfaceAttributeRequest::getCallerType()const
{
	return callerType_;
}

void ModifyNetworkInterfaceAttributeRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ModifyNetworkInterfaceAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyNetworkInterfaceAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyNetworkInterfaceAttributeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyNetworkInterfaceAttributeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyNetworkInterfaceAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyNetworkInterfaceAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool ModifyNetworkInterfaceAttributeRequest::getEnable()const
{
	return enable_;
}

void ModifyNetworkInterfaceAttributeRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string ModifyNetworkInterfaceAttributeRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyNetworkInterfaceAttributeRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ModifyNetworkInterfaceAttributeRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyNetworkInterfaceAttributeRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyNetworkInterfaceAttributeRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyNetworkInterfaceAttributeRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

std::string ModifyNetworkInterfaceAttributeRequest::getNetworkInterfaceName()const
{
	return networkInterfaceName_;
}

void ModifyNetworkInterfaceAttributeRequest::setNetworkInterfaceName(const std::string& networkInterfaceName)
{
	networkInterfaceName_ = networkInterfaceName;
	setCoreParameter("NetworkInterfaceName", networkInterfaceName);
}

long ModifyNetworkInterfaceAttributeRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyNetworkInterfaceAttributeRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string ModifyNetworkInterfaceAttributeRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyNetworkInterfaceAttributeRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ModifyNetworkInterfaceAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyNetworkInterfaceAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyNetworkInterfaceAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyNetworkInterfaceAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyNetworkInterfaceAttributeRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyNetworkInterfaceAttributeRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ModifyNetworkInterfaceAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyNetworkInterfaceAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool ModifyNetworkInterfaceAttributeRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyNetworkInterfaceAttributeRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ModifyNetworkInterfaceAttributeRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyNetworkInterfaceAttributeRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ModifyNetworkInterfaceAttributeRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyNetworkInterfaceAttributeRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ModifyNetworkInterfaceAttributeRequest::getRequestId()const
{
	return requestId_;
}

void ModifyNetworkInterfaceAttributeRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ModifyNetworkInterfaceAttributeRequest::getNetworkInterfaceId()const
{
	return networkInterfaceId_;
}

void ModifyNetworkInterfaceAttributeRequest::setNetworkInterfaceId(const std::string& networkInterfaceId)
{
	networkInterfaceId_ = networkInterfaceId;
	setCoreParameter("NetworkInterfaceId", networkInterfaceId);
}

