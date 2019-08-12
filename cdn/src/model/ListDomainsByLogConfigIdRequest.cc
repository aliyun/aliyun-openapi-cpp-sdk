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

#include <alibabacloud/cdn/model/ListDomainsByLogConfigIdRequest.h>

using AlibabaCloud::Cdn::Model::ListDomainsByLogConfigIdRequest;

ListDomainsByLogConfigIdRequest::ListDomainsByLogConfigIdRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "ListDomainsByLogConfigId")
{}

ListDomainsByLogConfigIdRequest::~ListDomainsByLogConfigIdRequest()
{}

std::string ListDomainsByLogConfigIdRequest::getApp_ip()const
{
	return app_ip_;
}

void ListDomainsByLogConfigIdRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string ListDomainsByLogConfigIdRequest::getPopProduct()const
{
	return popProduct_;
}

void ListDomainsByLogConfigIdRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string ListDomainsByLogConfigIdRequest::getProduct()const
{
	return product_;
}

void ListDomainsByLogConfigIdRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", std::to_string(product));
}

long ListDomainsByLogConfigIdRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ListDomainsByLogConfigIdRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool ListDomainsByLogConfigIdRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ListDomainsByLogConfigIdRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ListDomainsByLogConfigIdRequest::getCallerBid()const
{
	return callerBid_;
}

void ListDomainsByLogConfigIdRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long ListDomainsByLogConfigIdRequest::getOwnerId()const
{
	return ownerId_;
}

void ListDomainsByLogConfigIdRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ListDomainsByLogConfigIdRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ListDomainsByLogConfigIdRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string ListDomainsByLogConfigIdRequest::getVersion()const
{
	return version_;
}

void ListDomainsByLogConfigIdRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

std::string ListDomainsByLogConfigIdRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ListDomainsByLogConfigIdRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string ListDomainsByLogConfigIdRequest::getCallerType()const
{
	return callerType_;
}

void ListDomainsByLogConfigIdRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

bool ListDomainsByLogConfigIdRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ListDomainsByLogConfigIdRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ListDomainsByLogConfigIdRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ListDomainsByLogConfigIdRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string ListDomainsByLogConfigIdRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListDomainsByLogConfigIdRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

bool ListDomainsByLogConfigIdRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ListDomainsByLogConfigIdRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ListDomainsByLogConfigIdRequest::getSecurityToken()const
{
	return securityToken_;
}

void ListDomainsByLogConfigIdRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string ListDomainsByLogConfigIdRequest::getRequestId()const
{
	return requestId_;
}

void ListDomainsByLogConfigIdRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string ListDomainsByLogConfigIdRequest::getRequestContent()const
{
	return requestContent_;
}

void ListDomainsByLogConfigIdRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string ListDomainsByLogConfigIdRequest::getConfigId()const
{
	return configId_;
}

void ListDomainsByLogConfigIdRequest::setConfigId(const std::string& configId)
{
	configId_ = configId;
	setCoreParameter("ConfigId", std::to_string(configId));
}

std::string ListDomainsByLogConfigIdRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ListDomainsByLogConfigIdRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string ListDomainsByLogConfigIdRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ListDomainsByLogConfigIdRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long ListDomainsByLogConfigIdRequest::getCallerUid()const
{
	return callerUid_;
}

void ListDomainsByLogConfigIdRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

