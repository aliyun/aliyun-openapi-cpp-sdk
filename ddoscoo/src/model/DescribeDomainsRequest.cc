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

#include <alibabacloud/ddoscoo/model/DescribeDomainsRequest.h>

using AlibabaCloud::Ddoscoo::Model::DescribeDomainsRequest;

DescribeDomainsRequest::DescribeDomainsRequest() :
	RpcServiceRequest("ddoscoo", "2017-12-28", "DescribeDomains")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeDomainsRequest::~DescribeDomainsRequest()
{}

std::string DescribeDomainsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeDomainsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeDomainsRequest::getSourceIp()const
{
	return sourceIp_;
}

void DescribeDomainsRequest::setSourceIp(const std::string& sourceIp)
{
	sourceIp_ = sourceIp;
	setParameter("SourceIp", sourceIp);
}

std::string DescribeDomainsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDomainsRequest::setPageSize(const std::string& pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", pageSize);
}

int DescribeDomainsRequest::getOffset()const
{
	return offset_;
}

void DescribeDomainsRequest::setOffset(int offset)
{
	offset_ = offset;
	setParameter("Offset", std::to_string(offset));
}

std::vector<std::string> DescribeDomainsRequest::getInstanceIds()const
{
	return instanceIds_;
}

void DescribeDomainsRequest::setInstanceIds(const std::vector<std::string>& instanceIds)
{
	instanceIds_ = instanceIds;
	for(int dep1 = 0; dep1!= instanceIds.size(); dep1++) {
		setParameter("InstanceIds."+ std::to_string(dep1), instanceIds.at(dep1));
	}
}

std::string DescribeDomainsRequest::getQueryDomainPattern()const
{
	return queryDomainPattern_;
}

void DescribeDomainsRequest::setQueryDomainPattern(const std::string& queryDomainPattern)
{
	queryDomainPattern_ = queryDomainPattern;
	setParameter("QueryDomainPattern", queryDomainPattern);
}

std::string DescribeDomainsRequest::getDomain()const
{
	return domain_;
}

void DescribeDomainsRequest::setDomain(const std::string& domain)
{
	domain_ = domain;
	setParameter("Domain", domain);
}

