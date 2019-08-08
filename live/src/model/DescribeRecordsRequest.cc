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

#include <alibabacloud/live/model/DescribeRecordsRequest.h>

using AlibabaCloud::Live::Model::DescribeRecordsRequest;

DescribeRecordsRequest::DescribeRecordsRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeRecords")
{}

DescribeRecordsRequest::~DescribeRecordsRequest()
{}

std::string DescribeRecordsRequest::getRecordState()const
{
	return recordState_;
}

void DescribeRecordsRequest::setRecordState(const std::string& recordState)
{
	recordState_ = recordState;
	setCoreParameter("RecordState", recordState);
}

long DescribeRecordsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeRecordsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeRecordsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeRecordsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeRecordsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeRecordsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

int DescribeRecordsRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeRecordsRequest::setPageNum(int pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", std::to_string(pageNum));
}

std::string DescribeRecordsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeRecordsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeRecordsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeRecordsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeRecordsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRecordsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeRecordsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRecordsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeRecordsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeRecordsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeRecordsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeRecordsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

int DescribeRecordsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRecordsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeRecordsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeRecordsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeRecordsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeRecordsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeRecordsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeRecordsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeRecordsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeRecordsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeRecordsRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeRecordsRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeRecordsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeRecordsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeRecordsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRecordsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRecordsRequest::getVersion()const
{
	return version_;
}

void DescribeRecordsRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeRecordsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeRecordsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeRecordsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeRecordsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeRecordsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeRecordsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeRecordsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeRecordsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeRecordsRequest::getAppId()const
{
	return appId_;
}

void DescribeRecordsRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

