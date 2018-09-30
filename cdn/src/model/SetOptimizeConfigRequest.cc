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

#include <alibabacloud/cdn/model/SetOptimizeConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetOptimizeConfigRequest;

SetOptimizeConfigRequest::SetOptimizeConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "SetOptimizeConfig")
{}

SetOptimizeConfigRequest::~SetOptimizeConfigRequest()
{}

long SetOptimizeConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetOptimizeConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool SetOptimizeConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetOptimizeConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string SetOptimizeConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetOptimizeConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetOptimizeConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetOptimizeConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetOptimizeConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetOptimizeConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string SetOptimizeConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetOptimizeConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetOptimizeConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetOptimizeConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetOptimizeConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetOptimizeConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string SetOptimizeConfigRequest::getFunctionName()const
{
	return functionName_;
}

void SetOptimizeConfigRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setParameter("FunctionName", functionName);
}

std::string SetOptimizeConfigRequest::getEnable()const
{
	return enable_;
}

void SetOptimizeConfigRequest::setEnable(const std::string& enable)
{
	enable_ = enable;
	setParameter("Enable", enable);
}

std::string SetOptimizeConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetOptimizeConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string SetOptimizeConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetOptimizeConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long SetOptimizeConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetOptimizeConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string SetOptimizeConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetOptimizeConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string SetOptimizeConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void SetOptimizeConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string SetOptimizeConfigRequest::getProduct()const
{
	return product_;
}

void SetOptimizeConfigRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string SetOptimizeConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetOptimizeConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string SetOptimizeConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetOptimizeConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long SetOptimizeConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetOptimizeConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetOptimizeConfigRequest::getVersion()const
{
	return version_;
}

void SetOptimizeConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool SetOptimizeConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetOptimizeConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool SetOptimizeConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetOptimizeConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool SetOptimizeConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetOptimizeConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string SetOptimizeConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetOptimizeConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

long SetOptimizeConfigRequest::getConfigId()const
{
	return configId_;
}

void SetOptimizeConfigRequest::setConfigId(long configId)
{
	configId_ = configId;
	setParameter("ConfigId", std::to_string(configId));
}

