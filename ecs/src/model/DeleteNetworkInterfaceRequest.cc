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

#include <alibabacloud/ecs/model/DeleteNetworkInterfaceRequest.h>

using AlibabaCloud::Ecs::Model::DeleteNetworkInterfaceRequest;

DeleteNetworkInterfaceRequest::DeleteNetworkInterfaceRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteNetworkInterface")
{}

DeleteNetworkInterfaceRequest::~DeleteNetworkInterfaceRequest()
{}

long DeleteNetworkInterfaceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteNetworkInterfaceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DeleteNetworkInterfaceRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteNetworkInterfaceRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteNetworkInterfaceRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteNetworkInterfaceRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DeleteNetworkInterfaceRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteNetworkInterfaceRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteNetworkInterfaceRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteNetworkInterfaceRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteNetworkInterfaceRequest::getCallerType()const
{
	return callerType_;
}

void DeleteNetworkInterfaceRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DeleteNetworkInterfaceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteNetworkInterfaceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteNetworkInterfaceRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DeleteNetworkInterfaceRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setParameter("SourceRegionId", sourceRegionId);
}

std::string DeleteNetworkInterfaceRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteNetworkInterfaceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteNetworkInterfaceRequest::getRegionId()const
{
	return regionId_;
}

void DeleteNetworkInterfaceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool DeleteNetworkInterfaceRequest::getEnable()const
{
	return enable_;
}

void DeleteNetworkInterfaceRequest::setEnable(bool enable)
{
	enable_ = enable;
	setParameter("Enable", std::to_string(enable));
}

std::string DeleteNetworkInterfaceRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteNetworkInterfaceRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DeleteNetworkInterfaceRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteNetworkInterfaceRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteNetworkInterfaceRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteNetworkInterfaceRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DeleteNetworkInterfaceRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteNetworkInterfaceRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DeleteNetworkInterfaceRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteNetworkInterfaceRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DeleteNetworkInterfaceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteNetworkInterfaceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteNetworkInterfaceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteNetworkInterfaceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DeleteNetworkInterfaceRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteNetworkInterfaceRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DeleteNetworkInterfaceRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteNetworkInterfaceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DeleteNetworkInterfaceRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteNetworkInterfaceRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DeleteNetworkInterfaceRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteNetworkInterfaceRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DeleteNetworkInterfaceRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteNetworkInterfaceRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DeleteNetworkInterfaceRequest::getRequestId()const
{
	return requestId_;
}

void DeleteNetworkInterfaceRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DeleteNetworkInterfaceRequest::getNetworkInterfaceId()const
{
	return networkInterfaceId_;
}

void DeleteNetworkInterfaceRequest::setNetworkInterfaceId(const std::string& networkInterfaceId)
{
	networkInterfaceId_ = networkInterfaceId;
	setParameter("NetworkInterfaceId", networkInterfaceId);
}

