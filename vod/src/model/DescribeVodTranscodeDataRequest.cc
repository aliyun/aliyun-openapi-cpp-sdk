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

#include <alibabacloud/vod/model/DescribeVodTranscodeDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodTranscodeDataRequest;

DescribeVodTranscodeDataRequest::DescribeVodTranscodeDataRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DescribeVodTranscodeData")
{}

DescribeVodTranscodeDataRequest::~DescribeVodTranscodeDataRequest()
{}

long DescribeVodTranscodeDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVodTranscodeDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeVodTranscodeDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeVodTranscodeDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeVodTranscodeDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeVodTranscodeDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribeVodTranscodeDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVodTranscodeDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeVodTranscodeDataRequest::getStorage()const
{
	return storage_;
}

void DescribeVodTranscodeDataRequest::setStorage(const std::string& storage)
{
	storage_ = storage;
	setCoreParameter("Storage", storage);
}

std::string DescribeVodTranscodeDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeVodTranscodeDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeVodTranscodeDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeVodTranscodeDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeVodTranscodeDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeVodTranscodeDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeVodTranscodeDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeVodTranscodeDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeVodTranscodeDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeVodTranscodeDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeVodTranscodeDataRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVodTranscodeDataRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeVodTranscodeDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeVodTranscodeDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeVodTranscodeDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeVodTranscodeDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeVodTranscodeDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeVodTranscodeDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeVodTranscodeDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeVodTranscodeDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeVodTranscodeDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeVodTranscodeDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeVodTranscodeDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeVodTranscodeDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeVodTranscodeDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVodTranscodeDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeVodTranscodeDataRequest::getSpecification()const
{
	return specification_;
}

void DescribeVodTranscodeDataRequest::setSpecification(const std::string& specification)
{
	specification_ = specification;
	setCoreParameter("Specification", specification);
}

std::string DescribeVodTranscodeDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeVodTranscodeDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeVodTranscodeDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVodTranscodeDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeVodTranscodeDataRequest::getVersion()const
{
	return version_;
}

void DescribeVodTranscodeDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeVodTranscodeDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeVodTranscodeDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DescribeVodTranscodeDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeVodTranscodeDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribeVodTranscodeDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeVodTranscodeDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribeVodTranscodeDataRequest::getServiceCode()const
{
	return serviceCode_;
}

void DescribeVodTranscodeDataRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", serviceCode);
}

std::string DescribeVodTranscodeDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeVodTranscodeDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeVodTranscodeDataRequest::getRegion()const
{
	return region_;
}

void DescribeVodTranscodeDataRequest::setRegion(const std::string& region)
{
	region_ = region;
	setCoreParameter("Region", region);
}

