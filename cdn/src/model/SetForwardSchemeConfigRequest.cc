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

#include <alibabacloud/cdn/model/SetForwardSchemeConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetForwardSchemeConfigRequest;

SetForwardSchemeConfigRequest::SetForwardSchemeConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "SetForwardSchemeConfig")
{}

SetForwardSchemeConfigRequest::~SetForwardSchemeConfigRequest()
{}

std::string SetForwardSchemeConfigRequest::getSchemeOriginPort()const
{
	return schemeOriginPort_;
}

void SetForwardSchemeConfigRequest::setSchemeOriginPort(const std::string& schemeOriginPort)
{
	schemeOriginPort_ = schemeOriginPort;
	setParameter("SchemeOriginPort", schemeOriginPort);
}

long SetForwardSchemeConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetForwardSchemeConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool SetForwardSchemeConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetForwardSchemeConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string SetForwardSchemeConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetForwardSchemeConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetForwardSchemeConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetForwardSchemeConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetForwardSchemeConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetForwardSchemeConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string SetForwardSchemeConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetForwardSchemeConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetForwardSchemeConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetForwardSchemeConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetForwardSchemeConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetForwardSchemeConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string SetForwardSchemeConfigRequest::getFunctionName()const
{
	return functionName_;
}

void SetForwardSchemeConfigRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setParameter("FunctionName", functionName);
}

std::string SetForwardSchemeConfigRequest::getEnable()const
{
	return enable_;
}

void SetForwardSchemeConfigRequest::setEnable(const std::string& enable)
{
	enable_ = enable;
	setParameter("Enable", enable);
}

std::string SetForwardSchemeConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetForwardSchemeConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string SetForwardSchemeConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetForwardSchemeConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long SetForwardSchemeConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetForwardSchemeConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string SetForwardSchemeConfigRequest::getSchemeOrigin()const
{
	return schemeOrigin_;
}

void SetForwardSchemeConfigRequest::setSchemeOrigin(const std::string& schemeOrigin)
{
	schemeOrigin_ = schemeOrigin;
	setParameter("SchemeOrigin", schemeOrigin);
}

std::string SetForwardSchemeConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetForwardSchemeConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string SetForwardSchemeConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void SetForwardSchemeConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string SetForwardSchemeConfigRequest::getProduct()const
{
	return product_;
}

void SetForwardSchemeConfigRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string SetForwardSchemeConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetForwardSchemeConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string SetForwardSchemeConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetForwardSchemeConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long SetForwardSchemeConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetForwardSchemeConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetForwardSchemeConfigRequest::getVersion()const
{
	return version_;
}

void SetForwardSchemeConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool SetForwardSchemeConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetForwardSchemeConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool SetForwardSchemeConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetForwardSchemeConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool SetForwardSchemeConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetForwardSchemeConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string SetForwardSchemeConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetForwardSchemeConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

long SetForwardSchemeConfigRequest::getConfigId()const
{
	return configId_;
}

void SetForwardSchemeConfigRequest::setConfigId(long configId)
{
	configId_ = configId;
	setParameter("ConfigId", std::to_string(configId));
}

