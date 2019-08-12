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

#include <alibabacloud/cdn/model/SetDomainGreenManagerConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetDomainGreenManagerConfigRequest;

SetDomainGreenManagerConfigRequest::SetDomainGreenManagerConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "SetDomainGreenManagerConfig")
{}

SetDomainGreenManagerConfigRequest::~SetDomainGreenManagerConfigRequest()
{}

std::string SetDomainGreenManagerConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetDomainGreenManagerConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string SetDomainGreenManagerConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void SetDomainGreenManagerConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

long SetDomainGreenManagerConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetDomainGreenManagerConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

std::string SetDomainGreenManagerConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetDomainGreenManagerConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

bool SetDomainGreenManagerConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetDomainGreenManagerConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string SetDomainGreenManagerConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetDomainGreenManagerConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long SetDomainGreenManagerConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetDomainGreenManagerConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SetDomainGreenManagerConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetDomainGreenManagerConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetDomainGreenManagerConfigRequest::getVersion()const
{
	return version_;
}

void SetDomainGreenManagerConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string SetDomainGreenManagerConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetDomainGreenManagerConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetDomainGreenManagerConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetDomainGreenManagerConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool SetDomainGreenManagerConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetDomainGreenManagerConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool SetDomainGreenManagerConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetDomainGreenManagerConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string SetDomainGreenManagerConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetDomainGreenManagerConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool SetDomainGreenManagerConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetDomainGreenManagerConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string SetDomainGreenManagerConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetDomainGreenManagerConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string SetDomainGreenManagerConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetDomainGreenManagerConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string SetDomainGreenManagerConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetDomainGreenManagerConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string SetDomainGreenManagerConfigRequest::getFunctionName()const
{
	return functionName_;
}

void SetDomainGreenManagerConfigRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setCoreParameter("FunctionName", functionName);
}

std::string SetDomainGreenManagerConfigRequest::getEnable()const
{
	return enable_;
}

void SetDomainGreenManagerConfigRequest::setEnable(const std::string& enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable);
}

std::string SetDomainGreenManagerConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetDomainGreenManagerConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string SetDomainGreenManagerConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetDomainGreenManagerConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long SetDomainGreenManagerConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetDomainGreenManagerConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

