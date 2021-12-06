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

#include <alibabacloud/ecs/model/DescribeResourceByTagsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeResourceByTagsResult::DescribeResourceByTagsResult() :
	ServiceResult()
{}

DescribeResourceByTagsResult::DescribeResourceByTagsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeResourceByTagsResult::~DescribeResourceByTagsResult()
{}

void DescribeResourceByTagsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourcesNode = value["Resources"]["Resource"];
	for (auto valueResourcesResource : allResourcesNode)
	{
		Resource resourcesObject;
		if(!valueResourcesResource["ResourceType"].isNull())
			resourcesObject.resourceType = valueResourcesResource["ResourceType"].asString();
		if(!valueResourcesResource["ResourceId"].isNull())
			resourcesObject.resourceId = valueResourcesResource["ResourceId"].asString();
		if(!valueResourcesResource["RegionId"].isNull())
			resourcesObject.regionId = valueResourcesResource["RegionId"].asString();
		resources_.push_back(resourcesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeResourceByTagsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeResourceByTagsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeResourceByTagsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeResourceByTagsResult::Resource> DescribeResourceByTagsResult::getResources()const
{
	return resources_;
}

