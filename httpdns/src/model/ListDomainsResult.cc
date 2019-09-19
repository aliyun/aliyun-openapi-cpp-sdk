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

#include <alibabacloud/httpdns/model/ListDomainsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Httpdns;
using namespace AlibabaCloud::Httpdns::Model;

ListDomainsResult::ListDomainsResult() :
	ServiceResult()
{}

ListDomainsResult::ListDomainsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDomainsResult::~ListDomainsResult()
{}

void ListDomainsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainInfosNode = value["DomainInfos"]["DomainInfo"];
	for (auto valueDomainInfosDomainInfo : allDomainInfosNode)
	{
		DomainInfo domainInfosObject;
		if(!valueDomainInfosDomainInfo["DomainName"].isNull())
			domainInfosObject.domainName = valueDomainInfosDomainInfo["DomainName"].asString();
		if(!valueDomainInfosDomainInfo["Resolved"].isNull())
			domainInfosObject.resolved = std::stol(valueDomainInfosDomainInfo["Resolved"].asString());
		if(!valueDomainInfosDomainInfo["ResolvedHttps"].isNull())
			domainInfosObject.resolvedHttps = std::stol(valueDomainInfosDomainInfo["ResolvedHttps"].asString());
		if(!valueDomainInfosDomainInfo["Resolved6"].isNull())
			domainInfosObject.resolved6 = std::stol(valueDomainInfosDomainInfo["Resolved6"].asString());
		if(!valueDomainInfosDomainInfo["ResolvedHttps6"].isNull())
			domainInfosObject.resolvedHttps6 = std::stol(valueDomainInfosDomainInfo["ResolvedHttps6"].asString());
		domainInfos_.push_back(domainInfosObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long ListDomainsResult::getTotalCount()const
{
	return totalCount_;
}

long ListDomainsResult::getPageSize()const
{
	return pageSize_;
}

long ListDomainsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListDomainsResult::DomainInfo> ListDomainsResult::getDomainInfos()const
{
	return domainInfos_;
}

