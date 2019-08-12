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
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateNetworkInterfaceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateNetworkInterfaceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

long CreateNetworkInterfaceRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateNetworkInterfaceRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

std::string CreateNetworkInterfaceRequest::getSecurityGroupId()const
{
	return securityGroupId_;
}

void CreateNetworkInterfaceRequest::setSecurityGroupId(const std::string& securityGroupId)
{
	securityGroupId_ = securityGroupId;
	setCoreParameter("SecurityGroupId", std::to_string(securityGroupId));
}

bool CreateNetworkInterfaceRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateNetworkInterfaceRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateNetworkInterfaceRequest::getDescription()const
{
	return description_;
}

void CreateNetworkInterfaceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string CreateNetworkInterfaceRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateNetworkInterfaceRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string CreateNetworkInterfaceRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateNetworkInterfaceRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string CreateNetworkInterfaceRequest::getCallerType()const
{
	return callerType_;
}

void CreateNetworkInterfaceRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string CreateNetworkInterfaceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateNetworkInterfaceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string CreateNetworkInterfaceRequest::getBusinessType()const
{
	return businessType_;
}

void CreateNetworkInterfaceRequest::setBusinessType(const std::string& businessType)
{
	businessType_ = businessType;
	setCoreParameter("BusinessType", std::to_string(businessType));
}

std::string CreateNetworkInterfaceRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void CreateNetworkInterfaceRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

std::string CreateNetworkInterfaceRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateNetworkInterfaceRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", std::to_string(resourceGroupId));
}

std::string CreateNetworkInterfaceRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateNetworkInterfaceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string CreateNetworkInterfaceRequest::getRegionId()const
{
	return regionId_;
}

void CreateNetworkInterfaceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

bool CreateNetworkInterfaceRequest::getEnable()const
{
	return enable_;
}

void CreateNetworkInterfaceRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string CreateNetworkInterfaceRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateNetworkInterfaceRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string CreateNetworkInterfaceRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateNetworkInterfaceRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
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
		setCoreParameter(str + ".Key", std::to_string(obj.key));
		setCoreParameter(str + ".Value", std::to_string(obj.value));
	}
}

std::string CreateNetworkInterfaceRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateNetworkInterfaceRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

std::string CreateNetworkInterfaceRequest::getNetworkInterfaceName()const
{
	return networkInterfaceName_;
}

void CreateNetworkInterfaceRequest::setNetworkInterfaceName(const std::string& networkInterfaceName)
{
	networkInterfaceName_ = networkInterfaceName;
	setCoreParameter("NetworkInterfaceName", std::to_string(networkInterfaceName));
}

long CreateNetworkInterfaceRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateNetworkInterfaceRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string CreateNetworkInterfaceRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateNetworkInterfaceRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

bool CreateNetworkInterfaceRequest::getVisible()const
{
	return visible_;
}

void CreateNetworkInterfaceRequest::setVisible(bool visible)
{
	visible_ = visible;
	setCoreParameter("Visible", visible ? "true" : "false");
}

std::string CreateNetworkInterfaceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateNetworkInterfaceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string CreateNetworkInterfaceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateNetworkInterfaceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string CreateNetworkInterfaceRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateNetworkInterfaceRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long CreateNetworkInterfaceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateNetworkInterfaceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool CreateNetworkInterfaceRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateNetworkInterfaceRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateNetworkInterfaceRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateNetworkInterfaceRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateNetworkInterfaceRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateNetworkInterfaceRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateNetworkInterfaceRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void CreateNetworkInterfaceRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", std::to_string(vSwitchId));
}

std::string CreateNetworkInterfaceRequest::getRequestId()const
{
	return requestId_;
}

void CreateNetworkInterfaceRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string CreateNetworkInterfaceRequest::getAkProxy()const
{
	return akProxy_;
}

void CreateNetworkInterfaceRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", std::to_string(akProxy));
}

std::string CreateNetworkInterfaceRequest::getPrimaryIpAddress()const
{
	return primaryIpAddress_;
}

void CreateNetworkInterfaceRequest::setPrimaryIpAddress(const std::string& primaryIpAddress)
{
	primaryIpAddress_ = primaryIpAddress;
	setCoreParameter("PrimaryIpAddress", std::to_string(primaryIpAddress));
}

