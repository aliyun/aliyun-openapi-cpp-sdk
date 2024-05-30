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

#include <alibabacloud/slb/model/DescribeTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

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
	auto allTagSetsNode = value["TagSets"]["TagSet"];
	for (auto valueTagSetsTagSet : allTagSetsNode)
	{
		TagSet tagSetsObject;
		if(!valueTagSetsTagSet["TagValue"].isNull())
			tagSetsObject.tagValue = valueTagSetsTagSet["TagValue"].asString();
		if(!valueTagSetsTagSet["InstanceCount"].isNull())
			tagSetsObject.instanceCount = std::stoi(valueTagSetsTagSet["InstanceCount"].asString());
		if(!valueTagSetsTagSet["TagKey"].isNull())
			tagSetsObject.tagKey = valueTagSetsTagSet["TagKey"].asString();
		tagSets_.push_back(tagSetsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeTagsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeTagsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeTagsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeTagsResult::TagSet> DescribeTagsResult::getTagSets()const
{
	return tagSets_;
}

