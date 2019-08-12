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

#include <alibabacloud/cloudapi/model/DescribeIpControlsRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeIpControlsRequest;

DescribeIpControlsRequest::DescribeIpControlsRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "DescribeIpControls")
{}

DescribeIpControlsRequest::~DescribeIpControlsRequest()
{}

std::string DescribeIpControlsRequest::getIpControlId()const
{
	return ipControlId_;
}

void DescribeIpControlsRequest::setIpControlId(const std::string& ipControlId)
{
	ipControlId_ = ipControlId;
	setCoreParameter("IpControlId", ipControlId);
}

std::string DescribeIpControlsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeIpControlsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeIpControlsRequest::getIpControlName()const
{
	return ipControlName_;
}

void DescribeIpControlsRequest::setIpControlName(const std::string& ipControlName)
{
	ipControlName_ = ipControlName;
	setCoreParameter("IpControlName", ipControlName);
}

std::string DescribeIpControlsRequest::getIpControlType()const
{
	return ipControlType_;
}

void DescribeIpControlsRequest::setIpControlType(const std::string& ipControlType)
{
	ipControlType_ = ipControlType;
	setCoreParameter("IpControlType", ipControlType);
}

int DescribeIpControlsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeIpControlsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int DescribeIpControlsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeIpControlsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeIpControlsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeIpControlsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

