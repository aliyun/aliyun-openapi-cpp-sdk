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

#include <alibabacloud/rtc/model/DescribeRtcUserCntDataRequest.h>

using AlibabaCloud::Rtc::Model::DescribeRtcUserCntDataRequest;

DescribeRtcUserCntDataRequest::DescribeRtcUserCntDataRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DescribeRtcUserCntData")
{}

DescribeRtcUserCntDataRequest::~DescribeRtcUserCntDataRequest()
{}

long DescribeRtcUserCntDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRtcUserCntDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeRtcUserCntDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeRtcUserCntDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeRtcUserCntDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeRtcUserCntDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeRtcUserCntDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeRtcUserCntDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeRtcUserCntDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeRtcUserCntDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeRtcUserCntDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeRtcUserCntDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeRtcUserCntDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeRtcUserCntDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeRtcUserCntDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRtcUserCntDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeRtcUserCntDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRtcUserCntDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeRtcUserCntDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeRtcUserCntDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeRtcUserCntDataRequest::getServiceArea()const
{
	return serviceArea_;
}

void DescribeRtcUserCntDataRequest::setServiceArea(const std::string& serviceArea)
{
	serviceArea_ = serviceArea;
	setCoreParameter("ServiceArea", serviceArea);
}

std::string DescribeRtcUserCntDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeRtcUserCntDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeRtcUserCntDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeRtcUserCntDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeRtcUserCntDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeRtcUserCntDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeRtcUserCntDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeRtcUserCntDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeRtcUserCntDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeRtcUserCntDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeRtcUserCntDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeRtcUserCntDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeRtcUserCntDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeRtcUserCntDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeRtcUserCntDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRtcUserCntDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRtcUserCntDataRequest::getVersion()const
{
	return version_;
}

void DescribeRtcUserCntDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeRtcUserCntDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeRtcUserCntDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeRtcUserCntDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeRtcUserCntDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeRtcUserCntDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeRtcUserCntDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeRtcUserCntDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeRtcUserCntDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeRtcUserCntDataRequest::getAppId()const
{
	return appId_;
}

void DescribeRtcUserCntDataRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string DescribeRtcUserCntDataRequest::getInterval()const
{
	return interval_;
}

void DescribeRtcUserCntDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

