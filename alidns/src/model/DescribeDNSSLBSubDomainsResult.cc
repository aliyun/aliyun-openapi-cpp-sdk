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

#include <alibabacloud/alidns/model/DescribeDNSSLBSubDomainsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDNSSLBSubDomainsResult::DescribeDNSSLBSubDomainsResult() :
	ServiceResult()
{}

DescribeDNSSLBSubDomainsResult::DescribeDNSSLBSubDomainsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDNSSLBSubDomainsResult::~DescribeDNSSLBSubDomainsResult()
{}

void DescribeDNSSLBSubDomainsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSlbSubDomainsNode = value["SlbSubDomains"]["SlbSubDomain"];
	for (auto valueSlbSubDomainsSlbSubDomain : allSlbSubDomainsNode)
	{
		SlbSubDomain slbSubDomainsObject;
		if(!valueSlbSubDomainsSlbSubDomain["Type"].isNull())
			slbSubDomainsObject.type = valueSlbSubDomainsSlbSubDomain["Type"].asString();
		if(!valueSlbSubDomainsSlbSubDomain["RecordCount"].isNull())
			slbSubDomainsObject.recordCount = std::stol(valueSlbSubDomainsSlbSubDomain["RecordCount"].asString());
		if(!valueSlbSubDomainsSlbSubDomain["Open"].isNull())
			slbSubDomainsObject.open = valueSlbSubDomainsSlbSubDomain["Open"].asString() == "true";
		if(!valueSlbSubDomainsSlbSubDomain["SubDomain"].isNull())
			slbSubDomainsObject.subDomain = valueSlbSubDomainsSlbSubDomain["SubDomain"].asString();
		auto allLineAlgorithmsNode = valueSlbSubDomainsSlbSubDomain["LineAlgorithms"]["LineAlgorithm"];
		for (auto valueSlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm : allLineAlgorithmsNode)
		{
			SlbSubDomain::LineAlgorithm lineAlgorithmsObject;
			if(!valueSlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm["Line"].isNull())
				lineAlgorithmsObject.line = valueSlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm["Line"].asString();
			if(!valueSlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm["Open"].isNull())
				lineAlgorithmsObject.open = valueSlbSubDomainsSlbSubDomainLineAlgorithmsLineAlgorithm["Open"].asString() == "true";
			slbSubDomainsObject.lineAlgorithms.push_back(lineAlgorithmsObject);
		}
		slbSubDomains_.push_back(slbSubDomainsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());

}

long DescribeDNSSLBSubDomainsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeDNSSLBSubDomainsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeDNSSLBSubDomainsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDNSSLBSubDomainsResult::SlbSubDomain> DescribeDNSSLBSubDomainsResult::getSlbSubDomains()const
{
	return slbSubDomains_;
}

