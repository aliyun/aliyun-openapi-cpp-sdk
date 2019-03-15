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
	setParameter("TraceId", traceId);
}

long ReceiveNotifyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReceiveNotifyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ReceiveNotifyRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ReceiveNotifyRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool ReceiveNotifyRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ReceiveNotifyRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string ReceiveNotifyRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ReceiveNotifyRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ReceiveNotifyRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ReceiveNotifyRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ReceiveNotifyRequest::getCallerType()const
{
	return callerType_;
}

void ReceiveNotifyRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string ReceiveNotifyRequest::getContent()const
{
	return content_;
}

void ReceiveNotifyRequest::setContent(const std::string& content)
{
	content_ = content;
	setParameter("Content", content);
}

std::string ReceiveNotifyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReceiveNotifyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ReceiveNotifyRequest::getSecurityToken()const
{
	return securityToken_;
}

void ReceiveNotifyRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ReceiveNotifyRequest::getRequestContent()const
{
	return requestContent_;
}

void ReceiveNotifyRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string ReceiveNotifyRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ReceiveNotifyRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string ReceiveNotifyRequest::getEvent()const
{
	return event_;
}

void ReceiveNotifyRequest::setEvent(const std::string& event)
{
	event_ = event;
	setParameter("Event", event);
}

std::string ReceiveNotifyRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ReceiveNotifyRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long ReceiveNotifyRequest::getCallerUid()const
{
	return callerUid_;
}

void ReceiveNotifyRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string ReceiveNotifyRequest::getApp_ip()const
{
	return app_ip_;
}

void ReceiveNotifyRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string ReceiveNotifyRequest::getPopProduct()const
{
	return popProduct_;
}

void ReceiveNotifyRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string ReceiveNotifyRequest::getCallerBid()const
{
	return callerBid_;
}

void ReceiveNotifyRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long ReceiveNotifyRequest::getOwnerId()const
{
	return ownerId_;
}

void ReceiveNotifyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ReceiveNotifyRequest::getVersion()const
{
	return version_;
}

void ReceiveNotifyRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool ReceiveNotifyRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ReceiveNotifyRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool ReceiveNotifyRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ReceiveNotifyRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string ReceiveNotifyRequest::getContentType()const
{
	return contentType_;
}

void ReceiveNotifyRequest::setContentType(const std::string& contentType)
{
	contentType_ = contentType;
	setParameter("ContentType", contentType);
}

bool ReceiveNotifyRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ReceiveNotifyRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string ReceiveNotifyRequest::getRequestId()const
{
	return requestId_;
}

void ReceiveNotifyRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string ReceiveNotifyRequest::getBizId()const
{
	return bizId_;
}

void ReceiveNotifyRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setParameter("BizId", bizId);
}

