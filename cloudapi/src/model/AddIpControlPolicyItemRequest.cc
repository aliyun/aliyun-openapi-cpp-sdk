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

#include <alibabacloud/cloudapi/model/AddIpControlPolicyItemRequest.h>

using AlibabaCloud::CloudAPI::Model::AddIpControlPolicyItemRequest;

AddIpControlPolicyItemRequest::AddIpControlPolicyItemRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "AddIpControlPolicyItem")
{}

AddIpControlPolicyItemRequest::~AddIpControlPolicyItemRequest()
{}

std::string AddIpControlPolicyItemRequest::getIpControlId()const
{
	return ipControlId_;
}

void AddIpControlPolicyItemRequest::setIpControlId(const std::string& ipControlId)
{
	ipControlId_ = ipControlId;
	setCoreParameter("IpControlId", ipControlId);
}

std::string AddIpControlPolicyItemRequest::getSecurityToken()const
{
	return securityToken_;
}

void AddIpControlPolicyItemRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string AddIpControlPolicyItemRequest::getAppId()const
{
	return appId_;
}

void AddIpControlPolicyItemRequest::setAppId(const std::string& appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

std::string AddIpControlPolicyItemRequest::getCidrIp()const
{
	return cidrIp_;
}

void AddIpControlPolicyItemRequest::setCidrIp(const std::string& cidrIp)
{
	cidrIp_ = cidrIp;
	setCoreParameter("CidrIp", cidrIp);
}

std::string AddIpControlPolicyItemRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddIpControlPolicyItemRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

