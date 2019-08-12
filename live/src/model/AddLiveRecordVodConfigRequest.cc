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
	setCoreParameter("CallerParentId", callerParentId);
}

std::string AddLiveRecordVodConfigRequest::getAutoCompose()const
{
	return autoCompose_;
}

void AddLiveRecordVodConfigRequest::setAutoCompose(const std::string& autoCompose)
{
	autoCompose_ = autoCompose;
	setCoreParameter("AutoCompose", std::to_string(autoCompose));
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
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string AddLiveRecordVodConfigRequest::getComposeVodTranscodeGroupId()const
{
	return composeVodTranscodeGroupId_;
}

void AddLiveRecordVodConfigRequest::setComposeVodTranscodeGroupId(const std::string& composeVodTranscodeGroupId)
{
	composeVodTranscodeGroupId_ = composeVodTranscodeGroupId;
	setCoreParameter("ComposeVodTranscodeGroupId", std::to_string(composeVodTranscodeGroupId));
}

std::string AddLiveRecordVodConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void AddLiveRecordVodConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string AddLiveRecordVodConfigRequest::getCallerType()const
{
	return callerType_;
}

void AddLiveRecordVodConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string AddLiveRecordVodConfigRequest::getEagleEyeRpcId()const
{
	return eagleEyeRpcId_;
}

void AddLiveRecordVodConfigRequest::setEagleEyeRpcId(const std::string& eagleEyeRpcId)
{
	eagleEyeRpcId_ = eagleEyeRpcId;
	setCoreParameter("EagleEyeRpcId", std::to_string(eagleEyeRpcId));
}

std::string AddLiveRecordVodConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddLiveRecordVodConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string AddLiveRecordVodConfigRequest::getStorageLocation()const
{
	return storageLocation_;
}

void AddLiveRecordVodConfigRequest::setStorageLocation(const std::string& storageLocation)
{
	storageLocation_ = storageLocation;
	setCoreParameter("StorageLocation", std::to_string(storageLocation));
}

std::string AddLiveRecordVodConfigRequest::getEagleEyeTraceId()const
{
	return eagleEyeTraceId_;
}

void AddLiveRecordVodConfigRequest::setEagleEyeTraceId(const std::string& eagleEyeTraceId)
{
	eagleEyeTraceId_ = eagleEyeTraceId;
	setCoreParameter("EagleEyeTraceId", std::to_string(eagleEyeTraceId));
}

std::string AddLiveRecordVodConfigRequest::getAppName()const
{
	return appName_;
}

void AddLiveRecordVodConfigRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", std::to_string(appName));
}

std::string AddLiveRecordVodConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void AddLiveRecordVodConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string AddLiveRecordVodConfigRequest::getRegionId()const
{
	return regionId_;
}

void AddLiveRecordVodConfigRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string AddLiveRecordVodConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void AddLiveRecordVodConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string AddLiveRecordVodConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void AddLiveRecordVodConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string AddLiveRecordVodConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void AddLiveRecordVodConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

std::string AddLiveRecordVodConfigRequest::getStreamName()const
{
	return streamName_;
}

void AddLiveRecordVodConfigRequest::setStreamName(const std::string& streamName)
{
	streamName_ = streamName;
	setCoreParameter("StreamName", std::to_string(streamName));
}

std::string AddLiveRecordVodConfigRequest::getVodTranscodeGroupId()const
{
	return vodTranscodeGroupId_;
}

void AddLiveRecordVodConfigRequest::setVodTranscodeGroupId(const std::string& vodTranscodeGroupId)
{
	vodTranscodeGroupId_ = vodTranscodeGroupId;
	setCoreParameter("VodTranscodeGroupId", std::to_string(vodTranscodeGroupId));
}

long AddLiveRecordVodConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void AddLiveRecordVodConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string AddLiveRecordVodConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void AddLiveRecordVodConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string AddLiveRecordVodConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void AddLiveRecordVodConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string AddLiveRecordVodConfigRequest::getDomainName()const
{
	return domainName_;
}

void AddLiveRecordVodConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

int AddLiveRecordVodConfigRequest::getCycleDuration()const
{
	return cycleDuration_;
}

void AddLiveRecordVodConfigRequest::setCycleDuration(int cycleDuration)
{
	cycleDuration_ = cycleDuration;
	setCoreParameter("CycleDuration", cycleDuration);
}

std::string AddLiveRecordVodConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void AddLiveRecordVodConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long AddLiveRecordVodConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void AddLiveRecordVodConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string AddLiveRecordVodConfigRequest::getVersion()const
{
	return version_;
}

void AddLiveRecordVodConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
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
	setCoreParameter("ServiceCode", std::to_string(serviceCode));
}

std::string AddLiveRecordVodConfigRequest::getRequestId()const
{
	return requestId_;
}

void AddLiveRecordVodConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string AddLiveRecordVodConfigRequest::getEagleEyeUserData()const
{
	return eagleEyeUserData_;
}

void AddLiveRecordVodConfigRequest::setEagleEyeUserData(const std::string& eagleEyeUserData)
{
	eagleEyeUserData_ = eagleEyeUserData;
	setCoreParameter("EagleEyeUserData", std::to_string(eagleEyeUserData));
}

