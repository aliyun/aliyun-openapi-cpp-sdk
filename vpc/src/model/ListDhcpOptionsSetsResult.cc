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

#include <alibabacloud/vpc/model/ListDhcpOptionsSetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

ListDhcpOptionsSetsResult::ListDhcpOptionsSetsResult() :
	ServiceResult()
{}

ListDhcpOptionsSetsResult::ListDhcpOptionsSetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDhcpOptionsSetsResult::~ListDhcpOptionsSetsResult()
{}

void ListDhcpOptionsSetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDhcpOptionsSetsNode = value["DhcpOptionsSets"]["DhcpOptionsSet"];
	for (auto valueDhcpOptionsSetsDhcpOptionsSet : allDhcpOptionsSetsNode)
	{
		DhcpOptionsSet dhcpOptionsSetsObject;
		if(!valueDhcpOptionsSetsDhcpOptionsSet["DhcpOptionsSetDescription"].isNull())
			dhcpOptionsSetsObject.dhcpOptionsSetDescription = valueDhcpOptionsSetsDhcpOptionsSet["DhcpOptionsSetDescription"].asString();
		if(!valueDhcpOptionsSetsDhcpOptionsSet["Status"].isNull())
			dhcpOptionsSetsObject.status = valueDhcpOptionsSetsDhcpOptionsSet["Status"].asString();
		if(!valueDhcpOptionsSetsDhcpOptionsSet["DhcpOptionsSetId"].isNull())
			dhcpOptionsSetsObject.dhcpOptionsSetId = valueDhcpOptionsSetsDhcpOptionsSet["DhcpOptionsSetId"].asString();
		if(!valueDhcpOptionsSetsDhcpOptionsSet["DhcpOptionsSetName"].isNull())
			dhcpOptionsSetsObject.dhcpOptionsSetName = valueDhcpOptionsSetsDhcpOptionsSet["DhcpOptionsSetName"].asString();
		if(!valueDhcpOptionsSetsDhcpOptionsSet["AssociateVpcCount"].isNull())
			dhcpOptionsSetsObject.associateVpcCount = std::stoi(valueDhcpOptionsSetsDhcpOptionsSet["AssociateVpcCount"].asString());
		if(!valueDhcpOptionsSetsDhcpOptionsSet["OwnerId"].isNull())
			dhcpOptionsSetsObject.ownerId = std::stol(valueDhcpOptionsSetsDhcpOptionsSet["OwnerId"].asString());
		if(!valueDhcpOptionsSetsDhcpOptionsSet["ResourceGroupId"].isNull())
			dhcpOptionsSetsObject.resourceGroupId = valueDhcpOptionsSetsDhcpOptionsSet["ResourceGroupId"].asString();
		if(!valueDhcpOptionsSetsDhcpOptionsSet["CreationTime"].isNull())
			dhcpOptionsSetsObject.creationTime = valueDhcpOptionsSetsDhcpOptionsSet["CreationTime"].asString();
		auto allTagsNode = valueDhcpOptionsSetsDhcpOptionsSet["Tags"]["Tag"];
		for (auto valueDhcpOptionsSetsDhcpOptionsSetTagsTag : allTagsNode)
		{
			DhcpOptionsSet::Tag tagsObject;
			if(!valueDhcpOptionsSetsDhcpOptionsSetTagsTag["Key"].isNull())
				tagsObject.key = valueDhcpOptionsSetsDhcpOptionsSetTagsTag["Key"].asString();
			if(!valueDhcpOptionsSetsDhcpOptionsSetTagsTag["Value"].isNull())
				tagsObject.value = valueDhcpOptionsSetsDhcpOptionsSetTagsTag["Value"].asString();
			dhcpOptionsSetsObject.tags.push_back(tagsObject);
		}
		auto dhcpOptionsNode = value["DhcpOptions"];
		if(!dhcpOptionsNode["DomainNameServers"].isNull())
			dhcpOptionsSetsObject.dhcpOptions.domainNameServers = dhcpOptionsNode["DomainNameServers"].asString();
		if(!dhcpOptionsNode["DomainName"].isNull())
			dhcpOptionsSetsObject.dhcpOptions.domainName = dhcpOptionsNode["DomainName"].asString();
		if(!dhcpOptionsNode["LeaseTime"].isNull())
			dhcpOptionsSetsObject.dhcpOptions.leaseTime = dhcpOptionsNode["LeaseTime"].asString();
		if(!dhcpOptionsNode["Ipv6LeaseTime"].isNull())
			dhcpOptionsSetsObject.dhcpOptions.ipv6LeaseTime = dhcpOptionsNode["Ipv6LeaseTime"].asString();
		dhcpOptionsSets_.push_back(dhcpOptionsSetsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::vector<ListDhcpOptionsSetsResult::DhcpOptionsSet> ListDhcpOptionsSetsResult::getDhcpOptionsSets()const
{
	return dhcpOptionsSets_;
}

std::string ListDhcpOptionsSetsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListDhcpOptionsSetsResult::getNextToken()const
{
	return nextToken_;
}

