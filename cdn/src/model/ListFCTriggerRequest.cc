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

#include <alibabacloud/cdn/model/ListFCTriggerRequest.h>

using AlibabaCloud::Cdn::Model::ListFCTriggerRequest;

ListFCTriggerRequest::ListFCTriggerRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "ListFCTrigger")
{}

ListFCTriggerRequest::~ListFCTriggerRequest()
{}

std::string ListFCTriggerRequest::getApp_ip()const
{
	return app_ip_;
}

void ListFCTriggerRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ListFCTriggerRequest::getPopProduct()const
{
	return popProduct_;
}

void ListFCTriggerRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string ListFCTriggerRequest::getProduct()const
{
	return product_;
}

void ListFCTriggerRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

long ListFCTriggerRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ListFCTriggerRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

std::string ListFCTriggerRequest::getEventMetaVersion()const
{
	return eventMetaVersion_;
}

void ListFCTriggerRequest::setEventMetaVersion(const std::string& eventMetaVersion)
{
	eventMetaVersion_ = eventMetaVersion;
	setCoreParameter("EventMetaVersion", eventMetaVersion);
}

bool ListFCTriggerRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ListFCTriggerRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ListFCTriggerRequest::getCallerBid()const
{
	return callerBid_;
}

void ListFCTriggerRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ListFCTriggerRequest::getOwnerId()const
{
	return ownerId_;
}

void ListFCTriggerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ListFCTriggerRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ListFCTriggerRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ListFCTriggerRequest::getVersion()const
{
	return version_;
}

void ListFCTriggerRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string ListFCTriggerRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ListFCTriggerRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ListFCTriggerRequest::getCallerType()const
{
	return callerType_;
}

void ListFCTriggerRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool ListFCTriggerRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ListFCTriggerRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ListFCTriggerRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ListFCTriggerRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string ListFCTriggerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListFCTriggerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool ListFCTriggerRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ListFCTriggerRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ListFCTriggerRequest::getSecurityToken()const
{
	return securityToken_;
}

void ListFCTriggerRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ListFCTriggerRequest::getRequestId()const
{
	return requestId_;
}

void ListFCTriggerRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ListFCTriggerRequest::getRequestContent()const
{
	return requestContent_;
}

void ListFCTriggerRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ListFCTriggerRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ListFCTriggerRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ListFCTriggerRequest::getEventMetaName()const
{
	return eventMetaName_;
}

void ListFCTriggerRequest::setEventMetaName(const std::string& eventMetaName)
{
	eventMetaName_ = eventMetaName;
	setCoreParameter("EventMetaName", eventMetaName);
}

std::string ListFCTriggerRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ListFCTriggerRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ListFCTriggerRequest::getCallerUid()const
{
	return callerUid_;
}

void ListFCTriggerRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

