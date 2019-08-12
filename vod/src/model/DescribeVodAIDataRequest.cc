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

#include <alibabacloud/vod/model/DescribeVodAIDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodAIDataRequest;

DescribeVodAIDataRequest::DescribeVodAIDataRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DescribeVodAIData")
{}

DescribeVodAIDataRequest::~DescribeVodAIDataRequest()
{}

long DescribeVodAIDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVodAIDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeVodAIDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeVodAIDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeVodAIDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeVodAIDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribeVodAIDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVodAIDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeVodAIDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeVodAIDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeVodAIDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeVodAIDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeVodAIDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeVodAIDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeVodAIDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeVodAIDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeVodAIDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeVodAIDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeVodAIDataRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVodAIDataRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeVodAIDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeVodAIDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeVodAIDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeVodAIDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeVodAIDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeVodAIDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeVodAIDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeVodAIDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeVodAIDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeVodAIDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeVodAIDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeVodAIDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeVodAIDataRequest::getAIType()const
{
	return aIType_;
}

void DescribeVodAIDataRequest::setAIType(const std::string& aIType)
{
	aIType_ = aIType;
	setCoreParameter("AIType", aIType);
}

std::string DescribeVodAIDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVodAIDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeVodAIDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeVodAIDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeVodAIDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVodAIDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeVodAIDataRequest::getVersion()const
{
	return version_;
}

void DescribeVodAIDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeVodAIDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeVodAIDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DescribeVodAIDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeVodAIDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribeVodAIDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeVodAIDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribeVodAIDataRequest::getServiceCode()const
{
	return serviceCode_;
}

void DescribeVodAIDataRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", serviceCode);
}

std::string DescribeVodAIDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeVodAIDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeVodAIDataRequest::getRegion()const
{
	return region_;
}

void DescribeVodAIDataRequest::setRegion(const std::string& region)
{
	region_ = region;
	setCoreParameter("Region", region);
}

