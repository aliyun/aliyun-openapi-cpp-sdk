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

#include <alibabacloud/alidns/model/DescribeDnsCacheDomainsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDnsCacheDomainsResult::DescribeDnsCacheDomainsResult() :
	ServiceResult()
{}

DescribeDnsCacheDomainsResult::DescribeDnsCacheDomainsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDnsCacheDomainsResult::~DescribeDnsCacheDomainsResult()
{}

void DescribeDnsCacheDomainsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomainsNode = value["Domains"]["Domain"];
	for (auto valueDomainsDomain : allDomainsNode)
	{
		Domain domainsObject;
		if(!valueDomainsDomain["SourceProtocol"].isNull())
			domainsObject.sourceProtocol = valueDomainsDomain["SourceProtocol"].asString();
		if(!valueDomainsDomain["UpdateTime"].isNull())
			domainsObject.updateTime = valueDomainsDomain["UpdateTime"].asString();
		if(!valueDomainsDomain["Remark"].isNull())
			domainsObject.remark = valueDomainsDomain["Remark"].asString();
		if(!valueDomainsDomain["ExpireTime"].isNull())
			domainsObject.expireTime = valueDomainsDomain["ExpireTime"].asString();
		if(!valueDomainsDomain["CreateTime"].isNull())
			domainsObject.createTime = valueDomainsDomain["CreateTime"].asString();
		if(!valueDomainsDomain["InstanceId"].isNull())
			domainsObject.instanceId = valueDomainsDomain["InstanceId"].asString();
		if(!valueDomainsDomain["SourceEdns"].isNull())
			domainsObject.sourceEdns = valueDomainsDomain["SourceEdns"].asString();
		if(!valueDomainsDomain["DomainName"].isNull())
			domainsObject.domainName = valueDomainsDomain["DomainName"].asString();
		if(!valueDomainsDomain["DomainId"].isNull())
			domainsObject.domainId = valueDomainsDomain["DomainId"].asString();
		if(!valueDomainsDomain["UpdateTimestamp"].isNull())
			domainsObject.updateTimestamp = std::stol(valueDomainsDomain["UpdateTimestamp"].asString());
		if(!valueDomainsDomain["ExpireTimestamp"].isNull())
			domainsObject.expireTimestamp = std::stol(valueDomainsDomain["ExpireTimestamp"].asString());
		if(!valueDomainsDomain["CacheTtlMax"].isNull())
			domainsObject.cacheTtlMax = std::stoi(valueDomainsDomain["CacheTtlMax"].asString());
		if(!valueDomainsDomain["CacheTtlMin"].isNull())
			domainsObject.cacheTtlMin = std::stoi(valueDomainsDomain["CacheTtlMin"].asString());
		if(!valueDomainsDomain["VersionCode"].isNull())
			domainsObject.versionCode = valueDomainsDomain["VersionCode"].asString();
		if(!valueDomainsDomain["CreateTimestamp"].isNull())
			domainsObject.createTimestamp = std::stol(valueDomainsDomain["CreateTimestamp"].asString());
		auto allSourceDnsServersNode = valueDomainsDomain["SourceDnsServers"]["SourceDnsServer"];
		for (auto valueDomainsDomainSourceDnsServersSourceDnsServer : allSourceDnsServersNode)
		{
			Domain::SourceDnsServer sourceDnsServersObject;
			if(!valueDomainsDomainSourceDnsServersSourceDnsServer["Host"].isNull())
				sourceDnsServersObject.host = valueDomainsDomainSourceDnsServersSourceDnsServer["Host"].asString();
			if(!valueDomainsDomainSourceDnsServersSourceDnsServer["Port"].isNull())
				sourceDnsServersObject.port = valueDomainsDomainSourceDnsServersSourceDnsServer["Port"].asString();
			domainsObject.sourceDnsServers.push_back(sourceDnsServersObject);
		}
		domains_.push_back(domainsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());

}

std::vector<DescribeDnsCacheDomainsResult::Domain> DescribeDnsCacheDomainsResult::getDomains()const
{
	return domains_;
}

long DescribeDnsCacheDomainsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeDnsCacheDomainsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeDnsCacheDomainsResult::getPageNumber()const
{
	return pageNumber_;
}

