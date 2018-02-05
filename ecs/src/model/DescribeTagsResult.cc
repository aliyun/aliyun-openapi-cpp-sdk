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

#include <alibabacloud/ecs/model/DescribeTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

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
	auto allTags = value["Tags"]["Tag"];
	for (auto value : allTags)
	{
		Tag tagsObject;
		if(!value["TagKey"].isNull())
			tagsObject.tagKey = value["TagKey"].asString();
		if(!value["TagValue"].isNull())
			tagsObject.tagValue = value["TagValue"].asString();
		auto allResourceTypeCount = value["ResourceTypeCount"];
		for (auto value : allResourceTypeCount)
		{
			Tag::ResourceTypeCount resourceTypeCountObject;
			if(!value["Instance"].isNull())
				resourceTypeCountObject.instance = std::stoi(value["Instance"].asString());
			if(!value["Disk"].isNull())
				resourceTypeCountObject.disk = std::stoi(value["Disk"].asString());
			if(!value["Volume"].isNull())
				resourceTypeCountObject.volume = std::stoi(value["Volume"].asString());
			if(!value["Image"].isNull())
				resourceTypeCountObject.image = std::stoi(value["Image"].asString());
			if(!value["Snapshot"].isNull())
				resourceTypeCountObject.snapshot = std::stoi(value["Snapshot"].asString());
			if(!value["Securitygroup"].isNull())
				resourceTypeCountObject.securitygroup = std::stoi(value["Securitygroup"].asString());
			tagsObject.resourceTypeCount.push_back(resourceTypeCountObject);
		}
		tags_.push_back(tagsObject);
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

std::vector<DescribeTagsResult::Tag> DescribeTagsResult::getTags()const
{
	return tags_;
}

