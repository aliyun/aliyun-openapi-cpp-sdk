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

#include <alibabacloud/privatelink/model/ListVpcEndpointServiceResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Privatelink;
using namespace AlibabaCloud::Privatelink::Model;

ListVpcEndpointServiceResourcesResult::ListVpcEndpointServiceResourcesResult() :
	ServiceResult()
{}

ListVpcEndpointServiceResourcesResult::ListVpcEndpointServiceResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListVpcEndpointServiceResourcesResult::~ListVpcEndpointServiceResourcesResult()
{}

void ListVpcEndpointServiceResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourcesNode = value["Resources"]["Resource"];
	for (auto valueResourcesResource : allResourcesNode)
	{
		Resource resourcesObject;
		if(!valueResourcesResource["VpcId"].isNull())
			resourcesObject.vpcId = valueResourcesResource["VpcId"].asString();
		if(!valueResourcesResource["VSwitchId"].isNull())
			resourcesObject.vSwitchId = valueResourcesResource["VSwitchId"].asString();
		if(!valueResourcesResource["ResourceType"].isNull())
			resourcesObject.resourceType = valueResourcesResource["ResourceType"].asString();
		if(!valueResourcesResource["ZoneId"].isNull())
			resourcesObject.zoneId = valueResourcesResource["ZoneId"].asString();
		if(!valueResourcesResource["Ip"].isNull())
			resourcesObject.ip = valueResourcesResource["Ip"].asString();
		if(!valueResourcesResource["ResourceId"].isNull())
			resourcesObject.resourceId = valueResourcesResource["ResourceId"].asString();
		if(!valueResourcesResource["RegionId"].isNull())
			resourcesObject.regionId = valueResourcesResource["RegionId"].asString();
		if(!valueResourcesResource["RelatedEndpointCount"].isNull())
			resourcesObject.relatedEndpointCount = std::stol(valueResourcesResource["RelatedEndpointCount"].asString());
		if(!valueResourcesResource["RelatedDeprecatedEndpointCount"].isNull())
			resourcesObject.relatedDeprecatedEndpointCount = std::stol(valueResourcesResource["RelatedDeprecatedEndpointCount"].asString());
		if(!valueResourcesResource["AutoAllocatedEnabled"].isNull())
			resourcesObject.autoAllocatedEnabled = valueResourcesResource["AutoAllocatedEnabled"].asString() == "true";
		if(!valueResourcesResource["StatusInfo"].isNull())
			resourcesObject.statusInfo = valueResourcesResource["StatusInfo"].asString();
		if(!valueResourcesResource["ResourceSupportIPv6"].isNull())
			resourcesObject.resourceSupportIPv6 = valueResourcesResource["ResourceSupportIPv6"].asString() == "true";
		resources_.push_back(resourcesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::string ListVpcEndpointServiceResourcesResult::getNextToken()const
{
	return nextToken_;
}

int ListVpcEndpointServiceResourcesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListVpcEndpointServiceResourcesResult::Resource> ListVpcEndpointServiceResourcesResult::getResources()const
{
	return resources_;
}

