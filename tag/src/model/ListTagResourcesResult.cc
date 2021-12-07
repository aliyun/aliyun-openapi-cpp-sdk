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

#include <alibabacloud/tag/model/ListTagResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Tag;
using namespace AlibabaCloud::Tag::Model;

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
	auto allTagResourcesNode = value["TagResources"]["TagResource"];
	for (auto valueTagResourcesTagResource : allTagResourcesNode)
	{
		TagResource tagResourcesObject;
		if(!valueTagResourcesTagResource["ResourceARN"].isNull())
			tagResourcesObject.resourceARN = valueTagResourcesTagResource["ResourceARN"].asString();
		auto allTagsNode = valueTagResourcesTagResource["Tags"]["Tag"];
		for (auto valueTagResourcesTagResourceTagsTag : allTagsNode)
		{
			TagResource::Tag tagsObject;
			if(!valueTagResourcesTagResourceTagsTag["Key"].isNull())
				tagsObject.key = valueTagResourcesTagResourceTagsTag["Key"].asString();
			if(!valueTagResourcesTagResourceTagsTag["Value"].isNull())
				tagsObject.value = valueTagResourcesTagResourceTagsTag["Value"].asString();
			if(!valueTagResourcesTagResourceTagsTag["Category"].isNull())
				tagsObject.category = valueTagResourcesTagResourceTagsTag["Category"].asString();
			tagResourcesObject.tags.push_back(tagsObject);
		}
		tagResources_.push_back(tagResourcesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListTagResourcesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListTagResourcesResult::TagResource> ListTagResourcesResult::getTagResources()const
{
	return tagResources_;
}

