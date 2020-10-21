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

#include <alibabacloud/sgw/model/DescribeStorageBundlesRequest.h>

using AlibabaCloud::Sgw::Model::DescribeStorageBundlesRequest;

DescribeStorageBundlesRequest::DescribeStorageBundlesRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DescribeStorageBundles")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeStorageBundlesRequest::~DescribeStorageBundlesRequest()
{}

std::string DescribeStorageBundlesRequest::getBackendBucketRegionId()const
{
	return backendBucketRegionId_;
}

void DescribeStorageBundlesRequest::setBackendBucketRegionId(const std::string& backendBucketRegionId)
{
	backendBucketRegionId_ = backendBucketRegionId;
	setParameter("BackendBucketRegionId", backendBucketRegionId);
}

int DescribeStorageBundlesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeStorageBundlesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeStorageBundlesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeStorageBundlesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeStorageBundlesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeStorageBundlesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeStorageBundlesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeStorageBundlesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

int DescribeStorageBundlesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeStorageBundlesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

