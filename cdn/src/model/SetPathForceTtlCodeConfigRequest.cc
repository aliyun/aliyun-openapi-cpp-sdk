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

#include <alibabacloud/cdn/model/SetPathForceTtlCodeConfigRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

SetPathForceTtlCodeConfigRequest::SetPathForceTtlCodeConfigRequest() :
	CdnRequest("SetPathForceTtlCodeConfig")
{}

SetPathForceTtlCodeConfigRequest::~SetPathForceTtlCodeConfigRequest()
{}

std::string SetPathForceTtlCodeConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetPathForceTtlCodeConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

long SetPathForceTtlCodeConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetPathForceTtlCodeConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string SetPathForceTtlCodeConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetPathForceTtlCodeConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

bool SetPathForceTtlCodeConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetPathForceTtlCodeConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string SetPathForceTtlCodeConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetPathForceTtlCodeConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long SetPathForceTtlCodeConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetPathForceTtlCodeConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetPathForceTtlCodeConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetPathForceTtlCodeConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetPathForceTtlCodeConfigRequest::getVersion()const
{
	return version_;
}

void SetPathForceTtlCodeConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string SetPathForceTtlCodeConfigRequest::getCodeString()const
{
	return codeString_;
}

void SetPathForceTtlCodeConfigRequest::setCodeString(const std::string& codeString)
{
	codeString_ = codeString;
	setParameter("CodeString", codeString);
}

std::string SetPathForceTtlCodeConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetPathForceTtlCodeConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetPathForceTtlCodeConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetPathForceTtlCodeConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool SetPathForceTtlCodeConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetPathForceTtlCodeConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool SetPathForceTtlCodeConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetPathForceTtlCodeConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string SetPathForceTtlCodeConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetPathForceTtlCodeConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool SetPathForceTtlCodeConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetPathForceTtlCodeConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string SetPathForceTtlCodeConfigRequest::getPath()const
{
	return path_;
}

void SetPathForceTtlCodeConfigRequest::setPath(const std::string& path)
{
	path_ = path;
	setParameter("Path", path);
}

std::string SetPathForceTtlCodeConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetPathForceTtlCodeConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetPathForceTtlCodeConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetPathForceTtlCodeConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string SetPathForceTtlCodeConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetPathForceTtlCodeConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string SetPathForceTtlCodeConfigRequest::getFunctionName()const
{
	return functionName_;
}

void SetPathForceTtlCodeConfigRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setParameter("FunctionName", functionName);
}

std::string SetPathForceTtlCodeConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetPathForceTtlCodeConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string SetPathForceTtlCodeConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetPathForceTtlCodeConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long SetPathForceTtlCodeConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetPathForceTtlCodeConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

