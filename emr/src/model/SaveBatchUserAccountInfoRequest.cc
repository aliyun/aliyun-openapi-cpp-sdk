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

#include <alibabacloud/emr/model/SaveBatchUserAccountInfoRequest.h>

using AlibabaCloud::Emr::Model::SaveBatchUserAccountInfoRequest;

SaveBatchUserAccountInfoRequest::SaveBatchUserAccountInfoRequest() :
	RpcServiceRequest("emr", "2016-04-08", "SaveBatchUserAccountInfo")
{}

SaveBatchUserAccountInfoRequest::~SaveBatchUserAccountInfoRequest()
{}

std::string SaveBatchUserAccountInfoRequest::getApp_ip()const
{
	return app_ip_;
}

void SaveBatchUserAccountInfoRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

long SaveBatchUserAccountInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SaveBatchUserAccountInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string SaveBatchUserAccountInfoRequest::getResourceId()const
{
	return resourceId_;
}

void SaveBatchUserAccountInfoRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", resourceId);
}

std::vector<std::string> SaveBatchUserAccountInfoRequest::getAliyunUserIdList()const
{
	return aliyunUserIdList_;
}

void SaveBatchUserAccountInfoRequest::setAliyunUserIdList(const std::vector<std::string>& aliyunUserIdList)
{
	aliyunUserIdList_ = aliyunUserIdList;
	for(int i = 0; i!= aliyunUserIdList.size(); i++)
		setCoreParameter("AliyunUserIdList."+ std::to_string(i), std::to_string(aliyunUserIdList.at(i)));
}

long SaveBatchUserAccountInfoRequest::getCallerParentId()const
{
	return callerParentId_;
}

void SaveBatchUserAccountInfoRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

std::string SaveBatchUserAccountInfoRequest::getAccountType()const
{
	return accountType_;
}

void SaveBatchUserAccountInfoRequest::setAccountType(const std::string& accountType)
{
	accountType_ = accountType;
	setCoreParameter("AccountType", accountType);
}

bool SaveBatchUserAccountInfoRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void SaveBatchUserAccountInfoRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string SaveBatchUserAccountInfoRequest::getCallerBid()const
{
	return callerBid_;
}

void SaveBatchUserAccountInfoRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string SaveBatchUserAccountInfoRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void SaveBatchUserAccountInfoRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string SaveBatchUserAccountInfoRequest::getGroupName()const
{
	return groupName_;
}

void SaveBatchUserAccountInfoRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", groupName);
}

std::string SaveBatchUserAccountInfoRequest::getResourceType()const
{
	return resourceType_;
}

void SaveBatchUserAccountInfoRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

bool SaveBatchUserAccountInfoRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void SaveBatchUserAccountInfoRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool SaveBatchUserAccountInfoRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void SaveBatchUserAccountInfoRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

std::string SaveBatchUserAccountInfoRequest::getCallerType()const
{
	return callerType_;
}

void SaveBatchUserAccountInfoRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string SaveBatchUserAccountInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SaveBatchUserAccountInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string SaveBatchUserAccountInfoRequest::getAuthType()const
{
	return authType_;
}

void SaveBatchUserAccountInfoRequest::setAuthType(const std::string& authType)
{
	authType_ = authType;
	setCoreParameter("AuthType", authType);
}

bool SaveBatchUserAccountInfoRequest::getSecurity_transport()const
{
	return security_transport_;
}

void SaveBatchUserAccountInfoRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string SaveBatchUserAccountInfoRequest::getAccountPassword()const
{
	return accountPassword_;
}

void SaveBatchUserAccountInfoRequest::setAccountPassword(const std::string& accountPassword)
{
	accountPassword_ = accountPassword;
	setCoreParameter("AccountPassword", accountPassword);
}

std::string SaveBatchUserAccountInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void SaveBatchUserAccountInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string SaveBatchUserAccountInfoRequest::getRegionId()const
{
	return regionId_;
}

void SaveBatchUserAccountInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SaveBatchUserAccountInfoRequest::getRequestId()const
{
	return requestId_;
}

void SaveBatchUserAccountInfoRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long SaveBatchUserAccountInfoRequest::getCallerUid()const
{
	return callerUid_;
}

void SaveBatchUserAccountInfoRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

