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

#include <alibabacloud/rtc/model/DescribeRecordDetailRequest.h>

using AlibabaCloud::Rtc::Model::DescribeRecordDetailRequest;

DescribeRecordDetailRequest::DescribeRecordDetailRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DescribeRecordDetail")
{}

DescribeRecordDetailRequest::~DescribeRecordDetailRequest()
{}

long DescribeRecordDetailRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeRecordDetailRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeRecordDetailRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeRecordDetailRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeRecordDetailRequest::getStartTime()const
{
	return startTime_;
}

void DescribeRecordDetailRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string DescribeRecordDetailRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeRecordDetailRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeRecordDetailRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeRecordDetailRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeRecordDetailRequest::getCallerType()const
{
	return callerType_;
}

void DescribeRecordDetailRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DescribeRecordDetailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRecordDetailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeRecordDetailRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRecordDetailRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeRecordDetailRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeRecordDetailRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DescribeRecordDetailRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeRecordDetailRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeRecordDetailRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeRecordDetailRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeRecordDetailRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeRecordDetailRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeRecordDetailRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeRecordDetailRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeRecordDetailRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeRecordDetailRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DescribeRecordDetailRequest::getEndTime()const
{
	return endTime_;
}

void DescribeRecordDetailRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeRecordDetailRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeRecordDetailRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeRecordDetailRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRecordDetailRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeRecordDetailRequest::getVersion()const
{
	return version_;
}

void DescribeRecordDetailRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DescribeRecordDetailRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeRecordDetailRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeRecordDetailRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeRecordDetailRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeRecordDetailRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeRecordDetailRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeRecordDetailRequest::getRecordId()const
{
	return recordId_;
}

void DescribeRecordDetailRequest::setRecordId(const std::string& recordId)
{
	recordId_ = recordId;
	setCoreParameter("RecordId", std::to_string(recordId));
}

std::string DescribeRecordDetailRequest::getRequestId()const
{
	return requestId_;
}

void DescribeRecordDetailRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string DescribeRecordDetailRequest::getAppId()const
{
	return appId_;
}

void DescribeRecordDetailRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

std::string DescribeRecordDetailRequest::getChannelId()const
{
	return channelId_;
}

void DescribeRecordDetailRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setCoreParameter("ChannelId", std::to_string(channelId));
}

