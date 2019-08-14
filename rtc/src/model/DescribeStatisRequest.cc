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

#include <alibabacloud/rtc/model/DescribeStatisRequest.h>

using AlibabaCloud::Rtc::Model::DescribeStatisRequest;

DescribeStatisRequest::DescribeStatisRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "DescribeStatis")
{}

DescribeStatisRequest::~DescribeStatisRequest()
{}

std::string DescribeStatisRequest::getSortType()const
{
	return sortType_;
}

void DescribeStatisRequest::setSortType(const std::string& sortType)
{
	sortType_ = sortType;
	setCoreParameter("SortType", sortType);
}

long DescribeStatisRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeStatisRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeStatisRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeStatisRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeStatisRequest::getStartTime()const
{
	return startTime_;
}

void DescribeStatisRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeStatisRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeStatisRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeStatisRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeStatisRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeStatisRequest::getCallerType()const
{
	return callerType_;
}

void DescribeStatisRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeStatisRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeStatisRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeStatisRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeStatisRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeStatisRequest::getDataType()const
{
	return dataType_;
}

void DescribeStatisRequest::setDataType(const std::string& dataType)
{
	dataType_ = dataType;
	setCoreParameter("DataType", dataType);
}

std::string DescribeStatisRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeStatisRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeStatisRequest::getServiceArea()const
{
	return serviceArea_;
}

void DescribeStatisRequest::setServiceArea(const std::string& serviceArea)
{
	serviceArea_ = serviceArea;
	setCoreParameter("ServiceArea", serviceArea);
}

std::string DescribeStatisRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeStatisRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeStatisRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeStatisRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeStatisRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeStatisRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeStatisRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeStatisRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeStatisRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeStatisRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeStatisRequest::getEndTime()const
{
	return endTime_;
}

void DescribeStatisRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeStatisRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeStatisRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeStatisRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeStatisRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeStatisRequest::getVersion()const
{
	return version_;
}

void DescribeStatisRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeStatisRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeStatisRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeStatisRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeStatisRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeStatisRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeStatisRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeStatisRequest::getRequestId()const
{
	return requestId_;
}

void DescribeStatisRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeStatisRequest::getAppId()const
{
	return appId_;
}

void DescribeStatisRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string DescribeStatisRequest::getInterval()const
{
	return interval_;
}

void DescribeStatisRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

