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

#include <alibabacloud/cdn/model/DescribeUserTagsRequest.h>

using AlibabaCloud::Cdn::Model::DescribeUserTagsRequest;

DescribeUserTagsRequest::DescribeUserTagsRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeUserTags")
{}

DescribeUserTagsRequest::~DescribeUserTagsRequest()
{}

std::string DescribeUserTagsRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeUserTagsRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeUserTagsRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeUserTagsRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

long DescribeUserTagsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeUserTagsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeUserTagsRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeUserTagsRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeUserTagsRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeUserTagsRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeUserTagsRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeUserTagsRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeUserTagsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeUserTagsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeUserTagsRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeUserTagsRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeUserTagsRequest::getVersion()const
{
	return version_;
}

void DescribeUserTagsRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string DescribeUserTagsRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeUserTagsRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeUserTagsRequest::getCallerType()const
{
	return callerType_;
}

void DescribeUserTagsRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool DescribeUserTagsRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeUserTagsRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeUserTagsRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeUserTagsRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string DescribeUserTagsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeUserTagsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool DescribeUserTagsRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeUserTagsRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeUserTagsRequest::getServiceCode()const
{
	return serviceCode_;
}

void DescribeUserTagsRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", serviceCode);
}

std::string DescribeUserTagsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeUserTagsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeUserTagsRequest::getRequestId()const
{
	return requestId_;
}

void DescribeUserTagsRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeUserTagsRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeUserTagsRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeUserTagsRequest::getScope()const
{
	return scope_;
}

void DescribeUserTagsRequest::setScope(const std::string& scope)
{
	scope_ = scope;
	setCoreParameter("Scope", scope);
}

std::string DescribeUserTagsRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeUserTagsRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeUserTagsRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeUserTagsRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeUserTagsRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeUserTagsRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

