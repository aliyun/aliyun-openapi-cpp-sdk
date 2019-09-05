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

#include <alibabacloud/cloudapi/model/CreateIpControlRequest.h>

using AlibabaCloud::CloudAPI::Model::CreateIpControlRequest;

CreateIpControlRequest::CreateIpControlRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "CreateIpControl")
{}

CreateIpControlRequest::~CreateIpControlRequest()
{}

std::string CreateIpControlRequest::getIpControlName()const
{
	return ipControlName_;
}

void CreateIpControlRequest::setIpControlName(const std::string& ipControlName)
{
	ipControlName_ = ipControlName;
	setCoreParameter("IpControlName", ipControlName);
}

std::vector<CreateIpControlRequest::IpControlPolicys> CreateIpControlRequest::getIpControlPolicys()const
{
	return ipControlPolicys_;
}

void CreateIpControlRequest::setIpControlPolicys(const std::vector<IpControlPolicys>& ipControlPolicys)
{
	ipControlPolicys_ = ipControlPolicys;
	int i = 0;
	for(int i = 0; i!= ipControlPolicys.size(); i++)	{
		auto obj = ipControlPolicys.at(i);
		std::string str ="IpControlPolicys."+ std::to_string(i);
		setCoreParameter(str + ".AppId", obj.appId);
		setCoreParameter(str + ".CidrIp", obj.cidrIp);
	}
}

std::string CreateIpControlRequest::getDescription()const
{
	return description_;
}

void CreateIpControlRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateIpControlRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateIpControlRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateIpControlRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateIpControlRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateIpControlRequest::getIpControlType()const
{
	return ipControlType_;
}

void CreateIpControlRequest::setIpControlType(const std::string& ipControlType)
{
	ipControlType_ = ipControlType;
	setCoreParameter("IpControlType", ipControlType);
}

