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

#include <alibabacloud/cdn/model/ModifyUserCustomLogConfigRequest.h>

using AlibabaCloud::Cdn::Model::ModifyUserCustomLogConfigRequest;

ModifyUserCustomLogConfigRequest::ModifyUserCustomLogConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "ModifyUserCustomLogConfig")
{}

ModifyUserCustomLogConfigRequest::~ModifyUserCustomLogConfigRequest()
{}

std::string ModifyUserCustomLogConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyUserCustomLogConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string ModifyUserCustomLogConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void ModifyUserCustomLogConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string ModifyUserCustomLogConfigRequest::getProduct()const
{
	return product_;
}

void ModifyUserCustomLogConfigRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

long ModifyUserCustomLogConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyUserCustomLogConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool ModifyUserCustomLogConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyUserCustomLogConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ModifyUserCustomLogConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyUserCustomLogConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long ModifyUserCustomLogConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyUserCustomLogConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyUserCustomLogConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyUserCustomLogConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyUserCustomLogConfigRequest::getVersion()const
{
	return version_;
}

void ModifyUserCustomLogConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string ModifyUserCustomLogConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyUserCustomLogConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyUserCustomLogConfigRequest::getCallerType()const
{
	return callerType_;
}

void ModifyUserCustomLogConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool ModifyUserCustomLogConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyUserCustomLogConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ModifyUserCustomLogConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyUserCustomLogConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string ModifyUserCustomLogConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyUserCustomLogConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool ModifyUserCustomLogConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyUserCustomLogConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ModifyUserCustomLogConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyUserCustomLogConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyUserCustomLogConfigRequest::getRequestId()const
{
	return requestId_;
}

void ModifyUserCustomLogConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string ModifyUserCustomLogConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyUserCustomLogConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string ModifyUserCustomLogConfigRequest::getConfigId()const
{
	return configId_;
}

void ModifyUserCustomLogConfigRequest::setConfigId(const std::string& configId)
{
	configId_ = configId;
	setCoreParameter("ConfigId", configId);
}

std::string ModifyUserCustomLogConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyUserCustomLogConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyUserCustomLogConfigRequest::getTag()const
{
	return tag_;
}

void ModifyUserCustomLogConfigRequest::setTag(const std::string& tag)
{
	tag_ = tag;
	setCoreParameter("Tag", tag);
}

std::string ModifyUserCustomLogConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyUserCustomLogConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long ModifyUserCustomLogConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyUserCustomLogConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

