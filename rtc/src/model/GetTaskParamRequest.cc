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

#include <alibabacloud/rtc/model/GetTaskParamRequest.h>

using AlibabaCloud::Rtc::Model::GetTaskParamRequest;

GetTaskParamRequest::GetTaskParamRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "GetTaskParam")
{}

GetTaskParamRequest::~GetTaskParamRequest()
{}

std::string GetTaskParamRequest::getApp_ip()const
{
	return app_ip_;
}

void GetTaskParamRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string GetTaskParamRequest::getPopProduct()const
{
	return popProduct_;
}

void GetTaskParamRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

long GetTaskParamRequest::getCallerParentId()const
{
	return callerParentId_;
}

void GetTaskParamRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool GetTaskParamRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void GetTaskParamRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string GetTaskParamRequest::getCallerBid()const
{
	return callerBid_;
}

void GetTaskParamRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long GetTaskParamRequest::getOwnerId()const
{
	return ownerId_;
}

void GetTaskParamRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string GetTaskParamRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void GetTaskParamRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string GetTaskParamRequest::getVersion()const
{
	return version_;
}

void GetTaskParamRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string GetTaskParamRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void GetTaskParamRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string GetTaskParamRequest::getCallerType()const
{
	return callerType_;
}

void GetTaskParamRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool GetTaskParamRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void GetTaskParamRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool GetTaskParamRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void GetTaskParamRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string GetTaskParamRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetTaskParamRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool GetTaskParamRequest::getSecurity_transport()const
{
	return security_transport_;
}

void GetTaskParamRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string GetTaskParamRequest::getSecurityToken()const
{
	return securityToken_;
}

void GetTaskParamRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string GetTaskParamRequest::getRequestId()const
{
	return requestId_;
}

void GetTaskParamRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string GetTaskParamRequest::getRequestContent()const
{
	return requestContent_;
}

void GetTaskParamRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string GetTaskParamRequest::getAppId()const
{
	return appId_;
}

void GetTaskParamRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string GetTaskParamRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void GetTaskParamRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string GetTaskParamRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void GetTaskParamRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long GetTaskParamRequest::getTaskId()const
{
	return taskId_;
}

void GetTaskParamRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", std::to_string(taskId));
}

long GetTaskParamRequest::getCallerUid()const
{
	return callerUid_;
}

void GetTaskParamRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

