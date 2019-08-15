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

long SetWafConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetWafConfigRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long SetWafConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetWafConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool SetWafConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetWafConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string SetWafConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetWafConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetWafConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetWafConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetWafConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetWafConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string SetWafConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetWafConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SetWafConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetWafConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string SetWafConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetWafConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string SetWafConfigRequest::getFunctionName()const
{
	return functionName_;
}

void SetWafConfigRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setCoreParameter("FunctionName", functionName);
}

std::string SetWafConfigRequest::getEnable()const
{
	return enable_;
}

void SetWafConfigRequest::setEnable(const std::string& enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable);
}

std::string SetWafConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetWafConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string SetWafConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetWafConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long SetWafConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetWafConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string SetWafConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetWafConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string SetWafConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void SetWafConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string SetWafConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetWafConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string SetWafConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetWafConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long SetWafConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetWafConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SetWafConfigRequest::getVersion()const
{
	return version_;
}

void SetWafConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool SetWafConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetWafConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool SetWafConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetWafConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool SetWafConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetWafConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string SetWafConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetWafConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long SetWafConfigRequest::getConfigId()const
{
	return configId_;
}

void SetWafConfigRequest::setConfigId(long configId)
{
	configId_ = configId;
	setCoreParameter("ConfigId", std::to_string(configId));
}

