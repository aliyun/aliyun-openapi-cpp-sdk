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

#include <alibabacloud/emr/model/UpdateUserRequest.h>

using AlibabaCloud::Emr::Model::UpdateUserRequest;

UpdateUserRequest::UpdateUserRequest() :
	RpcServiceRequest("emr", "2016-04-08", "UpdateUser")
{}

UpdateUserRequest::~UpdateUserRequest()
{}

std::string UpdateUserRequest::getApp_ip()const
{
	return app_ip_;
}

void UpdateUserRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

long UpdateUserRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateUserRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

long UpdateUserRequest::getCallerParentId()const
{
	return callerParentId_;
}

void UpdateUserRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

bool UpdateUserRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void UpdateUserRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string UpdateUserRequest::getUserType()const
{
	return userType_;
}

void UpdateUserRequest::setUserType(const std::string& userType)
{
	userType_ = userType;
	setCoreParameter("UserType", userType);
}

std::string UpdateUserRequest::getDescription()const
{
	return description_;
}

void UpdateUserRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string UpdateUserRequest::getCallerBid()const
{
	return callerBid_;
}

void UpdateUserRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string UpdateUserRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void UpdateUserRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

bool UpdateUserRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void UpdateUserRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool UpdateUserRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void UpdateUserRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

std::string UpdateUserRequest::getCallerType()const
{
	return callerType_;
}

void UpdateUserRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string UpdateUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::vector<UpdateUserRequest::UserAccountParamList> UpdateUserRequest::getUserAccountParamList()const
{
	return userAccountParamList_;
}

void UpdateUserRequest::setUserAccountParamList(const std::vector<UserAccountParamList>& userAccountParamList)
{
	userAccountParamList_ = userAccountParamList;
	int i = 0;
	for(int i = 0; i!= userAccountParamList.size(); i++)	{
		auto obj = userAccountParamList.at(i);
		std::string str ="UserAccountParamList."+ std::to_string(i);
		setCoreParameter(str + ".AccountType", obj.accountType);
		setCoreParameter(str + ".AuthType", obj.authType);
		setCoreParameter(str + ".AccountPassword", obj.accountPassword);
	}
}

bool UpdateUserRequest::getSecurity_transport()const
{
	return security_transport_;
}

void UpdateUserRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::vector<long> UpdateUserRequest::getGroupIdList()const
{
	return groupIdList_;
}

void UpdateUserRequest::setGroupIdList(const std::vector<long>& groupIdList)
{
	groupIdList_ = groupIdList;
	for(int i = 0; i!= groupIdList.size(); i++)
		setCoreParameter("GroupIdList."+ std::to_string(i), std::to_string(groupIdList.at(i)));
}

std::string UpdateUserRequest::getSecurityToken()const
{
	return securityToken_;
}

void UpdateUserRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string UpdateUserRequest::getRegionId()const
{
	return regionId_;
}

void UpdateUserRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UpdateUserRequest::getRequestId()const
{
	return requestId_;
}

void UpdateUserRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

std::vector<long> UpdateUserRequest::getRoleIdList()const
{
	return roleIdList_;
}

void UpdateUserRequest::setRoleIdList(const std::vector<long>& roleIdList)
{
	roleIdList_ = roleIdList;
	for(int i = 0; i!= roleIdList.size(); i++)
		setCoreParameter("RoleIdList."+ std::to_string(i), std::to_string(roleIdList.at(i)));
}

long UpdateUserRequest::getCallerUid()const
{
	return callerUid_;
}

void UpdateUserRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

std::string UpdateUserRequest::getAliyunUserId()const
{
	return aliyunUserId_;
}

void UpdateUserRequest::setAliyunUserId(const std::string& aliyunUserId)
{
	aliyunUserId_ = aliyunUserId;
	setCoreParameter("AliyunUserId", aliyunUserId);
}

std::string UpdateUserRequest::getUserName()const
{
	return userName_;
}

void UpdateUserRequest::setUserName(const std::string& userName)
{
	userName_ = userName;
	setCoreParameter("UserName", userName);
}

std::string UpdateUserRequest::getStatus()const
{
	return status_;
}

void UpdateUserRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

