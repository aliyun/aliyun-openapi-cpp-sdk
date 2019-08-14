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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allTags = value["Tags"]["Tag"];
	for (auto value : allTags)
	{
		Tag tagsObject;
		if(!value["TagKey"].isNull())
			tagsObject.tagKey = value["TagKey"].asString();
		if(!value["TagValue"].isNull())
			tagsObject.tagValue = value["TagValue"].asString();
		auto resourceTypeCountNode = value["ResourceTypeCount"];
		if(!resourceTypeCountNode["Instance"].isNull())
			tagsObject.resourceTypeCount.instance = std::stoi(resourceTypeCountNode["Instance"].asString());
		if(!resourceTypeCountNode["Disk"].isNull())
			tagsObject.resourceTypeCount.disk = std::stoi(resourceTypeCountNode["Disk"].asString());
		if(!resourceTypeCountNode["Volume"].isNull())
			tagsObject.resourceTypeCount.volume = std::stoi(resourceTypeCountNode["Volume"].asString());
		if(!resourceTypeCountNode["Image"].isNull())
			tagsObject.resourceTypeCount.image = std::stoi(resourceTypeCountNode["Image"].asString());
		if(!resourceTypeCountNode["Snapshot"].isNull())
			tagsObject.resourceTypeCount.snapshot = std::stoi(resourceTypeCountNode["Snapshot"].asString());
		if(!resourceTypeCountNode["Securitygroup"].isNull())
			tagsObject.resourceTypeCount.securitygroup = std::stoi(resourceTypeCountNode["Securitygroup"].asString());
		if(!resourceTypeCountNode["LaunchTemplate"].isNull())
			tagsObject.resourceTypeCount.launchTemplate = std::stoi(resourceTypeCountNode["LaunchTemplate"].asString());
		if(!resourceTypeCountNode["Eni"].isNull())
			tagsObject.resourceTypeCount.eni = std::stoi(resourceTypeCountNode["Eni"].asString());
		if(!resourceTypeCountNode["Ddh"].isNull())
			tagsObject.resourceTypeCount.ddh = std::stoi(resourceTypeCountNode["Ddh"].asString());
		if(!resourceTypeCountNode["KeyPair"].isNull())
			tagsObject.resourceTypeCount.keyPair = std::stoi(resourceTypeCountNode["KeyPair"].asString());
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

