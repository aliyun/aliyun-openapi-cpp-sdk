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

#include <alibabacloud/ddoscoo/model/DescribeTagResourcesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeTagResourcesResult::DescribeTagResourcesResult() :
	ServiceResult()
{}

DescribeTagResourcesResult::DescribeTagResourcesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTagResourcesResult::~DescribeTagResourcesResult()
{}

void DescribeTagResourcesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagResourcesNode = value["TagResources"]["TagResource"];
	for (auto valueTagResourcesTagResource : allTagResourcesNode)
	{
		TagResource tagResourcesObject;
		if(!valueTagResourcesTagResource["TagValue"].isNull())
			tagResourcesObject.tagValue = valueTagResourcesTagResource["TagValue"].asString();
		if(!valueTagResourcesTagResource["ResourceType"].isNull())
			tagResourcesObject.resourceType = valueTagResourcesTagResource["ResourceType"].asString();
		if(!valueTagResourcesTagResource["ResourceId"].isNull())
			tagResourcesObject.resourceId = valueTagResourcesTagResource["ResourceId"].asString();
		if(!valueTagResourcesTagResource["TagKey"].isNull())
			tagResourcesObject.tagKey = valueTagResourcesTagResource["TagKey"].asString();
		tagResources_.push_back(tagResourcesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeTagResourcesResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeTagResourcesResult::TagResource> DescribeTagResourcesResult::getTagResources()const
{
	return tagResources_;
}

