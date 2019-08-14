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

#include <alibabacloud/live/model/AddLiveRecordVodConfigRequest.h>

using AlibabaCloud::Live::Model::AddLiveRecordVodConfigRequest;

AddLiveRecordVodConfigRequest::AddLiveRecordVodConfigRequest() :
	RpcServiceRequest("live", "2016-11-01", "AddLiveRecordVodConfig")
{}

AddLiveRecordVodConfigRequest::~AddLiveRecordVodConfigRequest()
{}

long AddLiveRecordVodConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void AddLiveRecordVodConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

std::string AddLiveRecordVodConfigRequest::getAutoCompose()const
{
	return autoCompose_;
}

void AddLiveRecordVodConfigRequest::setAutoCompose(const std::string& autoCompose)
{
	autoCompose_ = autoCompose;
	setCoreParameter("AutoCompose", autoCompose);
}

bool AddLiveRecordVodConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void AddLiveRecordVodConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string AddLiveRecordVodConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void AddLiveRecordVodConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string AddLiveRecordVodConfigRequest::getComposeVodTranscodeGroupId()const
{
	return composeVodTranscodeGroupId_;
}

void AddLiveRecordVodConfigRequest::setComposeVodTranscodeGroupId(const std::string& composeVodTranscodeGroupId)
{
	composeVodTranscodeGroupId_ = composeVodTranscodeGroupId;
	setCoreParameter("ComposeVodTranscodeGroupId", composeVodTranscodeGroupId);
}

std::string AddLiveRecordVodConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void AddLiveRecordVodConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string AddLiveRecordVodConfigRequest::getCallerType()const
{
	return callerType_;
}

void AddLiveRecordVodConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string AddLiveRecordVodConfigRequest::getEagleEyeRpcId()const
{
	return eagleEyeRpcId_;
}

void AddLiveRecordVodConfigRequest::setEagleEyeRpcId(const std::string& eagleEyeRpcId)
{
	eagleEyeRpcId_ = eagleEyeRpcId;
	setCoreParameter("EagleEyeRpcId", eagleEyeRpcId);
}

std::string AddLiveRecordVodConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddLiveRecordVodConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string AddLiveRecordVodConfigRequest::getStorageLocation()const
{
	return storageLocation_;
}

void AddLiveRecordVodConfigRequest::setStorageLocation(const std::string& storageLocation)
{
	storageLocation_ = storageLocation;
	setCoreParameter("StorageLocation", storageLocation);
}

std::string AddLiveRecordVodConfigRequest::getEagleEyeTraceId()const
{
	return eagleEyeTraceId_;
}

void AddLiveRecordVodConfigRequest::setEagleEyeTraceId(const std::string& eagleEyeTraceId)
{
	eagleEyeTraceId_ = eagleEyeTraceId;
	setCoreParameter("EagleEyeTraceId", eagleEyeTraceId);
}

std::string AddLiveRecordVodConfigRequest::getAppName()const
{
	return appName_;
}

void AddLiveRecordVodConfigRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", appName);
}

std::string AddLiveRecordVodConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void AddLiveRecordVodConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string AddLiveRecordVodConfigRequest::getRegionId()const
{
	return regionId_;
}

void AddLiveRecordVodConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string AddLiveRecordVodConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void AddLiveRecordVodConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string AddLiveRecordVodConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void AddLiveRecordVodConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string AddLiveRecordVodConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void AddLiveRecordVodConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

std::string AddLiveRecordVodConfigRequest::getStreamName()const
{
	return streamName_;
}

void AddLiveRecordVodConfigRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setCoreParameter("StreamName", streamName);
}

std::string AddLiveRecordVodConfigRequest::getVodTranscodeGroupId()const
{
	return vodTranscodeGroupId_;
}

void AddLiveRecordVodConfigRequest::setVodTranscodeGroupId(const std::string& vodTranscodeGroupId)
{
	vodTranscodeGroupId_ = vodTranscodeGroupId;
	setCoreParameter("VodTranscodeGroupId", vodTranscodeGroupId);
}

long AddLiveRecordVodConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void AddLiveRecordVodConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string AddLiveRecordVodConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void AddLiveRecordVodConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string AddLiveRecordVodConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void AddLiveRecordVodConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string AddLiveRecordVodConfigRequest::getDomainName()const
{
	return domainName_;
}

void AddLiveRecordVodConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

int AddLiveRecordVodConfigRequest::getCycleDuration()const
{
	return cycleDuration_;
}

void AddLiveRecordVodConfigRequest::setCycleDuration(int cycleDuration)
{
	cycleDuration_ = cycleDuration;
	setCoreParameter("CycleDuration", std::to_string(cycleDuration));
}

std::string AddLiveRecordVodConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void AddLiveRecordVodConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long AddLiveRecordVodConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void AddLiveRecordVodConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string AddLiveRecordVodConfigRequest::getVersion()const
{
	return version_;
}

void AddLiveRecordVodConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool AddLiveRecordVodConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void AddLiveRecordVodConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool AddLiveRecordVodConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void AddLiveRecordVodConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool AddLiveRecordVodConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void AddLiveRecordVodConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string AddLiveRecordVodConfigRequest::getServiceCode()const
{
	return serviceCode_;
}

void AddLiveRecordVodConfigRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", serviceCode);
}

std::string AddLiveRecordVodConfigRequest::getRequestId()const
{
	return requestId_;
}

void AddLiveRecordVodConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string AddLiveRecordVodConfigRequest::getEagleEyeUserData()const
{
	return eagleEyeUserData_;
}

void AddLiveRecordVodConfigRequest::setEagleEyeUserData(const std::string& eagleEyeUserData)
{
	eagleEyeUserData_ = eagleEyeUserData;
	setCoreParameter("EagleEyeUserData", eagleEyeUserData);
}

