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
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateHpcClusterRequest::getClientToken()const
{
	return clientToken_;
}

void CreateHpcClusterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

long CreateHpcClusterRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateHpcClusterRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool CreateHpcClusterRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateHpcClusterRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string CreateHpcClusterRequest::getDescription()const
{
	return description_;
}

void CreateHpcClusterRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateHpcClusterRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateHpcClusterRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateHpcClusterRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateHpcClusterRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateHpcClusterRequest::getCallerType()const
{
	return callerType_;
}

void CreateHpcClusterRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string CreateHpcClusterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateHpcClusterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateHpcClusterRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void CreateHpcClusterRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setParameter("SourceRegionId", sourceRegionId);
}

std::string CreateHpcClusterRequest::getRegionId()const
{
	return regionId_;
}

void CreateHpcClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateHpcClusterRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateHpcClusterRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

bool CreateHpcClusterRequest::getEnable()const
{
	return enable_;
}

void CreateHpcClusterRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string CreateHpcClusterRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateHpcClusterRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string CreateHpcClusterRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateHpcClusterRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateHpcClusterRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateHpcClusterRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long CreateHpcClusterRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateHpcClusterRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string CreateHpcClusterRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateHpcClusterRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string CreateHpcClusterRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateHpcClusterRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateHpcClusterRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateHpcClusterRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateHpcClusterRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateHpcClusterRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long CreateHpcClusterRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateHpcClusterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool CreateHpcClusterRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateHpcClusterRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool CreateHpcClusterRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateHpcClusterRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool CreateHpcClusterRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateHpcClusterRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string CreateHpcClusterRequest::getRequestId()const
{
	return requestId_;
}

void CreateHpcClusterRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string CreateHpcClusterRequest::getName()const
{
	return name_;
}

void CreateHpcClusterRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

