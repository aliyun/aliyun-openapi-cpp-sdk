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

#include <alibabacloud/nlb/model/ListTagResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Nlb;
using namespace AlibabaCloud::Nlb::Model;

ListTagResourcesResult::ListTagResourcesResult() :
	ServiceResult()
{}

ListTagResourcesResult::ListTagResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTagResourcesResult::~ListTagResourcesResult()
{}

void ListTagResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagResourcesNode = value["TagResources"]["TagResultModelList"];
	for (auto valueTagResourcesTagResultModelList : allTagResourcesNode)
	{
		TagResultModelList tagResourcesObject;
		if(!valueTagResourcesTagResultModelList["ResourceId"].isNull())
			tagResourcesObject.resourceId = valueTagResourcesTagResultModelList["ResourceId"].asString();
		if(!valueTagResourcesTagResultModelList["ResourceType"].isNull())
			tagResourcesObject.resourceType = valueTagResourcesTagResultModelList["ResourceType"].asString();
		if(!valueTagResourcesTagResultModelList["RegionNo"].isNull())
			tagResourcesObject.regionNo = valueTagResourcesTagResultModelList["RegionNo"].asString();
		if(!valueTagResourcesTagResultModelList["AliUid"].isNull())
			tagResourcesObject.aliUid = std::stol(valueTagResourcesTagResultModelList["AliUid"].asString());
		if(!valueTagResourcesTagResultModelList["TagKey"].isNull())
			tagResourcesObject.tagKey = valueTagResourcesTagResultModelList["TagKey"].asString();
		if(!valueTagResourcesTagResultModelList["TagValue"].isNull())
			tagResourcesObject.tagValue = valueTagResourcesTagResultModelList["TagValue"].asString();
		if(!valueTagResourcesTagResultModelList["Scope"].isNull())
			tagResourcesObject.scope = valueTagResourcesTagResultModelList["Scope"].asString();
		if(!valueTagResourcesTagResultModelList["Category"].isNull())
			tagResourcesObject.category = valueTagResourcesTagResultModelList["Category"].asString();
		tagResources_.push_back(tagResourcesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListTagResourcesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListTagResourcesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListTagResourcesResult::TagResultModelList> ListTagResourcesResult::getTagResources()const
{
	return tagResources_;
}

int ListTagResourcesResult::getMaxResults()const
{
	return maxResults_;
}

