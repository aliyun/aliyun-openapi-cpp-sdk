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

#include <alibabacloud/ivision/model/CreateProjectRequest.h>

using AlibabaCloud::Ivision::Model::CreateProjectRequest;

CreateProjectRequest::CreateProjectRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "CreateProject")
{}

CreateProjectRequest::~CreateProjectRequest()
{}

long CreateProjectRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateProjectRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long CreateProjectRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateProjectRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool CreateProjectRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateProjectRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateProjectRequest::getDescription()const
{
	return description_;
}

void CreateProjectRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string CreateProjectRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateProjectRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

std::string CreateProjectRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void CreateProjectRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", std::to_string(ownerIdLoginEmail));
}

std::string CreateProjectRequest::getCallerType()const
{
	return callerType_;
}

void CreateProjectRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string CreateProjectRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateProjectRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string CreateProjectRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateProjectRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string CreateProjectRequest::getRegionId()const
{
	return regionId_;
}

void CreateProjectRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateProjectRequest::getRequestContent()const
{
	return requestContent_;
}

void CreateProjectRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", std::to_string(requestContent));
}

std::string CreateProjectRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void CreateProjectRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", std::to_string(callerBidEmail));
}

std::string CreateProjectRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void CreateProjectRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", std::to_string(callerUidEmail));
}

long CreateProjectRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateProjectRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string CreateProjectRequest::getShowLog()const
{
	return showLog_;
}

void CreateProjectRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", std::to_string(showLog));
}

std::string CreateProjectRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateProjectRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

std::string CreateProjectRequest::getPopProduct()const
{
	return popProduct_;
}

void CreateProjectRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", std::to_string(popProduct));
}

std::string CreateProjectRequest::getModelId()const
{
	return modelId_;
}

void CreateProjectRequest::setModelId(const std::string& modelId)
{
	modelId_ = modelId;
	setCoreParameter("ModelId", std::to_string(modelId));
}

std::string CreateProjectRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateProjectRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

long CreateProjectRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateProjectRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateProjectRequest::getVersion()const
{
	return version_;
}

void CreateProjectRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", std::to_string(version));
}

bool CreateProjectRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateProjectRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool CreateProjectRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateProjectRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateProjectRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateProjectRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string CreateProjectRequest::getProType()const
{
	return proType_;
}

void CreateProjectRequest::setProType(const std::string& proType)
{
	proType_ = proType;
	setCoreParameter("ProType", std::to_string(proType));
}

std::string CreateProjectRequest::getRequestId()const
{
	return requestId_;
}

void CreateProjectRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::string CreateProjectRequest::getName()const
{
	return name_;
}

void CreateProjectRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

