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

#include <alibabacloud/ivision/model/ModifyTagAttributeRequest.h>

using AlibabaCloud::Ivision::Model::ModifyTagAttributeRequest;

ModifyTagAttributeRequest::ModifyTagAttributeRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "ModifyTagAttribute")
{}

ModifyTagAttributeRequest::~ModifyTagAttributeRequest()
{}

long ModifyTagAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyTagAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long ModifyTagAttributeRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyTagAttributeRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool ModifyTagAttributeRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyTagAttributeRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ModifyTagAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyTagAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifyTagAttributeRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyTagAttributeRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string ModifyTagAttributeRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyTagAttributeRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string ModifyTagAttributeRequest::getCallerType()const
{
	return callerType_;
}

void ModifyTagAttributeRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string ModifyTagAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyTagAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyTagAttributeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyTagAttributeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyTagAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyTagAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyTagAttributeRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyTagAttributeRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string ModifyTagAttributeRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyTagAttributeRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string ModifyTagAttributeRequest::getProjectId()const
{
	return projectId_;
}

void ModifyTagAttributeRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

std::string ModifyTagAttributeRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyTagAttributeRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long ModifyTagAttributeRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyTagAttributeRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string ModifyTagAttributeRequest::getShowLog()const
{
	return showLog_;
}

void ModifyTagAttributeRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string ModifyTagAttributeRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyTagAttributeRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string ModifyTagAttributeRequest::getPopProduct()const
{
	return popProduct_;
}

void ModifyTagAttributeRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string ModifyTagAttributeRequest::getTagId()const
{
	return tagId_;
}

void ModifyTagAttributeRequest::setTagId(const std::string& tagId)
{
	tagId_ = tagId;
	setParameter("TagId", tagId);
}

std::string ModifyTagAttributeRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyTagAttributeRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long ModifyTagAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyTagAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyTagAttributeRequest::getVersion()const
{
	return version_;
}

void ModifyTagAttributeRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool ModifyTagAttributeRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyTagAttributeRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ModifyTagAttributeRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyTagAttributeRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ModifyTagAttributeRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyTagAttributeRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ModifyTagAttributeRequest::getRequestId()const
{
	return requestId_;
}

void ModifyTagAttributeRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

std::string ModifyTagAttributeRequest::getName()const
{
	return name_;
}

void ModifyTagAttributeRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

