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

#include <alibabacloud/emr/model/UpdateUserStatusRequest.h>

using AlibabaCloud::Emr::Model::UpdateUserStatusRequest;

UpdateUserStatusRequest::UpdateUserStatusRequest() :
	RpcServiceRequest("emr", "2016-04-08", "UpdateUserStatus")
{}

UpdateUserStatusRequest::~UpdateUserStatusRequest()
{}

std::string UpdateUserStatusRequest::getApp_ip()const
{
	return app_ip_;
}

void UpdateUserStatusRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

long UpdateUserStatusRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateUserStatusRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long UpdateUserStatusRequest::getCallerParentId()const
{
	return callerParentId_;
}

void UpdateUserStatusRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool UpdateUserStatusRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void UpdateUserStatusRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string UpdateUserStatusRequest::getCallerBid()const
{
	return callerBid_;
}

void UpdateUserStatusRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

std::string UpdateUserStatusRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void UpdateUserStatusRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

bool UpdateUserStatusRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void UpdateUserStatusRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool UpdateUserStatusRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void UpdateUserStatusRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

std::string UpdateUserStatusRequest::getCallerType()const
{
	return callerType_;
}

void UpdateUserStatusRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string UpdateUserStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateUserStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

bool UpdateUserStatusRequest::getSecurity_transport()const
{
	return security_transport_;
}

void UpdateUserStatusRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string UpdateUserStatusRequest::getSecurityToken()const
{
	return securityToken_;
}

void UpdateUserStatusRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string UpdateUserStatusRequest::getRegionId()const
{
	return regionId_;
}

void UpdateUserStatusRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string UpdateUserStatusRequest::getRequestId()const
{
	return requestId_;
}

void UpdateUserStatusRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

long UpdateUserStatusRequest::getCallerUid()const
{
	return callerUid_;
}

void UpdateUserStatusRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string UpdateUserStatusRequest::getAliyunUserId()const
{
	return aliyunUserId_;
}

void UpdateUserStatusRequest::setAliyunUserId(const std::string& aliyunUserId)
{
	aliyunUserId_ = aliyunUserId;
	setCoreParameter("AliyunUserId", std::to_string(aliyunUserId));
}

std::string UpdateUserStatusRequest::getUpdateStatus()const
{
	return updateStatus_;
}

void UpdateUserStatusRequest::setUpdateStatus(const std::string& updateStatus)
{
	updateStatus_ = updateStatus;
	setCoreParameter("UpdateStatus", std::to_string(updateStatus));
}

