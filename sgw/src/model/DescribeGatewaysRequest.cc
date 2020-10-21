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

#include <alibabacloud/sgw/model/DescribeGatewaysRequest.h>

using AlibabaCloud::Sgw::Model::DescribeGatewaysRequest;

DescribeGatewaysRequest::DescribeGatewaysRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DescribeGateways")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeGatewaysRequest::~DescribeGatewaysRequest()
{}

std::string DescribeGatewaysRequest::getEcsInstanceIds()const
{
	return ecsInstanceIds_;
}

void DescribeGatewaysRequest::setEcsInstanceIds(const std::string& ecsInstanceIds)
{
	ecsInstanceIds_ = ecsInstanceIds;
	setParameter("EcsInstanceIds", ecsInstanceIds);
}

int DescribeGatewaysRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeGatewaysRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeGatewaysRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeGatewaysRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeGatewaysRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeGatewaysRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

int DescribeGatewaysRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeGatewaysRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeGatewaysRequest::getStorageBundleId()const
{
	return storageBundleId_;
}

void DescribeGatewaysRequest::setStorageBundleId(const std::string& storageBundleId)
{
	storageBundleId_ = storageBundleId;
	setParameter("StorageBundleId", storageBundleId);
}

