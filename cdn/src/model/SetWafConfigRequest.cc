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

#include <alibabacloud/cdn/model/SetWafConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetWafConfigRequest;

SetWafConfigRequest::SetWafConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "SetWafConfig")
{}

SetWafConfigRequest::~SetWafConfigRequest()
{}

long SetWafConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetWafConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool SetWafConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetWafConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string SetWafConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetWafConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetWafConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetWafConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetWafConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetWafConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string SetWafConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetWafConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetWafConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetWafConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetWafConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetWafConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string SetWafConfigRequest::getFunctionName()const
{
	return functionName_;
}

void SetWafConfigRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setParameter("FunctionName", functionName);
}

std::string SetWafConfigRequest::getEnable()const
{
	return enable_;
}

void SetWafConfigRequest::setEnable(const std::string& enable)
{
	enable_ = enable;
	setParameter("Enable", enable);
}

std::string SetWafConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetWafConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string SetWafConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetWafConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long SetWafConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetWafConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string SetWafConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetWafConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string SetWafConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void SetWafConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string SetWafConfigRequest::getProduct()const
{
	return product_;
}

void SetWafConfigRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string SetWafConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetWafConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string SetWafConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetWafConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long SetWafConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetWafConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetWafConfigRequest::getVersion()const
{
	return version_;
}

void SetWafConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool SetWafConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetWafConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool SetWafConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetWafConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool SetWafConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetWafConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string SetWafConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetWafConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

long SetWafConfigRequest::getConfigId()const
{
	return configId_;
}

void SetWafConfigRequest::setConfigId(long configId)
{
	configId_ = configId;
	setParameter("ConfigId", std::to_string(configId));
}

