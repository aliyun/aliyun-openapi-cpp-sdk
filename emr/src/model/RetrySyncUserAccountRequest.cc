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

#include <alibabacloud/emr/model/RetrySyncUserAccountRequest.h>

using AlibabaCloud::Emr::Model::RetrySyncUserAccountRequest;

RetrySyncUserAccountRequest::RetrySyncUserAccountRequest() :
	RpcServiceRequest("emr", "2016-04-08", "RetrySyncUserAccount")
{}

RetrySyncUserAccountRequest::~RetrySyncUserAccountRequest()
{}

std::string RetrySyncUserAccountRequest::getApp_ip()const
{
	return app_ip_;
}

void RetrySyncUserAccountRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

long RetrySyncUserAccountRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RetrySyncUserAccountRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RetrySyncUserAccountRequest::getResourceId()const
{
	return resourceId_;
}

void RetrySyncUserAccountRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", resourceId);
}

std::vector<std::string> RetrySyncUserAccountRequest::getAliyunUserIdList()const
{
	return aliyunUserIdList_;
}

void RetrySyncUserAccountRequest::setAliyunUserIdList(const std::vector<std::string>& aliyunUserIdList)
{
	aliyunUserIdList_ = aliyunUserIdList;
	for(int i = 0; i!= aliyunUserIdList.size(); i++)
		setCoreParameter("AliyunUserIdList."+ std::to_string(i), aliyunUserIdList.at(i));
}

long RetrySyncUserAccountRequest::getCallerParentId()const
{
	return callerParentId_;
}

void RetrySyncUserAccountRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", std::to_string(callerParentId));
}

std::string RetrySyncUserAccountRequest::getAccountType()const
{
	return accountType_;
}

void RetrySyncUserAccountRequest::setAccountType(const std::string& accountType)
{
	accountType_ = accountType;
	setCoreParameter("AccountType", accountType);
}

bool RetrySyncUserAccountRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void RetrySyncUserAccountRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport ? "true" : "false");
}

std::string RetrySyncUserAccountRequest::getCallerBid()const
{
	return callerBid_;
}

void RetrySyncUserAccountRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string RetrySyncUserAccountRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void RetrySyncUserAccountRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string RetrySyncUserAccountRequest::getResourceType()const
{
	return resourceType_;
}

void RetrySyncUserAccountRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

bool RetrySyncUserAccountRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void RetrySyncUserAccountRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present ? "true" : "false");
}

bool RetrySyncUserAccountRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void RetrySyncUserAccountRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info ? "true" : "false");
}

std::string RetrySyncUserAccountRequest::getCallerType()const
{
	return callerType_;
}

void RetrySyncUserAccountRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string RetrySyncUserAccountRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RetrySyncUserAccountRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool RetrySyncUserAccountRequest::getSecurity_transport()const
{
	return security_transport_;
}

void RetrySyncUserAccountRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport ? "true" : "false");
}

std::string RetrySyncUserAccountRequest::getSecurityToken()const
{
	return securityToken_;
}

void RetrySyncUserAccountRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string RetrySyncUserAccountRequest::getRegionId()const
{
	return regionId_;
}

void RetrySyncUserAccountRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string RetrySyncUserAccountRequest::getRequestId()const
{
	return requestId_;
}

void RetrySyncUserAccountRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long RetrySyncUserAccountRequest::getCallerUid()const
{
	return callerUid_;
}

void RetrySyncUserAccountRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", std::to_string(callerUid));
}

