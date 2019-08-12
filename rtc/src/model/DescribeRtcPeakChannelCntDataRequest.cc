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

#include <alibabacloud/rtc/model/DescribeRtcPeakChannelCntDataRequest.h>

using AlibabaCloud::Rtc::Model::DescribeRtcPeakChannelCntDataRequest;

DescribeRtcPeakChannelCntDataRequest::DescribeRtcPeakChannelCntDataRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DescribeRtcPeakChannelCntData")
{}

DescribeRtcPeakChannelCntDataRequest::~DescribeRtcPeakChannelCntDataRequest()
{}

long DescribeRtcPeakChannelCntDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRtcPeakChannelCntDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeRtcPeakChannelCntDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeRtcPeakChannelCntDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeRtcPeakChannelCntDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeRtcPeakChannelCntDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeRtcPeakChannelCntDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeRtcPeakChannelCntDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeRtcPeakChannelCntDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeRtcPeakChannelCntDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeRtcPeakChannelCntDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeRtcPeakChannelCntDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeRtcPeakChannelCntDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeRtcPeakChannelCntDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeRtcPeakChannelCntDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRtcPeakChannelCntDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeRtcPeakChannelCntDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRtcPeakChannelCntDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeRtcPeakChannelCntDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeRtcPeakChannelCntDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeRtcPeakChannelCntDataRequest::getServiceArea()const
{
	return serviceArea_;
}

void DescribeRtcPeakChannelCntDataRequest::setServiceArea(const std::string& serviceArea)
{
	serviceArea_ = serviceArea;
	setCoreParameter("ServiceArea", serviceArea);
}

std::string DescribeRtcPeakChannelCntDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeRtcPeakChannelCntDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeRtcPeakChannelCntDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeRtcPeakChannelCntDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeRtcPeakChannelCntDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeRtcPeakChannelCntDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeRtcPeakChannelCntDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeRtcPeakChannelCntDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeRtcPeakChannelCntDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeRtcPeakChannelCntDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeRtcPeakChannelCntDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeRtcPeakChannelCntDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeRtcPeakChannelCntDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeRtcPeakChannelCntDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeRtcPeakChannelCntDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRtcPeakChannelCntDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRtcPeakChannelCntDataRequest::getVersion()const
{
	return version_;
}

void DescribeRtcPeakChannelCntDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeRtcPeakChannelCntDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeRtcPeakChannelCntDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeRtcPeakChannelCntDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeRtcPeakChannelCntDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeRtcPeakChannelCntDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeRtcPeakChannelCntDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeRtcPeakChannelCntDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeRtcPeakChannelCntDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeRtcPeakChannelCntDataRequest::getAppId()const
{
	return appId_;
}

void DescribeRtcPeakChannelCntDataRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string DescribeRtcPeakChannelCntDataRequest::getInterval()const
{
	return interval_;
}

void DescribeRtcPeakChannelCntDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

