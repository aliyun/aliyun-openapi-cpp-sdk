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

#include <alibabacloud/ivision/model/DeleteProjectRequest.h>

using AlibabaCloud::Ivision::Model::DeleteProjectRequest;

DeleteProjectRequest::DeleteProjectRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DeleteProject")
{}

DeleteProjectRequest::~DeleteProjectRequest()
{}

long DeleteProjectRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteProjectRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DeleteProjectRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteProjectRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteProjectRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteProjectRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteProjectRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteProjectRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteProjectRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteProjectRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteProjectRequest::getCallerType()const
{
	return callerType_;
}

void DeleteProjectRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setParameter("CallerType", callerType);
}

std::string DeleteProjectRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteProjectRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteProjectRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteProjectRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteProjectRequest::getRegionId()const
{
	return regionId_;
}

void DeleteProjectRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteProjectRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteProjectRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setParameter("RequestContent", requestContent);
}

std::string DeleteProjectRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteProjectRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteProjectRequest::getProjectId()const
{
	return projectId_;
}

void DeleteProjectRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", projectId);
}

std::string DeleteProjectRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteProjectRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setParameter("CallerUidEmail", callerUidEmail);
}

long DeleteProjectRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteProjectRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setParameter("CallerUid", std::to_string(callerUid));
}

std::string DeleteProjectRequest::getShowLog()const
{
	return showLog_;
}

void DeleteProjectRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string DeleteProjectRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteProjectRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setParameter("App_ip", app_ip);
}

std::string DeleteProjectRequest::getPopProduct()const
{
	return popProduct_;
}

void DeleteProjectRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setParameter("PopProduct", popProduct);
}

std::string DeleteProjectRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteProjectRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setParameter("CallerBid", callerBid);
}

long DeleteProjectRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteProjectRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteProjectRequest::getVersion()const
{
	return version_;
}

void DeleteProjectRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

bool DeleteProjectRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteProjectRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeleteProjectRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteProjectRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DeleteProjectRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteProjectRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteProjectRequest::getRequestId()const
{
	return requestId_;
}

void DeleteProjectRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setParameter("RequestId", requestId);
}

