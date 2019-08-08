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

#include <alibabacloud/cdn/model/DeleteFCTriggerRequest.h>

using AlibabaCloud::Cdn::Model::DeleteFCTriggerRequest;

DeleteFCTriggerRequest::DeleteFCTriggerRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DeleteFCTrigger")
{}

DeleteFCTriggerRequest::~DeleteFCTriggerRequest()
{}

std::string DeleteFCTriggerRequest::getTriggerARN()const
{
	return triggerARN_;
}

void DeleteFCTriggerRequest::setTriggerARN(const std::string& triggerARN)
{
	triggerARN_ = triggerARN;
	setCoreParameter("TriggerARN", triggerARN);
}

std::string DeleteFCTriggerRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteFCTriggerRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DeleteFCTriggerRequest::getPopProduct()const
{
	return popProduct_;
}

void DeleteFCTriggerRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DeleteFCTriggerRequest::getProduct()const
{
	return product_;
}

void DeleteFCTriggerRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

long DeleteFCTriggerRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteFCTriggerRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteFCTriggerRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteFCTriggerRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteFCTriggerRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteFCTriggerRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DeleteFCTriggerRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteFCTriggerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteFCTriggerRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteFCTriggerRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteFCTriggerRequest::getVersion()const
{
	return version_;
}

void DeleteFCTriggerRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

std::string DeleteFCTriggerRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteFCTriggerRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteFCTriggerRequest::getCallerType()const
{
	return callerType_;
}

void DeleteFCTriggerRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

bool DeleteFCTriggerRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteFCTriggerRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeleteFCTriggerRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteFCTriggerRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

std::string DeleteFCTriggerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteFCTriggerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool DeleteFCTriggerRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteFCTriggerRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteFCTriggerRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteFCTriggerRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteFCTriggerRequest::getRequestId()const
{
	return requestId_;
}

void DeleteFCTriggerRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DeleteFCTriggerRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteFCTriggerRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DeleteFCTriggerRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteFCTriggerRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteFCTriggerRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteFCTriggerRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DeleteFCTriggerRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteFCTriggerRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

