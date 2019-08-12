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

#include <alibabacloud/cloudapi/model/DescribeApiGroupsRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeApiGroupsRequest;

DescribeApiGroupsRequest::DescribeApiGroupsRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "DescribeApiGroups")
{}

DescribeApiGroupsRequest::~DescribeApiGroupsRequest()
{}

std::string DescribeApiGroupsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeApiGroupsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeApiGroupsRequest::getGroupId()const
{
	return groupId_;
}

void DescribeApiGroupsRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

int DescribeApiGroupsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeApiGroupsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::vector<DescribeApiGroupsRequest::Tag> DescribeApiGroupsRequest::getTag()const
{
	return tag_;
}

void DescribeApiGroupsRequest::setTag(const std::vector<Tag>& tag)
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

bool DescribeApiGroupsRequest::getEnableTagAuth()const
{
	return enableTagAuth_;
}

void DescribeApiGroupsRequest::setEnableTagAuth(bool enableTagAuth)
{
	enableTagAuth_ = enableTagAuth;
	setCoreParameter("EnableTagAuth", enableTagAuth);
}

std::string DescribeApiGroupsRequest::getGroupName()const
{
	return groupName_;
}

void DescribeApiGroupsRequest::setGroupName(const std::string& groupName)
{
	groupName_ = groupName;
	setCoreParameter("GroupName", groupName);
}

int DescribeApiGroupsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeApiGroupsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeApiGroupsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeApiGroupsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

