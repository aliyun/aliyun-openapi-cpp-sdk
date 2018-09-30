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

#include <alibabacloud/cdn/model/SetHttpErrorPageConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetHttpErrorPageConfigRequest;

SetHttpErrorPageConfigRequest::SetHttpErrorPageConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "SetHttpErrorPageConfig")
{}

SetHttpErrorPageConfigRequest::~SetHttpErrorPageConfigRequest()
{}

long SetHttpErrorPageConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetHttpErrorPageConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool SetHttpErrorPageConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetHttpErrorPageConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string SetHttpErrorPageConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetHttpErrorPageConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetHttpErrorPageConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetHttpErrorPageConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetHttpErrorPageConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetHttpErrorPageConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string SetHttpErrorPageConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetHttpErrorPageConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetHttpErrorPageConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetHttpErrorPageConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetHttpErrorPageConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetHttpErrorPageConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string SetHttpErrorPageConfigRequest::getFunctionName()const
{
	return functionName_;
}

void SetHttpErrorPageConfigRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setParameter("FunctionName", functionName);
}

std::string SetHttpErrorPageConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetHttpErrorPageConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string SetHttpErrorPageConfigRequest::getPageUrl()const
{
	return pageUrl_;
}

void SetHttpErrorPageConfigRequest::setPageUrl(const std::string& pageUrl)
{
	pageUrl_ = pageUrl;
	setParameter("PageUrl", pageUrl);
}

std::string SetHttpErrorPageConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetHttpErrorPageConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

std::string SetHttpErrorPageConfigRequest::getErrorCode()const
{
	return errorCode_;
}

void SetHttpErrorPageConfigRequest::setErrorCode(const std::string& errorCode)
{
	errorCode_ = errorCode;
	setParameter("ErrorCode", errorCode);
}

long SetHttpErrorPageConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetHttpErrorPageConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string SetHttpErrorPageConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetHttpErrorPageConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string SetHttpErrorPageConfigRequest::getProduct()const
{
	return product_;
}

void SetHttpErrorPageConfigRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string SetHttpErrorPageConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetHttpErrorPageConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string SetHttpErrorPageConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetHttpErrorPageConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long SetHttpErrorPageConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetHttpErrorPageConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetHttpErrorPageConfigRequest::getVersion()const
{
	return version_;
}

void SetHttpErrorPageConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool SetHttpErrorPageConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetHttpErrorPageConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool SetHttpErrorPageConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetHttpErrorPageConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool SetHttpErrorPageConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetHttpErrorPageConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string SetHttpErrorPageConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetHttpErrorPageConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

long SetHttpErrorPageConfigRequest::getConfigId()const
{
	return configId_;
}

void SetHttpErrorPageConfigRequest::setConfigId(long configId)
{
	configId_ = configId;
	setParameter("ConfigId", std::to_string(configId));
}

