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

#include <alibabacloud/live/model/DescribeLiveUserDomainsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeLiveUserDomainsResult::DescribeLiveUserDomainsResult() :
	ServiceResult()
{}

DescribeLiveUserDomainsResult::DescribeLiveUserDomainsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLiveUserDomainsResult::~DescribeLiveUserDomainsResult()
{}

void DescribeLiveUserDomainsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDomains = value["Domains"]["PageData"];
	for (auto value : allDomains)
	{
		PageData domainsObject;
		if(!value["DomainName"].isNull())
			domainsObject.domainName = value["DomainName"].asString();
		if(!value["Cname"].isNull())
			domainsObject.cname = value["Cname"].asString();
		if(!value["LiveDomainType"].isNull())
			domainsObject.liveDomainType = value["LiveDomainType"].asString();
		if(!value["GmtCreated"].isNull())
			domainsObject.gmtCreated = value["GmtCreated"].asString();
		if(!value["GmtModified"].isNull())
			domainsObject.gmtModified = value["GmtModified"].asString();
		if(!value["Description"].isNull())
			domainsObject.description = value["Description"].asString();
		if(!value["LiveDomainStatus"].isNull())
			domainsObject.liveDomainStatus = value["LiveDomainStatus"].asString();
		if(!value["RegionName"].isNull())
			domainsObject.regionName = value["RegionName"].asString();
		domains_.push_back(domainsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

std::vector<DescribeLiveUserDomainsResult::PageData> DescribeLiveUserDomainsResult::getDomains()const
{
	return domains_;
}

long DescribeLiveUserDomainsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeLiveUserDomainsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeLiveUserDomainsResult::getPageNumber()const
{
	return pageNumber_;
}

