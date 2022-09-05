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

#include <alibabacloud/cdn/model/DescribeCdnUserDomainsByFuncResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeCdnUserDomainsByFuncResult::DescribeCdnUserDomainsByFuncResult() :
	ServiceResult()
{}

DescribeCdnUserDomainsByFuncResult::DescribeCdnUserDomainsByFuncResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeCdnUserDomainsByFuncResult::~DescribeCdnUserDomainsByFuncResult()
{}

void DescribeCdnUserDomainsByFuncResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainsNode = value["Domains"]["PageData"];
	for (auto valueDomainsPageData : allDomainsNode)
	{
		PageData domainsObject;
		if(!valueDomainsPageData["GmtCreated"].isNull())
			domainsObject.gmtCreated = valueDomainsPageData["GmtCreated"].asString();
		if(!valueDomainsPageData["SslProtocol"].isNull())
			domainsObject.sslProtocol = valueDomainsPageData["SslProtocol"].asString();
		if(!valueDomainsPageData["Description"].isNull())
			domainsObject.description = valueDomainsPageData["Description"].asString();
		if(!valueDomainsPageData["ResourceGroupId"].isNull())
			domainsObject.resourceGroupId = valueDomainsPageData["ResourceGroupId"].asString();
		if(!valueDomainsPageData["DomainStatus"].isNull())
			domainsObject.domainStatus = valueDomainsPageData["DomainStatus"].asString();
		if(!valueDomainsPageData["Cname"].isNull())
			domainsObject.cname = valueDomainsPageData["Cname"].asString();
		if(!valueDomainsPageData["GmtModified"].isNull())
			domainsObject.gmtModified = valueDomainsPageData["GmtModified"].asString();
		if(!valueDomainsPageData["CdnType"].isNull())
			domainsObject.cdnType = valueDomainsPageData["CdnType"].asString();
		if(!valueDomainsPageData["DomainName"].isNull())
			domainsObject.domainName = valueDomainsPageData["DomainName"].asString();
		auto allSourcesNode = valueDomainsPageData["Sources"]["Source"];
		for (auto valueDomainsPageDataSourcesSource : allSourcesNode)
		{
			PageData::Source sourcesObject;
			if(!valueDomainsPageDataSourcesSource["Type"].isNull())
				sourcesObject.type = valueDomainsPageDataSourcesSource["Type"].asString();
			if(!valueDomainsPageDataSourcesSource["Weight"].isNull())
				sourcesObject.weight = valueDomainsPageDataSourcesSource["Weight"].asString();
			if(!valueDomainsPageDataSourcesSource["Priority"].isNull())
				sourcesObject.priority = valueDomainsPageDataSourcesSource["Priority"].asString();
			if(!valueDomainsPageDataSourcesSource["Port"].isNull())
				sourcesObject.port = std::stoi(valueDomainsPageDataSourcesSource["Port"].asString());
			if(!valueDomainsPageDataSourcesSource["Content"].isNull())
				sourcesObject.content = valueDomainsPageDataSourcesSource["Content"].asString();
			domainsObject.sources.push_back(sourcesObject);
		}
		domains_.push_back(domainsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());

}

std::vector<DescribeCdnUserDomainsByFuncResult::PageData> DescribeCdnUserDomainsByFuncResult::getDomains()const
{
	return domains_;
}

long DescribeCdnUserDomainsByFuncResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeCdnUserDomainsByFuncResult::getPageSize()const
{
	return pageSize_;
}

long DescribeCdnUserDomainsByFuncResult::getPageNumber()const
{
	return pageNumber_;
}

