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

#include <alibabacloud/ecs/model/CreateHpcClusterRequest.h>

using AlibabaCloud::Ecs::Model::CreateHpcClusterRequest;

CreateHpcClusterRequest::CreateHpcClusterRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateHpcCluster")
{}

CreateHpcClusterRequest::~CreateHpcClusterRequest()
{}

long CreateHpcClusterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateHpcClusterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateHpcClusterRequest::getClientToken()const
{
	return clientToken_;
}

void CreateHpcClusterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

long CreateHpcClusterRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateHpcClusterRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool CreateHpcClusterRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateHpcClusterRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateHpcClusterRequest::getDescription()const
{
	return description_;
}

void CreateHpcClusterRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string CreateHpcClusterRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateHpcClusterRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string CreateHpcClusterRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateHpcClusterRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string CreateHpcClusterRequest::getCallerType()const
{
	return callerType_;
}

void CreateHpcClusterRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string CreateHpcClusterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateHpcClusterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string CreateHpcClusterRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void CreateHpcClusterRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

std::string CreateHpcClusterRequest::getRegionId()const
{
	return regionId_;
}

void CreateHpcClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateHpcClusterRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateHpcClusterRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

bool CreateHpcClusterRequest::getEnable()const
{
	return enable_;
}

void CreateHpcClusterRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string CreateHpcClusterRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateHpcClusterRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string CreateHpcClusterRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateHpcClusterRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string CreateHpcClusterRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateHpcClusterRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long CreateHpcClusterRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateHpcClusterRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string CreateHpcClusterRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateHpcClusterRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string CreateHpcClusterRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateHpcClusterRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string CreateHpcClusterRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateHpcClusterRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string CreateHpcClusterRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateHpcClusterRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long CreateHpcClusterRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateHpcClusterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool CreateHpcClusterRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateHpcClusterRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateHpcClusterRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateHpcClusterRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateHpcClusterRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateHpcClusterRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateHpcClusterRequest::getRequestId()const
{
	return requestId_;
}

void CreateHpcClusterRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string CreateHpcClusterRequest::getAkProxy()const
{
	return akProxy_;
}

void CreateHpcClusterRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", std::to_string(akProxy));
}

std::string CreateHpcClusterRequest::getName()const
{
	return name_;
}

void CreateHpcClusterRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

