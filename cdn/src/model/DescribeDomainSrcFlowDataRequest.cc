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

#include <alibabacloud/cdn/model/DescribeDomainSrcFlowDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainSrcFlowDataRequest;

DescribeDomainSrcFlowDataRequest::DescribeDomainSrcFlowDataRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainSrcFlowData")
{}

DescribeDomainSrcFlowDataRequest::~DescribeDomainSrcFlowDataRequest()
{}

long DescribeDomainSrcFlowDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainSrcFlowDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeDomainSrcFlowDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainSrcFlowDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribeDomainSrcFlowDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainSrcFlowDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDomainSrcFlowDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainSrcFlowDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainSrcFlowDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainSrcFlowDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainSrcFlowDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainSrcFlowDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeDomainSrcFlowDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainSrcFlowDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainSrcFlowDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainSrcFlowDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDomainSrcFlowDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainSrcFlowDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeDomainSrcFlowDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainSrcFlowDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainSrcFlowDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainSrcFlowDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainSrcFlowDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainSrcFlowDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeDomainSrcFlowDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainSrcFlowDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeDomainSrcFlowDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDomainSrcFlowDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeDomainSrcFlowDataRequest::getProduct()const
{
	return product_;
}

void DescribeDomainSrcFlowDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

std::string DescribeDomainSrcFlowDataRequest::getFixTimeGap()const
{
	return fixTimeGap_;
}

void DescribeDomainSrcFlowDataRequest::setFixTimeGap(const std::string& fixTimeGap)
{
	fixTimeGap_ = fixTimeGap;
	setCoreParameter("FixTimeGap", fixTimeGap);
}

std::string DescribeDomainSrcFlowDataRequest::getTimeMerge()const
{
	return timeMerge_;
}

void DescribeDomainSrcFlowDataRequest::setTimeMerge(const std::string& timeMerge)
{
	timeMerge_ = timeMerge;
	setCoreParameter("TimeMerge", timeMerge);
}

std::string DescribeDomainSrcFlowDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainSrcFlowDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDomainSrcFlowDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainSrcFlowDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeDomainSrcFlowDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainSrcFlowDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeDomainSrcFlowDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainSrcFlowDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeDomainSrcFlowDataRequest::getVersion()const
{
	return version_;
}

void DescribeDomainSrcFlowDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeDomainSrcFlowDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainSrcFlowDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DescribeDomainSrcFlowDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainSrcFlowDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribeDomainSrcFlowDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainSrcFlowDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribeDomainSrcFlowDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainSrcFlowDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeDomainSrcFlowDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainSrcFlowDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

std::string DescribeDomainSrcFlowDataRequest::getFields()const
{
	return fields_;
}

void DescribeDomainSrcFlowDataRequest::setFields(const std::string& fields)
{
	fields_ = fields;
	setCoreParameter("Fields", fields);
}

