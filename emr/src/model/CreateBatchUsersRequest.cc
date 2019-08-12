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

#include <alibabacloud/emr/model/CreateBatchUsersRequest.h>

using AlibabaCloud::Emr::Model::CreateBatchUsersRequest;

CreateBatchUsersRequest::CreateBatchUsersRequest() :
	RpcServiceRequest("emr", "2016-04-08", "CreateBatchUsers")
{}

CreateBatchUsersRequest::~CreateBatchUsersRequest()
{}

std::string CreateBatchUsersRequest::getApp_ip()const
{
	return app_ip_;
}

void CreateBatchUsersRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

long CreateBatchUsersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateBatchUsersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::vector<CreateBatchUsersRequest::UserBaseParamList> CreateBatchUsersRequest::getUserBaseParamList()const
{
	return userBaseParamList_;
}

void CreateBatchUsersRequest::setUserBaseParamList(const std::vector<UserBaseParamList>& userBaseParamList)
{
	userBaseParamList_ = userBaseParamList;
	int i = 0;
	for(int i = 0; i!= userBaseParamList.size(); i++)	{
		auto obj = userBaseParamList.at(i);
		std::string str ="UserBaseParamList."+ std::to_string(i);
		setCoreParameter(str + ".AliyunUserId", std::to_string(obj.aliyunUserId));
		setCoreParameter(str + ".UserName", std::to_string(obj.userName));
		setCoreParameter(str + ".UserType", std::to_string(obj.userType));
		setCoreParameter(str + ".IsSuperAdmin", std::to_string(obj.isSuperAdmin));
	}
}

long CreateBatchUsersRequest::getCallerParentId()const
{
	return callerParentId_;
}

void CreateBatchUsersRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

std::vector<long> CreateBatchUsersRequest::getRoleId()const
{
	return roleId_;
}

void CreateBatchUsersRequest::setRoleId(const std::vector<long>& roleId)
{
	roleId_ = roleId;
	for(int i = 0; i!= roleId.size(); i++)
		setCoreParameter("RoleId."+ std::to_string(i), roleId.at(i));
}

std::vector<long> CreateBatchUsersRequest::getGroupId()const
{
	return groupId_;
}

void CreateBatchUsersRequest::setGroupId(const std::vector<long>& groupId)
{
	groupId_ = groupId;
	for(int i = 0; i!= groupId.size(); i++)
		setCoreParameter("GroupId."+ std::to_string(i), groupId.at(i));
}

bool CreateBatchUsersRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void CreateBatchUsersRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string CreateBatchUsersRequest::getDescription()const
{
	return description_;
}

void CreateBatchUsersRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateBatchUsersRequest::getCallerBid()const
{
	return callerBid_;
}

void CreateBatchUsersRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string CreateBatchUsersRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void CreateBatchUsersRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

bool CreateBatchUsersRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void CreateBatchUsersRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool CreateBatchUsersRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void CreateBatchUsersRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

std::string CreateBatchUsersRequest::getCallerType()const
{
	return callerType_;
}

void CreateBatchUsersRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string CreateBatchUsersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateBatchUsersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool CreateBatchUsersRequest::getSecurity_transport()const
{
	return security_transport_;
}

void CreateBatchUsersRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string CreateBatchUsersRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateBatchUsersRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateBatchUsersRequest::getRegionId()const
{
	return regionId_;
}

void CreateBatchUsersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateBatchUsersRequest::getRequestId()const
{
	return requestId_;
}

void CreateBatchUsersRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long CreateBatchUsersRequest::getCallerUid()const
{
	return callerUid_;
}

void CreateBatchUsersRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

