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

#include <alibabacloud/sgw/model/DescribeCSGClientsRequest.h>

using AlibabaCloud::Sgw::Model::DescribeCSGClientsRequest;

DescribeCSGClientsRequest::DescribeCSGClientsRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DescribeCSGClients")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCSGClientsRequest::~DescribeCSGClientsRequest()
{}

int DescribeCSGClientsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeCSGClientsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeCSGClientsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCSGClientsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeCSGClientsRequest::getClientRegionId()const
{
	return clientRegionId_;
}

void DescribeCSGClientsRequest::setClientRegionId(const std::string& clientRegionId)
{
	clientRegionId_ = clientRegionId;
	setParameter("ClientRegionId", clientRegionId);
}

std::string DescribeCSGClientsRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeCSGClientsRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

int DescribeCSGClientsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCSGClientsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

