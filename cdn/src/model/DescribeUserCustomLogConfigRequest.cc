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

#include <alibabacloud/cdn/model/DescribeUserCustomLogConfigRequest.h>

using AlibabaCloud::Cdn::Model::DescribeUserCustomLogConfigRequest;

DescribeUserCustomLogConfigRequest::DescribeUserCustomLogConfigRequest() :
	RpcServiceRequest("cdn", "2014-11-11", "DescribeUserCustomLogConfig")
{}

DescribeUserCustomLogConfigRequest::~DescribeUserCustomLogConfigRequest()
{}

std::string DescribeUserCustomLogConfigRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeUserCustomLogConfigRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

long DescribeUserCustomLogConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeUserCustomLogConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeUserCustomLogConfigRequest::getVersion()const
{
	return version_;
}

void DescribeUserCustomLogConfigRequest::setVersion(const std::string& version)
{
	version_ = version;
	setParameter("Version", version);
}

std::string DescribeUserCustomLogConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeUserCustomLogConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

