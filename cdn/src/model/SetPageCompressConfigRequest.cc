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

#include <alibabacloud/cdn/model/SetPageCompressConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetPageCompressConfigRequest;

SetPageCompressConfigRequest::SetPageCompressConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "SetPageCompressConfig")
{}

SetPageCompressConfigRequest::~SetPageCompressConfigRequest()
{}

long SetPageCompressConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetPageCompressConfigRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long SetPageCompressConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetPageCompressConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool SetPageCompressConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetPageCompressConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string SetPageCompressConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetPageCompressConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetPageCompressConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetPageCompressConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetPageCompressConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetPageCompressConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string SetPageCompressConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetPageCompressConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SetPageCompressConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetPageCompressConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string SetPageCompressConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetPageCompressConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string SetPageCompressConfigRequest::getFunctionName()const
{
	return functionName_;
}

void SetPageCompressConfigRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setCoreParameter("FunctionName", functionName);
}

std::string SetPageCompressConfigRequest::getEnable()const
{
	return enable_;
}

void SetPageCompressConfigRequest::setEnable(const std::string& enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable);
}

std::string SetPageCompressConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetPageCompressConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string SetPageCompressConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetPageCompressConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long SetPageCompressConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetPageCompressConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string SetPageCompressConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetPageCompressConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string SetPageCompressConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void SetPageCompressConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string SetPageCompressConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetPageCompressConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string SetPageCompressConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetPageCompressConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long SetPageCompressConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetPageCompressConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SetPageCompressConfigRequest::getVersion()const
{
	return version_;
}

void SetPageCompressConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool SetPageCompressConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetPageCompressConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool SetPageCompressConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetPageCompressConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool SetPageCompressConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetPageCompressConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string SetPageCompressConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetPageCompressConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long SetPageCompressConfigRequest::getConfigId()const
{
	return configId_;
}

void SetPageCompressConfigRequest::setConfigId(long configId)
{
	configId_ = configId;
	setCoreParameter("ConfigId", std::to_string(configId));
}

