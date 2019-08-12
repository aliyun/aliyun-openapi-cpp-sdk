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

#include <alibabacloud/cloudapi/model/DescribeVpcAccessesRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeVpcAccessesRequest;

DescribeVpcAccessesRequest::DescribeVpcAccessesRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "DescribeVpcAccesses")
{}

DescribeVpcAccessesRequest::~DescribeVpcAccessesRequest()
{}

std::string DescribeVpcAccessesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeVpcAccessesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

int DescribeVpcAccessesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVpcAccessesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

int DescribeVpcAccessesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVpcAccessesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeVpcAccessesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeVpcAccessesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

