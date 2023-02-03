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

#include <alibabacloud/mse/model/ListTagResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mse;
using namespace AlibabaCloud::Mse::Model;

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
		if(!valueTagResourcesTagResource["ResourceId"].isNull())
			tagResourcesObject.resourceId = valueTagResourcesTagResource["ResourceId"].asString();
		if(!valueTagResourcesTagResource["ResourceType"].isNull())
			tagResourcesObject.resourceType = valueTagResourcesTagResource["ResourceType"].asString();
		if(!valueTagResourcesTagResource["TagValue"].isNull())
			tagResourcesObject.tagValue = valueTagResourcesTagResource["TagValue"].asString();
		if(!valueTagResourcesTagResource["TagKey"].isNull())
			tagResourcesObject.tagKey = valueTagResourcesTagResource["TagKey"].asString();
		tagResources_.push_back(tagResourcesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListTagResourcesResult::getNextToken()const
{
	return nextToken_;
}

std::string ListTagResourcesResult::getMessage()const
{
	return message_;
}

std::vector<ListTagResourcesResult::TagResource> ListTagResourcesResult::getTagResources()const
{
	return tagResources_;
}

std::string ListTagResourcesResult::getErrorCode()const
{
	return errorCode_;
}

bool ListTagResourcesResult::getSuccess()const
{
	return success_;
}

