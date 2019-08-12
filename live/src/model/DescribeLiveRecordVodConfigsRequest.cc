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

#include <alibabacloud/live/model/DescribeLiveRecordVodConfigsRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveRecordVodConfigsRequest;

DescribeLiveRecordVodConfigsRequest::DescribeLiveRecordVodConfigsRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveRecordVodConfigs")
{}

DescribeLiveRecordVodConfigsRequest::~DescribeLiveRecordVodConfigsRequest()
{}

long DescribeLiveRecordVodConfigsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeLiveRecordVodConfigsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeLiveRecordVodConfigsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeLiveRecordVodConfigsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeLiveRecordVodConfigsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeLiveRecordVodConfigsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

long DescribeLiveRecordVodConfigsRequest::getPageNum()const
{
	return pageNum_;
}

void DescribeLiveRecordVodConfigsRequest::setPageNum(long pageNum)
{
	pageNum_ = pageNum;
	setCoreParameter("PageNum", std::to_string(pageNum));
}

std::string DescribeLiveRecordVodConfigsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeLiveRecordVodConfigsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeLiveRecordVodConfigsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeLiveRecordVodConfigsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeLiveRecordVodConfigsRequest::getEagleEyeRpcId()const
{
	return eagleEyeRpcId_;
}

void DescribeLiveRecordVodConfigsRequest::setEagleEyeRpcId(const std::string& eagleEyeRpcId)
{
	eagleEyeRpcId_ = eagleEyeRpcId;
	setCoreParameter("EagleEyeRpcId", eagleEyeRpcId);
}

std::string DescribeLiveRecordVodConfigsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveRecordVodConfigsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeLiveRecordVodConfigsRequest::getEagleEyeTraceId()const
{
	return eagleEyeTraceId_;
}

void DescribeLiveRecordVodConfigsRequest::setEagleEyeTraceId(const std::string& eagleEyeTraceId)
{
	eagleEyeTraceId_ = eagleEyeTraceId;
	setCoreParameter("EagleEyeTraceId", eagleEyeTraceId);
}

std::string DescribeLiveRecordVodConfigsRequest::getAppName()const
{
	return appName_;
}

void DescribeLiveRecordVodConfigsRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", appName);
}

std::string DescribeLiveRecordVodConfigsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveRecordVodConfigsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeLiveRecordVodConfigsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLiveRecordVodConfigsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeLiveRecordVodConfigsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeLiveRecordVodConfigsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

long DescribeLiveRecordVodConfigsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeLiveRecordVodConfigsRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeLiveRecordVodConfigsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeLiveRecordVodConfigsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeLiveRecordVodConfigsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeLiveRecordVodConfigsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

std::string DescribeLiveRecordVodConfigsRequest::getStreamName()const
{
	return streamName_;
}

void DescribeLiveRecordVodConfigsRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setCoreParameter("StreamName", streamName);
}

long DescribeLiveRecordVodConfigsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeLiveRecordVodConfigsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeLiveRecordVodConfigsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeLiveRecordVodConfigsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeLiveRecordVodConfigsRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeLiveRecordVodConfigsRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeLiveRecordVodConfigsRequest::getDomainName()const
{
	return domainName_;
}

void DescribeLiveRecordVodConfigsRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeLiveRecordVodConfigsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeLiveRecordVodConfigsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeLiveRecordVodConfigsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveRecordVodConfigsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveRecordVodConfigsRequest::getVersion()const
{
	return version_;
}

void DescribeLiveRecordVodConfigsRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeLiveRecordVodConfigsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeLiveRecordVodConfigsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeLiveRecordVodConfigsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeLiveRecordVodConfigsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeLiveRecordVodConfigsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeLiveRecordVodConfigsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeLiveRecordVodConfigsRequest::getServiceCode()const
{
	return serviceCode_;
}

void DescribeLiveRecordVodConfigsRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", serviceCode);
}

std::string DescribeLiveRecordVodConfigsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeLiveRecordVodConfigsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeLiveRecordVodConfigsRequest::getEagleEyeUserData()const
{
	return eagleEyeUserData_;
}

void DescribeLiveRecordVodConfigsRequest::setEagleEyeUserData(const std::string& eagleEyeUserData)
{
	eagleEyeUserData_ = eagleEyeUserData;
	setCoreParameter("EagleEyeUserData", eagleEyeUserData);
}

