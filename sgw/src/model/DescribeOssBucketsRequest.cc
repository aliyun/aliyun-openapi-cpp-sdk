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

#include <alibabacloud/sgw/model/DescribeOssBucketsRequest.h>

using AlibabaCloud::Sgw::Model::DescribeOssBucketsRequest;

DescribeOssBucketsRequest::DescribeOssBucketsRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DescribeOssBuckets")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeOssBucketsRequest::~DescribeOssBucketsRequest()
{}

std::string DescribeOssBucketsRequest::getBucketEndpoint()const
{
	return bucketEndpoint_;
}

void DescribeOssBucketsRequest::setBucketEndpoint(const std::string& bucketEndpoint)
{
	bucketEndpoint_ = bucketEndpoint;
	setParameter("BucketEndpoint", bucketEndpoint);
}

std::string DescribeOssBucketsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeOssBucketsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeOssBucketsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeOssBucketsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

