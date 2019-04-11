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

#include <alibabacloud/ivision/model/CreateTagRequest.h>

using AlibabaCloud::Ivision::Model::CreateTagRequest;

CreateTagRequest::CreateTagRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "CreateTag")
{}

CreateTagRequest::~CreateTagRequest()
{}

long CreateTagRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateTagRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long CreateTagRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateTagRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool CreateTagRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateTagRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateTagRequest::getDescription()const
{
	return description_;
}

void CreateTagRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateTagRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateTagRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string CreateTagRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateTagRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string CreateTagRequest::getCallerType()const
{
	return callerType_;
}

void CreateTagRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string CreateTagRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateTagRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateTagRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateTagRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateTagRequest::getRegionId()const
{
	return regionId_;
}

void CreateTagRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateTagRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateTagRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string CreateTagRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateTagRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string CreateTagRequest::getProjectId()const
{
	return projectId_;
}

void CreateTagRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string CreateTagRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateTagRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long CreateTagRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateTagRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string CreateTagRequest::getShowLog()const
{
	return showLog_;
}

void CreateTagRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string CreateTagRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateTagRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string CreateTagRequest::getPopProduct()const
{
	return popProduct_;
}

void CreateTagRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string CreateTagRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateTagRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long CreateTagRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateTagRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateTagRequest::getVersion()const
{
	return version_;
}

void CreateTagRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool CreateTagRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateTagRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateTagRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateTagRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateTagRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateTagRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateTagRequest::getRequestId()const
{
	return requestId_;
}

void CreateTagRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string CreateTagRequest::getName()const
{
	return name_;
}

void CreateTagRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

