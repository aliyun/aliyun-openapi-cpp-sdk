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

#include <alibabacloud/cdn/model/AddFCTriggerRequest.h>

using AlibabaCloud::Cdn::Model::AddFCTriggerRequest;

AddFCTriggerRequest::AddFCTriggerRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "AddFCTrigger")
{}

AddFCTriggerRequest::~AddFCTriggerRequest()
{}

std::string AddFCTriggerRequest::getNotes()const
{
	return notes_;
}

void AddFCTriggerRequest::setNotes(const std::string& notes)
{
	notes_ = notes;
	setParameter("Notes", notes);
}

long AddFCTriggerRequest::getCallerParentId()const
{
	return callerParentId_;
}

void AddFCTriggerRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

std::string AddFCTriggerRequest::getEventMetaVersion()const
{
	return eventMetaVersion_;
}

void AddFCTriggerRequest::setEventMetaVersion(const std::string& eventMetaVersion)
{
	eventMetaVersion_ = eventMetaVersion;
	setParameter("EventMetaVersion", eventMetaVersion);
}

bool AddFCTriggerRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void AddFCTriggerRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", std::to_string(proxy_original_security_transport));
}

std::string AddFCTriggerRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void AddFCTriggerRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string AddFCTriggerRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void AddFCTriggerRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string AddFCTriggerRequest::getCallerType()const
{
	return callerType_;
}

void AddFCTriggerRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string AddFCTriggerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddFCTriggerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string AddFCTriggerRequest::getSecurityToken()const
{
	return securityToken_;
}

void AddFCTriggerRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string AddFCTriggerRequest::getRequestContent()const
{
	return requestContent_;
}

void AddFCTriggerRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string AddFCTriggerRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void AddFCTriggerRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string AddFCTriggerRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void AddFCTriggerRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long AddFCTriggerRequest::getCallerUid()const
{
	return callerUid_;
}

void AddFCTriggerRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string AddFCTriggerRequest::getTriggerARN()const
{
	return triggerARN_;
}

void AddFCTriggerRequest::setTriggerARN(const std::string& triggerARN)
{
	triggerARN_ = triggerARN;
	setParameter("TriggerARN", triggerARN);
}

std::string AddFCTriggerRequest::getApp_ip()const
{
	return app_ip_;
}

void AddFCTriggerRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string AddFCTriggerRequest::getPopProduct()const
{
	return popProduct_;
}

void AddFCTriggerRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string AddFCTriggerRequest::getProduct()const
{
	return product_;
}

void AddFCTriggerRequest::setProduct(const std::string& product)
{
	product_ = product;
	setParameter("Product", product);
}

std::string AddFCTriggerRequest::getSourceARN()const
{
	return sourceARN_;
}

void AddFCTriggerRequest::setSourceARN(const std::string& sourceARN)
{
	sourceARN_ = sourceARN;
	setParameter("SourceARN", sourceARN);
}

std::string AddFCTriggerRequest::getCallerBid()const
{
	return callerBid_;
}

void AddFCTriggerRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long AddFCTriggerRequest::getOwnerId()const
{
	return ownerId_;
}

void AddFCTriggerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AddFCTriggerRequest::getVersion()const
{
	return version_;
}

void AddFCTriggerRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool AddFCTriggerRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void AddFCTriggerRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", std::to_string(proxy_trust_transport_info));
}

bool AddFCTriggerRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void AddFCTriggerRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", std::to_string(ak_mfa_present));
}

bool AddFCTriggerRequest::getSecurity_transport()const
{
	return security_transport_;
}

void AddFCTriggerRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", std::to_string(security_transport));
}

std::string AddFCTriggerRequest::getRequestId()const
{
	return requestId_;
}

void AddFCTriggerRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string AddFCTriggerRequest::getRoleARN()const
{
	return roleARN_;
}

void AddFCTriggerRequest::setRoleARN(const std::string& roleARN)
{
	roleARN_ = roleARN;
	setParameter("RoleARN", roleARN);
}

std::string AddFCTriggerRequest::getEventMetaName()const
{
	return eventMetaName_;
}

void AddFCTriggerRequest::setEventMetaName(const std::string& eventMetaName)
{
	eventMetaName_ = eventMetaName;
	setParameter("EventMetaName", eventMetaName);
}

