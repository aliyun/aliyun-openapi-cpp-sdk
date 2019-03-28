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

#include <alibabacloud/ecs/model/AssignPrivateIpAddressesRequest.h>

using AlibabaCloud::Ecs::Model::AssignPrivateIpAddressesRequest;

AssignPrivateIpAddressesRequest::AssignPrivateIpAddressesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "AssignPrivateIpAddresses")
{}

AssignPrivateIpAddressesRequest::~AssignPrivateIpAddressesRequest()
{}

long AssignPrivateIpAddressesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AssignPrivateIpAddressesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long AssignPrivateIpAddressesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void AssignPrivateIpAddressesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool AssignPrivateIpAddressesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void AssignPrivateIpAddressesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

int AssignPrivateIpAddressesRequest::getSecondaryPrivateIpAddressCount()const
{
	return secondaryPrivateIpAddressCount_;
}

void AssignPrivateIpAddressesRequest::setSecondaryPrivateIpAddressCount(int secondaryPrivateIpAddressCount)
{
	secondaryPrivateIpAddressCount_ = secondaryPrivateIpAddressCount;
	setCoreParameter("SecondaryPrivateIpAddressCount", std::to_string(secondaryPrivateIpAddressCount));
}

std::string AssignPrivateIpAddressesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void AssignPrivateIpAddressesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string AssignPrivateIpAddressesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void AssignPrivateIpAddressesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string AssignPrivateIpAddressesRequest::getCallerType()const
{
	return callerType_;
}

void AssignPrivateIpAddressesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string AssignPrivateIpAddressesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AssignPrivateIpAddressesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string AssignPrivateIpAddressesRequest::getSecurityToken()const
{
	return securityToken_;
}

void AssignPrivateIpAddressesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string AssignPrivateIpAddressesRequest::getRegionId()const
{
	return regionId_;
}

void AssignPrivateIpAddressesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool AssignPrivateIpAddressesRequest::getEnable()const
{
	return enable_;
}

void AssignPrivateIpAddressesRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string AssignPrivateIpAddressesRequest::getRequestContent()const
{
	return requestContent_;
}

void AssignPrivateIpAddressesRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string AssignPrivateIpAddressesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void AssignPrivateIpAddressesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string AssignPrivateIpAddressesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void AssignPrivateIpAddressesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long AssignPrivateIpAddressesRequest::getCallerUid()const
{
	return callerUid_;
}

void AssignPrivateIpAddressesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string AssignPrivateIpAddressesRequest::getApp_ip()const
{
	return app_ip_;
}

void AssignPrivateIpAddressesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string AssignPrivateIpAddressesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AssignPrivateIpAddressesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AssignPrivateIpAddressesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AssignPrivateIpAddressesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string AssignPrivateIpAddressesRequest::getCallerBid()const
{
	return callerBid_;
}

void AssignPrivateIpAddressesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long AssignPrivateIpAddressesRequest::getOwnerId()const
{
	return ownerId_;
}

void AssignPrivateIpAddressesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool AssignPrivateIpAddressesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void AssignPrivateIpAddressesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool AssignPrivateIpAddressesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void AssignPrivateIpAddressesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool AssignPrivateIpAddressesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void AssignPrivateIpAddressesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::vector<std::string> AssignPrivateIpAddressesRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void AssignPrivateIpAddressesRequest::setPrivateIpAddress(const std::vector<std::string>& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	for(int i = 0; i!= privateIpAddress.size(); i++)
		setCoreParameter("PrivateIpAddress."+ std::to_string(i), privateIpAddress.at(i));
}

std::string AssignPrivateIpAddressesRequest::getRequestId()const
{
	return requestId_;
}

void AssignPrivateIpAddressesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string AssignPrivateIpAddressesRequest::getNetworkInterfaceId()const
{
	return networkInterfaceId_;
}

void AssignPrivateIpAddressesRequest::setNetworkInterfaceId(const std::string& networkInterfaceId)
{
	networkInterfaceId_ = networkInterfaceId;
	setCoreParameter("NetworkInterfaceId", networkInterfaceId);
}

