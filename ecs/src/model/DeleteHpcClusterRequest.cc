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

#include <alibabacloud/ecs/model/DeleteHpcClusterRequest.h>

using AlibabaCloud::Ecs::Model::DeleteHpcClusterRequest;

DeleteHpcClusterRequest::DeleteHpcClusterRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteHpcCluster")
{}

DeleteHpcClusterRequest::~DeleteHpcClusterRequest()
{}

long DeleteHpcClusterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteHpcClusterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DeleteHpcClusterRequest::getHpcClusterId()const
{
	return hpcClusterId_;
}

void DeleteHpcClusterRequest::setHpcClusterId(const std::string& hpcClusterId)
{
	hpcClusterId_ = hpcClusterId;
	setCoreParameter("HpcClusterId", std::to_string(hpcClusterId));
}

std::string DeleteHpcClusterRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteHpcClusterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

long DeleteHpcClusterRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteHpcClusterRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DeleteHpcClusterRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteHpcClusterRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteHpcClusterRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteHpcClusterRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DeleteHpcClusterRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteHpcClusterRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DeleteHpcClusterRequest::getCallerType()const
{
	return callerType_;
}

void DeleteHpcClusterRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DeleteHpcClusterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteHpcClusterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DeleteHpcClusterRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DeleteHpcClusterRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

std::string DeleteHpcClusterRequest::getRegionId()const
{
	return regionId_;
}

void DeleteHpcClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DeleteHpcClusterRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteHpcClusterRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

bool DeleteHpcClusterRequest::getEnable()const
{
	return enable_;
}

void DeleteHpcClusterRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DeleteHpcClusterRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteHpcClusterRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DeleteHpcClusterRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteHpcClusterRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DeleteHpcClusterRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteHpcClusterRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DeleteHpcClusterRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteHpcClusterRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DeleteHpcClusterRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteHpcClusterRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DeleteHpcClusterRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteHpcClusterRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DeleteHpcClusterRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteHpcClusterRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DeleteHpcClusterRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteHpcClusterRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DeleteHpcClusterRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteHpcClusterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool DeleteHpcClusterRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteHpcClusterRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeleteHpcClusterRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteHpcClusterRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DeleteHpcClusterRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteHpcClusterRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteHpcClusterRequest::getRequestId()const
{
	return requestId_;
}

void DeleteHpcClusterRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DeleteHpcClusterRequest::getAkProxy()const
{
	return akProxy_;
}

void DeleteHpcClusterRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", std::to_string(akProxy));
}

