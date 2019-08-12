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

#include <alibabacloud/ecs/model/DescribeStorageSetDetailsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeStorageSetDetailsRequest;

DescribeStorageSetDetailsRequest::DescribeStorageSetDetailsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeStorageSetDetails")
{}

DescribeStorageSetDetailsRequest::~DescribeStorageSetDetailsRequest()
{}

long DescribeStorageSetDetailsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeStorageSetDetailsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeStorageSetDetailsRequest::getClientToken()const
{
	return clientToken_;
}

void DescribeStorageSetDetailsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

long DescribeStorageSetDetailsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeStorageSetDetailsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeStorageSetDetailsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeStorageSetDetailsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeStorageSetDetailsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeStorageSetDetailsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeStorageSetDetailsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeStorageSetDetailsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeStorageSetDetailsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeStorageSetDetailsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

int DescribeStorageSetDetailsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeStorageSetDetailsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeStorageSetDetailsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeStorageSetDetailsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeStorageSetDetailsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeStorageSetDetailsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", std::to_string(resourceGroupId));
}

std::string DescribeStorageSetDetailsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeStorageSetDetailsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeStorageSetDetailsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeStorageSetDetailsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

bool DescribeStorageSetDetailsRequest::getEnable()const
{
	return enable_;
}

void DescribeStorageSetDetailsRequest::setEnable(bool enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable ? "true" : "false");
}

std::string DescribeStorageSetDetailsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeStorageSetDetailsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

int DescribeStorageSetDetailsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeStorageSetDetailsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeStorageSetDetailsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeStorageSetDetailsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

int DescribeStorageSetDetailsRequest::getStorageSetPartitionNumber()const
{
	return storageSetPartitionNumber_;
}

void DescribeStorageSetDetailsRequest::setStorageSetPartitionNumber(int storageSetPartitionNumber)
{
	storageSetPartitionNumber_ = storageSetPartitionNumber;
	setCoreParameter("StorageSetPartitionNumber", storageSetPartitionNumber);
}

std::string DescribeStorageSetDetailsRequest::getDiskIds()const
{
	return diskIds_;
}

void DescribeStorageSetDetailsRequest::setDiskIds(const std::string& diskIds)
{
	diskIds_ = diskIds;
	setCoreParameter("DiskIds", std::to_string(diskIds));
}

std::string DescribeStorageSetDetailsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeStorageSetDetailsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeStorageSetDetailsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeStorageSetDetailsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeStorageSetDetailsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeStorageSetDetailsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeStorageSetDetailsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeStorageSetDetailsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeStorageSetDetailsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeStorageSetDetailsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeStorageSetDetailsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeStorageSetDetailsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeStorageSetDetailsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeStorageSetDetailsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

bool DescribeStorageSetDetailsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeStorageSetDetailsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeStorageSetDetailsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeStorageSetDetailsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeStorageSetDetailsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeStorageSetDetailsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeStorageSetDetailsRequest::getStorageSetId()const
{
	return storageSetId_;
}

void DescribeStorageSetDetailsRequest::setStorageSetId(const std::string& storageSetId)
{
	storageSetId_ = storageSetId;
	setCoreParameter("StorageSetId", std::to_string(storageSetId));
}

std::string DescribeStorageSetDetailsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeStorageSetDetailsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeStorageSetDetailsRequest::getAkProxy()const
{
	return akProxy_;
}

void DescribeStorageSetDetailsRequest::setAkProxy(const std::string& akProxy)
{
	akProxy_ = akProxy;
	setCoreParameter("AkProxy", std::to_string(akProxy));
}

