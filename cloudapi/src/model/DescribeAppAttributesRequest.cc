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

#include <alibabacloud/cloudapi/model/DescribeAppAttributesRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeAppAttributesRequest;

DescribeAppAttributesRequest::DescribeAppAttributesRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "DescribeAppAttributes")
{}

DescribeAppAttributesRequest::~DescribeAppAttributesRequest()
{}

std::string DescribeAppAttributesRequest::getAppName()const
{
	return appName_;
}

void DescribeAppAttributesRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", std::to_string(appName));
}

std::string DescribeAppAttributesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeAppAttributesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

long DescribeAppAttributesRequest::getAppId()const
{
	return appId_;
}

void DescribeAppAttributesRequest::setAppId(long appId)
{
	appId_ = appId;
	setCoreParameter("AppId", appId);
}

int DescribeAppAttributesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAppAttributesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::vector<DescribeAppAttributesRequest::Tag> DescribeAppAttributesRequest::getTag()const
{
	return tag_;
}

void DescribeAppAttributesRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", std::to_string(obj.value));
		setCoreParameter(str + ".Key", std::to_string(obj.key));
	}
}

bool DescribeAppAttributesRequest::getEnableTagAuth()const
{
	return enableTagAuth_;
}

void DescribeAppAttributesRequest::setEnableTagAuth(bool enableTagAuth)
{
	enableTagAuth_ = enableTagAuth;
	setCoreParameter("EnableTagAuth", enableTagAuth ? "true" : "false");
}

int DescribeAppAttributesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeAppAttributesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeAppAttributesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAppAttributesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

