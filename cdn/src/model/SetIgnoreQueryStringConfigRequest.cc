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

#include <alibabacloud/cdn/model/SetIgnoreQueryStringConfigRequest.h>

using AlibabaCloud::Cdn::Model::SetIgnoreQueryStringConfigRequest;

SetIgnoreQueryStringConfigRequest::SetIgnoreQueryStringConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "SetIgnoreQueryStringConfig")
{}

SetIgnoreQueryStringConfigRequest::~SetIgnoreQueryStringConfigRequest()
{}

long SetIgnoreQueryStringConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetIgnoreQueryStringConfigRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long SetIgnoreQueryStringConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetIgnoreQueryStringConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool SetIgnoreQueryStringConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetIgnoreQueryStringConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string SetIgnoreQueryStringConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetIgnoreQueryStringConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetIgnoreQueryStringConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetIgnoreQueryStringConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetIgnoreQueryStringConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetIgnoreQueryStringConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string SetIgnoreQueryStringConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetIgnoreQueryStringConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SetIgnoreQueryStringConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetIgnoreQueryStringConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string SetIgnoreQueryStringConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetIgnoreQueryStringConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string SetIgnoreQueryStringConfigRequest::getFunctionName()const
{
	return functionName_;
}

void SetIgnoreQueryStringConfigRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setCoreParameter("FunctionName", functionName);
}

std::string SetIgnoreQueryStringConfigRequest::getEnable()const
{
	return enable_;
}

void SetIgnoreQueryStringConfigRequest::setEnable(const std::string& enable)
{
	enable_ = enable;
	setCoreParameter("Enable", enable);
}

std::string SetIgnoreQueryStringConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetIgnoreQueryStringConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string SetIgnoreQueryStringConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetIgnoreQueryStringConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long SetIgnoreQueryStringConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetIgnoreQueryStringConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string SetIgnoreQueryStringConfigRequest::getKeepOssArgs()const
{
	return keepOssArgs_;
}

void SetIgnoreQueryStringConfigRequest::setKeepOssArgs(const std::string& keepOssArgs)
{
	keepOssArgs_ = keepOssArgs;
	setCoreParameter("KeepOssArgs", keepOssArgs);
}

std::string SetIgnoreQueryStringConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetIgnoreQueryStringConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string SetIgnoreQueryStringConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void SetIgnoreQueryStringConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string SetIgnoreQueryStringConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetIgnoreQueryStringConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string SetIgnoreQueryStringConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetIgnoreQueryStringConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long SetIgnoreQueryStringConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetIgnoreQueryStringConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SetIgnoreQueryStringConfigRequest::getVersion()const
{
	return version_;
}

void SetIgnoreQueryStringConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool SetIgnoreQueryStringConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetIgnoreQueryStringConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool SetIgnoreQueryStringConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetIgnoreQueryStringConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool SetIgnoreQueryStringConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetIgnoreQueryStringConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string SetIgnoreQueryStringConfigRequest::getHashKeyArgs()const
{
	return hashKeyArgs_;
}

void SetIgnoreQueryStringConfigRequest::setHashKeyArgs(const std::string& hashKeyArgs)
{
	hashKeyArgs_ = hashKeyArgs;
	setCoreParameter("HashKeyArgs", hashKeyArgs);
}

std::string SetIgnoreQueryStringConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetIgnoreQueryStringConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long SetIgnoreQueryStringConfigRequest::getConfigId()const
{
	return configId_;
}

void SetIgnoreQueryStringConfigRequest::setConfigId(long configId)
{
	configId_ = configId;
	setCoreParameter("ConfigId", std::to_string(configId));
}

