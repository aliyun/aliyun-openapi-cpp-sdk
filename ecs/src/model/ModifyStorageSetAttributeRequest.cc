<<<<<<< HEAD
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

#include <alibabacloud/ecs/model/ModifyStorageSetAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyStorageSetAttributeRequest;

ModifyStorageSetAttributeRequest::ModifyStorageSetAttributeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyStorageSetAttribute")
{}

ModifyStorageSetAttributeRequest::~ModifyStorageSetAttributeRequest()
{}

long ModifyStorageSetAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyStorageSetAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyStorageSetAttributeRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyStorageSetAttributeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

long ModifyStorageSetAttributeRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyStorageSetAttributeRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool ModifyStorageSetAttributeRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyStorageSetAttributeRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ModifyStorageSetAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyStorageSetAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ModifyStorageSetAttributeRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyStorageSetAttributeRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyStorageSetAttributeRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyStorageSetAttributeRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyStorageSetAttributeRequest::getCallerType()const
{
	return callerType_;
}

void ModifyStorageSetAttributeRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ModifyStorageSetAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyStorageSetAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyStorageSetAttributeRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ModifyStorageSetAttributeRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string ModifyStorageSetAttributeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyStorageSetAttributeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyStorageSetAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyStorageSetAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool ModifyStorageSetAttributeRequest::getEnable()const
{
	return enable_;
}

void ModifyStorageSetAttributeRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string ModifyStorageSetAttributeRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyStorageSetAttributeRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ModifyStorageSetAttributeRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyStorageSetAttributeRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyStorageSetAttributeRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyStorageSetAttributeRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ModifyStorageSetAttributeRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyStorageSetAttributeRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string ModifyStorageSetAttributeRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyStorageSetAttributeRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ModifyStorageSetAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyStorageSetAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyStorageSetAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyStorageSetAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyStorageSetAttributeRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyStorageSetAttributeRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ModifyStorageSetAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyStorageSetAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool ModifyStorageSetAttributeRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyStorageSetAttributeRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ModifyStorageSetAttributeRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyStorageSetAttributeRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ModifyStorageSetAttributeRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyStorageSetAttributeRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ModifyStorageSetAttributeRequest::getStorageSetId()const
{
	return storageSetId_;
}

void ModifyStorageSetAttributeRequest::setStorageSetId(const std::string& storageSetId)
{
	storageSetId_ = storageSetId;
	setCoreParameter("StorageSetId", storageSetId);
}

std::string ModifyStorageSetAttributeRequest::getRequestId()const
{
	return requestId_;
}

void ModifyStorageSetAttributeRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ModifyStorageSetAttributeRequest::getAkProxy()const
{
	return akProxy_;
}

void ModifyStorageSetAttributeRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

std::string ModifyStorageSetAttributeRequest::getStorageSetName()const
{
	return storageSetName_;
}

void ModifyStorageSetAttributeRequest::setStorageSetName(const std::string& storageSetName)
{
	storageSetName_ = storageSetName;
	setCoreParameter("StorageSetName", storageSetName);
}

=======
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

#include <alibabacloud/ecs/model/ModifyStorageSetAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyStorageSetAttributeRequest;

ModifyStorageSetAttributeRequest::ModifyStorageSetAttributeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyStorageSetAttribute")
{}

ModifyStorageSetAttributeRequest::~ModifyStorageSetAttributeRequest()
{}

long ModifyStorageSetAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyStorageSetAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyStorageSetAttributeRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyStorageSetAttributeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

long ModifyStorageSetAttributeRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyStorageSetAttributeRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool ModifyStorageSetAttributeRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyStorageSetAttributeRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ModifyStorageSetAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyStorageSetAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ModifyStorageSetAttributeRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyStorageSetAttributeRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyStorageSetAttributeRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyStorageSetAttributeRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyStorageSetAttributeRequest::getCallerType()const
{
	return callerType_;
}

void ModifyStorageSetAttributeRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ModifyStorageSetAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyStorageSetAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyStorageSetAttributeRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ModifyStorageSetAttributeRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string ModifyStorageSetAttributeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyStorageSetAttributeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyStorageSetAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyStorageSetAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool ModifyStorageSetAttributeRequest::getEnable()const
{
	return enable_;
}

void ModifyStorageSetAttributeRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string ModifyStorageSetAttributeRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyStorageSetAttributeRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ModifyStorageSetAttributeRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyStorageSetAttributeRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyStorageSetAttributeRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyStorageSetAttributeRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ModifyStorageSetAttributeRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyStorageSetAttributeRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string ModifyStorageSetAttributeRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyStorageSetAttributeRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ModifyStorageSetAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyStorageSetAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyStorageSetAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyStorageSetAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyStorageSetAttributeRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyStorageSetAttributeRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ModifyStorageSetAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyStorageSetAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool ModifyStorageSetAttributeRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyStorageSetAttributeRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ModifyStorageSetAttributeRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyStorageSetAttributeRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ModifyStorageSetAttributeRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyStorageSetAttributeRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ModifyStorageSetAttributeRequest::getStorageSetId()const
{
	return storageSetId_;
}

void ModifyStorageSetAttributeRequest::setStorageSetId(const std::string& storageSetId)
{
	storageSetId_ = storageSetId;
	setCoreParameter("StorageSetId", storageSetId);
}

std::string ModifyStorageSetAttributeRequest::getRequestId()const
{
	return requestId_;
}

void ModifyStorageSetAttributeRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ModifyStorageSetAttributeRequest::getAkProxy()const
{
	return akProxy_;
}

void ModifyStorageSetAttributeRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", akProxy);
}

std::string ModifyStorageSetAttributeRequest::getStorageSetName()const
{
	return storageSetName_;
}

void ModifyStorageSetAttributeRequest::setStorageSetName(const std::string& storageSetName)
{
	storageSetName_ = storageSetName;
	setCoreParameter("StorageSetName", storageSetName);
}

>>>>>>> master
