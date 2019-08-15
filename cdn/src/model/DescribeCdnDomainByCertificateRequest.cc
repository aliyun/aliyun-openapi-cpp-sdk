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

#include <alibabacloud/cdn/model/DescribeCdnDomainByCertificateRequest.h>

using AlibabaCloud::Cdn::Model::DescribeCdnDomainByCertificateRequest;

DescribeCdnDomainByCertificateRequest::DescribeCdnDomainByCertificateRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeCdnDomainByCertificate")
{}

DescribeCdnDomainByCertificateRequest::~DescribeCdnDomainByCertificateRequest()
{}

std::string DescribeCdnDomainByCertificateRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeCdnDomainByCertificateRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DescribeCdnDomainByCertificateRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeCdnDomainByCertificateRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

long DescribeCdnDomainByCertificateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeCdnDomainByCertificateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DescribeCdnDomainByCertificateRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeCdnDomainByCertificateRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeCdnDomainByCertificateRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeCdnDomainByCertificateRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DescribeCdnDomainByCertificateRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeCdnDomainByCertificateRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DescribeCdnDomainByCertificateRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeCdnDomainByCertificateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeCdnDomainByCertificateRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeCdnDomainByCertificateRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeCdnDomainByCertificateRequest::getVersion()const
{
	return version_;
}

void DescribeCdnDomainByCertificateRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string DescribeCdnDomainByCertificateRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeCdnDomainByCertificateRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeCdnDomainByCertificateRequest::getCallerType()const
{
	return callerType_;
}

void DescribeCdnDomainByCertificateRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool DescribeCdnDomainByCertificateRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeCdnDomainByCertificateRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DescribeCdnDomainByCertificateRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeCdnDomainByCertificateRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string DescribeCdnDomainByCertificateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCdnDomainByCertificateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool DescribeCdnDomainByCertificateRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeCdnDomainByCertificateRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DescribeCdnDomainByCertificateRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeCdnDomainByCertificateRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeCdnDomainByCertificateRequest::getSSLPub()const
{
	return sSLPub_;
}

void DescribeCdnDomainByCertificateRequest::setSSLPub(const std::string& sSLPub)
{
	sSLPub_ = sSLPub;
	setCoreParameter("SSLPub", sSLPub);
}

std::string DescribeCdnDomainByCertificateRequest::getRequestId()const
{
	return requestId_;
}

void DescribeCdnDomainByCertificateRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DescribeCdnDomainByCertificateRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeCdnDomainByCertificateRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DescribeCdnDomainByCertificateRequest::getBizId()const
{
	return bizId_;
}

void DescribeCdnDomainByCertificateRequest::setBizId(const std::string& bizId)
{
	bizId_ = bizId;
	setCoreParameter("BizId", bizId);
}

std::string DescribeCdnDomainByCertificateRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeCdnDomainByCertificateRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeCdnDomainByCertificateRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeCdnDomainByCertificateRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DescribeCdnDomainByCertificateRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeCdnDomainByCertificateRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

