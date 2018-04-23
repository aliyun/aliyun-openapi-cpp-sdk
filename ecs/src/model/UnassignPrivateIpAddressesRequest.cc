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

long UnassignPrivateIpAddressesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnassignPrivateIpAddressesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long UnassignPrivateIpAddressesRequest::getCallerParentId()const
{
	return callerParentId_;
}

void UnassignPrivateIpAddressesRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool UnassignPrivateIpAddressesRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void UnassignPrivateIpAddressesRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string UnassignPrivateIpAddressesRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void UnassignPrivateIpAddressesRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string UnassignPrivateIpAddressesRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void UnassignPrivateIpAddressesRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string UnassignPrivateIpAddressesRequest::getCallerType()const
{
	return callerType_;
}

void UnassignPrivateIpAddressesRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string UnassignPrivateIpAddressesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UnassignPrivateIpAddressesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UnassignPrivateIpAddressesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void UnassignPrivateIpAddressesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string UnassignPrivateIpAddressesRequest::getSecurityToken()const
{
	return securityToken_;
}

void UnassignPrivateIpAddressesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string UnassignPrivateIpAddressesRequest::getRegionId()const
{
	return regionId_;
}

void UnassignPrivateIpAddressesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool UnassignPrivateIpAddressesRequest::getEnable()const
{
	return enable_;
}

void UnassignPrivateIpAddressesRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string UnassignPrivateIpAddressesRequest::getRequestContent()const
{
	return requestContent_;
}

void UnassignPrivateIpAddressesRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string UnassignPrivateIpAddressesRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void UnassignPrivateIpAddressesRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string UnassignPrivateIpAddressesRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void UnassignPrivateIpAddressesRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long UnassignPrivateIpAddressesRequest::getCallerUid()const
{
	return callerUid_;
}

void UnassignPrivateIpAddressesRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string UnassignPrivateIpAddressesRequest::getApp_ip()const
{
	return app_ip_;
}

void UnassignPrivateIpAddressesRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string UnassignPrivateIpAddressesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UnassignPrivateIpAddressesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UnassignPrivateIpAddressesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UnassignPrivateIpAddressesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string UnassignPrivateIpAddressesRequest::getCallerBid()const
{
	return callerBid_;
}

void UnassignPrivateIpAddressesRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long UnassignPrivateIpAddressesRequest::getOwnerId()const
{
	return ownerId_;
}

void UnassignPrivateIpAddressesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool UnassignPrivateIpAddressesRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void UnassignPrivateIpAddressesRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool UnassignPrivateIpAddressesRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void UnassignPrivateIpAddressesRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool UnassignPrivateIpAddressesRequest::getSecurity_transport()const
{
	return security_transport_;
}

void UnassignPrivateIpAddressesRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::vector<std::string> UnassignPrivateIpAddressesRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void UnassignPrivateIpAddressesRequest::setPrivateIpAddress(const std::vector<std::string>& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	for(int i = 0; i!= privateIpAddress.size(); i++)
		setParameter("PrivateIpAddress."+ std::to_string(i), privateIpAddress.at(i));
}

std::string UnassignPrivateIpAddressesRequest::getRequestId()const
{
	return requestId_;
}

void UnassignPrivateIpAddressesRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string UnassignPrivateIpAddressesRequest::getNetworkInterfaceId()const
{
	return networkInterfaceId_;
}

void UnassignPrivateIpAddressesRequest::setNetworkInterfaceId(const std::string& networkInterfaceId)
{
	networkInterfaceId_ = networkInterfaceId;
	setParameter("NetworkInterfaceId", networkInterfaceId);
}

