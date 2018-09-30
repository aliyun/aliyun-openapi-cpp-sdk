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

#include <alibabacloud/cdn/model/DescribeFCTriggerRequest.h>

using AlibabaCloud::Cdn::Model::DescribeFCTriggerRequest;

DescribeFCTriggerRequest::DescribeFCTriggerRequest() :
	RpcServiceRequest("cdn", "2018-05-10", "DescribeFCTrigger")
{}

DescribeFCTriggerRequest::~DescribeFCTriggerRequest()
{}

std::string DescribeFCTriggerRequest::getTriggerARN()const
{
	return triggerARN_;
}

void DescribeFCTriggerRequest::setTriggerARN(const std::string& triggerARN)
{
	triggerARN_ = triggerARN;
	setParameter("TriggerARN", triggerARN);
}

std::string DescribeFCTriggerRequest::getApp_ip()const
{
	return app_ip_;
}

void DescribeFCTriggerRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DescribeFCTriggerRequest::getPopProduct()const
{
	return popProduct_;
}

void DescribeFCTriggerRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DescribeFCTriggerRequest::getProduct()const
{
	return product_;
}

void DescribeFCTriggerRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

long DescribeFCTriggerRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DescribeFCTriggerRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DescribeFCTriggerRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DescribeFCTriggerRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string DescribeFCTriggerRequest::getCallerBid()const
{
	return callerBid_;
}

void DescribeFCTriggerRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DescribeFCTriggerRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeFCTriggerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeFCTriggerRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DescribeFCTriggerRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DescribeFCTriggerRequest::getVersion()const
{
	return version_;
}

void DescribeFCTriggerRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string DescribeFCTriggerRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DescribeFCTriggerRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DescribeFCTriggerRequest::getCallerType()const
{
	return callerType_;
}

void DescribeFCTriggerRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

bool DescribeFCTriggerRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DescribeFCTriggerRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool DescribeFCTriggerRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DescribeFCTriggerRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

std::string DescribeFCTriggerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeFCTriggerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

bool DescribeFCTriggerRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DescribeFCTriggerRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string DescribeFCTriggerRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeFCTriggerRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeFCTriggerRequest::getRequestId()const
{
	return requestId_;
}

void DescribeFCTriggerRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string DescribeFCTriggerRequest::getRequestContent()const
{
	return requestContent_;
}

void DescribeFCTriggerRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DescribeFCTriggerRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DescribeFCTriggerRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DescribeFCTriggerRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DescribeFCTriggerRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DescribeFCTriggerRequest::getCallerUid()const
{
	return callerUid_;
}

void DescribeFCTriggerRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

