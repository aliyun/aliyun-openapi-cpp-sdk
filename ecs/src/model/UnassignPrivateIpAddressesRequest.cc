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

#include <alibabacloud/ecs/model/UnassignPrivateIpAddressesRequest.h>

using AlibabaCloud::Ecs::Model::UnassignPrivateIpAddressesRequest;

UnassignPrivateIpAddressesRequest::UnassignPrivateIpAddressesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "UnassignPrivateIpAddresses")
{}

UnassignPrivateIpAddressesRequest::~UnassignPrivateIpAddressesRequest()
{}

bool UnassignPrivateIpAddressesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnassignPrivateIpAddressesRequest::setResourceOwnerId(bool resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId ? "true" : "false");
}

bool UnassignPrivateIpAddressesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void UnassignPrivateIpAddressesRequest::setCallerParentId(bool callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId ? "true" : "false");
}

bool UnassignPrivateIpAddressesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void UnassignPrivateIpAddressesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string UnassignPrivateIpAddressesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void UnassignPrivateIpAddressesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string UnassignPrivateIpAddressesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void UnassignPrivateIpAddressesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string UnassignPrivateIpAddressesRequest::getCallerType()const
{
	return callerType_;
}

void UnassignPrivateIpAddressesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string UnassignPrivateIpAddressesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UnassignPrivateIpAddressesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string UnassignPrivateIpAddressesRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void UnassignPrivateIpAddressesRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string UnassignPrivateIpAddressesRequest::getSecurityToken()const
{
	return securityToken_;
}

void UnassignPrivateIpAddressesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string UnassignPrivateIpAddressesRequest::getRegionId()const
{
	return regionId_;
}

void UnassignPrivateIpAddressesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool UnassignPrivateIpAddressesRequest::getEnable()const
{
	return enable_;
}

void UnassignPrivateIpAddressesRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string UnassignPrivateIpAddressesRequest::getRequestContent()const
{
	return requestContent_;
}

void UnassignPrivateIpAddressesRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string UnassignPrivateIpAddressesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void UnassignPrivateIpAddressesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string UnassignPrivateIpAddressesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void UnassignPrivateIpAddressesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

bool UnassignPrivateIpAddressesRequest::getCallerUid()const
{
	return callerUid_;
}

void UnassignPrivateIpAddressesRequest::setCallerUid(bool callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid ? "true" : "false");
}

std::string UnassignPrivateIpAddressesRequest::getApp_ip()const
{
	return app_ip_;
}

void UnassignPrivateIpAddressesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string UnassignPrivateIpAddressesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UnassignPrivateIpAddressesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UnassignPrivateIpAddressesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UnassignPrivateIpAddressesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string UnassignPrivateIpAddressesRequest::getCallerBid()const
{
	return callerBid_;
}

void UnassignPrivateIpAddressesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

bool UnassignPrivateIpAddressesRequest::getOwnerId()const
{
	return ownerId_;
}

void UnassignPrivateIpAddressesRequest::setOwnerId(bool ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId ? "true" : "false");
}

bool UnassignPrivateIpAddressesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void UnassignPrivateIpAddressesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool UnassignPrivateIpAddressesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void UnassignPrivateIpAddressesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool UnassignPrivateIpAddressesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void UnassignPrivateIpAddressesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::vector<std::string> UnassignPrivateIpAddressesRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void UnassignPrivateIpAddressesRequest::setPrivateIpAddress(const std::vector<std::string>& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	for(int i = 0; i!= privateIpAddress.size(); i++)
		setCoreParameter("PrivateIpAddress."+ std::to_string(i), privateIpAddress.at(i));
}

std::string UnassignPrivateIpAddressesRequest::getRequestId()const
{
	return requestId_;
}

void UnassignPrivateIpAddressesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string UnassignPrivateIpAddressesRequest::getAkProxy()const
{
	return akProxy_;
}

void UnassignPrivateIpAddressesRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

std::string UnassignPrivateIpAddressesRequest::getNetworkInterfaceId()const
{
	return networkInterfaceId_;
}

void UnassignPrivateIpAddressesRequest::setNetworkInterfaceId(const std::string& networkInterfaceId)
{
	networkInterfaceId_ = networkInterfaceId;
	setCoreParameter("NetworkInterfaceId", networkInterfaceId);
}

