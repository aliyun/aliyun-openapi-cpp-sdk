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

#include <alibabacloud/vpc/model/AssociateNetworkAclRequest.h>

using AlibabaCloud::Vpc::Model::AssociateNetworkAclRequest;

AssociateNetworkAclRequest::AssociateNetworkAclRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "AssociateNetworkAcl")
{}

AssociateNetworkAclRequest::~AssociateNetworkAclRequest()
{}

long AssociateNetworkAclRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AssociateNetworkAclRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string AssociateNetworkAclRequest::getClientToken()const
{
	return clientToken_;
}

void AssociateNetworkAclRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

long AssociateNetworkAclRequest::getCallerParentId()const
{
	return callerParentId_;
}

void AssociateNetworkAclRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool AssociateNetworkAclRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void AssociateNetworkAclRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string AssociateNetworkAclRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void AssociateNetworkAclRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string AssociateNetworkAclRequest::getCallerType()const
{
	return callerType_;
}

void AssociateNetworkAclRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string AssociateNetworkAclRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void AssociateNetworkAclRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string AssociateNetworkAclRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AssociateNetworkAclRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string AssociateNetworkAclRequest::getRegionId()const
{
	return regionId_;
}

void AssociateNetworkAclRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string AssociateNetworkAclRequest::getSecurityToken()const
{
	return securityToken_;
}

void AssociateNetworkAclRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

bool AssociateNetworkAclRequest::getEnable()const
{
	return enable_;
}

void AssociateNetworkAclRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable);
}

std::string AssociateNetworkAclRequest::getRequestContent()const
{
	return requestContent_;
}

void AssociateNetworkAclRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string AssociateNetworkAclRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void AssociateNetworkAclRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string AssociateNetworkAclRequest::getNetworkAclId()const
{
	return networkAclId_;
}

void AssociateNetworkAclRequest::setNetworkAclId(const std::string& networkAclId)
{
	networkAclId_ = networkAclId;
	setCoreParameter("NetworkAclId", networkAclId);
}

std::string AssociateNetworkAclRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void AssociateNetworkAclRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long AssociateNetworkAclRequest::getCallerUid()const
{
	return callerUid_;
}

void AssociateNetworkAclRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string AssociateNetworkAclRequest::getApp_ip()const
{
	return app_ip_;
}

void AssociateNetworkAclRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::vector<AssociateNetworkAclRequest::Resource> AssociateNetworkAclRequest::getResource()const
{
	return resource_;
}

void AssociateNetworkAclRequest::setResource(const std::vector<Resource>& resource)
{
	resource_ = resource;
	int i = 0;
	for(int i = 0; i!= resource.size(); i++)	{
		auto obj = resource.at(i);
		std::string str ="Resource."+ std::to_string(i);
		setCoreParameter(str + ".ResourceType", std::to_string(obj.resourceType));
		setCoreParameter(str + ".ResourceId", std::to_string(obj.resourceId));
	}
}

std::string AssociateNetworkAclRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AssociateNetworkAclRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AssociateNetworkAclRequest::getCallerBid()const
{
	return callerBid_;
}

void AssociateNetworkAclRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long AssociateNetworkAclRequest::getOwnerId()const
{
	return ownerId_;
}

void AssociateNetworkAclRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool AssociateNetworkAclRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void AssociateNetworkAclRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool AssociateNetworkAclRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void AssociateNetworkAclRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool AssociateNetworkAclRequest::getSecurity_transport()const
{
	return security_transport_;
}

void AssociateNetworkAclRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string AssociateNetworkAclRequest::getRequestId()const
{
	return requestId_;
}

void AssociateNetworkAclRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

