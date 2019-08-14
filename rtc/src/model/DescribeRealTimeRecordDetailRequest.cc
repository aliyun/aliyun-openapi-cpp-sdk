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

#include <alibabacloud/rtc/model/DescribeRealTimeRecordDetailRequest.h>

using AlibabaCloud::Rtc::Model::DescribeRealTimeRecordDetailRequest;

DescribeRealTimeRecordDetailRequest::DescribeRealTimeRecordDetailRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DescribeRealTimeRecordDetail")
{}

DescribeRealTimeRecordDetailRequest::~DescribeRealTimeRecordDetailRequest()
{}

std::string DescribeRealTimeRecordDetailRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeRealTimeRecordDetailRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeRealTimeRecordDetailRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeRealTimeRecordDetailRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

long DescribeRealTimeRecordDetailRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeRealTimeRecordDetailRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeRealTimeRecordDetailRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeRealTimeRecordDetailRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeRealTimeRecordDetailRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeRealTimeRecordDetailRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeRealTimeRecordDetailRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRealTimeRecordDetailRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRealTimeRecordDetailRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeRealTimeRecordDetailRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeRealTimeRecordDetailRequest::getVersion()const
{
	return version_;
}

void DescribeRealTimeRecordDetailRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string DescribeRealTimeRecordDetailRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeRealTimeRecordDetailRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeRealTimeRecordDetailRequest::getCallerType()const
{
	return callerType_;
}

void DescribeRealTimeRecordDetailRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool DescribeRealTimeRecordDetailRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeRealTimeRecordDetailRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeRealTimeRecordDetailRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeRealTimeRecordDetailRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string DescribeRealTimeRecordDetailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRealTimeRecordDetailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool DescribeRealTimeRecordDetailRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeRealTimeRecordDetailRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeRealTimeRecordDetailRequest::getRecordId()const
{
	return recordId_;
}

void DescribeRealTimeRecordDetailRequest::setRecordId(const std::string& recordId)
{
	recordId_ = recordId;
	setCoreParameter("RecordId", recordId);
}

std::string DescribeRealTimeRecordDetailRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRealTimeRecordDetailRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeRealTimeRecordDetailRequest::getRequestId()const
{
	return requestId_;
}

void DescribeRealTimeRecordDetailRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeRealTimeRecordDetailRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeRealTimeRecordDetailRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeRealTimeRecordDetailRequest::getAppId()const
{
	return appId_;
}

void DescribeRealTimeRecordDetailRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string DescribeRealTimeRecordDetailRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeRealTimeRecordDetailRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeRealTimeRecordDetailRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeRealTimeRecordDetailRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

std::string DescribeRealTimeRecordDetailRequest::getChannelId()const
{
	return channelId_;
}

void DescribeRealTimeRecordDetailRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setCoreParameter("ChannelId", channelId);
}

long DescribeRealTimeRecordDetailRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeRealTimeRecordDetailRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

