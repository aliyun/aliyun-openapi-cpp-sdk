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

#include <alibabacloud/cdn/model/SetVideoSeekConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetVideoSeekConfigRequest;

SetVideoSeekConfigRequest::SetVideoSeekConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "SetVideoSeekConfig")
{}

SetVideoSeekConfigRequest::~SetVideoSeekConfigRequest()
{}

long SetVideoSeekConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetVideoSeekConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool SetVideoSeekConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetVideoSeekConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string SetVideoSeekConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetVideoSeekConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetVideoSeekConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetVideoSeekConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetVideoSeekConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetVideoSeekConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string SetVideoSeekConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetVideoSeekConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetVideoSeekConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetVideoSeekConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetVideoSeekConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetVideoSeekConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string SetVideoSeekConfigRequest::getFunctionName()const
{
	return functionName_;
}

void SetVideoSeekConfigRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setParameter("FunctionName", functionName);
}

std::string SetVideoSeekConfigRequest::getEnable()const
{
	return enable_;
}

void SetVideoSeekConfigRequest::setEnable(const std::string& enable)
{
	enable_ = enable;
	setParameter("Enable", enable);
}

std::string SetVideoSeekConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetVideoSeekConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string SetVideoSeekConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetVideoSeekConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long SetVideoSeekConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetVideoSeekConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string SetVideoSeekConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetVideoSeekConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string SetVideoSeekConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void SetVideoSeekConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string SetVideoSeekConfigRequest::getProduct()const
{
	return product_;
}

void SetVideoSeekConfigRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string SetVideoSeekConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetVideoSeekConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string SetVideoSeekConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetVideoSeekConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long SetVideoSeekConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetVideoSeekConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetVideoSeekConfigRequest::getVersion()const
{
	return version_;
}

void SetVideoSeekConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool SetVideoSeekConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetVideoSeekConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool SetVideoSeekConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetVideoSeekConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool SetVideoSeekConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetVideoSeekConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string SetVideoSeekConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetVideoSeekConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

long SetVideoSeekConfigRequest::getConfigId()const
{
	return configId_;
}

void SetVideoSeekConfigRequest::setConfigId(long configId)
{
	configId_ = configId;
	setParameter("ConfigId", std::to_string(configId));
}

