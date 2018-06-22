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
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeRecordDetailRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeRecordDetailRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeRecordDetailRequest::getStartTime()const
{
	return startTime_;
}

void DescribeRecordDetailRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeRecordDetailRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeRecordDetailRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeRecordDetailRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeRecordDetailRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeRecordDetailRequest::getCallerType()const
{
	return callerType_;
}

void DescribeRecordDetailRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeRecordDetailRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRecordDetailRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeRecordDetailRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRecordDetailRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeRecordDetailRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeRecordDetailRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeRecordDetailRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeRecordDetailRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeRecordDetailRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeRecordDetailRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeRecordDetailRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeRecordDetailRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeRecordDetailRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeRecordDetailRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeRecordDetailRequest::getProduct()const
{
	return product_;
}

void DescribeRecordDetailRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeRecordDetailRequest::getEndTime()const
{
	return endTime_;
}

void DescribeRecordDetailRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeRecordDetailRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeRecordDetailRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeRecordDetailRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRecordDetailRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRecordDetailRequest::getVersion()const
{
	return version_;
}

void DescribeRecordDetailRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeRecordDetailRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeRecordDetailRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeRecordDetailRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeRecordDetailRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeRecordDetailRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeRecordDetailRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeRecordDetailRequest::getRecordId()const
{
	return recordId_;
}

void DescribeRecordDetailRequest::setRecordId(const std::string& recordId)
{
	recordId_ = recordId;
	setParameter("RecordId", recordId);
}

std::string DescribeRecordDetailRequest::getRequestId()const
{
	return requestId_;
}

void DescribeRecordDetailRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeRecordDetailRequest::getAppId()const
{
	return appId_;
}

void DescribeRecordDetailRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string DescribeRecordDetailRequest::getChannelId()const
{
	return channelId_;
}

void DescribeRecordDetailRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setParameter("ChannelId", channelId);
}

