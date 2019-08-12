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

#include <alibabacloud/ivision/model/ModifyProjectAttributeRequest.h>

using AlibabaCloud::Ivision::Model::ModifyProjectAttributeRequest;

ModifyProjectAttributeRequest::ModifyProjectAttributeRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "ModifyProjectAttribute")
{}

ModifyProjectAttributeRequest::~ModifyProjectAttributeRequest()
{}

long ModifyProjectAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyProjectAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long ModifyProjectAttributeRequest::getCallerParentId()const
{
	return callerParentId_;
}

void ModifyProjectAttributeRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool ModifyProjectAttributeRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void ModifyProjectAttributeRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string ModifyProjectAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyProjectAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string ModifyProjectAttributeRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void ModifyProjectAttributeRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string ModifyProjectAttributeRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void ModifyProjectAttributeRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string ModifyProjectAttributeRequest::getCallerType()const
{
	return callerType_;
}

void ModifyProjectAttributeRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string ModifyProjectAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyProjectAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string ModifyProjectAttributeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyProjectAttributeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string ModifyProjectAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyProjectAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyProjectAttributeRequest::getRequestContent()const
{
	return requestContent_;
}

void ModifyProjectAttributeRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string ModifyProjectAttributeRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void ModifyProjectAttributeRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string ModifyProjectAttributeRequest::getProjectId()const
{
	return projectId_;
}

void ModifyProjectAttributeRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", std::to_string(projectId));
}

std::string ModifyProjectAttributeRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void ModifyProjectAttributeRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long ModifyProjectAttributeRequest::getCallerUid()const
{
	return callerUid_;
}

void ModifyProjectAttributeRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string ModifyProjectAttributeRequest::getShowLog()const
{
	return showLog_;
}

void ModifyProjectAttributeRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", std::to_string(showLog));
}

std::string ModifyProjectAttributeRequest::getApp_ip()const
{
	return app_ip_;
}

void ModifyProjectAttributeRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string ModifyProjectAttributeRequest::getPopProduct()const
{
	return popProduct_;
}

void ModifyProjectAttributeRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string ModifyProjectAttributeRequest::getCallerBid()const
{
	return callerBid_;
}

void ModifyProjectAttributeRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long ModifyProjectAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyProjectAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyProjectAttributeRequest::getVersion()const
{
	return version_;
}

void ModifyProjectAttributeRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool ModifyProjectAttributeRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void ModifyProjectAttributeRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool ModifyProjectAttributeRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void ModifyProjectAttributeRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool ModifyProjectAttributeRequest::getSecurity_transport()const
{
	return security_transport_;
}

void ModifyProjectAttributeRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string ModifyProjectAttributeRequest::getRequestId()const
{
	return requestId_;
}

void ModifyProjectAttributeRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string ModifyProjectAttributeRequest::getName()const
{
	return name_;
}

void ModifyProjectAttributeRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

