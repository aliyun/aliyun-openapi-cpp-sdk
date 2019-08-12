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

#include <alibabacloud/live/model/DescribeRecordRequest.h>

using AlibabaCloud::Live::Model::DescribeRecordRequest;

DescribeRecordRequest::DescribeRecordRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeRecord")
{}

DescribeRecordRequest::~DescribeRecordRequest()
{}

std::string DescribeRecordRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeRecordRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeRecordRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeRecordRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

long DescribeRecordRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeRecordRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeRecordRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeRecordRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeRecordRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeRecordRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeRecordRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRecordRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRecordRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeRecordRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeRecordRequest::getVersion()const
{
	return version_;
}

void DescribeRecordRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string DescribeRecordRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeRecordRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeRecordRequest::getCallerType()const
{
	return callerType_;
}

void DescribeRecordRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool DescribeRecordRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeRecordRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeRecordRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeRecordRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string DescribeRecordRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRecordRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool DescribeRecordRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeRecordRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeRecordRequest::getRecordId()const
{
	return recordId_;
}

void DescribeRecordRequest::setRecordId(const std::string& recordId)
{
	recordId_ = recordId;
	setCoreParameter("RecordId", recordId);
}

std::string DescribeRecordRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRecordRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeRecordRequest::getRegionId()const
{
	return regionId_;
}

void DescribeRecordRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeRecordRequest::getRequestId()const
{
	return requestId_;
}

void DescribeRecordRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeRecordRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeRecordRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeRecordRequest::getAppId()const
{
	return appId_;
}

void DescribeRecordRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string DescribeRecordRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeRecordRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeRecordRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeRecordRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeRecordRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeRecordRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

