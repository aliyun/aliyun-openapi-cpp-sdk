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

long CreateNetworkInterfaceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateNetworkInterfaceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
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

std::string CreateNetworkInterfaceRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void CreateNetworkInterfaceRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setParameter("SourceRegionId", sourceRegionId);
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

std::vector<CreateNetworkInterfaceRequest::Tag> CreateNetworkInterfaceRequest::getTag()const
{
	return tag_;
}

void CreateNetworkInterfaceRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setParameter(str + ".Key", obj.key);
		setParameter(str + ".Value", obj.value);
	}
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

std::string CreateNetworkInterfaceRequest::getPrimaryIpAddress()const
{
	return primaryIpAddress_;
}

void CreateNetworkInterfaceRequest::setPrimaryIpAddress(const std::string& primaryIpAddress)
{
	primaryIpAddress_ = primaryIpAddress;
	setParameter("PrimaryIpAddress", primaryIpAddress);
}

