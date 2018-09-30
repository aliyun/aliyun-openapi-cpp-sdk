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

#include <alibabacloud/cdn/model/SetPathCacheExpiredConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetPathCacheExpiredConfigRequest;

SetPathCacheExpiredConfigRequest::SetPathCacheExpiredConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "SetPathCacheExpiredConfig")
{}

SetPathCacheExpiredConfigRequest::~SetPathCacheExpiredConfigRequest()
{}

long SetPathCacheExpiredConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetPathCacheExpiredConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool SetPathCacheExpiredConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetPathCacheExpiredConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string SetPathCacheExpiredConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetPathCacheExpiredConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetPathCacheExpiredConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetPathCacheExpiredConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetPathCacheExpiredConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetPathCacheExpiredConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string SetPathCacheExpiredConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetPathCacheExpiredConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetPathCacheExpiredConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetPathCacheExpiredConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetPathCacheExpiredConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetPathCacheExpiredConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string SetPathCacheExpiredConfigRequest::getFunctionName()const
{
	return functionName_;
}

void SetPathCacheExpiredConfigRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setParameter("FunctionName", functionName);
}

std::string SetPathCacheExpiredConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetPathCacheExpiredConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string SetPathCacheExpiredConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetPathCacheExpiredConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long SetPathCacheExpiredConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetPathCacheExpiredConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string SetPathCacheExpiredConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetPathCacheExpiredConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string SetPathCacheExpiredConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void SetPathCacheExpiredConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string SetPathCacheExpiredConfigRequest::getProduct()const
{
	return product_;
}

void SetPathCacheExpiredConfigRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string SetPathCacheExpiredConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetPathCacheExpiredConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string SetPathCacheExpiredConfigRequest::getWeight()const
{
	return weight_;
}

void SetPathCacheExpiredConfigRequest::setWeight(const std::string& weight)
{
	weight_ = weight;
	setParameter("Weight", weight);
}

std::string SetPathCacheExpiredConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetPathCacheExpiredConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

std::string SetPathCacheExpiredConfigRequest::getCacheContent()const
{
	return cacheContent_;
}

void SetPathCacheExpiredConfigRequest::setCacheContent(const std::string& cacheContent)
{
	cacheContent_ = cacheContent;
	setParameter("CacheContent", cacheContent);
}

long SetPathCacheExpiredConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetPathCacheExpiredConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetPathCacheExpiredConfigRequest::getVersion()const
{
	return version_;
}

void SetPathCacheExpiredConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string SetPathCacheExpiredConfigRequest::getTTL()const
{
	return tTL_;
}

void SetPathCacheExpiredConfigRequest::setTTL(const std::string& tTL)
{
	tTL_ = tTL;
	setParameter("TTL", tTL);
}

bool SetPathCacheExpiredConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetPathCacheExpiredConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool SetPathCacheExpiredConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetPathCacheExpiredConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool SetPathCacheExpiredConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetPathCacheExpiredConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string SetPathCacheExpiredConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetPathCacheExpiredConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

long SetPathCacheExpiredConfigRequest::getConfigId()const
{
	return configId_;
}

void SetPathCacheExpiredConfigRequest::setConfigId(long configId)
{
	configId_ = configId;
	setParameter("ConfigId", std::to_string(configId));
}

