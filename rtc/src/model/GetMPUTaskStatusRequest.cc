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

#include <alibabacloud/rtc/model/GetMPUTaskStatusRequest.h>

using AlibabaCloud::Rtc::Model::GetMPUTaskStatusRequest;

GetMPUTaskStatusRequest::GetMPUTaskStatusRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "GetMPUTaskStatus")
{}

GetMPUTaskStatusRequest::~GetMPUTaskStatusRequest()
{}

std::string GetMPUTaskStatusRequest::getApp_ip()const
{
	return app_ip_;
}

void GetMPUTaskStatusRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string GetMPUTaskStatusRequest::getPopProduct()const
{
	return popProduct_;
}

void GetMPUTaskStatusRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

long GetMPUTaskStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetMPUTaskStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long GetMPUTaskStatusRequest::getCallerParentId()const
{
	return callerParentId_;
}

void GetMPUTaskStatusRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool GetMPUTaskStatusRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void GetMPUTaskStatusRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string GetMPUTaskStatusRequest::getCallerBid()const
{
	return callerBid_;
}

void GetMPUTaskStatusRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long GetMPUTaskStatusRequest::getOwnerId()const
{
	return ownerId_;
}

void GetMPUTaskStatusRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string GetMPUTaskStatusRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void GetMPUTaskStatusRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string GetMPUTaskStatusRequest::getVersion()const
{
	return version_;
}

void GetMPUTaskStatusRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string GetMPUTaskStatusRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void GetMPUTaskStatusRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string GetMPUTaskStatusRequest::getCallerType()const
{
	return callerType_;
}

void GetMPUTaskStatusRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool GetMPUTaskStatusRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void GetMPUTaskStatusRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool GetMPUTaskStatusRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void GetMPUTaskStatusRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

std::string GetMPUTaskStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetMPUTaskStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool GetMPUTaskStatusRequest::getSecurity_transport()const
{
	return security_transport_;
}

void GetMPUTaskStatusRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string GetMPUTaskStatusRequest::getSecurityToken()const
{
	return securityToken_;
}

void GetMPUTaskStatusRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string GetMPUTaskStatusRequest::getRequestId()const
{
	return requestId_;
}

void GetMPUTaskStatusRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string GetMPUTaskStatusRequest::getRequestContent()const
{
	return requestContent_;
}

void GetMPUTaskStatusRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string GetMPUTaskStatusRequest::getAppId()const
{
	return appId_;
}

void GetMPUTaskStatusRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string GetMPUTaskStatusRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void GetMPUTaskStatusRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string GetMPUTaskStatusRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void GetMPUTaskStatusRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

std::string GetMPUTaskStatusRequest::getTaskId()const
{
	return taskId_;
}

void GetMPUTaskStatusRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

long GetMPUTaskStatusRequest::getCallerUid()const
{
	return callerUid_;
}

void GetMPUTaskStatusRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

