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

#include <alibabacloud/cdn/model/DescribeUserConfigsRequest.h>

using AlibabaCloud::Cdn::Model::DescribeUserConfigsRequest;

DescribeUserConfigsRequest::DescribeUserConfigsRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeUserConfigs")
{}

DescribeUserConfigsRequest::~DescribeUserConfigsRequest()
{}

std::string DescribeUserConfigsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeUserConfigsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

long DescribeUserConfigsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeUserConfigsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeUserConfigsRequest::getConfig()const
{
	return config_;
}

void DescribeUserConfigsRequest::setConfig(const std::string& config)
{
	config_ = config;
	setCoreParameter("Config", config);
}

