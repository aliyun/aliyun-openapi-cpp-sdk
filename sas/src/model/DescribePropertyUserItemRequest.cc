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

#include <alibabacloud/sas/model/DescribePropertyUserItemRequest.h>

using AlibabaCloud::Sas::Model::DescribePropertyUserItemRequest;

DescribePropertyUserItemRequest::DescribePropertyUserItemRequest() :
	RpcServiceRequest("sas", "2018-12-03", "DescribePropertyUserItem")
{
	setMethod(HttpRequest::Method::Post);
}

DescribePropertyUserItemRequest::~DescribePropertyUserItemRequest()
{}

int DescribePropertyUserItemRequest::getCurrentPage()const
{
	return currentPage_;
}

void DescribePropertyUserItemRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setParameter("CurrentPage", std::to_string(currentPage));
}

std::string DescribePropertyUserItemRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribePropertyUserItemRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

int DescribePropertyUserItemRequest::getPageSize()const
{
	return pageSize_;
}

void DescribePropertyUserItemRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribePropertyUserItemRequest::getUser()const
{
	return user_;
}

void DescribePropertyUserItemRequest::setUser(const std::string& user)
{
	user_ = user;
	setParameter("User", user);
}

bool DescribePropertyUserItemRequest::getForceFlush()const
{
	return forceFlush_;
}

void DescribePropertyUserItemRequest::setForceFlush(bool forceFlush)
{
	forceFlush_ = forceFlush;
	setParameter("ForceFlush", forceFlush ? "true" : "false");
}

