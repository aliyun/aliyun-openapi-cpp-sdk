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

#include <alibabacloud/rtc/model/DescribeRtcDurationDataRequest.h>

using AlibabaCloud::Rtc::Model::DescribeRtcDurationDataRequest;

DescribeRtcDurationDataRequest::DescribeRtcDurationDataRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DescribeRtcDurationData")
{}

DescribeRtcDurationDataRequest::~DescribeRtcDurationDataRequest()
{}

long DescribeRtcDurationDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRtcDurationDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeRtcDurationDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeRtcDurationDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeRtcDurationDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeRtcDurationDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeRtcDurationDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeRtcDurationDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string DescribeRtcDurationDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeRtcDurationDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeRtcDurationDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeRtcDurationDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeRtcDurationDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeRtcDurationDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DescribeRtcDurationDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRtcDurationDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeRtcDurationDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRtcDurationDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeRtcDurationDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeRtcDurationDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DescribeRtcDurationDataRequest::getServiceArea()const
{
	return serviceArea_;
}

void DescribeRtcDurationDataRequest::setServiceArea(const std::string& serviceArea)
{
	serviceArea_ = serviceArea;
	setCoreParameter("ServiceArea", std::to_string(serviceArea));
}

std::string DescribeRtcDurationDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeRtcDurationDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeRtcDurationDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeRtcDurationDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeRtcDurationDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeRtcDurationDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeRtcDurationDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeRtcDurationDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeRtcDurationDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeRtcDurationDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DescribeRtcDurationDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeRtcDurationDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeRtcDurationDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeRtcDurationDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeRtcDurationDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRtcDurationDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeRtcDurationDataRequest::getVersion()const
{
	return version_;
}

void DescribeRtcDurationDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DescribeRtcDurationDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeRtcDurationDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeRtcDurationDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeRtcDurationDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeRtcDurationDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeRtcDurationDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeRtcDurationDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeRtcDurationDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeRtcDurationDataRequest::getAppId()const
{
	return appId_;
}

void DescribeRtcDurationDataRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

std::string DescribeRtcDurationDataRequest::getInterval()const
{
	return interval_;
}

void DescribeRtcDurationDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", std::to_string(interval));
}

