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

#include <alibabacloud/cloudapi/model/DescribeAuthorizedAppsRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeAuthorizedAppsRequest;

DescribeAuthorizedAppsRequest::DescribeAuthorizedAppsRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "DescribeAuthorizedApps")
{}

DescribeAuthorizedAppsRequest::~DescribeAuthorizedAppsRequest()
{}

std::string DescribeAuthorizedAppsRequest::getStageName()const
{
	return stageName_;
}

void DescribeAuthorizedAppsRequest::setStageName(const std::string& stageName)
{
	stageName_ = stageName;
	setCoreParameter("StageName", stageName);
}

std::string DescribeAuthorizedAppsRequest::getAppName()const
{
	return appName_;
}

void DescribeAuthorizedAppsRequest::setAppName(const std::string& appName)
{
	appName_ = appName;
	setCoreParameter("AppName", appName);
}

std::string DescribeAuthorizedAppsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeAuthorizedAppsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeAuthorizedAppsRequest::getGroupId()const
{
	return groupId_;
}

void DescribeAuthorizedAppsRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

long DescribeAuthorizedAppsRequest::getAppId()const
{
	return appId_;
}

void DescribeAuthorizedAppsRequest::setAppId(long appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

long DescribeAuthorizedAppsRequest::getAppOwnerId()const
{
	return appOwnerId_;
}

void DescribeAuthorizedAppsRequest::setAppOwnerId(long appOwnerId)
{
	appOwnerId_ = appOwnerId;
	setCoreParameter("AppOwnerId", std::to_string(appOwnerId));
}

int DescribeAuthorizedAppsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeAuthorizedAppsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeAuthorizedAppsRequest::getApiId()const
{
	return apiId_;
}

void DescribeAuthorizedAppsRequest::setApiId(const std::string& apiId)
{
	apiId_ = apiId;
	setCoreParameter("ApiId", apiId);
}

int DescribeAuthorizedAppsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeAuthorizedAppsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeAuthorizedAppsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAuthorizedAppsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

