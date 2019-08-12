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

#include <alibabacloud/emr/model/CreateUserRequest.h>

using AlibabaCloud::Emr::Model::CreateUserRequest;

CreateUserRequest::CreateUserRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateUser")
{}

CreateUserRequest::~CreateUserRequest()
{}

std::string CreateUserRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateUserRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", std::to_string(app_ip));
}

long CreateUserRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateUserRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

long CreateUserRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateUserRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool CreateUserRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateUserRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string CreateUserRequest::getUserType()const
{
	return userType_;
}

void CreateUserRequest::setUserType(const std::string& userType)
{
	userType_ = userType;
	setCoreParameter("UserType", std::to_string(userType));
}

std::string CreateUserRequest::getDescription()const
{
	return description_;
}

void CreateUserRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string CreateUserRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateUserRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", std::to_string(callerBid));
}

std::string CreateUserRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateUserRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", std::to_string(proxy_original_source_ip));
}

bool CreateUserRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateUserRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool CreateUserRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateUserRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

std::string CreateUserRequest::getCallerType()const
{
	return callerType_;
}

void CreateUserRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", std::to_string(callerType));
}

std::string CreateUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::vector<CreateUserRequest::UserAccountParamList> CreateUserRequest::getUserAccountParamList()const
{
	return userAccountParamList_;
}

void CreateUserRequest::setUserAccountParamList(const std::vector<UserAccountParamList>& userAccountParamList)
{
	userAccountParamList_ = userAccountParamList;
	int i = 0;
	for(int i = 0; i!= userAccountParamList.size(); i++)	{
		auto obj = userAccountParamList.at(i);
		std::string str ="UserAccountParamList."+ std::to_string(i);
		setCoreParameter(str + ".AccountType", std::to_string(obj.accountType));
		setCoreParameter(str + ".AuthType", std::to_string(obj.authType));
		setCoreParameter(str + ".AccountPassword", std::to_string(obj.accountPassword));
	}
}

bool CreateUserRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateUserRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::vector<long> CreateUserRequest::getGroupIdList()const
{
	return groupIdList_;
}

void CreateUserRequest::setGroupIdList(const std::vector<long>& groupIdList)
{
	groupIdList_ = groupIdList;
	for(int i = 0; i!= groupIdList.size(); i++)
		setCoreParameter("GroupIdList."+ std::to_string(i), groupIdList.at(i));
}

std::string CreateUserRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateUserRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string CreateUserRequest::getRegionId()const
{
	return regionId_;
}

void CreateUserRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateUserRequest::getRequestId()const
{
	return requestId_;
}

void CreateUserRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", std::to_string(requestId));
}

std::vector<long> CreateUserRequest::getRoleIdList()const
{
	return roleIdList_;
}

void CreateUserRequest::setRoleIdList(const std::vector<long>& roleIdList)
{
	roleIdList_ = roleIdList;
	for(int i = 0; i!= roleIdList.size(); i++)
		setCoreParameter("RoleIdList."+ std::to_string(i), roleIdList.at(i));
}

long CreateUserRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateUserRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::string CreateUserRequest::getAliyunUserId()const
{
	return aliyunUserId_;
}

void CreateUserRequest::setAliyunUserId(const std::string& aliyunUserId)
{
	aliyunUserId_ = aliyunUserId;
	setCoreParameter("AliyunUserId", std::to_string(aliyunUserId));
}

std::string CreateUserRequest::getUserName()const
{
	return userName_;
}

void CreateUserRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setCoreParameter("UserName", std::to_string(userName));
}

std::string CreateUserRequest::getStatus()const
{
	return status_;
}

void CreateUserRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}

