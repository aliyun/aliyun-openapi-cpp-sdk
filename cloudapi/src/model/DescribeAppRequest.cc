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

#include <alibabacloud/cloudapi/model/DescribeAppRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeAppRequest;

DescribeAppRequest::DescribeAppRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "DescribeApp")
{}

DescribeAppRequest::~DescribeAppRequest()
{}

std::string DescribeAppRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeAppRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

long DescribeAppRequest::getAppId()const
{
	return appId_;
}

void DescribeAppRequest::setAppId(long appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

std::string DescribeAppRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAppRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

