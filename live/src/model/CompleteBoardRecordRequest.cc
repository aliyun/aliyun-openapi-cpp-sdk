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

#include <alibabacloud/live/model/CompleteBoardRecordRequest.h>

using AlibabaCloud::Live::Model::CompleteBoardRecordRequest;

CompleteBoardRecordRequest::CompleteBoardRecordRequest() :
	RpcServiceRequest("live", "2016-11-01", "CompleteBoardRecord")
{}

CompleteBoardRecordRequest::~CompleteBoardRecordRequest()
{}

long CompleteBoardRecordRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CompleteBoardRecordRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool CompleteBoardRecordRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CompleteBoardRecordRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CompleteBoardRecordRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CompleteBoardRecordRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string CompleteBoardRecordRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CompleteBoardRecordRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string CompleteBoardRecordRequest::getCallerType()const
{
	return callerType_;
}

void CompleteBoardRecordRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string CompleteBoardRecordRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CompleteBoardRecordRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string CompleteBoardRecordRequest::getSecurityToken()const
{
	return securityToken_;
}

void CompleteBoardRecordRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string CompleteBoardRecordRequest::getRegionId()const
{
	return regionId_;
}

void CompleteBoardRecordRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CompleteBoardRecordRequest::getRequestContent()const
{
	return requestContent_;
}

void CompleteBoardRecordRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string CompleteBoardRecordRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CompleteBoardRecordRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string CompleteBoardRecordRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CompleteBoardRecordRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long CompleteBoardRecordRequest::getCallerUid()const
{
	return callerUid_;
}

void CompleteBoardRecordRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string CompleteBoardRecordRequest::getApp_ip()const
{
	return app_ip_;
}

void CompleteBoardRecordRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string CompleteBoardRecordRequest::getPopProduct()const
{
	return popProduct_;
}

void CompleteBoardRecordRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string CompleteBoardRecordRequest::getEndTime()const
{
	return endTime_;
}

void CompleteBoardRecordRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string CompleteBoardRecordRequest::getCallerBid()const
{
	return callerBid_;
}

void CompleteBoardRecordRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long CompleteBoardRecordRequest::getOwnerId()const
{
	return ownerId_;
}

void CompleteBoardRecordRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CompleteBoardRecordRequest::getVersion()const
{
	return version_;
}

void CompleteBoardRecordRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool CompleteBoardRecordRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CompleteBoardRecordRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CompleteBoardRecordRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CompleteBoardRecordRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CompleteBoardRecordRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CompleteBoardRecordRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CompleteBoardRecordRequest::getRecordId()const
{
	return recordId_;
}

void CompleteBoardRecordRequest::setRecordId(const std::string& recordId)
{
	recordId_ = recordId;
	setCoreParameter("RecordId", std::to_string(recordId));
}

std::string CompleteBoardRecordRequest::getRequestId()const
{
	return requestId_;
}

void CompleteBoardRecordRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string CompleteBoardRecordRequest::getAppId()const
{
	return appId_;
}

void CompleteBoardRecordRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

