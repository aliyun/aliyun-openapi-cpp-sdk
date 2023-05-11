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

#include <alibabacloud/alidns/model/DescribeDnsGtmMonitorAvailableConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDnsGtmMonitorAvailableConfigResult::DescribeDnsGtmMonitorAvailableConfigResult() :
	ServiceResult()
{}

DescribeDnsGtmMonitorAvailableConfigResult::DescribeDnsGtmMonitorAvailableConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDnsGtmMonitorAvailableConfigResult::~DescribeDnsGtmMonitorAvailableConfigResult()
{}

void DescribeDnsGtmMonitorAvailableConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allIpv4IspCityNodesNode = value["Ipv4IspCityNodes"]["Ipv4IspCityNode"];
	for (auto valueIpv4IspCityNodesIpv4IspCityNode : allIpv4IspCityNodesNode)
	{
		Ipv4IspCityNode ipv4IspCityNodesObject;
		if(!valueIpv4IspCityNodesIpv4IspCityNode["CityCode"].isNull())
			ipv4IspCityNodesObject.cityCode = valueIpv4IspCityNodesIpv4IspCityNode["CityCode"].asString();
		if(!valueIpv4IspCityNodesIpv4IspCityNode["GroupName"].isNull())
			ipv4IspCityNodesObject.groupName = valueIpv4IspCityNodesIpv4IspCityNode["GroupName"].asString();
		if(!valueIpv4IspCityNodesIpv4IspCityNode["IspCode"].isNull())
			ipv4IspCityNodesObject.ispCode = valueIpv4IspCityNodesIpv4IspCityNode["IspCode"].asString();
		if(!valueIpv4IspCityNodesIpv4IspCityNode["CityName"].isNull())
			ipv4IspCityNodesObject.cityName = valueIpv4IspCityNodesIpv4IspCityNode["CityName"].asString();
		if(!valueIpv4IspCityNodesIpv4IspCityNode["IspName"].isNull())
			ipv4IspCityNodesObject.ispName = valueIpv4IspCityNodesIpv4IspCityNode["IspName"].asString();
		if(!valueIpv4IspCityNodesIpv4IspCityNode["GroupType"].isNull())
			ipv4IspCityNodesObject.groupType = valueIpv4IspCityNodesIpv4IspCityNode["GroupType"].asString();
		if(!valueIpv4IspCityNodesIpv4IspCityNode["DefaultSelected"].isNull())
			ipv4IspCityNodesObject.defaultSelected = valueIpv4IspCityNodesIpv4IspCityNode["DefaultSelected"].asString() == "true";
		auto allIps = value["Ips"]["Ip"];
		for (auto value : allIps)
			ipv4IspCityNodesObject.ips.push_back(value.asString());
		ipv4IspCityNodes_.push_back(ipv4IspCityNodesObject);
	}
	auto allDomainIpv4IspCityNodesNode = value["DomainIpv4IspCityNodes"]["DomainIpv4IspCityNode"];
	for (auto valueDomainIpv4IspCityNodesDomainIpv4IspCityNode : allDomainIpv4IspCityNodesNode)
	{
		DomainIpv4IspCityNode domainIpv4IspCityNodesObject;
		if(!valueDomainIpv4IspCityNodesDomainIpv4IspCityNode["CityCode"].isNull())
			domainIpv4IspCityNodesObject.cityCode = valueDomainIpv4IspCityNodesDomainIpv4IspCityNode["CityCode"].asString();
		if(!valueDomainIpv4IspCityNodesDomainIpv4IspCityNode["GroupName"].isNull())
			domainIpv4IspCityNodesObject.groupName = valueDomainIpv4IspCityNodesDomainIpv4IspCityNode["GroupName"].asString();
		if(!valueDomainIpv4IspCityNodesDomainIpv4IspCityNode["IspCode"].isNull())
			domainIpv4IspCityNodesObject.ispCode = valueDomainIpv4IspCityNodesDomainIpv4IspCityNode["IspCode"].asString();
		if(!valueDomainIpv4IspCityNodesDomainIpv4IspCityNode["CityName"].isNull())
			domainIpv4IspCityNodesObject.cityName = valueDomainIpv4IspCityNodesDomainIpv4IspCityNode["CityName"].asString();
		if(!valueDomainIpv4IspCityNodesDomainIpv4IspCityNode["IspName"].isNull())
			domainIpv4IspCityNodesObject.ispName = valueDomainIpv4IspCityNodesDomainIpv4IspCityNode["IspName"].asString();
		if(!valueDomainIpv4IspCityNodesDomainIpv4IspCityNode["GroupType"].isNull())
			domainIpv4IspCityNodesObject.groupType = valueDomainIpv4IspCityNodesDomainIpv4IspCityNode["GroupType"].asString();
		if(!valueDomainIpv4IspCityNodesDomainIpv4IspCityNode["DefaultSelected"].isNull())
			domainIpv4IspCityNodesObject.defaultSelected = valueDomainIpv4IspCityNodesDomainIpv4IspCityNode["DefaultSelected"].asString() == "true";
		auto allIps1 = value["Ips"]["Ip"];
		for (auto value : allIps1)
			domainIpv4IspCityNodesObject.ips1.push_back(value.asString());
		domainIpv4IspCityNodes_.push_back(domainIpv4IspCityNodesObject);
	}
	auto allDomainIpv6IspCityNodesNode = value["DomainIpv6IspCityNodes"]["DomainIpv6IspCityNode"];
	for (auto valueDomainIpv6IspCityNodesDomainIpv6IspCityNode : allDomainIpv6IspCityNodesNode)
	{
		DomainIpv6IspCityNode domainIpv6IspCityNodesObject;
		if(!valueDomainIpv6IspCityNodesDomainIpv6IspCityNode["CityCode"].isNull())
			domainIpv6IspCityNodesObject.cityCode = valueDomainIpv6IspCityNodesDomainIpv6IspCityNode["CityCode"].asString();
		if(!valueDomainIpv6IspCityNodesDomainIpv6IspCityNode["GroupName"].isNull())
			domainIpv6IspCityNodesObject.groupName = valueDomainIpv6IspCityNodesDomainIpv6IspCityNode["GroupName"].asString();
		if(!valueDomainIpv6IspCityNodesDomainIpv6IspCityNode["IspCode"].isNull())
			domainIpv6IspCityNodesObject.ispCode = valueDomainIpv6IspCityNodesDomainIpv6IspCityNode["IspCode"].asString();
		if(!valueDomainIpv6IspCityNodesDomainIpv6IspCityNode["CityName"].isNull())
			domainIpv6IspCityNodesObject.cityName = valueDomainIpv6IspCityNodesDomainIpv6IspCityNode["CityName"].asString();
		if(!valueDomainIpv6IspCityNodesDomainIpv6IspCityNode["IspName"].isNull())
			domainIpv6IspCityNodesObject.ispName = valueDomainIpv6IspCityNodesDomainIpv6IspCityNode["IspName"].asString();
		if(!valueDomainIpv6IspCityNodesDomainIpv6IspCityNode["GroupType"].isNull())
			domainIpv6IspCityNodesObject.groupType = valueDomainIpv6IspCityNodesDomainIpv6IspCityNode["GroupType"].asString();
		if(!valueDomainIpv6IspCityNodesDomainIpv6IspCityNode["DefaultSelected"].isNull())
			domainIpv6IspCityNodesObject.defaultSelected = valueDomainIpv6IspCityNodesDomainIpv6IspCityNode["DefaultSelected"].asString() == "true";
		auto allIps2 = value["Ips"]["ip"];
		for (auto value : allIps2)
			domainIpv6IspCityNodesObject.ips2.push_back(value.asString());
		domainIpv6IspCityNodes_.push_back(domainIpv6IspCityNodesObject);
	}
	auto allIpv6IspCityNodesNode = value["Ipv6IspCityNodes"]["Ipv6IspCityNode"];
	for (auto valueIpv6IspCityNodesIpv6IspCityNode : allIpv6IspCityNodesNode)
	{
		Ipv6IspCityNode ipv6IspCityNodesObject;
		if(!valueIpv6IspCityNodesIpv6IspCityNode["CityCode"].isNull())
			ipv6IspCityNodesObject.cityCode = valueIpv6IspCityNodesIpv6IspCityNode["CityCode"].asString();
		if(!valueIpv6IspCityNodesIpv6IspCityNode["GroupName"].isNull())
			ipv6IspCityNodesObject.groupName = valueIpv6IspCityNodesIpv6IspCityNode["GroupName"].asString();
		if(!valueIpv6IspCityNodesIpv6IspCityNode["IspCode"].isNull())
			ipv6IspCityNodesObject.ispCode = valueIpv6IspCityNodesIpv6IspCityNode["IspCode"].asString();
		if(!valueIpv6IspCityNodesIpv6IspCityNode["CityName"].isNull())
			ipv6IspCityNodesObject.cityName = valueIpv6IspCityNodesIpv6IspCityNode["CityName"].asString();
		if(!valueIpv6IspCityNodesIpv6IspCityNode["IspName"].isNull())
			ipv6IspCityNodesObject.ispName = valueIpv6IspCityNodesIpv6IspCityNode["IspName"].asString();
		if(!valueIpv6IspCityNodesIpv6IspCityNode["GroupType"].isNull())
			ipv6IspCityNodesObject.groupType = valueIpv6IspCityNodesIpv6IspCityNode["GroupType"].asString();
		if(!valueIpv6IspCityNodesIpv6IspCityNode["DefaultSelected"].isNull())
			ipv6IspCityNodesObject.defaultSelected = valueIpv6IspCityNodesIpv6IspCityNode["DefaultSelected"].asString() == "true";
		auto allIps3 = value["Ips"]["Ip"];
		for (auto value : allIps3)
			ipv6IspCityNodesObject.ips3.push_back(value.asString());
		ipv6IspCityNodes_.push_back(ipv6IspCityNodesObject);
	}

}

std::vector<DescribeDnsGtmMonitorAvailableConfigResult::Ipv4IspCityNode> DescribeDnsGtmMonitorAvailableConfigResult::getIpv4IspCityNodes()const
{
	return ipv4IspCityNodes_;
}

std::vector<DescribeDnsGtmMonitorAvailableConfigResult::DomainIpv4IspCityNode> DescribeDnsGtmMonitorAvailableConfigResult::getDomainIpv4IspCityNodes()const
{
	return domainIpv4IspCityNodes_;
}

std::vector<DescribeDnsGtmMonitorAvailableConfigResult::DomainIpv6IspCityNode> DescribeDnsGtmMonitorAvailableConfigResult::getDomainIpv6IspCityNodes()const
{
	return domainIpv6IspCityNodes_;
}

std::vector<DescribeDnsGtmMonitorAvailableConfigResult::Ipv6IspCityNode> DescribeDnsGtmMonitorAvailableConfigResult::getIpv6IspCityNodes()const
{
	return ipv6IspCityNodes_;
}

