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

#include <alibabacloud/cdn/model/DescribeUserDomainsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeUserDomainsResult::DescribeUserDomainsResult() :
	ServiceResult()
{}

DescribeUserDomainsResult::DescribeUserDomainsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeUserDomainsResult::~DescribeUserDomainsResult()
{}

void DescribeUserDomainsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDomains = value["Domains"]["PageData"];
	for (auto value : allDomains)
	{
		PageData pageDataObject;
		pageDataObject.domainName = value["DomainName"].asString();
		pageDataObject.cname = value["Cname"].asString();
		pageDataObject.cdnType = value["CdnType"].asString();
		pageDataObject.domainStatus = value["DomainStatus"].asString();
		pageDataObject.gmtCreated = value["GmtCreated"].asString();
		pageDataObject.gmtModified = value["GmtModified"].asString();
		pageDataObject.description = value["Description"].asString();
		pageDataObject.sourceType = value["SourceType"].asString();
		pageDataObject.sslProtocol = value["SslProtocol"].asString();
		pageDataObject.resourceGroupId = value["ResourceGroupId"].asString();
		pageDataObject.sandbox = value["Sandbox"].asString();
		auto allSources = value["Sources"]["Source"];
		for (auto value : allSources)
			pageDataObject.sources.push_back(value.asString());
		domains_.push_back(pageDataObject);
	}
	pageNumber_ = std::stol(value["PageNumber"].asString());
	pageSize_ = std::stol(value["PageSize"].asString());
	totalCount_ = std::stol(value["TotalCount"].asString());

}

long DescribeUserDomainsResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeUserDomainsResult::setTotalCount(long totalCount)
{
	totalCount_ = totalCount;
}

long DescribeUserDomainsResult::getPageSize()const
{
	return pageSize_;
}

void DescribeUserDomainsResult::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
}

long DescribeUserDomainsResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeUserDomainsResult::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
}

