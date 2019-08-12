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

#include <alibabacloud/ecs/model/DeleteStorageSetRequest.h>

using AlibabaCloud::Ecs::Model::DeleteStorageSetRequest;

DeleteStorageSetRequest::DeleteStorageSetRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteStorageSet")
{}

DeleteStorageSetRequest::~DeleteStorageSetRequest()
{}

long DeleteStorageSetRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteStorageSetRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DeleteStorageSetRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteStorageSetRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

long DeleteStorageSetRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteStorageSetRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DeleteStorageSetRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteStorageSetRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteStorageSetRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteStorageSetRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DeleteStorageSetRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteStorageSetRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DeleteStorageSetRequest::getCallerType()const
{
	return callerType_;
}

void DeleteStorageSetRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DeleteStorageSetRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteStorageSetRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DeleteStorageSetRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DeleteStorageSetRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", std::to_string(resourceGroupId));
}

std::string DeleteStorageSetRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteStorageSetRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DeleteStorageSetRequest::getRegionId()const
{
	return regionId_;
}

void DeleteStorageSetRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

bool DeleteStorageSetRequest::getEnable()const
{
	return enable_;
}

void DeleteStorageSetRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DeleteStorageSetRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteStorageSetRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DeleteStorageSetRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteStorageSetRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DeleteStorageSetRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteStorageSetRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DeleteStorageSetRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteStorageSetRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DeleteStorageSetRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteStorageSetRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DeleteStorageSetRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteStorageSetRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DeleteStorageSetRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteStorageSetRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DeleteStorageSetRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteStorageSetRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DeleteStorageSetRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteStorageSetRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool DeleteStorageSetRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteStorageSetRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeleteStorageSetRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteStorageSetRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DeleteStorageSetRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteStorageSetRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteStorageSetRequest::getStorageSetId()const
{
	return storageSetId_;
}

void DeleteStorageSetRequest::setStorageSetId(const std::string& storageSetId)
{
	storageSetId_ = storageSetId;
	setCoreParameter("StorageSetId", std::to_string(storageSetId));
}

std::string DeleteStorageSetRequest::getRequestId()const
{
	return requestId_;
}

void DeleteStorageSetRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DeleteStorageSetRequest::getAkProxy()const
{
	return akProxy_;
}

void DeleteStorageSetRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", std::to_string(akProxy));
}

