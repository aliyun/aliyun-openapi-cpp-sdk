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

#include <alibabacloud/cdn/model/DescribeDomainsBySourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cdn;
using namespace AlibabaCloud::Cdn::Model;

DescribeDomainsBySourceResult::DescribeDomainsBySourceResult() :
	ServiceResult()
{}

DescribeDomainsBySourceResult::DescribeDomainsBySourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainsBySourceResult::~DescribeDomainsBySourceResult()
{}

void DescribeDomainsBySourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainsListNode = value["DomainsList"]["DomainsData"];
	for (auto valueDomainsListDomainsData : allDomainsListNode)
	{
		DomainsData domainsListObject;
		if(!valueDomainsListDomainsData["Source"].isNull())
			domainsListObject.source = valueDomainsListDomainsData["Source"].asString();
		auto allDomainInfosNode = valueDomainsListDomainsData["DomainInfos"]["domainInfo"];
		for (auto valueDomainsListDomainsDataDomainInfosdomainInfo : allDomainInfosNode)
		{
			DomainsData::DomainInfo domainInfosObject;
			if(!valueDomainsListDomainsDataDomainInfosdomainInfo["Status"].isNull())
				domainInfosObject.status = valueDomainsListDomainsDataDomainInfosdomainInfo["Status"].asString();
			if(!valueDomainsListDomainsDataDomainInfosdomainInfo["UpdateTime"].isNull())
				domainInfosObject.updateTime = valueDomainsListDomainsDataDomainInfosdomainInfo["UpdateTime"].asString();
			if(!valueDomainsListDomainsDataDomainInfosdomainInfo["DomainCname"].isNull())
				domainInfosObject.domainCname = valueDomainsListDomainsDataDomainInfosdomainInfo["DomainCname"].asString();
			if(!valueDomainsListDomainsDataDomainInfosdomainInfo["DomainName"].isNull())
				domainInfosObject.domainName = valueDomainsListDomainsDataDomainInfosdomainInfo["DomainName"].asString();
			if(!valueDomainsListDomainsDataDomainInfosdomainInfo["CreateTime"].isNull())
				domainInfosObject.createTime = valueDomainsListDomainsDataDomainInfosdomainInfo["CreateTime"].asString();
			domainsListObject.domainInfos.push_back(domainInfosObject);
		}
		auto allDomains = value["Domains"]["domainNames"];
		for (auto value : allDomains)
			domainsListObject.domains.push_back(value.asString());
		domainsList_.push_back(domainsListObject);
	}
	if(!value["Sources"].isNull())
		sources_ = value["Sources"].asString();

}

std::vector<DescribeDomainsBySourceResult::DomainsData> DescribeDomainsBySourceResult::getDomainsList()const
{
	return domainsList_;
}

std::string DescribeDomainsBySourceResult::getSources()const
{
	return sources_;
}

