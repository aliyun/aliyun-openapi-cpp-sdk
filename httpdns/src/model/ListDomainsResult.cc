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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allDomainInfos = value["DomainInfos"]["DomainInfo"];
	for (auto value : allDomainInfos)
	{
		DomainInfo domainInfosObject;
		if(!value["DomainName"].isNull())
			domainInfosObject.domainName = value["DomainName"].asString();
		if(!value["Resolved"].isNull())
			domainInfosObject.resolved = std::stol(value["Resolved"].asString());
		if(!value["ResolvedHttps"].isNull())
			domainInfosObject.resolvedHttps = std::stol(value["ResolvedHttps"].asString());
		if(!value["Resolved6"].isNull())
			domainInfosObject.resolved6 = std::stol(value["Resolved6"].asString());
		if(!value["ResolvedHttps6"].isNull())
			domainInfosObject.resolvedHttps6 = std::stol(value["ResolvedHttps6"].asString());
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

