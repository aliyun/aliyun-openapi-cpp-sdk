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

#include <alibabacloud/cdn/model/DescribeCdnDeletedDomainsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeCdnDeletedDomainsResult::DescribeCdnDeletedDomainsResult() :
	ServiceResult()
{}

DescribeCdnDeletedDomainsResult::DescribeCdnDeletedDomainsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCdnDeletedDomainsResult::~DescribeCdnDeletedDomainsResult()
{}

void DescribeCdnDeletedDomainsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainsNode = value["Domains"]["PageData"];
	for (auto valueDomainsPageData : allDomainsNode)
	{
		PageData domainsObject;
		if(!valueDomainsPageData["GmtModified"].isNull())
			domainsObject.gmtModified = valueDomainsPageData["GmtModified"].asString();
		if(!valueDomainsPageData["DomainName"].isNull())
			domainsObject.domainName = valueDomainsPageData["DomainName"].asString();
		domains_.push_back(domainsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

std::vector<DescribeCdnDeletedDomainsResult::PageData> DescribeCdnDeletedDomainsResult::getDomains()const
{
	return domains_;
}

long DescribeCdnDeletedDomainsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeCdnDeletedDomainsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeCdnDeletedDomainsResult::getPageNumber()const
{
	return pageNumber_;
}

