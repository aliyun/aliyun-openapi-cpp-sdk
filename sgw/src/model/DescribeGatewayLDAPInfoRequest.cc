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

#include <alibabacloud/sgw/model/DescribeGatewayLDAPInfoRequest.h>

using AlibabaCloud::Sgw::Model::DescribeGatewayLDAPInfoRequest;

DescribeGatewayLDAPInfoRequest::DescribeGatewayLDAPInfoRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DescribeGatewayLDAPInfo")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeGatewayLDAPInfoRequest::~DescribeGatewayLDAPInfoRequest()
{}

std::string DescribeGatewayLDAPInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeGatewayLDAPInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeGatewayLDAPInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeGatewayLDAPInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeGatewayLDAPInfoRequest::getGatewayId()const
{
	return gatewayId_;
}

void DescribeGatewayLDAPInfoRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

