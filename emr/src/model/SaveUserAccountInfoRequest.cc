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

#include <alibabacloud/emr/model/SaveUserAccountInfoRequest.h>

using AlibabaCloud::Emr::Model::SaveUserAccountInfoRequest;

SaveUserAccountInfoRequest::SaveUserAccountInfoRequest() :
	RpcServiceRequest("emr", "2016-04-08", "SaveUserAccountInfo")
{}

SaveUserAccountInfoRequest::~SaveUserAccountInfoRequest()
{}

std::string SaveUserAccountInfoRequest::getApp_ip()const
{
	return app_ip_;
}

void SaveUserAccountInfoRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

long SaveUserAccountInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SaveUserAccountInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long SaveUserAccountInfoRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SaveUserAccountInfoRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

std::string SaveUserAccountInfoRequest::getAccountType()const
{
	return accountType_;
}

void SaveUserAccountInfoRequest::setAccountType(const std::string& accountType)
{
	accountType_ = accountType;
	setCoreParameter("AccountType", accountType);
}

bool SaveUserAccountInfoRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SaveUserAccountInfoRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string SaveUserAccountInfoRequest::getCallerBid()const
{
	return callerBid_;
}

void SaveUserAccountInfoRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string SaveUserAccountInfoRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SaveUserAccountInfoRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SaveUserAccountInfoRequest::getGroupName()const
{
	return groupName_;
}

void SaveUserAccountInfoRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", groupName);
}

bool SaveUserAccountInfoRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SaveUserAccountInfoRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool SaveUserAccountInfoRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SaveUserAccountInfoRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

std::string SaveUserAccountInfoRequest::getCallerType()const
{
	return callerType_;
}

void SaveUserAccountInfoRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string SaveUserAccountInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SaveUserAccountInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SaveUserAccountInfoRequest::getAuthType()const
{
	return authType_;
}

void SaveUserAccountInfoRequest::setAuthType(const std::string& authType)
{
	authType_ = authType;
	setCoreParameter("AuthType", authType);
}

bool SaveUserAccountInfoRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SaveUserAccountInfoRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string SaveUserAccountInfoRequest::getAccountPassword()const
{
	return accountPassword_;
}

void SaveUserAccountInfoRequest::setAccountPassword(const std::string& accountPassword)
{
	accountPassword_ = accountPassword;
	setCoreParameter("AccountPassword", accountPassword);
}

std::string SaveUserAccountInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void SaveUserAccountInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string SaveUserAccountInfoRequest::getRegionId()const
{
	return regionId_;
}

void SaveUserAccountInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SaveUserAccountInfoRequest::getRequestId()const
{
	return requestId_;
}

void SaveUserAccountInfoRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long SaveUserAccountInfoRequest::getCallerUid()const
{
	return callerUid_;
}

void SaveUserAccountInfoRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string SaveUserAccountInfoRequest::getAliyunUserId()const
{
	return aliyunUserId_;
}

void SaveUserAccountInfoRequest::setAliyunUserId(const std::string& aliyunUserId)
{
	aliyunUserId_ = aliyunUserId;
	setCoreParameter("AliyunUserId", aliyunUserId);
}

