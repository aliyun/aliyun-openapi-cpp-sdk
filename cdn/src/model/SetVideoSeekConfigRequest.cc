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

long SetVideoSeekConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetVideoSeekConfigRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long SetVideoSeekConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetVideoSeekConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool SetVideoSeekConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetVideoSeekConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string SetVideoSeekConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetVideoSeekConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetVideoSeekConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetVideoSeekConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetVideoSeekConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetVideoSeekConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string SetVideoSeekConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetVideoSeekConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SetVideoSeekConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetVideoSeekConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string SetVideoSeekConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetVideoSeekConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string SetVideoSeekConfigRequest::getFunctionName()const
{
	return functionName_;
}

void SetVideoSeekConfigRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setCoreParameter("FunctionName", functionName);
}

std::string SetVideoSeekConfigRequest::getEnable()const
{
	return enable_;
}

void SetVideoSeekConfigRequest::setEnable(const std::string& enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable);
}

std::string SetVideoSeekConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetVideoSeekConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string SetVideoSeekConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetVideoSeekConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long SetVideoSeekConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetVideoSeekConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string SetVideoSeekConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetVideoSeekConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string SetVideoSeekConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void SetVideoSeekConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string SetVideoSeekConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetVideoSeekConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string SetVideoSeekConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetVideoSeekConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long SetVideoSeekConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetVideoSeekConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SetVideoSeekConfigRequest::getVersion()const
{
	return version_;
}

void SetVideoSeekConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool SetVideoSeekConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetVideoSeekConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool SetVideoSeekConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetVideoSeekConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool SetVideoSeekConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetVideoSeekConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string SetVideoSeekConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetVideoSeekConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long SetVideoSeekConfigRequest::getConfigId()const
{
	return configId_;
}

void SetVideoSeekConfigRequest::setConfigId(long configId)
{
	configId_ = configId;
	setCoreParameter("ConfigId", std::to_string(configId));
}

