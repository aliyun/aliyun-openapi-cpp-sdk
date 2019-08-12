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

#include <alibabacloud/live/model/DeleteLiveRecordVodConfigRequest.h>

using AlibabaCloud::Live::Model::DeleteLiveRecordVodConfigRequest;

DeleteLiveRecordVodConfigRequest::DeleteLiveRecordVodConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "DeleteLiveRecordVodConfig")
{}

DeleteLiveRecordVodConfigRequest::~DeleteLiveRecordVodConfigRequest()
{}

long DeleteLiveRecordVodConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteLiveRecordVodConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteLiveRecordVodConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteLiveRecordVodConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteLiveRecordVodConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteLiveRecordVodConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteLiveRecordVodConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteLiveRecordVodConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteLiveRecordVodConfigRequest::getCallerType()const
{
	return callerType_;
}

void DeleteLiveRecordVodConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DeleteLiveRecordVodConfigRequest::getEagleEyeRpcId()const
{
	return eagleEyeRpcId_;
}

void DeleteLiveRecordVodConfigRequest::setEagleEyeRpcId(const std::string& eagleEyeRpcId)
{
	eagleEyeRpcId_ = eagleEyeRpcId;
	setCoreParameter("EagleEyeRpcId", eagleEyeRpcId);
}

std::string DeleteLiveRecordVodConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteLiveRecordVodConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteLiveRecordVodConfigRequest::getEagleEyeTraceId()const
{
	return eagleEyeTraceId_;
}

void DeleteLiveRecordVodConfigRequest::setEagleEyeTraceId(const std::string& eagleEyeTraceId)
{
	eagleEyeTraceId_ = eagleEyeTraceId;
	setCoreParameter("EagleEyeTraceId", eagleEyeTraceId);
}

std::string DeleteLiveRecordVodConfigRequest::getAppName()const
{
	return appName_;
}

void DeleteLiveRecordVodConfigRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", appName);
}

std::string DeleteLiveRecordVodConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteLiveRecordVodConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteLiveRecordVodConfigRequest::getRegionId()const
{
	return regionId_;
}

void DeleteLiveRecordVodConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteLiveRecordVodConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteLiveRecordVodConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DeleteLiveRecordVodConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteLiveRecordVodConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteLiveRecordVodConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteLiveRecordVodConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

std::string DeleteLiveRecordVodConfigRequest::getStreamName()const
{
	return streamName_;
}

void DeleteLiveRecordVodConfigRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setCoreParameter("StreamName", streamName);
}

long DeleteLiveRecordVodConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteLiveRecordVodConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DeleteLiveRecordVodConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteLiveRecordVodConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DeleteLiveRecordVodConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void DeleteLiveRecordVodConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DeleteLiveRecordVodConfigRequest::getDomainName()const
{
	return domainName_;
}

void DeleteLiveRecordVodConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DeleteLiveRecordVodConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteLiveRecordVodConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DeleteLiveRecordVodConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteLiveRecordVodConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteLiveRecordVodConfigRequest::getVersion()const
{
	return version_;
}

void DeleteLiveRecordVodConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DeleteLiveRecordVodConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteLiveRecordVodConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeleteLiveRecordVodConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteLiveRecordVodConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DeleteLiveRecordVodConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteLiveRecordVodConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteLiveRecordVodConfigRequest::getServiceCode()const
{
	return serviceCode_;
}

void DeleteLiveRecordVodConfigRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", serviceCode);
}

std::string DeleteLiveRecordVodConfigRequest::getRequestId()const
{
	return requestId_;
}

void DeleteLiveRecordVodConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DeleteLiveRecordVodConfigRequest::getEagleEyeUserData()const
{
	return eagleEyeUserData_;
}

void DeleteLiveRecordVodConfigRequest::setEagleEyeUserData(const std::string& eagleEyeUserData)
{
	eagleEyeUserData_ = eagleEyeUserData;
	setCoreParameter("EagleEyeUserData", eagleEyeUserData);
}

