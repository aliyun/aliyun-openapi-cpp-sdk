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

#include <alibabacloud/alidns/model/DescribeDomainsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDomainsResult::DescribeDomainsResult() :
	ServiceResult()
{}

DescribeDomainsResult::DescribeDomainsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainsResult::~DescribeDomainsResult()
{}

void DescribeDomainsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDomains = value["Domains"]["Domain"];
	for (auto value : allDomains)
	{
		Domain domainsObject;
		if(!value["DomainId"].isNull())
			domainsObject.domainId = value["DomainId"].asString();
		if(!value["DomainName"].isNull())
			domainsObject.domainName = value["DomainName"].asString();
		if(!value["PunyCode"].isNull())
			domainsObject.punyCode = value["PunyCode"].asString();
		if(!value["AliDomain"].isNull())
			domainsObject.aliDomain = value["AliDomain"].asString() == "true";
		if(!value["RecordCount"].isNull())
			domainsObject.recordCount = std::stol(value["RecordCount"].asString());
		if(!value["RegistrantEmail"].isNull())
			domainsObject.registrantEmail = value["RegistrantEmail"].asString();
		if(!value["Remark"].isNull())
			domainsObject.remark = value["Remark"].asString();
		if(!value["GroupId"].isNull())
			domainsObject.groupId = value["GroupId"].asString();
		if(!value["GroupName"].isNull())
			domainsObject.groupName = value["GroupName"].asString();
		if(!value["InstanceId"].isNull())
			domainsObject.instanceId = value["InstanceId"].asString();
		if(!value["VersionCode"].isNull())
			domainsObject.versionCode = value["VersionCode"].asString();
		if(!value["VersionName"].isNull())
			domainsObject.versionName = value["VersionName"].asString();
		if(!value["InstanceEndTime"].isNull())
			domainsObject.instanceEndTime = value["InstanceEndTime"].asString();
		if(!value["InstanceExpired"].isNull())
			domainsObject.instanceExpired = value["InstanceExpired"].asString() == "true";
		auto allDnsServers = value["DnsServers"]["DnsServer"];
		for (auto value : allDnsServers)
			domainsObject.dnsServers.push_back(value.asString());
		domains_.push_back(domainsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

std::vector<DescribeDomainsResult::Domain> DescribeDomainsResult::getDomains()const
{
	return domains_;
}

long DescribeDomainsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeDomainsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeDomainsResult::getPageNumber()const
{
	return pageNumber_;
}

