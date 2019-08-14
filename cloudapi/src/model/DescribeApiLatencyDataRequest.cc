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

#include <alibabacloud/cloudapi/model/DescribeApiLatencyDataRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeApiLatencyDataRequest;

DescribeApiLatencyDataRequest::DescribeApiLatencyDataRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "DescribeApiLatencyData")
{}

DescribeApiLatencyDataRequest::~DescribeApiLatencyDataRequest()
{}

std::string DescribeApiLatencyDataRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeApiLatencyDataRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeApiLatencyDataRequest::getGroupId()const
{
	return groupId_;
}

void DescribeApiLatencyDataRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string DescribeApiLatencyDataRequest::getEndTime()const
{
	return endTime_;
}

void DescribeApiLatencyDataRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeApiLatencyDataRequest::getStartTime()const
{
	return startTime_;
}

void DescribeApiLatencyDataRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string DescribeApiLatencyDataRequest::getApiId()const
{
	return apiId_;
}

void DescribeApiLatencyDataRequest::setApiId(const std::string& apiId)
{
	apiId_ = apiId;
	setCoreParameter("ApiId", apiId);
}

std::string DescribeApiLatencyDataRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeApiLatencyDataRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

