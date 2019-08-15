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

#include <alibabacloud/cdn/model/SetRangeConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetRangeConfigRequest;

SetRangeConfigRequest::SetRangeConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "SetRangeConfig")
{}

SetRangeConfigRequest::~SetRangeConfigRequest()
{}

long SetRangeConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetRangeConfigRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long SetRangeConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetRangeConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool SetRangeConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetRangeConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string SetRangeConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetRangeConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetRangeConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetRangeConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetRangeConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetRangeConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string SetRangeConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetRangeConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SetRangeConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetRangeConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string SetRangeConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetRangeConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string SetRangeConfigRequest::getFunctionName()const
{
	return functionName_;
}

void SetRangeConfigRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setCoreParameter("FunctionName", functionName);
}

std::string SetRangeConfigRequest::getEnable()const
{
	return enable_;
}

void SetRangeConfigRequest::setEnable(const std::string& enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable);
}

std::string SetRangeConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetRangeConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string SetRangeConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetRangeConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long SetRangeConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetRangeConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string SetRangeConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetRangeConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string SetRangeConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void SetRangeConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string SetRangeConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetRangeConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string SetRangeConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetRangeConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long SetRangeConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetRangeConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SetRangeConfigRequest::getVersion()const
{
	return version_;
}

void SetRangeConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool SetRangeConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetRangeConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool SetRangeConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetRangeConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool SetRangeConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetRangeConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string SetRangeConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetRangeConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long SetRangeConfigRequest::getConfigId()const
{
	return configId_;
}

void SetRangeConfigRequest::setConfigId(long configId)
{
	configId_ = configId;
	setCoreParameter("ConfigId", std::to_string(configId));
}

