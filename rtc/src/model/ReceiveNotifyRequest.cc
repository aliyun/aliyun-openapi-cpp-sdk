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

#include <alibabacloud/rtc/model/ReceiveNotifyRequest.h>

using AlibabaCloud::Rtc::Model::ReceiveNotifyRequest;

ReceiveNotifyRequest::ReceiveNotifyRequest() :
	RpcServiceRequest("rtc", "2018-01-11", "ReceiveNotify")
{}

ReceiveNotifyRequest::~ReceiveNotifyRequest()
{}

std::string ReceiveNotifyRequest::getTraceId()const
{
	return traceId_;
}

void ReceiveNotifyRequest::setTraceId(const std::string& traceId)
{
	traceId_ = traceId;
	setCoreParameter("TraceId", traceId);
}

long ReceiveNotifyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReceiveNotifyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ReceiveNotifyRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ReceiveNotifyRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool ReceiveNotifyRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ReceiveNotifyRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ReceiveNotifyRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ReceiveNotifyRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ReceiveNotifyRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ReceiveNotifyRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ReceiveNotifyRequest::getCallerType()const
{
	return callerType_;
}

void ReceiveNotifyRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string ReceiveNotifyRequest::getContent()const
{
	return content_;
}

void ReceiveNotifyRequest::setContent(const std::string& content)
{
	content_ = content;
	setCoreParameter("Content", content);
}

std::string ReceiveNotifyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReceiveNotifyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ReceiveNotifyRequest::getSecurityToken()const
{
	return securityToken_;
}

void ReceiveNotifyRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ReceiveNotifyRequest::getRequestContent()const
{
	return requestContent_;
}

void ReceiveNotifyRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ReceiveNotifyRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ReceiveNotifyRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ReceiveNotifyRequest::getEvent()const
{
	return event_;
}

void ReceiveNotifyRequest::setEvent(const std::string& event)
{
	event_ = event;
	setCoreParameter("Event", event);
}

std::string ReceiveNotifyRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ReceiveNotifyRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ReceiveNotifyRequest::getCallerUid()const
{
	return callerUid_;
}

void ReceiveNotifyRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string ReceiveNotifyRequest::getApp_ip()const
{
	return app_ip_;
}

void ReceiveNotifyRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ReceiveNotifyRequest::getPopProduct()const
{
	return popProduct_;
}

void ReceiveNotifyRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string ReceiveNotifyRequest::getCallerBid()const
{
	return callerBid_;
}

void ReceiveNotifyRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ReceiveNotifyRequest::getOwnerId()const
{
	return ownerId_;
}

void ReceiveNotifyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ReceiveNotifyRequest::getVersion()const
{
	return version_;
}

void ReceiveNotifyRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool ReceiveNotifyRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ReceiveNotifyRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ReceiveNotifyRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ReceiveNotifyRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string ReceiveNotifyRequest::getContentType()const
{
	return contentType_;
}

void ReceiveNotifyRequest::setContentType(const std::string& contentType)
{
	contentType_ = contentType;
	setCoreParameter("ContentType", contentType);
}

bool ReceiveNotifyRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ReceiveNotifyRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ReceiveNotifyRequest::getRequestId()const
{
	return requestId_;
}

void ReceiveNotifyRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ReceiveNotifyRequest::getBizId()const
{
	return bizId_;
}

void ReceiveNotifyRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setCoreParameter("BizId", bizId);
}

