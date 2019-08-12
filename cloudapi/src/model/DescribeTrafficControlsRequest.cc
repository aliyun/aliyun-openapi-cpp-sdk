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

#include <alibabacloud/cloudapi/model/DescribeTrafficControlsRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeTrafficControlsRequest;

DescribeTrafficControlsRequest::DescribeTrafficControlsRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "DescribeTrafficControls")
{}

DescribeTrafficControlsRequest::~DescribeTrafficControlsRequest()
{}

std::string DescribeTrafficControlsRequest::getTrafficControlId()const
{
	return trafficControlId_;
}

void DescribeTrafficControlsRequest::setTrafficControlId(const std::string& trafficControlId)
{
	trafficControlId_ = trafficControlId;
	setCoreParameter("TrafficControlId", trafficControlId);
}

std::string DescribeTrafficControlsRequest::getStageName()const
{
	return stageName_;
}

void DescribeTrafficControlsRequest::setStageName(const std::string& stageName)
{
	stageName_ = stageName;
	setCoreParameter("StageName", stageName);
}

std::string DescribeTrafficControlsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeTrafficControlsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeTrafficControlsRequest::getTrafficControlName()const
{
	return trafficControlName_;
}

void DescribeTrafficControlsRequest::setTrafficControlName(const std::string& trafficControlName)
{
	trafficControlName_ = trafficControlName;
	setCoreParameter("TrafficControlName", trafficControlName);
}

std::string DescribeTrafficControlsRequest::getGroupId()const
{
	return groupId_;
}

void DescribeTrafficControlsRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

int DescribeTrafficControlsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeTrafficControlsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeTrafficControlsRequest::getApiId()const
{
	return apiId_;
}

void DescribeTrafficControlsRequest::setApiId(const std::string& apiId)
{
	apiId_ = apiId;
	setCoreParameter("ApiId", apiId);
}

int DescribeTrafficControlsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeTrafficControlsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeTrafficControlsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeTrafficControlsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

