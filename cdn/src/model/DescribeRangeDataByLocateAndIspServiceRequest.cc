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

#include <alibabacloud/cdn/model/DescribeRangeDataByLocateAndIspServiceRequest.h>

using AlibabaCloud::Cdn::Model::DescribeRangeDataByLocateAndIspServiceRequest;

DescribeRangeDataByLocateAndIspServiceRequest::DescribeRangeDataByLocateAndIspServiceRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeRangeDataByLocateAndIspService")
{}

DescribeRangeDataByLocateAndIspServiceRequest::~DescribeRangeDataByLocateAndIspServiceRequest()
{}

long DescribeRangeDataByLocateAndIspServiceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeRangeDataByLocateAndIspServiceRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getDomainNames()const
{
	return domainNames_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setDomainNames(const std::string& domainNames)
{
	domainNames_ = domainNames;
	setCoreParameter("DomainNames", domainNames);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getLocationNames()const
{
	return locationNames_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setLocationNames(const std::string& locationNames)
{
	locationNames_ = locationNames;
	setCoreParameter("LocationNames", locationNames);
}

bool DescribeRangeDataByLocateAndIspServiceRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getStartTime()const
{
	return startTime_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getCallerType()const
{
	return callerType_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeRangeDataByLocateAndIspServiceRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getIspNames()const
{
	return ispNames_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setIspNames(const std::string& ispNames)
{
	ispNames_ = ispNames;
	setCoreParameter("IspNames", ispNames);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getProduct()const
{
	return product_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getEndTime()const
{
	return endTime_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getWithBug()const
{
	return withBug_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setWithBug(const std::string& withBug)
{
	withBug_ = withBug;
	setCoreParameter("WithBug", withBug);
}

long DescribeRangeDataByLocateAndIspServiceRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getVersion()const
{
	return version_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DescribeRangeDataByLocateAndIspServiceRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeRangeDataByLocateAndIspServiceRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeRangeDataByLocateAndIspServiceRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeRangeDataByLocateAndIspServiceRequest::getRequestId()const
{
	return requestId_;
}

void DescribeRangeDataByLocateAndIspServiceRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

