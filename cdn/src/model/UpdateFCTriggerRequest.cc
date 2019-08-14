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

#include <alibabacloud/cdn/model/UpdateFCTriggerRequest.h>

using AlibabaCloud::Cdn::Model::UpdateFCTriggerRequest;

UpdateFCTriggerRequest::UpdateFCTriggerRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "UpdateFCTrigger")
{}

UpdateFCTriggerRequest::~UpdateFCTriggerRequest()
{}

std::string UpdateFCTriggerRequest::getNotes()const
{
	return notes_;
}

void UpdateFCTriggerRequest::setNotes(const std::string& notes)
{
	notes_ = notes;
	setCoreParameter("Notes", notes);
}

long UpdateFCTriggerRequest::getCallerParentId()const
{
	return callerParentId_;
}

void UpdateFCTriggerRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool UpdateFCTriggerRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void UpdateFCTriggerRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string UpdateFCTriggerRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void UpdateFCTriggerRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string UpdateFCTriggerRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void UpdateFCTriggerRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string UpdateFCTriggerRequest::getCallerType()const
{
	return callerType_;
}

void UpdateFCTriggerRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string UpdateFCTriggerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateFCTriggerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string UpdateFCTriggerRequest::getSecurityToken()const
{
	return securityToken_;
}

void UpdateFCTriggerRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string UpdateFCTriggerRequest::getRequestContent()const
{
	return requestContent_;
}

void UpdateFCTriggerRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string UpdateFCTriggerRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void UpdateFCTriggerRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string UpdateFCTriggerRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void UpdateFCTriggerRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long UpdateFCTriggerRequest::getCallerUid()const
{
	return callerUid_;
}

void UpdateFCTriggerRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string UpdateFCTriggerRequest::getTriggerARN()const
{
	return triggerARN_;
}

void UpdateFCTriggerRequest::setTriggerARN(const std::string& triggerARN)
{
	triggerARN_ = triggerARN;
	setCoreParameter("TriggerARN", triggerARN);
}

std::string UpdateFCTriggerRequest::getApp_ip()const
{
	return app_ip_;
}

void UpdateFCTriggerRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string UpdateFCTriggerRequest::getPopProduct()const
{
	return popProduct_;
}

void UpdateFCTriggerRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string UpdateFCTriggerRequest::getProduct()const
{
	return product_;
}

void UpdateFCTriggerRequest::setProduct(const std::string& product)
{
	product_ = product;
	setCoreParameter("Product", product);
}

std::string UpdateFCTriggerRequest::getSourceARN()const
{
	return sourceARN_;
}

void UpdateFCTriggerRequest::setSourceARN(const std::string& sourceARN)
{
	sourceARN_ = sourceARN;
	setCoreParameter("SourceARN", sourceARN);
}

std::string UpdateFCTriggerRequest::getCallerBid()const
{
	return callerBid_;
}

void UpdateFCTriggerRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long UpdateFCTriggerRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateFCTriggerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateFCTriggerRequest::getVersion()const
{
	return version_;
}

void UpdateFCTriggerRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool UpdateFCTriggerRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void UpdateFCTriggerRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool UpdateFCTriggerRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void UpdateFCTriggerRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool UpdateFCTriggerRequest::getSecurity_transport()const
{
	return security_transport_;
}

void UpdateFCTriggerRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string UpdateFCTriggerRequest::getRequestId()const
{
	return requestId_;
}

void UpdateFCTriggerRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string UpdateFCTriggerRequest::getRoleARN()const
{
	return roleARN_;
}

void UpdateFCTriggerRequest::setRoleARN(const std::string& roleARN)
{
	roleARN_ = roleARN;
	setCoreParameter("RoleARN", roleARN);
}

std::string UpdateFCTriggerRequest::getFunctionARN()const
{
	return functionARN_;
}

void UpdateFCTriggerRequest::setFunctionARN(const std::string& functionARN)
{
	functionARN_ = functionARN;
	setCoreParameter("FunctionARN", functionARN);
}

