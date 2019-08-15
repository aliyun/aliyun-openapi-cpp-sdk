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

long SetRemoveQueryStringConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetRemoveQueryStringConfigRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long SetRemoveQueryStringConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SetRemoveQueryStringConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool SetRemoveQueryStringConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SetRemoveQueryStringConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string SetRemoveQueryStringConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SetRemoveQueryStringConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SetRemoveQueryStringConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void SetRemoveQueryStringConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string SetRemoveQueryStringConfigRequest::getCallerType()const
{
	return callerType_;
}

void SetRemoveQueryStringConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string SetRemoveQueryStringConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetRemoveQueryStringConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SetRemoveQueryStringConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void SetRemoveQueryStringConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string SetRemoveQueryStringConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void SetRemoveQueryStringConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string SetRemoveQueryStringConfigRequest::getFunctionName()const
{
	return functionName_;
}

void SetRemoveQueryStringConfigRequest::setFunctionName(const std::string& functionName)
{
	functionName_ = functionName;
	setCoreParameter("FunctionName", functionName);
}

std::string SetRemoveQueryStringConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void SetRemoveQueryStringConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string SetRemoveQueryStringConfigRequest::getAliRemoveArgs()const
{
	return aliRemoveArgs_;
}

void SetRemoveQueryStringConfigRequest::setAliRemoveArgs(const std::string& aliRemoveArgs)
{
	aliRemoveArgs_ = aliRemoveArgs;
	setCoreParameter("AliRemoveArgs", aliRemoveArgs);
}

std::string SetRemoveQueryStringConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void SetRemoveQueryStringConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long SetRemoveQueryStringConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void SetRemoveQueryStringConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string SetRemoveQueryStringConfigRequest::getKeepOssArgs()const
{
	return keepOssArgs_;
}

void SetRemoveQueryStringConfigRequest::setKeepOssArgs(const std::string& keepOssArgs)
{
	keepOssArgs_ = keepOssArgs;
	setCoreParameter("KeepOssArgs", keepOssArgs);
}

std::string SetRemoveQueryStringConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void SetRemoveQueryStringConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string SetRemoveQueryStringConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void SetRemoveQueryStringConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string SetRemoveQueryStringConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetRemoveQueryStringConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string SetRemoveQueryStringConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void SetRemoveQueryStringConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long SetRemoveQueryStringConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetRemoveQueryStringConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string SetRemoveQueryStringConfigRequest::getVersion()const
{
	return version_;
}

void SetRemoveQueryStringConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool SetRemoveQueryStringConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SetRemoveQueryStringConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool SetRemoveQueryStringConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SetRemoveQueryStringConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool SetRemoveQueryStringConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SetRemoveQueryStringConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string SetRemoveQueryStringConfigRequest::getRequestId()const
{
	return requestId_;
}

void SetRemoveQueryStringConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long SetRemoveQueryStringConfigRequest::getConfigId()const
{
	return configId_;
}

void SetRemoveQueryStringConfigRequest::setConfigId(long configId)
{
	configId_ = configId;
	setCoreParameter("ConfigId", std::to_string(configId));
}

