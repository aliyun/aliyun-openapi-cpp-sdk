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

#include <alibabacloud/alidns/model/DescribeDnsGtmAccessStrategyAvailableConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDnsGtmAccessStrategyAvailableConfigResult::DescribeDnsGtmAccessStrategyAvailableConfigResult() :
	ServiceResult()
{}

DescribeDnsGtmAccessStrategyAvailableConfigResult::DescribeDnsGtmAccessStrategyAvailableConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDnsGtmAccessStrategyAvailableConfigResult::~DescribeDnsGtmAccessStrategyAvailableConfigResult()
{}

void DescribeDnsGtmAccessStrategyAvailableConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIpv4AddrPoolsNode = value["Ipv4AddrPools"]["Ipv4AddrPool"];
	for (auto valueIpv4AddrPoolsIpv4AddrPool : allIpv4AddrPoolsNode)
	{
		Ipv4AddrPool ipv4AddrPoolsObject;
		if(!valueIpv4AddrPoolsIpv4AddrPool["Id"].isNull())
			ipv4AddrPoolsObject.id = valueIpv4AddrPoolsIpv4AddrPool["Id"].asString();
		if(!valueIpv4AddrPoolsIpv4AddrPool["Name"].isNull())
			ipv4AddrPoolsObject.name = valueIpv4AddrPoolsIpv4AddrPool["Name"].asString();
		if(!valueIpv4AddrPoolsIpv4AddrPool["AddrCount"].isNull())
			ipv4AddrPoolsObject.addrCount = std::stoi(valueIpv4AddrPoolsIpv4AddrPool["AddrCount"].asString());
		ipv4AddrPools_.push_back(ipv4AddrPoolsObject);
	}
	auto allLinesNode = value["Lines"]["Line"];
	for (auto valueLinesLine : allLinesNode)
	{
		Line linesObject;
		if(!valueLinesLine["LineCode"].isNull())
			linesObject.lineCode = valueLinesLine["LineCode"].asString();
		if(!valueLinesLine["LineName"].isNull())
			linesObject.lineName = valueLinesLine["LineName"].asString();
		if(!valueLinesLine["GroupCode"].isNull())
			linesObject.groupCode = valueLinesLine["GroupCode"].asString();
		if(!valueLinesLine["GroupName"].isNull())
			linesObject.groupName = valueLinesLine["GroupName"].asString();
		if(!valueLinesLine["FatherCode"].isNull())
			linesObject.fatherCode = valueLinesLine["FatherCode"].asString();
		lines_.push_back(linesObject);
	}
	auto allIpv6AddrPoolsNode = value["Ipv6AddrPools"]["Ipv6AddrPool"];
	for (auto valueIpv6AddrPoolsIpv6AddrPool : allIpv6AddrPoolsNode)
	{
		Ipv6AddrPool ipv6AddrPoolsObject;
		if(!valueIpv6AddrPoolsIpv6AddrPool["Id"].isNull())
			ipv6AddrPoolsObject.id = valueIpv6AddrPoolsIpv6AddrPool["Id"].asString();
		if(!valueIpv6AddrPoolsIpv6AddrPool["Name"].isNull())
			ipv6AddrPoolsObject.name = valueIpv6AddrPoolsIpv6AddrPool["Name"].asString();
		if(!valueIpv6AddrPoolsIpv6AddrPool["AddrCount"].isNull())
			ipv6AddrPoolsObject.addrCount = std::stoi(valueIpv6AddrPoolsIpv6AddrPool["AddrCount"].asString());
		ipv6AddrPools_.push_back(ipv6AddrPoolsObject);
	}
	auto allDomainAddrPoolsNode = value["DomainAddrPools"]["DomainAddrPool"];
	for (auto valueDomainAddrPoolsDomainAddrPool : allDomainAddrPoolsNode)
	{
		DomainAddrPool domainAddrPoolsObject;
		if(!valueDomainAddrPoolsDomainAddrPool["Id"].isNull())
			domainAddrPoolsObject.id = valueDomainAddrPoolsDomainAddrPool["Id"].asString();
		if(!valueDomainAddrPoolsDomainAddrPool["Name"].isNull())
			domainAddrPoolsObject.name = valueDomainAddrPoolsDomainAddrPool["Name"].asString();
		if(!valueDomainAddrPoolsDomainAddrPool["AddrCount"].isNull())
			domainAddrPoolsObject.addrCount = std::stoi(valueDomainAddrPoolsDomainAddrPool["AddrCount"].asString());
		domainAddrPools_.push_back(domainAddrPoolsObject);
	}
	if(!value["SuggestSetDefaultLine"].isNull())
		suggestSetDefaultLine_ = value["SuggestSetDefaultLine"].asString() == "true";

}

std::vector<DescribeDnsGtmAccessStrategyAvailableConfigResult::Ipv4AddrPool> DescribeDnsGtmAccessStrategyAvailableConfigResult::getIpv4AddrPools()const
{
	return ipv4AddrPools_;
}

std::vector<DescribeDnsGtmAccessStrategyAvailableConfigResult::DomainAddrPool> DescribeDnsGtmAccessStrategyAvailableConfigResult::getDomainAddrPools()const
{
	return domainAddrPools_;
}

std::vector<DescribeDnsGtmAccessStrategyAvailableConfigResult::Ipv6AddrPool> DescribeDnsGtmAccessStrategyAvailableConfigResult::getIpv6AddrPools()const
{
	return ipv6AddrPools_;
}

std::vector<DescribeDnsGtmAccessStrategyAvailableConfigResult::Line> DescribeDnsGtmAccessStrategyAvailableConfigResult::getLines()const
{
	return lines_;
}

bool DescribeDnsGtmAccessStrategyAvailableConfigResult::getSuggestSetDefaultLine()const
{
	return suggestSetDefaultLine_;
}

