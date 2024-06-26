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

#include <alibabacloud/dcdn/model/DescribeDcdnWafDomainsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dcdn;
using namespace AlibabaCloud::Dcdn::Model;

DescribeDcdnWafDomainsResult::DescribeDcdnWafDomainsResult() :
	ServiceResult()
{}

DescribeDcdnWafDomainsResult::DescribeDcdnWafDomainsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDcdnWafDomainsResult::~DescribeDcdnWafDomainsResult()
{}

void DescribeDcdnWafDomainsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainsNode = value["Domains"]["DomainItem"];
	for (auto valueDomainsDomainItem : allDomainsNode)
	{
		DomainItem domainsObject;
		if(!valueDomainsDomainItem["PolicyCount"].isNull())
			domainsObject.policyCount = std::stoi(valueDomainsDomainItem["PolicyCount"].asString());
		if(!valueDomainsDomainItem["ClientIpTag"].isNull())
			domainsObject.clientIpTag = valueDomainsDomainItem["ClientIpTag"].asString();
		if(!valueDomainsDomainItem["DomainName"].isNull())
			domainsObject.domainName = valueDomainsDomainItem["DomainName"].asString();
		domains_.push_back(domainsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeDcdnWafDomainsResult::DomainItem> DescribeDcdnWafDomainsResult::getDomains()const
{
	return domains_;
}

int DescribeDcdnWafDomainsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDcdnWafDomainsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDcdnWafDomainsResult::getPageNumber()const
{
	return pageNumber_;
}

