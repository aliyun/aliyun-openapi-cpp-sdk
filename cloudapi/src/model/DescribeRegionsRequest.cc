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

#include <alibabacloud/cloudapi/model/DescribeRegionsRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeRegionsRequest;

DescribeRegionsRequest::DescribeRegionsRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "DescribeRegions")
{}

DescribeRegionsRequest::~DescribeRegionsRequest()
{}

std::string DescribeRegionsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeRegionsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeRegionsRequest::getLanguage()const
{
	return language_;
}

void DescribeRegionsRequest::setLanguage(const std::string& language)
{
	language_ = language;
	setCoreParameter("Language", language);
}

std::string DescribeRegionsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRegionsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

