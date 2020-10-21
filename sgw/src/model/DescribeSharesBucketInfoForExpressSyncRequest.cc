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

#include <alibabacloud/sgw/model/DescribeSharesBucketInfoForExpressSyncRequest.h>

using AlibabaCloud::Sgw::Model::DescribeSharesBucketInfoForExpressSyncRequest;

DescribeSharesBucketInfoForExpressSyncRequest::DescribeSharesBucketInfoForExpressSyncRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DescribeSharesBucketInfoForExpressSync")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeSharesBucketInfoForExpressSyncRequest::~DescribeSharesBucketInfoForExpressSyncRequest()
{}

std::string DescribeSharesBucketInfoForExpressSyncRequest::getBucketRegion()const
{
	return bucketRegion_;
}

void DescribeSharesBucketInfoForExpressSyncRequest::setBucketRegion(const std::string& bucketRegion)
{
	bucketRegion_ = bucketRegion;
	setParameter("BucketRegion", bucketRegion);
}

std::string DescribeSharesBucketInfoForExpressSyncRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeSharesBucketInfoForExpressSyncRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeSharesBucketInfoForExpressSyncRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeSharesBucketInfoForExpressSyncRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeSharesBucketInfoForExpressSyncRequest::getBucketName()const
{
	return bucketName_;
}

void DescribeSharesBucketInfoForExpressSyncRequest::setBucketName(const std::string& bucketName)
{
	bucketName_ = bucketName;
	setParameter("BucketName", bucketName);
}

