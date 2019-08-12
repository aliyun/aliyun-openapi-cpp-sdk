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

#include <alibabacloud/cloudapi/model/DescribeIpControlPolicyItemsRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeIpControlPolicyItemsRequest;

DescribeIpControlPolicyItemsRequest::DescribeIpControlPolicyItemsRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "DescribeIpControlPolicyItems")
{}

DescribeIpControlPolicyItemsRequest::~DescribeIpControlPolicyItemsRequest()
{}

std::string DescribeIpControlPolicyItemsRequest::getIpControlId()const
{
	return ipControlId_;
}

void DescribeIpControlPolicyItemsRequest::setIpControlId(const std::string& ipControlId)
{
	ipControlId_ = ipControlId;
	setCoreParameter("IpControlId", ipControlId);
}

std::string DescribeIpControlPolicyItemsRequest::getPolicyItemId()const
{
	return policyItemId_;
}

void DescribeIpControlPolicyItemsRequest::setPolicyItemId(const std::string& policyItemId)
{
	policyItemId_ = policyItemId;
	setCoreParameter("PolicyItemId", policyItemId);
}

std::string DescribeIpControlPolicyItemsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeIpControlPolicyItemsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

int DescribeIpControlPolicyItemsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeIpControlPolicyItemsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

int DescribeIpControlPolicyItemsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeIpControlPolicyItemsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeIpControlPolicyItemsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeIpControlPolicyItemsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

