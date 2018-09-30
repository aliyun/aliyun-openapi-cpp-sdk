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

#include <alibabacloud/cdn/model/SetIpBlackListConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetIpBlackListConfigRequest;

SetIpBlackListConfigRequest::SetIpBlackListConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "SetIpBlackListConfig")
{}

SetIpBlackListConfigRequest::~SetIpBlackListConfigRequest()
{}

long SetIpBlackListConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetIpBlackListConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool SetIpBlackListConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetIpBlackListConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string SetIpBlackListConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetIpBlackListConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetIpBlackListConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetIpBlackListConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetIpBlackListConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetIpBlackListConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string SetIpBlackListConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetIpBlackListConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetIpBlackListConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetIpBlackListConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetIpBlackListConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetIpBlackListConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string SetIpBlackListConfigRequest::getFunctionName()const
{
	return functionName_;
}

void SetIpBlackListConfigRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setParameter("FunctionName", functionName);
}

std::string SetIpBlackListConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetIpBlackListConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string SetIpBlackListConfigRequest::getBlockIps()const
{
	return blockIps_;
}

void SetIpBlackListConfigRequest::setBlockIps(const std::string& blockIps)
{
	blockIps_ = blockIps;
	setParameter("BlockIps", blockIps);
}

std::string SetIpBlackListConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetIpBlackListConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long SetIpBlackListConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetIpBlackListConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string SetIpBlackListConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetIpBlackListConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string SetIpBlackListConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void SetIpBlackListConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string SetIpBlackListConfigRequest::getProduct()const
{
	return product_;
}

void SetIpBlackListConfigRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string SetIpBlackListConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetIpBlackListConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string SetIpBlackListConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetIpBlackListConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long SetIpBlackListConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetIpBlackListConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetIpBlackListConfigRequest::getVersion()const
{
	return version_;
}

void SetIpBlackListConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool SetIpBlackListConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetIpBlackListConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool SetIpBlackListConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetIpBlackListConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool SetIpBlackListConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetIpBlackListConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string SetIpBlackListConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetIpBlackListConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

long SetIpBlackListConfigRequest::getConfigId()const
{
	return configId_;
}

void SetIpBlackListConfigRequest::setConfigId(long configId)
{
	configId_ = configId;
	setParameter("ConfigId", std::to_string(configId));
}

