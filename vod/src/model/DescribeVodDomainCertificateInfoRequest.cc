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

#include <alibabacloud/vod/model/DescribeVodDomainCertificateInfoRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodDomainCertificateInfoRequest;

DescribeVodDomainCertificateInfoRequest::DescribeVodDomainCertificateInfoRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DescribeVodDomainCertificateInfo")
{}

DescribeVodDomainCertificateInfoRequest::~DescribeVodDomainCertificateInfoRequest()
{}

long DescribeVodDomainCertificateInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVodDomainCertificateInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long DescribeVodDomainCertificateInfoRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeVodDomainCertificateInfoRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool DescribeVodDomainCertificateInfoRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeVodDomainCertificateInfoRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeVodDomainCertificateInfoRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeVodDomainCertificateInfoRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string DescribeVodDomainCertificateInfoRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeVodDomainCertificateInfoRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string DescribeVodDomainCertificateInfoRequest::getCallerType()const
{
	return callerType_;
}

void DescribeVodDomainCertificateInfoRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string DescribeVodDomainCertificateInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeVodDomainCertificateInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeVodDomainCertificateInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeVodDomainCertificateInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeVodDomainCertificateInfoRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVodDomainCertificateInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeVodDomainCertificateInfoRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeVodDomainCertificateInfoRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string DescribeVodDomainCertificateInfoRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeVodDomainCertificateInfoRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string DescribeVodDomainCertificateInfoRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeVodDomainCertificateInfoRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long DescribeVodDomainCertificateInfoRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeVodDomainCertificateInfoRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string DescribeVodDomainCertificateInfoRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeVodDomainCertificateInfoRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string DescribeVodDomainCertificateInfoRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeVodDomainCertificateInfoRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string DescribeVodDomainCertificateInfoRequest::getDomainName()const
{
	return domainName_;
}

void DescribeVodDomainCertificateInfoRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string DescribeVodDomainCertificateInfoRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeVodDomainCertificateInfoRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long DescribeVodDomainCertificateInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVodDomainCertificateInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeVodDomainCertificateInfoRequest::getVersion()const
{
	return version_;
}

void DescribeVodDomainCertificateInfoRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool DescribeVodDomainCertificateInfoRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeVodDomainCertificateInfoRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeVodDomainCertificateInfoRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeVodDomainCertificateInfoRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DescribeVodDomainCertificateInfoRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeVodDomainCertificateInfoRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeVodDomainCertificateInfoRequest::getServiceCode()const
{
	return serviceCode_;
}

void DescribeVodDomainCertificateInfoRequest::setServiceCode(const std::string& serviceCode)
{
	serviceCode_ = serviceCode;
	setCoreParameter("ServiceCode", std::to_string(serviceCode));
}

std::string DescribeVodDomainCertificateInfoRequest::getRequestId()const
{
	return requestId_;
}

void DescribeVodDomainCertificateInfoRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

