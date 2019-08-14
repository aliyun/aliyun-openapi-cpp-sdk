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

#include <alibabacloud/ecs/model/DeleteNetworkInterfacePermissionRequest.h>

using AlibabaCloud::Ecs::Model::DeleteNetworkInterfacePermissionRequest;

DeleteNetworkInterfacePermissionRequest::DeleteNetworkInterfacePermissionRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteNetworkInterfacePermission")
{}

DeleteNetworkInterfacePermissionRequest::~DeleteNetworkInterfacePermissionRequest()
{}

long DeleteNetworkInterfacePermissionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteNetworkInterfacePermissionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DeleteNetworkInterfacePermissionRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteNetworkInterfacePermissionRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteNetworkInterfacePermissionRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteNetworkInterfacePermissionRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteNetworkInterfacePermissionRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteNetworkInterfacePermissionRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteNetworkInterfacePermissionRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteNetworkInterfacePermissionRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteNetworkInterfacePermissionRequest::getCallerType()const
{
	return callerType_;
}

void DeleteNetworkInterfacePermissionRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DeleteNetworkInterfacePermissionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteNetworkInterfacePermissionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteNetworkInterfacePermissionRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DeleteNetworkInterfacePermissionRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string DeleteNetworkInterfacePermissionRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteNetworkInterfacePermissionRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteNetworkInterfacePermissionRequest::getRegionId()const
{
	return regionId_;
}

void DeleteNetworkInterfacePermissionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool DeleteNetworkInterfacePermissionRequest::getEnable()const
{
	return enable_;
}

void DeleteNetworkInterfacePermissionRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DeleteNetworkInterfacePermissionRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteNetworkInterfacePermissionRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DeleteNetworkInterfacePermissionRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteNetworkInterfacePermissionRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteNetworkInterfacePermissionRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteNetworkInterfacePermissionRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DeleteNetworkInterfacePermissionRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteNetworkInterfacePermissionRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DeleteNetworkInterfacePermissionRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteNetworkInterfacePermissionRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DeleteNetworkInterfacePermissionRequest::getNetworkInterfacePermissionId()const
{
	return networkInterfacePermissionId_;
}

void DeleteNetworkInterfacePermissionRequest::setNetworkInterfacePermissionId(const std::string& networkInterfacePermissionId)
{
	networkInterfacePermissionId_ = networkInterfacePermissionId;
	setCoreParameter("NetworkInterfacePermissionId", networkInterfacePermissionId);
}

std::string DeleteNetworkInterfacePermissionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteNetworkInterfacePermissionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteNetworkInterfacePermissionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteNetworkInterfacePermissionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DeleteNetworkInterfacePermissionRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteNetworkInterfacePermissionRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DeleteNetworkInterfacePermissionRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteNetworkInterfacePermissionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool DeleteNetworkInterfacePermissionRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteNetworkInterfacePermissionRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeleteNetworkInterfacePermissionRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteNetworkInterfacePermissionRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DeleteNetworkInterfacePermissionRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteNetworkInterfacePermissionRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteNetworkInterfacePermissionRequest::getRequestId()const
{
	return requestId_;
}

void DeleteNetworkInterfacePermissionRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DeleteNetworkInterfacePermissionRequest::getAkProxy()const
{
	return akProxy_;
}

void DeleteNetworkInterfacePermissionRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

bool DeleteNetworkInterfacePermissionRequest::getForce()const
{
	return force_;
}

void DeleteNetworkInterfacePermissionRequest::setForce(bool force)
{
	force_ = force;
	setCoreParameter("Force", force ? "true" : "false");
}

