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

#include <alibabacloud/vod/model/DescribeVodDomainUsageDataRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodDomainUsageDataRequest;

DescribeVodDomainUsageDataRequest::DescribeVodDomainUsageDataRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DescribeVodDomainUsageData")
{}

DescribeVodDomainUsageDataRequest::~DescribeVodDomainUsageDataRequest()
{}

long DescribeVodDomainUsageDataRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVodDomainUsageDataRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeVodDomainUsageDataRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeVodDomainUsageDataRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeVodDomainUsageDataRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeVodDomainUsageDataRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeVodDomainUsageDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVodDomainUsageDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

std::string DescribeVodDomainUsageDataRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeVodDomainUsageDataRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeVodDomainUsageDataRequest::getType()const
{
	return type_;
}

void DescribeVodDomainUsageDataRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", std::to_string(type));
}

std::string DescribeVodDomainUsageDataRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeVodDomainUsageDataRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeVodDomainUsageDataRequest::getCallerType()const
{
	return callerType_;
}

void DescribeVodDomainUsageDataRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DescribeVodDomainUsageDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeVodDomainUsageDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeVodDomainUsageDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeVodDomainUsageDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeVodDomainUsageDataRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVodDomainUsageDataRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeVodDomainUsageDataRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeVodDomainUsageDataRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DescribeVodDomainUsageDataRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeVodDomainUsageDataRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeVodDomainUsageDataRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeVodDomainUsageDataRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeVodDomainUsageDataRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeVodDomainUsageDataRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeVodDomainUsageDataRequest::getArea()const
{
	return area_;
}

void DescribeVodDomainUsageDataRequest::setArea(const std::string& area)
{
	area_ = area;
	setCoreParameter("Area", std::to_string(area));
}

std::string DescribeVodDomainUsageDataRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeVodDomainUsageDataRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeVodDomainUsageDataRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeVodDomainUsageDataRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DescribeVodDomainUsageDataRequest::getProduct()const
{
	return product_;
}

void DescribeVodDomainUsageDataRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", std::to_string(product));
}

std::string DescribeVodDomainUsageDataRequest::getDomainName()const
{
	return domainName_;
}

void DescribeVodDomainUsageDataRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string DescribeVodDomainUsageDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVodDomainUsageDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeVodDomainUsageDataRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeVodDomainUsageDataRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeVodDomainUsageDataRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVodDomainUsageDataRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeVodDomainUsageDataRequest::getVersion()const
{
	return version_;
}

void DescribeVodDomainUsageDataRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DescribeVodDomainUsageDataRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeVodDomainUsageDataRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeVodDomainUsageDataRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeVodDomainUsageDataRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeVodDomainUsageDataRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeVodDomainUsageDataRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeVodDomainUsageDataRequest::getServiceCode()const
{
	return serviceCode_;
}

void DescribeVodDomainUsageDataRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", std::to_string(serviceCode));
}

std::string DescribeVodDomainUsageDataRequest::getField()const
{
	return field_;
}

void DescribeVodDomainUsageDataRequest::setField(const std::string& field)
{
	field_ = field;
	setCoreParameter("Field", std::to_string(field));
}

std::string DescribeVodDomainUsageDataRequest::getRequestId()const
{
	return requestId_;
}

void DescribeVodDomainUsageDataRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

