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

#include <alibabacloud/sgw/model/DescribeGatewayFileStatusRequest.h>

using AlibabaCloud::Sgw::Model::DescribeGatewayFileStatusRequest;

DescribeGatewayFileStatusRequest::DescribeGatewayFileStatusRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DescribeGatewayFileStatus")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeGatewayFileStatusRequest::~DescribeGatewayFileStatusRequest()
{}

std::string DescribeGatewayFileStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeGatewayFileStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeGatewayFileStatusRequest::getFilePath()const
{
	return filePath_;
}

void DescribeGatewayFileStatusRequest::setFilePath(const std::string& filePath)
{
	filePath_ = filePath;
	setParameter("FilePath", filePath);
}

std::string DescribeGatewayFileStatusRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeGatewayFileStatusRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeGatewayFileStatusRequest::getIndexId()const
{
	return indexId_;
}

void DescribeGatewayFileStatusRequest::setIndexId(const std::string& indexId)
{
	indexId_ = indexId;
	setParameter("IndexId", indexId);
}

std::string DescribeGatewayFileStatusRequest::getGatewayId()const
{
	return gatewayId_;
}

void DescribeGatewayFileStatusRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

