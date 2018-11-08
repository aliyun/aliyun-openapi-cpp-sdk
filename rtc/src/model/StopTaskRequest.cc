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

#include <alibabacloud/rtc/model/StopTaskRequest.h>

using AlibabaCloud::Rtc::Model::StopTaskRequest;

StopTaskRequest::StopTaskRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "StopTask")
{}

StopTaskRequest::~StopTaskRequest()
{}

std::string StopTaskRequest::getApp_ip()const
{
	return app_ip_;
}

void StopTaskRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string StopTaskRequest::getPopProduct()const
{
	return popProduct_;
}

void StopTaskRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

long StopTaskRequest::getCallerParentId()const
{
	return callerParentId_;
}

void StopTaskRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool StopTaskRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void StopTaskRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string StopTaskRequest::getCallerBid()const
{
	return callerBid_;
}

void StopTaskRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long StopTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void StopTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string StopTaskRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void StopTaskRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string StopTaskRequest::getVersion()const
{
	return version_;
}

void StopTaskRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string StopTaskRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void StopTaskRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string StopTaskRequest::getCallerType()const
{
	return callerType_;
}

void StopTaskRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool StopTaskRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void StopTaskRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool StopTaskRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void StopTaskRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string StopTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void StopTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool StopTaskRequest::getSecurity_transport()const
{
	return security_transport_;
}

void StopTaskRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string StopTaskRequest::getSecurityToken()const
{
	return securityToken_;
}

void StopTaskRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string StopTaskRequest::getRequestId()const
{
	return requestId_;
}

void StopTaskRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string StopTaskRequest::getRequestContent()const
{
	return requestContent_;
}

void StopTaskRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string StopTaskRequest::getAppId()const
{
	return appId_;
}

void StopTaskRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setParameter("AppId", appId);
}

std::string StopTaskRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void StopTaskRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string StopTaskRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void StopTaskRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

std::string StopTaskRequest::getChannelId()const
{
	return channelId_;
}

void StopTaskRequest::setChannelId(const std::string& channelId)
{
	channelId_ = channelId;
	setParameter("ChannelId", channelId);
}

long StopTaskRequest::getTaskId()const
{
	return taskId_;
}

void StopTaskRequest::setTaskId(long taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", std::to_string(taskId));
}

long StopTaskRequest::getCallerUid()const
{
	return callerUid_;
}

void StopTaskRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

