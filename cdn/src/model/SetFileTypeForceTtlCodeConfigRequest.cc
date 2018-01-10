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

#include <alibabacloud/cdn/model/SetFileTypeForceTtlCodeConfigRequest.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

SetFileTypeForceTtlCodeConfigRequest::SetFileTypeForceTtlCodeConfigRequest() :
	CdnRequest("SetFileTypeForceTtlCodeConfig")
{}

SetFileTypeForceTtlCodeConfigRequest::~SetFileTypeForceTtlCodeConfigRequest()
{}

std::string SetFileTypeForceTtlCodeConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetFileTypeForceTtlCodeConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string SetFileTypeForceTtlCodeConfigRequest::getFileType()const
{
	return fileType_;
}

void SetFileTypeForceTtlCodeConfigRequest::setFileType(const std::string& fileType)
{
	fileType_ = fileType;
	setParameter("FileType", fileType);
}

long SetFileTypeForceTtlCodeConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetFileTypeForceTtlCodeConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string SetFileTypeForceTtlCodeConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetFileTypeForceTtlCodeConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

bool SetFileTypeForceTtlCodeConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetFileTypeForceTtlCodeConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string SetFileTypeForceTtlCodeConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetFileTypeForceTtlCodeConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long SetFileTypeForceTtlCodeConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetFileTypeForceTtlCodeConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetFileTypeForceTtlCodeConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetFileTypeForceTtlCodeConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetFileTypeForceTtlCodeConfigRequest::getVersion()const
{
	return version_;
}

void SetFileTypeForceTtlCodeConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string SetFileTypeForceTtlCodeConfigRequest::getCodeString()const
{
	return codeString_;
}

void SetFileTypeForceTtlCodeConfigRequest::setCodeString(const std::string& codeString)
{
	codeString_ = codeString;
	setParameter("CodeString", codeString);
}

std::string SetFileTypeForceTtlCodeConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetFileTypeForceTtlCodeConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetFileTypeForceTtlCodeConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetFileTypeForceTtlCodeConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool SetFileTypeForceTtlCodeConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetFileTypeForceTtlCodeConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool SetFileTypeForceTtlCodeConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetFileTypeForceTtlCodeConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string SetFileTypeForceTtlCodeConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetFileTypeForceTtlCodeConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool SetFileTypeForceTtlCodeConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetFileTypeForceTtlCodeConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string SetFileTypeForceTtlCodeConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetFileTypeForceTtlCodeConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SetFileTypeForceTtlCodeConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetFileTypeForceTtlCodeConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string SetFileTypeForceTtlCodeConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetFileTypeForceTtlCodeConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string SetFileTypeForceTtlCodeConfigRequest::getFunctionName()const
{
	return functionName_;
}

void SetFileTypeForceTtlCodeConfigRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setParameter("FunctionName", functionName);
}

std::string SetFileTypeForceTtlCodeConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetFileTypeForceTtlCodeConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string SetFileTypeForceTtlCodeConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetFileTypeForceTtlCodeConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long SetFileTypeForceTtlCodeConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetFileTypeForceTtlCodeConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

