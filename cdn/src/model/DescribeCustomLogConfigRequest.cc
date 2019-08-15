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

#include <alibabacloud/cdn/model/DescribeCustomLogConfigRequest.h>

using AlibabaCloud::Cdn::Model::DescribeCustomLogConfigRequest;

DescribeCustomLogConfigRequest::DescribeCustomLogConfigRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeCustomLogConfig")
{}

DescribeCustomLogConfigRequest::~DescribeCustomLogConfigRequest()
{}

std::string DescribeCustomLogConfigRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeCustomLogConfigRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeCustomLogConfigRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeCustomLogConfigRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeCustomLogConfigRequest::getProduct()const
{
	return product_;
}

void DescribeCustomLogConfigRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

long DescribeCustomLogConfigRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeCustomLogConfigRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeCustomLogConfigRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeCustomLogConfigRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeCustomLogConfigRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeCustomLogConfigRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeCustomLogConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCustomLogConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeCustomLogConfigRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeCustomLogConfigRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeCustomLogConfigRequest::getVersion()const
{
	return version_;
}

void DescribeCustomLogConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string DescribeCustomLogConfigRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeCustomLogConfigRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeCustomLogConfigRequest::getCallerType()const
{
	return callerType_;
}

void DescribeCustomLogConfigRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool DescribeCustomLogConfigRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeCustomLogConfigRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeCustomLogConfigRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeCustomLogConfigRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string DescribeCustomLogConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCustomLogConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool DescribeCustomLogConfigRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeCustomLogConfigRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeCustomLogConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeCustomLogConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeCustomLogConfigRequest::getRequestId()const
{
	return requestId_;
}

void DescribeCustomLogConfigRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeCustomLogConfigRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeCustomLogConfigRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeCustomLogConfigRequest::getConfigId()const
{
	return configId_;
}

void DescribeCustomLogConfigRequest::setConfigId(const std::string& configId)
{
	configId_ = configId;
	setCoreParameter("ConfigId", configId);
}

std::string DescribeCustomLogConfigRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeCustomLogConfigRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeCustomLogConfigRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeCustomLogConfigRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeCustomLogConfigRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeCustomLogConfigRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

