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

#include <alibabacloud/sgw/model/DescribeGatewayImagesRequest.h>

using AlibabaCloud::Sgw::Model::DescribeGatewayImagesRequest;

DescribeGatewayImagesRequest::DescribeGatewayImagesRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DescribeGatewayImages")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeGatewayImagesRequest::~DescribeGatewayImagesRequest()
{}

std::string DescribeGatewayImagesRequest::getType()const
{
	return type_;
}

void DescribeGatewayImagesRequest::setType(const std::string& type)
{
	type_ = type;
	setParameter("Type", type);
}

std::string DescribeGatewayImagesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeGatewayImagesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeGatewayImagesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeGatewayImagesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeGatewayImagesRequest::getCategory()const
{
	return category_;
}

void DescribeGatewayImagesRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

