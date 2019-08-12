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

#include <alibabacloud/vpc/model/UnassociateNetworkAclRequest.h>

using AlibabaCloud::Vpc::Model::UnassociateNetworkAclRequest;

UnassociateNetworkAclRequest::UnassociateNetworkAclRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "UnassociateNetworkAcl")
{}

UnassociateNetworkAclRequest::~UnassociateNetworkAclRequest()
{}

long UnassociateNetworkAclRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnassociateNetworkAclRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UnassociateNetworkAclRequest::getClientToken()const
{
	return clientToken_;
}

void UnassociateNetworkAclRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

long UnassociateNetworkAclRequest::getCallerParentId()const
{
	return callerParentId_;
}

void UnassociateNetworkAclRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool UnassociateNetworkAclRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void UnassociateNetworkAclRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string UnassociateNetworkAclRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void UnassociateNetworkAclRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string UnassociateNetworkAclRequest::getCallerType()const
{
	return callerType_;
}

void UnassociateNetworkAclRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string UnassociateNetworkAclRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void UnassociateNetworkAclRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string UnassociateNetworkAclRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UnassociateNetworkAclRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string UnassociateNetworkAclRequest::getRegionId()const
{
	return regionId_;
}

void UnassociateNetworkAclRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UnassociateNetworkAclRequest::getSecurityToken()const
{
	return securityToken_;
}

void UnassociateNetworkAclRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

bool UnassociateNetworkAclRequest::getEnable()const
{
	return enable_;
}

void UnassociateNetworkAclRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string UnassociateNetworkAclRequest::getRequestContent()const
{
	return requestContent_;
}

void UnassociateNetworkAclRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string UnassociateNetworkAclRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void UnassociateNetworkAclRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string UnassociateNetworkAclRequest::getNetworkAclId()const
{
	return networkAclId_;
}

void UnassociateNetworkAclRequest::setNetworkAclId(const std::string& networkAclId)
{
	networkAclId_ = networkAclId;
	setCoreParameter("NetworkAclId", networkAclId);
}

std::string UnassociateNetworkAclRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void UnassociateNetworkAclRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long UnassociateNetworkAclRequest::getCallerUid()const
{
	return callerUid_;
}

void UnassociateNetworkAclRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string UnassociateNetworkAclRequest::getApp_ip()const
{
	return app_ip_;
}

void UnassociateNetworkAclRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::vector<UnassociateNetworkAclRequest::Resource> UnassociateNetworkAclRequest::getResource()const
{
	return resource_;
}

void UnassociateNetworkAclRequest::setResource(const std::vector<Resource>& resource)
{
	resource_ = resource;
	int i = 0;
	for(int i = 0; i!= resource.size(); i++)	{
		auto obj = resource.at(i);
		std::string str ="Resource."+ std::to_string(i);
		setCoreParameter(str + ".ResourceType", obj.resourceType);
		setCoreParameter(str + ".ResourceId", obj.resourceId);
	}
}

std::string UnassociateNetworkAclRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UnassociateNetworkAclRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UnassociateNetworkAclRequest::getCallerBid()const
{
	return callerBid_;
}

void UnassociateNetworkAclRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long UnassociateNetworkAclRequest::getOwnerId()const
{
	return ownerId_;
}

void UnassociateNetworkAclRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool UnassociateNetworkAclRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void UnassociateNetworkAclRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool UnassociateNetworkAclRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void UnassociateNetworkAclRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool UnassociateNetworkAclRequest::getSecurity_transport()const
{
	return security_transport_;
}

void UnassociateNetworkAclRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string UnassociateNetworkAclRequest::getRequestId()const
{
	return requestId_;
}

void UnassociateNetworkAclRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

