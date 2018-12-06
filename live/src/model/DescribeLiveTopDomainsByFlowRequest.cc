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

#include <alibabacloud/live/model/DescribeLiveTopDomainsByFlowRequest.h>

using AlibabaCloud::Live::Model::DescribeLiveTopDomainsByFlowRequest;

DescribeLiveTopDomainsByFlowRequest::DescribeLiveTopDomainsByFlowRequest() :
	RpcServiceRequest("live", "2016-11-01", "DescribeLiveTopDomainsByFlow")
{}

DescribeLiveTopDomainsByFlowRequest::~DescribeLiveTopDomainsByFlowRequest()
{}

long DescribeLiveTopDomainsByFlowRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeLiveTopDomainsByFlowRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeLiveTopDomainsByFlowRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeLiveTopDomainsByFlowRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeLiveTopDomainsByFlowRequest::getStartTime()const
{
	return startTime_;
}

void DescribeLiveTopDomainsByFlowRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeLiveTopDomainsByFlowRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeLiveTopDomainsByFlowRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeLiveTopDomainsByFlowRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeLiveTopDomainsByFlowRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeLiveTopDomainsByFlowRequest::getCallerType()const
{
	return callerType_;
}

void DescribeLiveTopDomainsByFlowRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DescribeLiveTopDomainsByFlowRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeLiveTopDomainsByFlowRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeLiveTopDomainsByFlowRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeLiveTopDomainsByFlowRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeLiveTopDomainsByFlowRequest::getRegionId()const
{
	return regionId_;
}

void DescribeLiveTopDomainsByFlowRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeLiveTopDomainsByFlowRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeLiveTopDomainsByFlowRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

long DescribeLiveTopDomainsByFlowRequest::getLimit()const
{
	return limit_;
}

void DescribeLiveTopDomainsByFlowRequest::setLimit(long limit)
{
	limit_ = limit;
	setParameter("Limit", std::to_string(limit));
}

std::string DescribeLiveTopDomainsByFlowRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeLiveTopDomainsByFlowRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeLiveTopDomainsByFlowRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeLiveTopDomainsByFlowRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeLiveTopDomainsByFlowRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeLiveTopDomainsByFlowRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeLiveTopDomainsByFlowRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeLiveTopDomainsByFlowRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeLiveTopDomainsByFlowRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeLiveTopDomainsByFlowRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeLiveTopDomainsByFlowRequest::getProduct()const
{
	return product_;
}

void DescribeLiveTopDomainsByFlowRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string DescribeLiveTopDomainsByFlowRequest::getEndTime()const
{
	return endTime_;
}

void DescribeLiveTopDomainsByFlowRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeLiveTopDomainsByFlowRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeLiveTopDomainsByFlowRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeLiveTopDomainsByFlowRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeLiveTopDomainsByFlowRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeLiveTopDomainsByFlowRequest::getVersion()const
{
	return version_;
}

void DescribeLiveTopDomainsByFlowRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DescribeLiveTopDomainsByFlowRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeLiveTopDomainsByFlowRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeLiveTopDomainsByFlowRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeLiveTopDomainsByFlowRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool DescribeLiveTopDomainsByFlowRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeLiveTopDomainsByFlowRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeLiveTopDomainsByFlowRequest::getRequestId()const
{
	return requestId_;
}

void DescribeLiveTopDomainsByFlowRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

