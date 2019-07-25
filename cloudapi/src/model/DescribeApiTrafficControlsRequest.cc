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

#include <alibabacloud/cloudapi/model/DescribeApiTrafficControlsRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeApiTrafficControlsRequest;

DescribeApiTrafficControlsRequest::DescribeApiTrafficControlsRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "DescribeApiTrafficControls")
{}

DescribeApiTrafficControlsRequest::~DescribeApiTrafficControlsRequest()
{}

std::string DescribeApiTrafficControlsRequest::getStageName()const
{
	return stageName_;
}

void DescribeApiTrafficControlsRequest::setStageName(const std::string& stageName)
{
	stageName_ = stageName;
	setCoreParameter("StageName", stageName);
}

std::string DescribeApiTrafficControlsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeApiTrafficControlsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeApiTrafficControlsRequest::getGroupId()const
{
	return groupId_;
}

void DescribeApiTrafficControlsRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

int DescribeApiTrafficControlsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeApiTrafficControlsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int DescribeApiTrafficControlsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeApiTrafficControlsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeApiTrafficControlsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeApiTrafficControlsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeApiTrafficControlsRequest::getApiIds()const
{
	return apiIds_;
}

void DescribeApiTrafficControlsRequest::setApiIds(const std::string& apiIds)
{
	apiIds_ = apiIds;
	setCoreParameter("ApiIds", apiIds);
}

