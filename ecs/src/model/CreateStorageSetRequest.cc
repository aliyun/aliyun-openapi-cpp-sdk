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

#include <alibabacloud/ecs/model/CreateStorageSetRequest.h>

using AlibabaCloud::Ecs::Model::CreateStorageSetRequest;

CreateStorageSetRequest::CreateStorageSetRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateStorageSet")
{}

CreateStorageSetRequest::~CreateStorageSetRequest()
{}

long CreateStorageSetRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateStorageSetRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateStorageSetRequest::getClientToken()const
{
	return clientToken_;
}

void CreateStorageSetRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

long CreateStorageSetRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateStorageSetRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

int CreateStorageSetRequest::getMaxPartitionNumber()const
{
	return maxPartitionNumber_;
}

void CreateStorageSetRequest::setMaxPartitionNumber(int maxPartitionNumber)
{
	maxPartitionNumber_ = maxPartitionNumber;
	setCoreParameter("MaxPartitionNumber", std::to_string(maxPartitionNumber));
}

bool CreateStorageSetRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateStorageSetRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateStorageSetRequest::getDescription()const
{
	return description_;
}

void CreateStorageSetRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateStorageSetRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateStorageSetRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateStorageSetRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateStorageSetRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateStorageSetRequest::getCallerType()const
{
	return callerType_;
}

void CreateStorageSetRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string CreateStorageSetRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateStorageSetRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateStorageSetRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateStorageSetRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateStorageSetRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateStorageSetRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateStorageSetRequest::getRegionId()const
{
	return regionId_;
}

void CreateStorageSetRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool CreateStorageSetRequest::getEnable()const
{
	return enable_;
}

void CreateStorageSetRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string CreateStorageSetRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateStorageSetRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string CreateStorageSetRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateStorageSetRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateStorageSetRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateStorageSetRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long CreateStorageSetRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateStorageSetRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string CreateStorageSetRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateStorageSetRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string CreateStorageSetRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateStorageSetRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateStorageSetRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateStorageSetRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateStorageSetRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateStorageSetRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long CreateStorageSetRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateStorageSetRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool CreateStorageSetRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateStorageSetRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateStorageSetRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateStorageSetRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateStorageSetRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateStorageSetRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateStorageSetRequest::getRequestId()const
{
	return requestId_;
}

void CreateStorageSetRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string CreateStorageSetRequest::getAkProxy()const
{
	return akProxy_;
}

void CreateStorageSetRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

std::string CreateStorageSetRequest::getZoneId()const
{
	return zoneId_;
}

void CreateStorageSetRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string CreateStorageSetRequest::getStorageSetName()const
{
	return storageSetName_;
}

void CreateStorageSetRequest::setStorageSetName(const std::string& storageSetName)
{
	storageSetName_ = storageSetName;
	setCoreParameter("StorageSetName", storageSetName);
}

