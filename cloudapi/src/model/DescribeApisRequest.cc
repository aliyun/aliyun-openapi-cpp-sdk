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

#include <alibabacloud/cloudapi/model/DescribeApisRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeApisRequest;

DescribeApisRequest::DescribeApisRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "DescribeApis")
{}

DescribeApisRequest::~DescribeApisRequest()
{}

std::string DescribeApisRequest::getApiName()const
{
	return apiName_;
}

void DescribeApisRequest::setApiName(const std::string& apiName)
{
	apiName_ = apiName;
	setCoreParameter("ApiName", apiName);
}

std::string DescribeApisRequest::getCatalogId()const
{
	return catalogId_;
}

void DescribeApisRequest::setCatalogId(const std::string& catalogId)
{
	catalogId_ = catalogId;
	setCoreParameter("CatalogId", catalogId);
}

std::string DescribeApisRequest::getVisibility()const
{
	return visibility_;
}

void DescribeApisRequest::setVisibility(const std::string& visibility)
{
	visibility_ = visibility;
	setCoreParameter("Visibility", visibility);
}

std::string DescribeApisRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeApisRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeApisRequest::getGroupId()const
{
	return groupId_;
}

void DescribeApisRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

int DescribeApisRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeApisRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::vector<DescribeApisRequest::Tag> DescribeApisRequest::getTag()const
{
	return tag_;
}

void DescribeApisRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", obj.value);
		setCoreParameter(str + ".Key", obj.key);
	}
}

bool DescribeApisRequest::getEnableTagAuth()const
{
	return enableTagAuth_;
}

void DescribeApisRequest::setEnableTagAuth(bool enableTagAuth)
{
	enableTagAuth_ = enableTagAuth;
	setCoreParameter("EnableTagAuth", enableTagAuth ? "true" : "false");
}

std::string DescribeApisRequest::getApiId()const
{
	return apiId_;
}

void DescribeApisRequest::setApiId(const std::string& apiId)
{
	apiId_ = apiId;
	setCoreParameter("ApiId", apiId);
}

int DescribeApisRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeApisRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeApisRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeApisRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

