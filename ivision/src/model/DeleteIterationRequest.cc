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

#include <alibabacloud/ivision/model/DeleteIterationRequest.h>

using AlibabaCloud::Ivision::Model::DeleteIterationRequest;

DeleteIterationRequest::DeleteIterationRequest() :
	RpcServiceRequest("ivision", "2019-03-08", "DeleteIteration")
{}

DeleteIterationRequest::~DeleteIterationRequest()
{}

long DeleteIterationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteIterationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long DeleteIterationRequest::getCallerParentId()const
{
	return callerParentId_;
}

void DeleteIterationRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool DeleteIterationRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void DeleteIterationRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string DeleteIterationRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void DeleteIterationRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string DeleteIterationRequest::getOwnerIdLoginEmail()const
{
	return ownerIdLoginEmail_;
}

void DeleteIterationRequest::setOwnerIdLoginEmail(const std::string& ownerIdLoginEmail)
{
	ownerIdLoginEmail_ = ownerIdLoginEmail;
	setCoreParameter("OwnerIdLoginEmail", ownerIdLoginEmail);
}

std::string DeleteIterationRequest::getCallerType()const
{
	return callerType_;
}

void DeleteIterationRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string DeleteIterationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteIterationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DeleteIterationRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteIterationRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DeleteIterationRequest::getRegionId()const
{
	return regionId_;
}

void DeleteIterationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteIterationRequest::getRequestContent()const
{
	return requestContent_;
}

void DeleteIterationRequest::setRequestContent(const std::string& requestContent)
{
	requestContent_ = requestContent;
	setCoreParameter("RequestContent", requestContent);
}

std::string DeleteIterationRequest::getCallerBidEmail()const
{
	return callerBidEmail_;
}

void DeleteIterationRequest::setCallerBidEmail(const std::string& callerBidEmail)
{
	callerBidEmail_ = callerBidEmail;
	setCoreParameter("CallerBidEmail", callerBidEmail);
}

std::string DeleteIterationRequest::getProjectId()const
{
	return projectId_;
}

void DeleteIterationRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setCoreParameter("ProjectId", projectId);
}

std::string DeleteIterationRequest::getCallerUidEmail()const
{
	return callerUidEmail_;
}

void DeleteIterationRequest::setCallerUidEmail(const std::string& callerUidEmail)
{
	callerUidEmail_ = callerUidEmail;
	setCoreParameter("CallerUidEmail", callerUidEmail);
}

long DeleteIterationRequest::getCallerUid()const
{
	return callerUid_;
}

void DeleteIterationRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string DeleteIterationRequest::getShowLog()const
{
	return showLog_;
}

void DeleteIterationRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setCoreParameter("ShowLog", showLog);
}

std::string DeleteIterationRequest::getApp_ip()const
{
	return app_ip_;
}

void DeleteIterationRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

std::string DeleteIterationRequest::getPopProduct()const
{
	return popProduct_;
}

void DeleteIterationRequest::setPopProduct(const std::string& popProduct)
{
	popProduct_ = popProduct;
	setCoreParameter("PopProduct", popProduct);
}

std::string DeleteIterationRequest::getCallerBid()const
{
	return callerBid_;
}

void DeleteIterationRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

long DeleteIterationRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteIterationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteIterationRequest::getVersion()const
{
	return version_;
}

void DeleteIterationRequest::setVersion(const std::string& version)
{
	version_ = version;
	setCoreParameter("Version", version);
}

bool DeleteIterationRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void DeleteIterationRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

bool DeleteIterationRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void DeleteIterationRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool DeleteIterationRequest::getSecurity_transport()const
{
	return security_transport_;
}

void DeleteIterationRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string DeleteIterationRequest::getRequestId()const
{
	return requestId_;
}

void DeleteIterationRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::string DeleteIterationRequest::getIterationId()const
{
	return iterationId_;
}

void DeleteIterationRequest::setIterationId(const std::string& iterationId)
{
	iterationId_ = iterationId;
	setCoreParameter("IterationId", iterationId);
}

