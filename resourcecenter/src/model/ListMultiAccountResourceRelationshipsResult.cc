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

#include <alibabacloud/resourcecenter/model/ListMultiAccountResourceRelationshipsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceCenter;
using namespace AlibabaCloud::ResourceCenter::Model;

ListMultiAccountResourceRelationshipsResult::ListMultiAccountResourceRelationshipsResult() :
	ServiceResult()
{}

ListMultiAccountResourceRelationshipsResult::ListMultiAccountResourceRelationshipsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListMultiAccountResourceRelationshipsResult::~ListMultiAccountResourceRelationshipsResult()
{}

void ListMultiAccountResourceRelationshipsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourceRelationshipsNode = value["ResourceRelationships"]["ResourceRelationship"];
	for (auto valueResourceRelationshipsResourceRelationship : allResourceRelationshipsNode)
	{
		ResourceRelationship resourceRelationshipsObject;
		if(!valueResourceRelationshipsResourceRelationship["AccountId"].isNull())
			resourceRelationshipsObject.accountId = valueResourceRelationshipsResourceRelationship["AccountId"].asString();
		if(!valueResourceRelationshipsResourceRelationship["RegionId"].isNull())
			resourceRelationshipsObject.regionId = valueResourceRelationshipsResourceRelationship["RegionId"].asString();
		if(!valueResourceRelationshipsResourceRelationship["ResourceType"].isNull())
			resourceRelationshipsObject.resourceType = valueResourceRelationshipsResourceRelationship["ResourceType"].asString();
		if(!valueResourceRelationshipsResourceRelationship["ResourceId"].isNull())
			resourceRelationshipsObject.resourceId = valueResourceRelationshipsResourceRelationship["ResourceId"].asString();
		if(!valueResourceRelationshipsResourceRelationship["RelatedResourceRegionId"].isNull())
			resourceRelationshipsObject.relatedResourceRegionId = valueResourceRelationshipsResourceRelationship["RelatedResourceRegionId"].asString();
		if(!valueResourceRelationshipsResourceRelationship["RelatedResourceType"].isNull())
			resourceRelationshipsObject.relatedResourceType = valueResourceRelationshipsResourceRelationship["RelatedResourceType"].asString();
		if(!valueResourceRelationshipsResourceRelationship["RelatedResourceId"].isNull())
			resourceRelationshipsObject.relatedResourceId = valueResourceRelationshipsResourceRelationship["RelatedResourceId"].asString();
		resourceRelationships_.push_back(resourceRelationshipsObject);
	}
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["Scope"].isNull())
		scope_ = value["Scope"].asString();

}

std::vector<ListMultiAccountResourceRelationshipsResult::ResourceRelationship> ListMultiAccountResourceRelationshipsResult::getResourceRelationships()const
{
	return resourceRelationships_;
}

std::string ListMultiAccountResourceRelationshipsResult::getNextToken()const
{
	return nextToken_;
}

std::string ListMultiAccountResourceRelationshipsResult::getScope()const
{
	return scope_;
}

int ListMultiAccountResourceRelationshipsResult::getMaxResults()const
{
	return maxResults_;
}

