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

#include <alibabacloud/resourcecenter/model/SearchMultiAccountResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceCenter;
using namespace AlibabaCloud::ResourceCenter::Model;

SearchMultiAccountResourcesResult::SearchMultiAccountResourcesResult() :
	ServiceResult()
{}

SearchMultiAccountResourcesResult::SearchMultiAccountResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

SearchMultiAccountResourcesResult::~SearchMultiAccountResourcesResult()
{}

void SearchMultiAccountResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFiltersNode = value["Filters"]["Filter"];
	for (auto valueFiltersFilter : allFiltersNode)
	{
		Filter filtersObject;
		if(!valueFiltersFilter["Key"].isNull())
			filtersObject.key = valueFiltersFilter["Key"].asString();
		if(!valueFiltersFilter["MatchType"].isNull())
			filtersObject.matchType = valueFiltersFilter["MatchType"].asString();
		auto allValues = value["Values"]["Value"];
		for (auto value : allValues)
			filtersObject.values.push_back(value.asString());
		filters_.push_back(filtersObject);
	}
	auto allResourcesNode = value["Resources"]["Resource"];
	for (auto valueResourcesResource : allResourcesNode)
	{
		Resource resourcesObject;
		if(!valueResourcesResource["AccountId"].isNull())
			resourcesObject.accountId = valueResourcesResource["AccountId"].asString();
		if(!valueResourcesResource["CreateTime"].isNull())
			resourcesObject.createTime = valueResourcesResource["CreateTime"].asString();
		if(!valueResourcesResource["ExpireTime"].isNull())
			resourcesObject.expireTime = valueResourcesResource["ExpireTime"].asString();
		if(!valueResourcesResource["RegionId"].isNull())
			resourcesObject.regionId = valueResourcesResource["RegionId"].asString();
		if(!valueResourcesResource["ResourceGroupId"].isNull())
			resourcesObject.resourceGroupId = valueResourcesResource["ResourceGroupId"].asString();
		if(!valueResourcesResource["ResourceId"].isNull())
			resourcesObject.resourceId = valueResourcesResource["ResourceId"].asString();
		if(!valueResourcesResource["ResourceName"].isNull())
			resourcesObject.resourceName = valueResourcesResource["ResourceName"].asString();
		if(!valueResourcesResource["ResourceType"].isNull())
			resourcesObject.resourceType = valueResourcesResource["ResourceType"].asString();
		if(!valueResourcesResource["ZoneId"].isNull())
			resourcesObject.zoneId = valueResourcesResource["ZoneId"].asString();
		auto allIpAddressAttributesNode = valueResourcesResource["IpAddressAttributes"]["IpAddressAttribute"];
		for (auto valueResourcesResourceIpAddressAttributesIpAddressAttribute : allIpAddressAttributesNode)
		{
			Resource::IpAddressAttribute ipAddressAttributesObject;
			if(!valueResourcesResourceIpAddressAttributesIpAddressAttribute["IpAddress"].isNull())
				ipAddressAttributesObject.ipAddress = valueResourcesResourceIpAddressAttributesIpAddressAttribute["IpAddress"].asString();
			if(!valueResourcesResourceIpAddressAttributesIpAddressAttribute["NetworkType"].isNull())
				ipAddressAttributesObject.networkType = valueResourcesResourceIpAddressAttributesIpAddressAttribute["NetworkType"].asString();
			if(!valueResourcesResourceIpAddressAttributesIpAddressAttribute["Version"].isNull())
				ipAddressAttributesObject.version = valueResourcesResourceIpAddressAttributesIpAddressAttribute["Version"].asString();
			resourcesObject.ipAddressAttributes.push_back(ipAddressAttributesObject);
		}
		auto allTagsNode = valueResourcesResource["Tags"]["Tag"];
		for (auto valueResourcesResourceTagsTag : allTagsNode)
		{
			Resource::Tag tagsObject;
			if(!valueResourcesResourceTagsTag["Key"].isNull())
				tagsObject.key = valueResourcesResourceTagsTag["Key"].asString();
			if(!valueResourcesResourceTagsTag["Value"].isNull())
				tagsObject.value = valueResourcesResourceTagsTag["Value"].asString();
			resourcesObject.tags.push_back(tagsObject);
		}
		auto allIpAddresses = value["IpAddresses"]["IpAddress"];
		for (auto value : allIpAddresses)
			resourcesObject.ipAddresses.push_back(value.asString());
		resources_.push_back(resourcesObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["Scope"].isNull())
		scope_ = value["Scope"].asString();

}

std::vector<SearchMultiAccountResourcesResult::Filter> SearchMultiAccountResourcesResult::getFilters()const
{
	return filters_;
}

std::string SearchMultiAccountResourcesResult::getNextToken()const
{
	return nextToken_;
}

std::string SearchMultiAccountResourcesResult::getScope()const
{
	return scope_;
}

int SearchMultiAccountResourcesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<SearchMultiAccountResourcesResult::Resource> SearchMultiAccountResourcesResult::getResources()const
{
	return resources_;
}

