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

#include <alibabacloud/vod/model/DescribeVodStorageDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodStorageDataRequest;

DescribeVodStorageDataRequest::DescribeVodStorageDataRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DescribeVodStorageData")
{}

DescribeVodStorageDataRequest::~DescribeVodStorageDataRequest()
{}

long DescribeVodStorageDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVodStorageDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeVodStorageDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeVodStorageDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeVodStorageDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeVodStorageDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeVodStorageDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVodStorageDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string DescribeVodStorageDataRequest::getStorage()const
{
	return storage_;
}

void DescribeVodStorageDataRequest::setStorage(const std::string& storage)
{
	storage_ = storage;
	setCoreParameter("Storage", std::to_string(storage));
}

std::string DescribeVodStorageDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeVodStorageDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeVodStorageDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeVodStorageDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeVodStorageDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeVodStorageDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DescribeVodStorageDataRequest::getStorageType()const
{
	return storageType_;
}

void DescribeVodStorageDataRequest::setStorageType(const std::string& storageType)
{
	storageType_ = storageType;
	setCoreParameter("StorageType", std::to_string(storageType));
}

std::string DescribeVodStorageDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeVodStorageDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeVodStorageDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeVodStorageDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeVodStorageDataRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVodStorageDataRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeVodStorageDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeVodStorageDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DescribeVodStorageDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeVodStorageDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeVodStorageDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeVodStorageDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeVodStorageDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeVodStorageDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeVodStorageDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeVodStorageDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeVodStorageDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeVodStorageDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DescribeVodStorageDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVodStorageDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeVodStorageDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeVodStorageDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeVodStorageDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVodStorageDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeVodStorageDataRequest::getVersion()const
{
	return version_;
}

void DescribeVodStorageDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DescribeVodStorageDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeVodStorageDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeVodStorageDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeVodStorageDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeVodStorageDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeVodStorageDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeVodStorageDataRequest::getServiceCode()const
{
	return serviceCode_;
}

void DescribeVodStorageDataRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", std::to_string(serviceCode));
}

std::string DescribeVodStorageDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeVodStorageDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeVodStorageDataRequest::getRegion()const
{
	return region_;
}

void DescribeVodStorageDataRequest::setRegion(const std::string& region)
{
	region_ = region;
	setCoreParameter("Region", std::to_string(region));
}

