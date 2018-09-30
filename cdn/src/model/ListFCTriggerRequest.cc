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
	setParameter("App_ip", app_ip);
}

std::string ListFCTriggerRequest::getPopProduct()const
{
	return popProduct_;
}

void ListFCTriggerRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string ListFCTriggerRequest::getProduct()const
{
	return product_;
}

void ListFCTriggerRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

long ListFCTriggerRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ListFCTriggerRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string ListFCTriggerRequest::getEventMetaVersion()const
{
	return eventMetaVersion_;
}

void ListFCTriggerRequest::setEventMetaVersion(const std::string& eventMetaVersion)
{
	eventMetaVersion_ = eventMetaVersion;
	setParameter("EventMetaVersion", eventMetaVersion);
}

bool ListFCTriggerRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ListFCTriggerRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string ListFCTriggerRequest::getCallerBid()const
{
	return callerBid_;
}

void ListFCTriggerRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long ListFCTriggerRequest::getOwnerId()const
{
	return ownerId_;
}

void ListFCTriggerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ListFCTriggerRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ListFCTriggerRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ListFCTriggerRequest::getVersion()const
{
	return version_;
}

void ListFCTriggerRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string ListFCTriggerRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ListFCTriggerRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ListFCTriggerRequest::getCallerType()const
{
	return callerType_;
}

void ListFCTriggerRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool ListFCTriggerRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ListFCTriggerRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool ListFCTriggerRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ListFCTriggerRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string ListFCTriggerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListFCTriggerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool ListFCTriggerRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ListFCTriggerRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string ListFCTriggerRequest::getSecurityToken()const
{
	return securityToken_;
}

void ListFCTriggerRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ListFCTriggerRequest::getRequestId()const
{
	return requestId_;
}

void ListFCTriggerRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string ListFCTriggerRequest::getRequestContent()const
{
	return requestContent_;
}

void ListFCTriggerRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string ListFCTriggerRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ListFCTriggerRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string ListFCTriggerRequest::getEventMetaName()const
{
	return eventMetaName_;
}

void ListFCTriggerRequest::setEventMetaName(const std::string& eventMetaName)
{
	eventMetaName_ = eventMetaName;
	setParameter("EventMetaName", eventMetaName);
}

std::string ListFCTriggerRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ListFCTriggerRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long ListFCTriggerRequest::getCallerUid()const
{
	return callerUid_;
}

void ListFCTriggerRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

