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

#include <alibabacloud/dds/model/DescribeTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeTagsResult::DescribeTagsResult() :
	ServiceResult()
{}

DescribeTagsResult::DescribeTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTagsResult::~DescribeTagsResult()
{}

void DescribeTagsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["TagKey"].isNull())
			tagsObject.tagKey = valueTagsTag["TagKey"].asString();
		auto allTagValues = value["TagValues"]["TagValue"];
		for (auto value : allTagValues)
			tagsObject.tagValues.push_back(value.asString());
		tags_.push_back(tagsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string DescribeTagsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<DescribeTagsResult::Tag> DescribeTagsResult::getTags()const
{
	return tags_;
}

