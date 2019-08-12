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

#include <alibabacloud/rtc/model/DescribeRealTimeRecordListRequest.h>

using AlibabaCloud::Rtc::Model::DescribeRealTimeRecordListRequest;

DescribeRealTimeRecordListRequest::DescribeRealTimeRecordListRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DescribeRealTimeRecordList")
{}

DescribeRealTimeRecordListRequest::~DescribeRealTimeRecordListRequest()
{}

std::string DescribeRealTimeRecordListRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeRealTimeRecordListRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeRealTimeRecordListRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeRealTimeRecordListRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

long DescribeRealTimeRecordListRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeRealTimeRecordListRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeRealTimeRecordListRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeRealTimeRecordListRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeRealTimeRecordListRequest::getEndTime()const
{
	return endTime_;
}

void DescribeRealTimeRecordListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeRealTimeRecordListRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeRealTimeRecordListRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string DescribeRealTimeRecordListRequest::getStartTime()const
{
	return startTime_;
}

void DescribeRealTimeRecordListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeRealTimeRecordListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRealTimeRecordListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRealTimeRecordListRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeRealTimeRecordListRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeRealTimeRecordListRequest::getVersion()const
{
	return version_;
}

void DescribeRealTimeRecordListRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string DescribeRealTimeRecordListRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeRealTimeRecordListRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeRealTimeRecordListRequest::getCallerType()const
{
	return callerType_;
}

void DescribeRealTimeRecordListRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool DescribeRealTimeRecordListRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeRealTimeRecordListRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeRealTimeRecordListRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeRealTimeRecordListRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string DescribeRealTimeRecordListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRealTimeRecordListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool DescribeRealTimeRecordListRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeRealTimeRecordListRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeRealTimeRecordListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRealTimeRecordListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeRealTimeRecordListRequest::getRequestId()const
{
	return requestId_;
}

void DescribeRealTimeRecordListRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeRealTimeRecordListRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeRealTimeRecordListRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeRealTimeRecordListRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeRealTimeRecordListRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeRealTimeRecordListRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeRealTimeRecordListRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeRealTimeRecordListRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeRealTimeRecordListRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

