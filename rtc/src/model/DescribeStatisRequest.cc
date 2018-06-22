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
	setParameter("SortType", sortType);
}

long DescribeStatisRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeStatisRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeStatisRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeStatisRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeStatisRequest::getStartTime()const
{
	return startTime_;
}

void DescribeStatisRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeStatisRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeStatisRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeStatisRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeStatisRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeStatisRequest::getCallerType()const
{
	return callerType_;
}

void DescribeStatisRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeStatisRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeStatisRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeStatisRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeStatisRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeStatisRequest::getDataType()const
{
	return dataType_;
}

void DescribeStatisRequest::setDataType(const std::string& dataType)
{
	dataType_ = dataType;
	setParameter("DataType", dataType);
}

std::string DescribeStatisRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeStatisRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeStatisRequest::getServiceArea()const
{
	return serviceArea_;
}

void DescribeStatisRequest::setServiceArea(const std::string& serviceArea)
{
	serviceArea_ = serviceArea;
	setParameter("ServiceArea", serviceArea);
}

std::string DescribeStatisRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeStatisRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeStatisRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeStatisRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeStatisRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeStatisRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeStatisRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeStatisRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeStatisRequest::getProduct()const
{
	return product_;
}

void DescribeStatisRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeStatisRequest::getEndTime()const
{
	return endTime_;
}

void DescribeStatisRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeStatisRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeStatisRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeStatisRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeStatisRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeStatisRequest::getVersion()const
{
	return version_;
}

void DescribeStatisRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeStatisRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeStatisRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeStatisRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeStatisRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeStatisRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeStatisRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeStatisRequest::getRequestId()const
{
	return requestId_;
}

void DescribeStatisRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeStatisRequest::getAppId()const
{
	return appId_;
}

void DescribeStatisRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string DescribeStatisRequest::getInterval()const
{
	return interval_;
}

void DescribeStatisRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setParameter("Interval", interval);
}

