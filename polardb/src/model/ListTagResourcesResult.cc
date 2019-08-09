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

#include <alibabacloud/polardb/model/ListTagResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allTagResources = value["TagResources"]["TagResource"];
	for (auto value : allTagResources)
	{
		TagResource tagResourcesObject;
		if(!value["TagKey"].isNull())
			tagResourcesObject.tagKey = value["TagKey"].asString();
		if(!value["TagValue"].isNull())
			tagResourcesObject.tagValue = value["TagValue"].asString();
		if(!value["ResourceType"].isNull())
			tagResourcesObject.resourceType = value["ResourceType"].asString();
		if(!value["ResourceId"].isNull())
			tagResourcesObject.resourceId = value["ResourceId"].asString();
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

