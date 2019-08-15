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

#include <alibabacloud/cdn/model/DescribeDomainUsageDataRequest.h>

using AlibabaCloud::Cdn::Model::DescribeDomainUsageDataRequest;

DescribeDomainUsageDataRequest::DescribeDomainUsageDataRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeDomainUsageData")
{}

DescribeDomainUsageDataRequest::~DescribeDomainUsageDataRequest()
{}

long DescribeDomainUsageDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDomainUsageDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeDomainUsageDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeDomainUsageDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeDomainUsageDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeDomainUsageDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeDomainUsageDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDomainUsageDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeDomainUsageDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeDomainUsageDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeDomainUsageDataRequest::getType()const
{
	return type_;
}

void DescribeDomainUsageDataRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

std::string DescribeDomainUsageDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeDomainUsageDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeDomainUsageDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeDomainUsageDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeDomainUsageDataRequest::getDataProtocol()const
{
	return dataProtocol_;
}

void DescribeDomainUsageDataRequest::setDataProtocol(const std::string& dataProtocol)
{
	dataProtocol_ = dataProtocol;
	setCoreParameter("DataProtocol", dataProtocol);
}

std::string DescribeDomainUsageDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeDomainUsageDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeDomainUsageDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDomainUsageDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeDomainUsageDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeDomainUsageDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeDomainUsageDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeDomainUsageDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeDomainUsageDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeDomainUsageDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeDomainUsageDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeDomainUsageDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeDomainUsageDataRequest::getArea()const
{
	return area_;
}

void DescribeDomainUsageDataRequest::setArea(const std::string& area)
{
	area_ = area;
	setCoreParameter("Area", area);
}

std::string DescribeDomainUsageDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeDomainUsageDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeDomainUsageDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeDomainUsageDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeDomainUsageDataRequest::getProduct()const
{
	return product_;
}

void DescribeDomainUsageDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

std::string DescribeDomainUsageDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDomainUsageDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDomainUsageDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDomainUsageDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeDomainUsageDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeDomainUsageDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeDomainUsageDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDomainUsageDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDomainUsageDataRequest::getVersion()const
{
	return version_;
}

void DescribeDomainUsageDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeDomainUsageDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeDomainUsageDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeDomainUsageDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeDomainUsageDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeDomainUsageDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeDomainUsageDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeDomainUsageDataRequest::getServiceCode()const
{
	return serviceCode_;
}

void DescribeDomainUsageDataRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", serviceCode);
}

std::string DescribeDomainUsageDataRequest::getField()const
{
	return field_;
}

void DescribeDomainUsageDataRequest::setField(const std::string& field)
{
	field_ = field;
	setCoreParameter("Field", field);
}

std::string DescribeDomainUsageDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeDomainUsageDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeDomainUsageDataRequest::getInterval()const
{
	return interval_;
}

void DescribeDomainUsageDataRequest::setInterval(const std::string& interval)
{
	interval_ = interval;
	setCoreParameter("Interval", interval);
}

