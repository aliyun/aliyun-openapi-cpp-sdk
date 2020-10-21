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

#include <alibabacloud/sgw/model/DescribeOssBucketInfoRequest.h>

using AlibabaCloud::Sgw::Model::DescribeOssBucketInfoRequest;

DescribeOssBucketInfoRequest::DescribeOssBucketInfoRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DescribeOssBucketInfo")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeOssBucketInfoRequest::~DescribeOssBucketInfoRequest()
{}

std::string DescribeOssBucketInfoRequest::getBucketEndpoint()const
{
	return bucketEndpoint_;
}

void DescribeOssBucketInfoRequest::setBucketEndpoint(const std::string& bucketEndpoint)
{
	bucketEndpoint_ = bucketEndpoint;
	setParameter("BucketEndpoint", bucketEndpoint);
}

std::string DescribeOssBucketInfoRequest::getType()const
{
	return type_;
}

void DescribeOssBucketInfoRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string DescribeOssBucketInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeOssBucketInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeOssBucketInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeOssBucketInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeOssBucketInfoRequest::getBucketName()const
{
	return bucketName_;
}

void DescribeOssBucketInfoRequest::setBucketName(const std::string& bucketName)
{
	bucketName_ = bucketName;
	setParameter("BucketName", bucketName);
}

std::string DescribeOssBucketInfoRequest::getGatewayId()const
{
	return gatewayId_;
}

void DescribeOssBucketInfoRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

