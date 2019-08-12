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

#include <alibabacloud/cdn/model/DescribeTopDomainsByFlowRequest.h>

using AlibabaCloud::Cdn::Model::DescribeTopDomainsByFlowRequest;

DescribeTopDomainsByFlowRequest::DescribeTopDomainsByFlowRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeTopDomainsByFlow")
{}

DescribeTopDomainsByFlowRequest::~DescribeTopDomainsByFlowRequest()
{}

long DescribeTopDomainsByFlowRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeTopDomainsByFlowRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeTopDomainsByFlowRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeTopDomainsByFlowRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeTopDomainsByFlowRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeTopDomainsByFlowRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeTopDomainsByFlowRequest::getStartTime()const
{
	return startTime_;
}

void DescribeTopDomainsByFlowRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeTopDomainsByFlowRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeTopDomainsByFlowRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeTopDomainsByFlowRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeTopDomainsByFlowRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeTopDomainsByFlowRequest::getCallerType()const
{
	return callerType_;
}

void DescribeTopDomainsByFlowRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeTopDomainsByFlowRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeTopDomainsByFlowRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeTopDomainsByFlowRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeTopDomainsByFlowRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeTopDomainsByFlowRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeTopDomainsByFlowRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

long DescribeTopDomainsByFlowRequest::getLimit()const
{
	return limit_;
}

void DescribeTopDomainsByFlowRequest::setLimit(long limit)
{
	limit_ = limit;
	setCoreParameter("Limit", std::to_string(limit));
}

std::string DescribeTopDomainsByFlowRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeTopDomainsByFlowRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeTopDomainsByFlowRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeTopDomainsByFlowRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeTopDomainsByFlowRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeTopDomainsByFlowRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeTopDomainsByFlowRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeTopDomainsByFlowRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeTopDomainsByFlowRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeTopDomainsByFlowRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeTopDomainsByFlowRequest::getProduct()const
{
	return product_;
}

void DescribeTopDomainsByFlowRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

std::string DescribeTopDomainsByFlowRequest::getEndTime()const
{
	return endTime_;
}

void DescribeTopDomainsByFlowRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeTopDomainsByFlowRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeTopDomainsByFlowRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeTopDomainsByFlowRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeTopDomainsByFlowRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeTopDomainsByFlowRequest::getVersion()const
{
	return version_;
}

void DescribeTopDomainsByFlowRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeTopDomainsByFlowRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeTopDomainsByFlowRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeTopDomainsByFlowRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeTopDomainsByFlowRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeTopDomainsByFlowRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeTopDomainsByFlowRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeTopDomainsByFlowRequest::getRequestId()const
{
	return requestId_;
}

void DescribeTopDomainsByFlowRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

