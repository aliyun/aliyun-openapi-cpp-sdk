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

#include <alibabacloud/ecs/model/CreateNetworkInterfaceRequest.h>

using AlibabaCloud::Ecs::Model::CreateNetworkInterfaceRequest;

CreateNetworkInterfaceRequest::CreateNetworkInterfaceRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateNetworkInterface")
{}

CreateNetworkInterfaceRequest::~CreateNetworkInterfaceRequest()
{}

std::string CreateNetworkInterfaceRequest::getTag4Value()const
{
	return tag4Value_;
}

void CreateNetworkInterfaceRequest::setTag4Value(const std::string& tag4Value)
{
	tag4Value_ = tag4Value;
	setParameter("Tag4Value", tag4Value);
}

long CreateNetworkInterfaceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateNetworkInterfaceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateNetworkInterfaceRequest::getTag2Key()const
{
	return tag2Key_;
}

void CreateNetworkInterfaceRequest::setTag2Key(const std::string& tag2Key)
{
	tag2Key_ = tag2Key;
	setParameter("Tag2Key", tag2Key);
}

std::string CreateNetworkInterfaceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateNetworkInterfaceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

long CreateNetworkInterfaceRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateNetworkInterfaceRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string CreateNetworkInterfaceRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateNetworkInterfaceRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setParameter("SecurityGroupId", securityGroupId);
}

bool CreateNetworkInterfaceRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateNetworkInterfaceRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string CreateNetworkInterfaceRequest::getDescription()const
{
	return description_;
}

void CreateNetworkInterfaceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateNetworkInterfaceRequest::getTag3Key()const
{
	return tag3Key_;
}

void CreateNetworkInterfaceRequest::setTag3Key(const std::string& tag3Key)
{
	tag3Key_ = tag3Key;
	setParameter("Tag3Key", tag3Key);
}

std::string CreateNetworkInterfaceRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateNetworkInterfaceRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateNetworkInterfaceRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateNetworkInterfaceRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateNetworkInterfaceRequest::getCallerType()const
{
	return callerType_;
}

void CreateNetworkInterfaceRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string CreateNetworkInterfaceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateNetworkInterfaceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateNetworkInterfaceRequest::getTag1Value()const
{
	return tag1Value_;
}

void CreateNetworkInterfaceRequest::setTag1Value(const std::string& tag1Value)
{
	tag1Value_ = tag1Value;
	setParameter("Tag1Value", tag1Value);
}

std::string CreateNetworkInterfaceRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateNetworkInterfaceRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateNetworkInterfaceRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateNetworkInterfaceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateNetworkInterfaceRequest::getRegionId()const
{
	return regionId_;
}

void CreateNetworkInterfaceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool CreateNetworkInterfaceRequest::getEnable()const
{
	return enable_;
}

void CreateNetworkInterfaceRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string CreateNetworkInterfaceRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateNetworkInterfaceRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string CreateNetworkInterfaceRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateNetworkInterfaceRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateNetworkInterfaceRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateNetworkInterfaceRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

std::string CreateNetworkInterfaceRequest::getTag3Value()const
{
	return tag3Value_;
}

void CreateNetworkInterfaceRequest::setTag3Value(const std::string& tag3Value)
{
	tag3Value_ = tag3Value;
	setParameter("Tag3Value", tag3Value);
}

std::string CreateNetworkInterfaceRequest::getNetworkInterfaceName()const
{
	return networkInterfaceName_;
}

void CreateNetworkInterfaceRequest::setNetworkInterfaceName(const std::string& networkInterfaceName)
{
	networkInterfaceName_ = networkInterfaceName;
	setParameter("NetworkInterfaceName", networkInterfaceName);
}

long CreateNetworkInterfaceRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateNetworkInterfaceRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string CreateNetworkInterfaceRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateNetworkInterfaceRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string CreateNetworkInterfaceRequest::getTag5Key()const
{
	return tag5Key_;
}

void CreateNetworkInterfaceRequest::setTag5Key(const std::string& tag5Key)
{
	tag5Key_ = tag5Key;
	setParameter("Tag5Key", tag5Key);
}

std::string CreateNetworkInterfaceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateNetworkInterfaceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateNetworkInterfaceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateNetworkInterfaceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateNetworkInterfaceRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateNetworkInterfaceRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long CreateNetworkInterfaceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateNetworkInterfaceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateNetworkInterfaceRequest::getTag5Value()const
{
	return tag5Value_;
}

void CreateNetworkInterfaceRequest::setTag5Value(const std::string& tag5Value)
{
	tag5Value_ = tag5Value;
	setParameter("Tag5Value", tag5Value);
}

bool CreateNetworkInterfaceRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateNetworkInterfaceRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool CreateNetworkInterfaceRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateNetworkInterfaceRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool CreateNetworkInterfaceRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateNetworkInterfaceRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string CreateNetworkInterfaceRequest::getTag1Key()const
{
	return tag1Key_;
}

void CreateNetworkInterfaceRequest::setTag1Key(const std::string& tag1Key)
{
	tag1Key_ = tag1Key;
	setParameter("Tag1Key", tag1Key);
}

std::string CreateNetworkInterfaceRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateNetworkInterfaceRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setParameter("VSwitchId", vSwitchId);
}

std::string CreateNetworkInterfaceRequest::getRequestId()const
{
	return requestId_;
}

void CreateNetworkInterfaceRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string CreateNetworkInterfaceRequest::getTag2Value()const
{
	return tag2Value_;
}

void CreateNetworkInterfaceRequest::setTag2Value(const std::string& tag2Value)
{
	tag2Value_ = tag2Value;
	setParameter("Tag2Value", tag2Value);
}

std::string CreateNetworkInterfaceRequest::getTag4Key()const
{
	return tag4Key_;
}

void CreateNetworkInterfaceRequest::setTag4Key(const std::string& tag4Key)
{
	tag4Key_ = tag4Key;
	setParameter("Tag4Key", tag4Key);
}

std::string CreateNetworkInterfaceRequest::getPrimaryIpAddress()const
{
	return primaryIpAddress_;
}

void CreateNetworkInterfaceRequest::setPrimaryIpAddress(const std::string& primaryIpAddress)
{
	primaryIpAddress_ = primaryIpAddress;
	setParameter("PrimaryIpAddress", primaryIpAddress);
}

