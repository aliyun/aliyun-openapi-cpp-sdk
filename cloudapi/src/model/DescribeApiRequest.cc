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

#include <alibabacloud/cloudapi/model/DescribeApiRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeApiRequest;

DescribeApiRequest::DescribeApiRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "DescribeApi")
{}

DescribeApiRequest::~DescribeApiRequest()
{}

std::string DescribeApiRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeApiRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeApiRequest::getGroupId()const
{
	return groupId_;
}

void DescribeApiRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string DescribeApiRequest::getApiId()const
{
	return apiId_;
}

void DescribeApiRequest::setApiId(const std::string& apiId)
{
	apiId_ = apiId;
	setCoreParameter("ApiId", apiId);
}

std::string DescribeApiRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeApiRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

