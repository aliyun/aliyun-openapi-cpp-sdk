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

#include <alibabacloud/cdn/model/SetRemoveQueryStringConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetRemoveQueryStringConfigRequest;

SetRemoveQueryStringConfigRequest::SetRemoveQueryStringConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "SetRemoveQueryStringConfig")
{}

SetRemoveQueryStringConfigRequest::~SetRemoveQueryStringConfigRequest()
{}

long SetRemoveQueryStringConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetRemoveQueryStringConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool SetRemoveQueryStringConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetRemoveQueryStringConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string SetRemoveQueryStringConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetRemoveQueryStringConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetRemoveQueryStringConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetRemoveQueryStringConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetRemoveQueryStringConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetRemoveQueryStringConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string SetRemoveQueryStringConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetRemoveQueryStringConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetRemoveQueryStringConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetRemoveQueryStringConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetRemoveQueryStringConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetRemoveQueryStringConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string SetRemoveQueryStringConfigRequest::getFunctionName()const
{
	return functionName_;
}

void SetRemoveQueryStringConfigRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setParameter("FunctionName", functionName);
}

std::string SetRemoveQueryStringConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetRemoveQueryStringConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string SetRemoveQueryStringConfigRequest::getAliRemoveArgs()const
{
	return aliRemoveArgs_;
}

void SetRemoveQueryStringConfigRequest::setAliRemoveArgs(const std::string& aliRemoveArgs)
{
	aliRemoveArgs_ = aliRemoveArgs;
	setParameter("AliRemoveArgs", aliRemoveArgs);
}

std::string SetRemoveQueryStringConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetRemoveQueryStringConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long SetRemoveQueryStringConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetRemoveQueryStringConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string SetRemoveQueryStringConfigRequest::getKeepOssArgs()const
{
	return keepOssArgs_;
}

void SetRemoveQueryStringConfigRequest::setKeepOssArgs(const std::string& keepOssArgs)
{
	keepOssArgs_ = keepOssArgs;
	setParameter("KeepOssArgs", keepOssArgs);
}

std::string SetRemoveQueryStringConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetRemoveQueryStringConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string SetRemoveQueryStringConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void SetRemoveQueryStringConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string SetRemoveQueryStringConfigRequest::getProduct()const
{
	return product_;
}

void SetRemoveQueryStringConfigRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string SetRemoveQueryStringConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetRemoveQueryStringConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string SetRemoveQueryStringConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetRemoveQueryStringConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long SetRemoveQueryStringConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetRemoveQueryStringConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetRemoveQueryStringConfigRequest::getVersion()const
{
	return version_;
}

void SetRemoveQueryStringConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool SetRemoveQueryStringConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetRemoveQueryStringConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool SetRemoveQueryStringConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetRemoveQueryStringConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool SetRemoveQueryStringConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetRemoveQueryStringConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string SetRemoveQueryStringConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetRemoveQueryStringConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

long SetRemoveQueryStringConfigRequest::getConfigId()const
{
	return configId_;
}

void SetRemoveQueryStringConfigRequest::setConfigId(long configId)
{
	configId_ = configId;
	setParameter("ConfigId", std::to_string(configId));
}

