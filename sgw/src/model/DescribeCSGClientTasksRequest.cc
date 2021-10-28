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

#include <alibabacloud/sgw/model/DescribeCSGClientTasksRequest.h>

using AlibabaCloud::Sgw::Model::DescribeCSGClientTasksRequest;

DescribeCSGClientTasksRequest::DescribeCSGClientTasksRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DescribeCSGClientTasks")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeCSGClientTasksRequest::~DescribeCSGClientTasksRequest()
{}

std::string DescribeCSGClientTasksRequest::getClientId()const
{
	return clientId_;
}

void DescribeCSGClientTasksRequest::setClientId(const std::string& clientId)
{
	clientId_ = clientId;
	setParameter("ClientId", clientId);
}

int DescribeCSGClientTasksRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeCSGClientTasksRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeCSGClientTasksRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeCSGClientTasksRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeCSGClientTasksRequest::getClientRegionId()const
{
	return clientRegionId_;
}

void DescribeCSGClientTasksRequest::setClientRegionId(const std::string& clientRegionId)
{
	clientRegionId_ = clientRegionId;
	setParameter("ClientRegionId", clientRegionId);
}

std::string DescribeCSGClientTasksRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeCSGClientTasksRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

int DescribeCSGClientTasksRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeCSGClientTasksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

