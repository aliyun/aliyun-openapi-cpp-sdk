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
	auto allDomainsNode = value["Domains"]["Domain"];
	for (auto valueDomainsDomain : allDomainsNode)
	{
		Domain domainsObject;
		if(!valueDomainsDomain["Remark"].isNull())
			domainsObject.remark = valueDomainsDomain["Remark"].asString();
		if(!valueDomainsDomain["CreateTime"].isNull())
			domainsObject.createTime = valueDomainsDomain["CreateTime"].asString();
		if(!valueDomainsDomain["RecordCount"].isNull())
			domainsObject.recordCount = std::stol(valueDomainsDomain["RecordCount"].asString());
		if(!valueDomainsDomain["InstanceId"].isNull())
			domainsObject.instanceId = valueDomainsDomain["InstanceId"].asString();
		if(!valueDomainsDomain["DomainName"].isNull())
			domainsObject.domainName = valueDomainsDomain["DomainName"].asString();
		if(!valueDomainsDomain["DomainId"].isNull())
			domainsObject.domainId = valueDomainsDomain["DomainId"].asString();
		if(!valueDomainsDomain["AliDomain"].isNull())
			domainsObject.aliDomain = valueDomainsDomain["AliDomain"].asString() == "true";
		if(!valueDomainsDomain["GroupId"].isNull())
			domainsObject.groupId = valueDomainsDomain["GroupId"].asString();
		if(!valueDomainsDomain["GroupName"].isNull())
			domainsObject.groupName = valueDomainsDomain["GroupName"].asString();
		if(!valueDomainsDomain["ResourceGroupId"].isNull())
			domainsObject.resourceGroupId = valueDomainsDomain["ResourceGroupId"].asString();
		if(!valueDomainsDomain["InstanceEndTime"].isNull())
			domainsObject.instanceEndTime = valueDomainsDomain["InstanceEndTime"].asString();
		if(!valueDomainsDomain["InstanceExpired"].isNull())
			domainsObject.instanceExpired = valueDomainsDomain["InstanceExpired"].asString() == "true";
		if(!valueDomainsDomain["VersionName"].isNull())
			domainsObject.versionName = valueDomainsDomain["VersionName"].asString();
		if(!valueDomainsDomain["VersionCode"].isNull())
			domainsObject.versionCode = valueDomainsDomain["VersionCode"].asString();
		if(!valueDomainsDomain["PunyCode"].isNull())
			domainsObject.punyCode = valueDomainsDomain["PunyCode"].asString();
		if(!valueDomainsDomain["RegistrantEmail"].isNull())
			domainsObject.registrantEmail = valueDomainsDomain["RegistrantEmail"].asString();
		if(!valueDomainsDomain["CreateTimestamp"].isNull())
			domainsObject.createTimestamp = std::stol(valueDomainsDomain["CreateTimestamp"].asString());
		if(!valueDomainsDomain["Starmark"].isNull())
			domainsObject.starmark = valueDomainsDomain["Starmark"].asString() == "true";
		auto allTagsNode = valueDomainsDomain["Tags"]["Tag"];
		for (auto valueDomainsDomainTagsTag : allTagsNode)
		{
			Domain::Tag tagsObject;
			if(!valueDomainsDomainTagsTag["Key"].isNull())
				tagsObject.key = valueDomainsDomainTagsTag["Key"].asString();
			if(!valueDomainsDomainTagsTag["Value"].isNull())
				tagsObject.value = valueDomainsDomainTagsTag["Value"].asString();
			domainsObject.tags.push_back(tagsObject);
		}
		auto allDnsServers = value["DnsServers"]["DnsServer"];
		for (auto value : allDnsServers)
			domainsObject.dnsServers.push_back(value.asString());
		domains_.push_back(domainsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());

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

