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

#include <alibabacloud/sgw/model/DescribeGatewayBucketCachesRequest.h>

using AlibabaCloud::Sgw::Model::DescribeGatewayBucketCachesRequest;

DescribeGatewayBucketCachesRequest::DescribeGatewayBucketCachesRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DescribeGatewayBucketCaches")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeGatewayBucketCachesRequest::~DescribeGatewayBucketCachesRequest()
{}

int DescribeGatewayBucketCachesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeGatewayBucketCachesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeGatewayBucketCachesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeGatewayBucketCachesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeGatewayBucketCachesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeGatewayBucketCachesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeGatewayBucketCachesRequest::getBucketName()const
{
	return bucketName_;
}

void DescribeGatewayBucketCachesRequest::setBucketName(const std::string& bucketName)
{
	bucketName_ = bucketName;
	setParameter("BucketName", bucketName);
}

int DescribeGatewayBucketCachesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeGatewayBucketCachesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

