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

#include <alibabacloud/sgw/model/DescribeGatewayBlockVolumesRequest.h>

using AlibabaCloud::Sgw::Model::DescribeGatewayBlockVolumesRequest;

DescribeGatewayBlockVolumesRequest::DescribeGatewayBlockVolumesRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DescribeGatewayBlockVolumes")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeGatewayBlockVolumesRequest::~DescribeGatewayBlockVolumesRequest()
{}

bool DescribeGatewayBlockVolumesRequest::getRefresh()const
{
	return refresh_;
}

void DescribeGatewayBlockVolumesRequest::setRefresh(bool refresh)
{
	refresh_ = refresh;
	setParameter("Refresh", refresh ? "true" : "false");
}

std::string DescribeGatewayBlockVolumesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeGatewayBlockVolumesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeGatewayBlockVolumesRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeGatewayBlockVolumesRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeGatewayBlockVolumesRequest::getIndexId()const
{
	return indexId_;
}

void DescribeGatewayBlockVolumesRequest::setIndexId(const std::string& indexId)
{
	indexId_ = indexId;
	setParameter("IndexId", indexId);
}

std::string DescribeGatewayBlockVolumesRequest::getGatewayId()const
{
	return gatewayId_;
}

void DescribeGatewayBlockVolumesRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

