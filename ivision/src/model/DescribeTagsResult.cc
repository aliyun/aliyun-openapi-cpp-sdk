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

#include <alibabacloud/ivision/model/DescribeTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ivision;
using namespace AlibabaCloud::Ivision::Model;

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
		if(!valueTagsTag["ProjectId"].isNull())
			tagsObject.projectId = valueTagsTag["ProjectId"].asString();
		if(!valueTagsTag["TagId"].isNull())
			tagsObject.tagId = valueTagsTag["TagId"].asString();
		if(!valueTagsTag["TagName"].isNull())
			tagsObject.tagName = valueTagsTag["TagName"].asString();
		if(!valueTagsTag["Description"].isNull())
			tagsObject.description = valueTagsTag["Description"].asString();
		if(!valueTagsTag["Count"].isNull())
			tagsObject.count = std::stoi(valueTagsTag["Count"].asString());
		if(!valueTagsTag["CreationTime"].isNull())
			tagsObject.creationTime = valueTagsTag["CreationTime"].asString();
		tags_.push_back(tagsObject);
	}
	if(!value["TotalNum"].isNull())
		totalNum_ = std::stol(value["TotalNum"].asString());
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stol(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());
	if(!value["NextPageToken"].isNull())
		nextPageToken_ = value["NextPageToken"].asString();

}

long DescribeTagsResult::getTotalNum()const
{
	return totalNum_;
}

long DescribeTagsResult::getPageSize()const
{
	return pageSize_;
}

long DescribeTagsResult::getCurrentPage()const
{
	return currentPage_;
}

std::string DescribeTagsResult::getNextPageToken()const
{
	return nextPageToken_;
}

std::vector<DescribeTagsResult::Tag> DescribeTagsResult::getTags()const
{
	return tags_;
}

