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

#include <alibabacloud/tag/model/ListResourcesByTagResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Tag;
using namespace AlibabaCloud::Tag::Model;

ListResourcesByTagResult::ListResourcesByTagResult() :
	ServiceResult()
{}

ListResourcesByTagResult::ListResourcesByTagResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListResourcesByTagResult::~ListResourcesByTagResult()
{}

void ListResourcesByTagResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourcesNode = value["Resources"]["TagResource"];
	for (auto valueResourcesTagResource : allResourcesNode)
	{
		TagResource resourcesObject;
		if(!valueResourcesTagResource["ResourceId"].isNull())
			resourcesObject.resourceId = valueResourcesTagResource["ResourceId"].asString();
		auto allTagsNode = valueResourcesTagResource["Tags"]["Tag"];
		for (auto valueResourcesTagResourceTagsTag : allTagsNode)
		{
			TagResource::Tag tagsObject;
			if(!valueResourcesTagResourceTagsTag["Category"].isNull())
				tagsObject.category = valueResourcesTagResourceTagsTag["Category"].asString();
			if(!valueResourcesTagResourceTagsTag["Key"].isNull())
				tagsObject.key = valueResourcesTagResourceTagsTag["Key"].asString();
			if(!valueResourcesTagResourceTagsTag["Value"].isNull())
				tagsObject.value = valueResourcesTagResourceTagsTag["Value"].asString();
			resourcesObject.tags.push_back(tagsObject);
		}
		resources_.push_back(resourcesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string ListResourcesByTagResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListResourcesByTagResult::TagResource> ListResourcesByTagResult::getResources()const
{
	return resources_;
}

