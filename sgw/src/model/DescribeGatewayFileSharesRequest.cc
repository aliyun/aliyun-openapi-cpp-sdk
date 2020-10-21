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

#include <alibabacloud/sgw/model/DescribeGatewayFileSharesRequest.h>

using AlibabaCloud::Sgw::Model::DescribeGatewayFileSharesRequest;

DescribeGatewayFileSharesRequest::DescribeGatewayFileSharesRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DescribeGatewayFileShares")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeGatewayFileSharesRequest::~DescribeGatewayFileSharesRequest()
{}

bool DescribeGatewayFileSharesRequest::getRefresh()const
{
	return refresh_;
}

void DescribeGatewayFileSharesRequest::setRefresh(bool refresh)
{
	refresh_ = refresh;
	setParameter("Refresh", refresh ? "true" : "false");
}

std::string DescribeGatewayFileSharesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeGatewayFileSharesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeGatewayFileSharesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeGatewayFileSharesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeGatewayFileSharesRequest::getIndexId()const
{
	return indexId_;
}

void DescribeGatewayFileSharesRequest::setIndexId(const std::string& indexId)
{
	indexId_ = indexId;
	setParameter("IndexId", indexId);
}

std::string DescribeGatewayFileSharesRequest::getGatewayId()const
{
	return gatewayId_;
}

void DescribeGatewayFileSharesRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

