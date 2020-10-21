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

#include <alibabacloud/sgw/model/DescribeGatewayModificationClassesRequest.h>

using AlibabaCloud::Sgw::Model::DescribeGatewayModificationClassesRequest;

DescribeGatewayModificationClassesRequest::DescribeGatewayModificationClassesRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DescribeGatewayModificationClasses")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeGatewayModificationClassesRequest::~DescribeGatewayModificationClassesRequest()
{}

std::string DescribeGatewayModificationClassesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeGatewayModificationClassesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeGatewayModificationClassesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeGatewayModificationClassesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeGatewayModificationClassesRequest::getGatewayId()const
{
	return gatewayId_;
}

void DescribeGatewayModificationClassesRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

