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

#include <alibabacloud/cdn/model/SetL2OssKeyConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetL2OssKeyConfigRequest;

SetL2OssKeyConfigRequest::SetL2OssKeyConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "SetL2OssKeyConfig")
{}

SetL2OssKeyConfigRequest::~SetL2OssKeyConfigRequest()
{}

long SetL2OssKeyConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetL2OssKeyConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool SetL2OssKeyConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetL2OssKeyConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string SetL2OssKeyConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetL2OssKeyConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetL2OssKeyConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetL2OssKeyConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetL2OssKeyConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetL2OssKeyConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string SetL2OssKeyConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetL2OssKeyConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetL2OssKeyConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetL2OssKeyConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetL2OssKeyConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetL2OssKeyConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string SetL2OssKeyConfigRequest::getFunctionName()const
{
	return functionName_;
}

void SetL2OssKeyConfigRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setParameter("FunctionName", functionName);
}

std::string SetL2OssKeyConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetL2OssKeyConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string SetL2OssKeyConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetL2OssKeyConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long SetL2OssKeyConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetL2OssKeyConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string SetL2OssKeyConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetL2OssKeyConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string SetL2OssKeyConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void SetL2OssKeyConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string SetL2OssKeyConfigRequest::getProduct()const
{
	return product_;
}

void SetL2OssKeyConfigRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string SetL2OssKeyConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetL2OssKeyConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string SetL2OssKeyConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetL2OssKeyConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long SetL2OssKeyConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetL2OssKeyConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetL2OssKeyConfigRequest::getVersion()const
{
	return version_;
}

void SetL2OssKeyConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool SetL2OssKeyConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetL2OssKeyConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool SetL2OssKeyConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetL2OssKeyConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool SetL2OssKeyConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetL2OssKeyConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string SetL2OssKeyConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetL2OssKeyConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

long SetL2OssKeyConfigRequest::getConfigId()const
{
	return configId_;
}

void SetL2OssKeyConfigRequest::setConfigId(long configId)
{
	configId_ = configId;
	setParameter("ConfigId", std::to_string(configId));
}

std::string SetL2OssKeyConfigRequest::getPrivateOssAuth()const
{
	return privateOssAuth_;
}

void SetL2OssKeyConfigRequest::setPrivateOssAuth(const std::string& privateOssAuth)
{
	privateOssAuth_ = privateOssAuth;
	setParameter("PrivateOssAuth", privateOssAuth);
}

