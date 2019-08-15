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

#include <alibabacloud/cdn/model/DescribeRealtimeDeliveryAccRequest.h>

using AlibabaCloud::Cdn::Model::DescribeRealtimeDeliveryAccRequest;

DescribeRealtimeDeliveryAccRequest::DescribeRealtimeDeliveryAccRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeRealtimeDeliveryAcc")
{}

DescribeRealtimeDeliveryAccRequest::~DescribeRealtimeDeliveryAccRequest()
{}

long DescribeRealtimeDeliveryAccRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeRealtimeDeliveryAccRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeRealtimeDeliveryAccRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeRealtimeDeliveryAccRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeRealtimeDeliveryAccRequest::getProject()const
{
	return project_;
}

void DescribeRealtimeDeliveryAccRequest::setProject(const std::string& project)
{
	project_ = project;
	setCoreParameter("Project", project);
}

std::string DescribeRealtimeDeliveryAccRequest::getStartTime()const
{
	return startTime_;
}

void DescribeRealtimeDeliveryAccRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeRealtimeDeliveryAccRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeRealtimeDeliveryAccRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeRealtimeDeliveryAccRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeRealtimeDeliveryAccRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeRealtimeDeliveryAccRequest::getCallerType()const
{
	return callerType_;
}

void DescribeRealtimeDeliveryAccRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeRealtimeDeliveryAccRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRealtimeDeliveryAccRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeRealtimeDeliveryAccRequest::getLogType()const
{
	return logType_;
}

void DescribeRealtimeDeliveryAccRequest::setLogType(const std::string& logType)
{
	logType_ = logType;
	setCoreParameter("LogType", logType);
}

std::string DescribeRealtimeDeliveryAccRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRealtimeDeliveryAccRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeRealtimeDeliveryAccRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeRealtimeDeliveryAccRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeRealtimeDeliveryAccRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeRealtimeDeliveryAccRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeRealtimeDeliveryAccRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeRealtimeDeliveryAccRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeRealtimeDeliveryAccRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeRealtimeDeliveryAccRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeRealtimeDeliveryAccRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeRealtimeDeliveryAccRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeRealtimeDeliveryAccRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeRealtimeDeliveryAccRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeRealtimeDeliveryAccRequest::getProduct()const
{
	return product_;
}

void DescribeRealtimeDeliveryAccRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

std::string DescribeRealtimeDeliveryAccRequest::getEndTime()const
{
	return endTime_;
}

void DescribeRealtimeDeliveryAccRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeRealtimeDeliveryAccRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeRealtimeDeliveryAccRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeRealtimeDeliveryAccRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRealtimeDeliveryAccRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRealtimeDeliveryAccRequest::getVersion()const
{
	return version_;
}

void DescribeRealtimeDeliveryAccRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeRealtimeDeliveryAccRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeRealtimeDeliveryAccRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeRealtimeDeliveryAccRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeRealtimeDeliveryAccRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeRealtimeDeliveryAccRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeRealtimeDeliveryAccRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeRealtimeDeliveryAccRequest::getRequestId()const
{
	return requestId_;
}

void DescribeRealtimeDeliveryAccRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeRealtimeDeliveryAccRequest::getInterval()const
{
	return interval_;
}

void DescribeRealtimeDeliveryAccRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

std::string DescribeRealtimeDeliveryAccRequest::getLogStore()const
{
	return logStore_;
}

void DescribeRealtimeDeliveryAccRequest::setLogStore(const std::string& logStore)
{
	logStore_ = logStore;
	setCoreParameter("LogStore", logStore);
}

