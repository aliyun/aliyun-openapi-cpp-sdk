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

#include <alibabacloud/ddoscoo/model/DescribeLayer7CCRulesRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeLayer7CCRulesRequest;

DescribeLayer7CCRulesRequest::DescribeLayer7CCRulesRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "DescribeLayer7CCRules")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeLayer7CCRulesRequest::~DescribeLayer7CCRulesRequest()
{}

int DescribeLayer7CCRulesRequest::getOffset()const
{
	return offset_;
}

void DescribeLayer7CCRulesRequest::setOffset(int offset)
{
	offset_ = offset;
	setParameter("Offset", std::to_string(offset));
}

std::string DescribeLayer7CCRulesRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeLayer7CCRulesRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeLayer7CCRulesRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeLayer7CCRulesRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeLayer7CCRulesRequest::getDomain()const
{
	return domain_;
}

void DescribeLayer7CCRulesRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

std::string DescribeLayer7CCRulesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeLayer7CCRulesRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", pageSize);
}

