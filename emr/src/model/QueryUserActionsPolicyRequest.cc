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

#include <alibabacloud/emr/model/QueryUserActionsPolicyRequest.h>

using AlibabaCloud::Emr::Model::QueryUserActionsPolicyRequest;

QueryUserActionsPolicyRequest::QueryUserActionsPolicyRequest() :
	RpcServiceRequest("emr", "2016-04-08", "QueryUserActionsPolicy")
{}

QueryUserActionsPolicyRequest::~QueryUserActionsPolicyRequest()
{}

std::string QueryUserActionsPolicyRequest::getApp_ip()const
{
	return app_ip_;
}

void QueryUserActionsPolicyRequest::setApp_ip(const std::string& app_ip)
{
	app_ip_ = app_ip;
	setCoreParameter("App_ip", app_ip);
}

long QueryUserActionsPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryUserActionsPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string QueryUserActionsPolicyRequest::getResourceId()const
{
	return resourceId_;
}

void QueryUserActionsPolicyRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setCoreParameter("ResourceId", resourceId);
}

long QueryUserActionsPolicyRequest::getCallerParentId()const
{
	return callerParentId_;
}

void QueryUserActionsPolicyRequest::setCallerParentId(long callerParentId)
{
	callerParentId_ = callerParentId;
	setCoreParameter("CallerParentId", callerParentId);
}

bool QueryUserActionsPolicyRequest::getProxy_original_security_transport()const
{
	return proxy_original_security_transport_;
}

void QueryUserActionsPolicyRequest::setProxy_original_security_transport(bool proxy_original_security_transport)
{
	proxy_original_security_transport_ = proxy_original_security_transport;
	setCoreParameter("Proxy_original_security_transport", proxy_original_security_transport);
}

std::string QueryUserActionsPolicyRequest::getCallerBid()const
{
	return callerBid_;
}

void QueryUserActionsPolicyRequest::setCallerBid(const std::string& callerBid)
{
	callerBid_ = callerBid;
	setCoreParameter("CallerBid", callerBid);
}

std::string QueryUserActionsPolicyRequest::getProxy_original_source_ip()const
{
	return proxy_original_source_ip_;
}

void QueryUserActionsPolicyRequest::setProxy_original_source_ip(const std::string& proxy_original_source_ip)
{
	proxy_original_source_ip_ = proxy_original_source_ip;
	setCoreParameter("Proxy_original_source_ip", proxy_original_source_ip);
}

std::string QueryUserActionsPolicyRequest::getResourceType()const
{
	return resourceType_;
}

void QueryUserActionsPolicyRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setCoreParameter("ResourceType", resourceType);
}

bool QueryUserActionsPolicyRequest::getAk_mfa_present()const
{
	return ak_mfa_present_;
}

void QueryUserActionsPolicyRequest::setAk_mfa_present(bool ak_mfa_present)
{
	ak_mfa_present_ = ak_mfa_present;
	setCoreParameter("Ak_mfa_present", ak_mfa_present);
}

bool QueryUserActionsPolicyRequest::getProxy_trust_transport_info()const
{
	return proxy_trust_transport_info_;
}

void QueryUserActionsPolicyRequest::setProxy_trust_transport_info(bool proxy_trust_transport_info)
{
	proxy_trust_transport_info_ = proxy_trust_transport_info;
	setCoreParameter("Proxy_trust_transport_info", proxy_trust_transport_info);
}

std::string QueryUserActionsPolicyRequest::getCallerType()const
{
	return callerType_;
}

void QueryUserActionsPolicyRequest::setCallerType(const std::string& callerType)
{
	callerType_ = callerType;
	setCoreParameter("CallerType", callerType);
}

std::string QueryUserActionsPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryUserActionsPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool QueryUserActionsPolicyRequest::getSecurity_transport()const
{
	return security_transport_;
}

void QueryUserActionsPolicyRequest::setSecurity_transport(bool security_transport)
{
	security_transport_ = security_transport;
	setCoreParameter("Security_transport", security_transport);
}

std::string QueryUserActionsPolicyRequest::getSecurityToken()const
{
	return securityToken_;
}

void QueryUserActionsPolicyRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string QueryUserActionsPolicyRequest::getRegionId()const
{
	return regionId_;
}

void QueryUserActionsPolicyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string QueryUserActionsPolicyRequest::getRequestId()const
{
	return requestId_;
}

void QueryUserActionsPolicyRequest::setRequestId(const std::string& requestId)
{
	requestId_ = requestId;
	setCoreParameter("RequestId", requestId);
}

long QueryUserActionsPolicyRequest::getCallerUid()const
{
	return callerUid_;
}

void QueryUserActionsPolicyRequest::setCallerUid(long callerUid)
{
	callerUid_ = callerUid;
	setCoreParameter("CallerUid", callerUid);
}

std::vector<std::string> QueryUserActionsPolicyRequest::getActionNameList()const
{
	return actionNameList_;
}

void QueryUserActionsPolicyRequest::setActionNameList(const std::vector<std::string>& actionNameList)
{
	actionNameList_ = actionNameList;
	for(int i = 0; i!= actionNameList.size(); i++)
		setCoreParameter("ActionNameList."+ std::to_string(i), std::to_string(actionNameList.at(i)));
}

std::string QueryUserActionsPolicyRequest::getAliyunUserId()const
{
	return aliyunUserId_;
}

void QueryUserActionsPolicyRequest::setAliyunUserId(const std::string& aliyunUserId)
{
	aliyunUserId_ = aliyunUserId;
	setCoreParameter("AliyunUserId", aliyunUserId);
}

