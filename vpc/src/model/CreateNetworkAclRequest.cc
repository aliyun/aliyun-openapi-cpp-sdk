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

#include <alibabacloud/vpc/model/CreateNetworkAclRequest.h>

using AlibabaCloud::Vpc::Model::CreateNetworkAclRequest;

CreateNetworkAclRequest::CreateNetworkAclRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateNetworkAcl")
{}

CreateNetworkAclRequest::~CreateNetworkAclRequest()
{}

long CreateNetworkAclRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateNetworkAclRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateNetworkAclRequest::getClientToken()const
{
	return clientToken_;
}

void CreateNetworkAclRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

long CreateNetworkAclRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateNetworkAclRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

std::string CreateNetworkAclRequest::getDescription()const
{
	return description_;
}

void CreateNetworkAclRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

bool CreateNetworkAclRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateNetworkAclRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string CreateNetworkAclRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateNetworkAclRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateNetworkAclRequest::getCallerType()const
{
	return callerType_;
}

void CreateNetworkAclRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string CreateNetworkAclRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateNetworkAclRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateNetworkAclRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateNetworkAclRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateNetworkAclRequest::getRegionId()const
{
	return regionId_;
}

void CreateNetworkAclRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateNetworkAclRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateNetworkAclRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

bool CreateNetworkAclRequest::getEnable()const
{
	return enable_;
}

void CreateNetworkAclRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable);
}

std::string CreateNetworkAclRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateNetworkAclRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string CreateNetworkAclRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateNetworkAclRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateNetworkAclRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateNetworkAclRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long CreateNetworkAclRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateNetworkAclRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string CreateNetworkAclRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateNetworkAclRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string CreateNetworkAclRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateNetworkAclRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateNetworkAclRequest::getNetworkAclName()const
{
	return networkAclName_;
}

void CreateNetworkAclRequest::setNetworkAclName(const std::string& networkAclName)
{
	networkAclName_ = networkAclName;
	setCoreParameter("NetworkAclName", networkAclName);
}

std::string CreateNetworkAclRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateNetworkAclRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long CreateNetworkAclRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateNetworkAclRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool CreateNetworkAclRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateNetworkAclRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool CreateNetworkAclRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateNetworkAclRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool CreateNetworkAclRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateNetworkAclRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string CreateNetworkAclRequest::getRequestId()const
{
	return requestId_;
}

void CreateNetworkAclRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string CreateNetworkAclRequest::getVpcId()const
{
	return vpcId_;
}

void CreateNetworkAclRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

