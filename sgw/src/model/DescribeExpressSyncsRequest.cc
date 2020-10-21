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

#include <alibabacloud/sgw/model/DescribeExpressSyncsRequest.h>

using AlibabaCloud::Sgw::Model::DescribeExpressSyncsRequest;

DescribeExpressSyncsRequest::DescribeExpressSyncsRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DescribeExpressSyncs")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeExpressSyncsRequest::~DescribeExpressSyncsRequest()
{}

std::string DescribeExpressSyncsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeExpressSyncsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeExpressSyncsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeExpressSyncsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeExpressSyncsRequest::getBucketName()const
{
	return bucketName_;
}

void DescribeExpressSyncsRequest::setBucketName(const std::string& bucketName)
{
	bucketName_ = bucketName;
	setParameter("BucketName", bucketName);
}

std::string DescribeExpressSyncsRequest::getBucketPrefix()const
{
	return bucketPrefix_;
}

void DescribeExpressSyncsRequest::setBucketPrefix(const std::string& bucketPrefix)
{
	bucketPrefix_ = bucketPrefix;
	setParameter("BucketPrefix", bucketPrefix);
}

