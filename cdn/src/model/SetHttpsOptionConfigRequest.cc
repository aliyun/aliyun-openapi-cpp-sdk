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

#include <alibabacloud/cdn/model/SetHttpsOptionConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetHttpsOptionConfigRequest;

SetHttpsOptionConfigRequest::SetHttpsOptionConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "SetHttpsOptionConfig")
{}

SetHttpsOptionConfigRequest::~SetHttpsOptionConfigRequest()
{}

long SetHttpsOptionConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetHttpsOptionConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool SetHttpsOptionConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetHttpsOptionConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string SetHttpsOptionConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetHttpsOptionConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetHttpsOptionConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetHttpsOptionConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetHttpsOptionConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetHttpsOptionConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string SetHttpsOptionConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetHttpsOptionConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetHttpsOptionConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetHttpsOptionConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetHttpsOptionConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetHttpsOptionConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string SetHttpsOptionConfigRequest::getFunctionName()const
{
	return functionName_;
}

void SetHttpsOptionConfigRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setParameter("FunctionName", functionName);
}

std::string SetHttpsOptionConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetHttpsOptionConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string SetHttpsOptionConfigRequest::getHttp2()const
{
	return http2_;
}

void SetHttpsOptionConfigRequest::setHttp2(const std::string& http2)
{
	http2_ = http2;
	setParameter("Http2", http2);
}

std::string SetHttpsOptionConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetHttpsOptionConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long SetHttpsOptionConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetHttpsOptionConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string SetHttpsOptionConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetHttpsOptionConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string SetHttpsOptionConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void SetHttpsOptionConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string SetHttpsOptionConfigRequest::getProduct()const
{
	return product_;
}

void SetHttpsOptionConfigRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string SetHttpsOptionConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetHttpsOptionConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string SetHttpsOptionConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetHttpsOptionConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long SetHttpsOptionConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetHttpsOptionConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetHttpsOptionConfigRequest::getVersion()const
{
	return version_;
}

void SetHttpsOptionConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool SetHttpsOptionConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetHttpsOptionConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool SetHttpsOptionConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetHttpsOptionConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool SetHttpsOptionConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetHttpsOptionConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string SetHttpsOptionConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetHttpsOptionConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

long SetHttpsOptionConfigRequest::getConfigId()const
{
	return configId_;
}

void SetHttpsOptionConfigRequest::setConfigId(long configId)
{
	configId_ = configId;
	setParameter("ConfigId", std::to_string(configId));
}

