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

#include <alibabacloud/ecs/model/DescribeStorageSetsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeStorageSetsRequest;

DescribeStorageSetsRequest::DescribeStorageSetsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeStorageSets")
{}

DescribeStorageSetsRequest::~DescribeStorageSetsRequest()
{}

long DescribeStorageSetsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeStorageSetsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeStorageSetsRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeStorageSetsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

long DescribeStorageSetsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeStorageSetsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeStorageSetsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeStorageSetsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeStorageSetsRequest::getStorageSetIds()const
{
	return storageSetIds_;
}

void DescribeStorageSetsRequest::setStorageSetIds(const std::string& storageSetIds)
{
	storageSetIds_ = storageSetIds;
	setCoreParameter("StorageSetIds", std::to_string(storageSetIds));
}

std::string DescribeStorageSetsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeStorageSetsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeStorageSetsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeStorageSetsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeStorageSetsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeStorageSetsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

int DescribeStorageSetsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeStorageSetsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeStorageSetsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeStorageSetsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeStorageSetsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeStorageSetsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", std::to_string(resourceGroupId));
}

std::string DescribeStorageSetsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeStorageSetsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeStorageSetsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeStorageSetsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

bool DescribeStorageSetsRequest::getEnable()const
{
	return enable_;
}

void DescribeStorageSetsRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeStorageSetsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeStorageSetsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

int DescribeStorageSetsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeStorageSetsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeStorageSetsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeStorageSetsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeStorageSetsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeStorageSetsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeStorageSetsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeStorageSetsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeStorageSetsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeStorageSetsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeStorageSetsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeStorageSetsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeStorageSetsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeStorageSetsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeStorageSetsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeStorageSetsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeStorageSetsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeStorageSetsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool DescribeStorageSetsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeStorageSetsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeStorageSetsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeStorageSetsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeStorageSetsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeStorageSetsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeStorageSetsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeStorageSetsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeStorageSetsRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeStorageSetsRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", std::to_string(akProxy));
}

std::string DescribeStorageSetsRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeStorageSetsRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", std::to_string(zoneId));
}

std::string DescribeStorageSetsRequest::getStorageSetName()const
{
	return storageSetName_;
}

void DescribeStorageSetsRequest::setStorageSetName(const std::string& storageSetName)
{
	storageSetName_ = storageSetName;
	setCoreParameter("StorageSetName", std::to_string(storageSetName));
}

