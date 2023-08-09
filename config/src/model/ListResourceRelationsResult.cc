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

#include <alibabacloud/config/model/ListResourceRelationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Config;
using namespace AlibabaCloud::Config::Model;

ListResourceRelationsResult::ListResourceRelationsResult() :
	ServiceResult()
{}

ListResourceRelationsResult::ListResourceRelationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListResourceRelationsResult::~ListResourceRelationsResult()
{}

void ListResourceRelationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resourceRelationsNode = value["ResourceRelations"];
	if(!resourceRelationsNode["NextToken"].isNull())
		resourceRelations_.nextToken = resourceRelationsNode["NextToken"].asString();
	if(!resourceRelationsNode["MaxResults"].isNull())
		resourceRelations_.maxResults = std::stoi(resourceRelationsNode["MaxResults"].asString());
	if(!resourceRelationsNode["TotalCount"].isNull())
		resourceRelations_.totalCount = std::stoi(resourceRelationsNode["TotalCount"].asString());
	auto allResourceRelationListNode = resourceRelationsNode["ResourceRelationList"]["ResourceRelationListItem"];
	for (auto resourceRelationsNodeResourceRelationListResourceRelationListItem : allResourceRelationListNode)
	{
		ResourceRelations::ResourceRelationListItem resourceRelationListItemObject;
		if(!resourceRelationsNodeResourceRelationListResourceRelationListItem["AccountId"].isNull())
			resourceRelationListItemObject.accountId = std::stol(resourceRelationsNodeResourceRelationListResourceRelationListItem["AccountId"].asString());
		if(!resourceRelationsNodeResourceRelationListResourceRelationListItem["SourceResourceType"].isNull())
			resourceRelationListItemObject.sourceResourceType = resourceRelationsNodeResourceRelationListResourceRelationListItem["SourceResourceType"].asString();
		if(!resourceRelationsNodeResourceRelationListResourceRelationListItem["SourceResourceRegionId"].isNull())
			resourceRelationListItemObject.sourceResourceRegionId = resourceRelationsNodeResourceRelationListResourceRelationListItem["SourceResourceRegionId"].asString();
		if(!resourceRelationsNodeResourceRelationListResourceRelationListItem["SourceResourceId"].isNull())
			resourceRelationListItemObject.sourceResourceId = resourceRelationsNodeResourceRelationListResourceRelationListItem["SourceResourceId"].asString();
		if(!resourceRelationsNodeResourceRelationListResourceRelationListItem["TargetResourceType"].isNull())
			resourceRelationListItemObject.targetResourceType = resourceRelationsNodeResourceRelationListResourceRelationListItem["TargetResourceType"].asString();
		if(!resourceRelationsNodeResourceRelationListResourceRelationListItem["TargetResourceId"].isNull())
			resourceRelationListItemObject.targetResourceId = resourceRelationsNodeResourceRelationListResourceRelationListItem["TargetResourceId"].asString();
		if(!resourceRelationsNodeResourceRelationListResourceRelationListItem["RelationType"].isNull())
			resourceRelationListItemObject.relationType = resourceRelationsNodeResourceRelationListResourceRelationListItem["RelationType"].asString();
		resourceRelations_.resourceRelationList.push_back(resourceRelationListItemObject);
	}

}

ListResourceRelationsResult::ResourceRelations ListResourceRelationsResult::getResourceRelations()const
{
	return resourceRelations_;
}

