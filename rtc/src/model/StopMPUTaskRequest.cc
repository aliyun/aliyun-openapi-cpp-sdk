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

#include <alibabacloud/rtc/model/StopMPUTaskRequest.h>

using AlibabaCloud::Rtc::Model::StopMPUTaskRequest;

StopMPUTaskRequest::StopMPUTaskRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "StopMPUTask")
{}

StopMPUTaskRequest::~StopMPUTaskRequest()
{}

std::string StopMPUTaskRequest::getApp_ip()const
{
	return app_ip_;
}

void StopMPUTaskRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string StopMPUTaskRequest::getPopProduct()const
{
	return popProduct_;
}

void StopMPUTaskRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

long StopMPUTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void StopMPUTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long StopMPUTaskRequest::getCallerParentId()const
{
	return callerParentId_;
}

void StopMPUTaskRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool StopMPUTaskRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void StopMPUTaskRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string StopMPUTaskRequest::getCallerBid()const
{
	return callerBid_;
}

void StopMPUTaskRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long StopMPUTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void StopMPUTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string StopMPUTaskRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void StopMPUTaskRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string StopMPUTaskRequest::getVersion()const
{
	return version_;
}

void StopMPUTaskRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

std::string StopMPUTaskRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void StopMPUTaskRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string StopMPUTaskRequest::getCallerType()const
{
	return callerType_;
}

void StopMPUTaskRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

bool StopMPUTaskRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void StopMPUTaskRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool StopMPUTaskRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void StopMPUTaskRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string StopMPUTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StopMPUTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

bool StopMPUTaskRequest::getSecurity_transport()const
{
	return security_transport_;
}

void StopMPUTaskRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string StopMPUTaskRequest::getSecurityToken()const
{
	return securityToken_;
}

void StopMPUTaskRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string StopMPUTaskRequest::getRequestId()const
{
	return requestId_;
}

void StopMPUTaskRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string StopMPUTaskRequest::getRequestContent()const
{
	return requestContent_;
}

void StopMPUTaskRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string StopMPUTaskRequest::getAppId()const
{
	return appId_;
}

void StopMPUTaskRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

std::string StopMPUTaskRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void StopMPUTaskRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string StopMPUTaskRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void StopMPUTaskRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

std::string StopMPUTaskRequest::getTaskId()const
{
	return taskId_;
}

void StopMPUTaskRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", std::to_string(taskId));
}

long StopMPUTaskRequest::getCallerUid()const
{
	return callerUid_;
}

void StopMPUTaskRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

