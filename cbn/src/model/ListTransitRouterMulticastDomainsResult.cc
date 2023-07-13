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

#include <alibabacloud/cbn/model/ListTransitRouterMulticastDomainsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cbn;
using namespace AlibabaCloud::Cbn::Model;

ListTransitRouterMulticastDomainsResult::ListTransitRouterMulticastDomainsResult() :
	ServiceResult()
{}

ListTransitRouterMulticastDomainsResult::ListTransitRouterMulticastDomainsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTransitRouterMulticastDomainsResult::~ListTransitRouterMulticastDomainsResult()
{}

void ListTransitRouterMulticastDomainsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTransitRouterMulticastDomainsNode = value["TransitRouterMulticastDomains"]["TransitRouterMulticastDomain"];
	for (auto valueTransitRouterMulticastDomainsTransitRouterMulticastDomain : allTransitRouterMulticastDomainsNode)
	{
		TransitRouterMulticastDomain transitRouterMulticastDomainsObject;
		if(!valueTransitRouterMulticastDomainsTransitRouterMulticastDomain["TransitRouterMulticastDomainId"].isNull())
			transitRouterMulticastDomainsObject.transitRouterMulticastDomainId = valueTransitRouterMulticastDomainsTransitRouterMulticastDomain["TransitRouterMulticastDomainId"].asString();
		if(!valueTransitRouterMulticastDomainsTransitRouterMulticastDomain["TransitRouterMulticastDomainName"].isNull())
			transitRouterMulticastDomainsObject.transitRouterMulticastDomainName = valueTransitRouterMulticastDomainsTransitRouterMulticastDomain["TransitRouterMulticastDomainName"].asString();
		if(!valueTransitRouterMulticastDomainsTransitRouterMulticastDomain["TransitRouterMulticastDomainDescription"].isNull())
			transitRouterMulticastDomainsObject.transitRouterMulticastDomainDescription = valueTransitRouterMulticastDomainsTransitRouterMulticastDomain["TransitRouterMulticastDomainDescription"].asString();
		if(!valueTransitRouterMulticastDomainsTransitRouterMulticastDomain["Status"].isNull())
			transitRouterMulticastDomainsObject.status = valueTransitRouterMulticastDomainsTransitRouterMulticastDomain["Status"].asString();
		if(!valueTransitRouterMulticastDomainsTransitRouterMulticastDomain["TransitRouterId"].isNull())
			transitRouterMulticastDomainsObject.transitRouterId = valueTransitRouterMulticastDomainsTransitRouterMulticastDomain["TransitRouterId"].asString();
		if(!valueTransitRouterMulticastDomainsTransitRouterMulticastDomain["RegionId"].isNull())
			transitRouterMulticastDomainsObject.regionId = valueTransitRouterMulticastDomainsTransitRouterMulticastDomain["RegionId"].asString();
		if(!valueTransitRouterMulticastDomainsTransitRouterMulticastDomain["CenId"].isNull())
			transitRouterMulticastDomainsObject.cenId = valueTransitRouterMulticastDomainsTransitRouterMulticastDomain["CenId"].asString();
		auto allTagsNode = valueTransitRouterMulticastDomainsTransitRouterMulticastDomain["Tags"]["Tag"];
		for (auto valueTransitRouterMulticastDomainsTransitRouterMulticastDomainTagsTag : allTagsNode)
		{
			TransitRouterMulticastDomain::Tag tagsObject;
			if(!valueTransitRouterMulticastDomainsTransitRouterMulticastDomainTagsTag["Key"].isNull())
				tagsObject.key = valueTransitRouterMulticastDomainsTransitRouterMulticastDomainTagsTag["Key"].asString();
			if(!valueTransitRouterMulticastDomainsTransitRouterMulticastDomainTagsTag["Value"].isNull())
				tagsObject.value = valueTransitRouterMulticastDomainsTransitRouterMulticastDomainTagsTag["Value"].asString();
			transitRouterMulticastDomainsObject.tags.push_back(tagsObject);
		}
		transitRouterMulticastDomains_.push_back(transitRouterMulticastDomainsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

int ListTransitRouterMulticastDomainsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListTransitRouterMulticastDomainsResult::getNextToken()const
{
	return nextToken_;
}

int ListTransitRouterMulticastDomainsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListTransitRouterMulticastDomainsResult::TransitRouterMulticastDomain> ListTransitRouterMulticastDomainsResult::getTransitRouterMulticastDomains()const
{
	return transitRouterMulticastDomains_;
}

