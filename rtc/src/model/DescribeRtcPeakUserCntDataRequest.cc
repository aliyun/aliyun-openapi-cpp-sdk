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

#include <alibabacloud/rtc/model/DescribeRtcPeakUserCntDataRequest.h>

using AlibabaCloud::Rtc::Model::DescribeRtcPeakUserCntDataRequest;

DescribeRtcPeakUserCntDataRequest::DescribeRtcPeakUserCntDataRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DescribeRtcPeakUserCntData")
{}

DescribeRtcPeakUserCntDataRequest::~DescribeRtcPeakUserCntDataRequest()
{}

long DescribeRtcPeakUserCntDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRtcPeakUserCntDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeRtcPeakUserCntDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeRtcPeakUserCntDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeRtcPeakUserCntDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeRtcPeakUserCntDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeRtcPeakUserCntDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeRtcPeakUserCntDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string DescribeRtcPeakUserCntDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeRtcPeakUserCntDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeRtcPeakUserCntDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeRtcPeakUserCntDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeRtcPeakUserCntDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeRtcPeakUserCntDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DescribeRtcPeakUserCntDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRtcPeakUserCntDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeRtcPeakUserCntDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRtcPeakUserCntDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeRtcPeakUserCntDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeRtcPeakUserCntDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DescribeRtcPeakUserCntDataRequest::getServiceArea()const
{
	return serviceArea_;
}

void DescribeRtcPeakUserCntDataRequest::setServiceArea(const std::string& serviceArea)
{
	serviceArea_ = serviceArea;
	setCoreParameter("ServiceArea", std::to_string(serviceArea));
}

std::string DescribeRtcPeakUserCntDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeRtcPeakUserCntDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeRtcPeakUserCntDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeRtcPeakUserCntDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeRtcPeakUserCntDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeRtcPeakUserCntDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeRtcPeakUserCntDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeRtcPeakUserCntDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeRtcPeakUserCntDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeRtcPeakUserCntDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DescribeRtcPeakUserCntDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeRtcPeakUserCntDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeRtcPeakUserCntDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeRtcPeakUserCntDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeRtcPeakUserCntDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRtcPeakUserCntDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeRtcPeakUserCntDataRequest::getVersion()const
{
	return version_;
}

void DescribeRtcPeakUserCntDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DescribeRtcPeakUserCntDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeRtcPeakUserCntDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeRtcPeakUserCntDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeRtcPeakUserCntDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeRtcPeakUserCntDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeRtcPeakUserCntDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeRtcPeakUserCntDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeRtcPeakUserCntDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeRtcPeakUserCntDataRequest::getAppId()const
{
	return appId_;
}

void DescribeRtcPeakUserCntDataRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

std::string DescribeRtcPeakUserCntDataRequest::getInterval()const
{
	return interval_;
}

void DescribeRtcPeakUserCntDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", std::to_string(interval));
}

