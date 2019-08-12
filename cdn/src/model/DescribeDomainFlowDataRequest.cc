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

#include <alibabacloud/cdn/model/DescribeDomainFlowDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainFlowDataRequest;

DescribeDomainFlowDataRequest::DescribeDomainFlowDataRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeDomainFlowData")
{}

DescribeDomainFlowDataRequest::~DescribeDomainFlowDataRequest()
{}

long DescribeDomainFlowDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDomainFlowDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeDomainFlowDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainFlowDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeDomainFlowDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainFlowDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string DescribeDomainFlowDataRequest::getLocationNameEn()const
{
	return locationNameEn_;
}

void DescribeDomainFlowDataRequest::setLocationNameEn(const std::string& locationNameEn)
{
	locationNameEn_ = locationNameEn;
	setCoreParameter("LocationNameEn", locationNameEn);
}

std::string DescribeDomainFlowDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainFlowDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDomainFlowDataRequest::getIspNameEn()const
{
	return ispNameEn_;
}

void DescribeDomainFlowDataRequest::setIspNameEn(const std::string& ispNameEn)
{
	ispNameEn_ = ispNameEn;
	setCoreParameter("IspNameEn", ispNameEn);
}

std::string DescribeDomainFlowDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainFlowDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainFlowDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainFlowDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainFlowDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainFlowDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeDomainFlowDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainFlowDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainFlowDataRequest::getDomainType()const
{
	return domainType_;
}

void DescribeDomainFlowDataRequest::setDomainType(const std::string& domainType)
{
	domainType_ = domainType;
	setCoreParameter("DomainType", domainType);
}

std::string DescribeDomainFlowDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainFlowDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDomainFlowDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainFlowDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeDomainFlowDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainFlowDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainFlowDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainFlowDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainFlowDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainFlowDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeDomainFlowDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainFlowDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeDomainFlowDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDomainFlowDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeDomainFlowDataRequest::getTimeMerge()const
{
	return timeMerge_;
}

void DescribeDomainFlowDataRequest::setTimeMerge(const std::string& timeMerge)
{
	timeMerge_ = timeMerge;
	setCoreParameter("TimeMerge", timeMerge);
}

std::string DescribeDomainFlowDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainFlowDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDomainFlowDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainFlowDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeDomainFlowDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainFlowDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeDomainFlowDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainFlowDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeDomainFlowDataRequest::getVersion()const
{
	return version_;
}

void DescribeDomainFlowDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeDomainFlowDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainFlowDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

bool DescribeDomainFlowDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainFlowDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool DescribeDomainFlowDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainFlowDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string DescribeDomainFlowDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainFlowDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeDomainFlowDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainFlowDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

