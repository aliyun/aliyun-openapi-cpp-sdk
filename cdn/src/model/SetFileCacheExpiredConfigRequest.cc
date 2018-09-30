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

#include <alibabacloud/cdn/model/SetFileCacheExpiredConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetFileCacheExpiredConfigRequest;

SetFileCacheExpiredConfigRequest::SetFileCacheExpiredConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "SetFileCacheExpiredConfig")
{}

SetFileCacheExpiredConfigRequest::~SetFileCacheExpiredConfigRequest()
{}

long SetFileCacheExpiredConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetFileCacheExpiredConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool SetFileCacheExpiredConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetFileCacheExpiredConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string SetFileCacheExpiredConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetFileCacheExpiredConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetFileCacheExpiredConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetFileCacheExpiredConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetFileCacheExpiredConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetFileCacheExpiredConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string SetFileCacheExpiredConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetFileCacheExpiredConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetFileCacheExpiredConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetFileCacheExpiredConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetFileCacheExpiredConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetFileCacheExpiredConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string SetFileCacheExpiredConfigRequest::getFunctionName()const
{
	return functionName_;
}

void SetFileCacheExpiredConfigRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setParameter("FunctionName", functionName);
}

std::string SetFileCacheExpiredConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetFileCacheExpiredConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string SetFileCacheExpiredConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetFileCacheExpiredConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long SetFileCacheExpiredConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetFileCacheExpiredConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string SetFileCacheExpiredConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetFileCacheExpiredConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string SetFileCacheExpiredConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void SetFileCacheExpiredConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string SetFileCacheExpiredConfigRequest::getProduct()const
{
	return product_;
}

void SetFileCacheExpiredConfigRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string SetFileCacheExpiredConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetFileCacheExpiredConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string SetFileCacheExpiredConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetFileCacheExpiredConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

std::string SetFileCacheExpiredConfigRequest::getCacheContent()const
{
	return cacheContent_;
}

void SetFileCacheExpiredConfigRequest::setCacheContent(const std::string& cacheContent)
{
	cacheContent_ = cacheContent;
	setParameter("CacheContent", cacheContent);
}

long SetFileCacheExpiredConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetFileCacheExpiredConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetFileCacheExpiredConfigRequest::getVersion()const
{
	return version_;
}

void SetFileCacheExpiredConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string SetFileCacheExpiredConfigRequest::getTTL()const
{
	return tTL_;
}

void SetFileCacheExpiredConfigRequest::setTTL(const std::string& tTL)
{
	tTL_ = tTL;
	setParameter("TTL", tTL);
}

bool SetFileCacheExpiredConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetFileCacheExpiredConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool SetFileCacheExpiredConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetFileCacheExpiredConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool SetFileCacheExpiredConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetFileCacheExpiredConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string SetFileCacheExpiredConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetFileCacheExpiredConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

long SetFileCacheExpiredConfigRequest::getConfigId()const
{
	return configId_;
}

void SetFileCacheExpiredConfigRequest::setConfigId(long configId)
{
	configId_ = configId;
	setParameter("ConfigId", std::to_string(configId));
}

