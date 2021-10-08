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
	auto allTagsNode = value["Tags"]["Tag"];
	for (auto valueTagsTag : allTagsNode)
	{
		Tag tagsObject;
		if(!valueTagsTag["TagValue"].isNull())
			tagsObject.tagValue = valueTagsTag["TagValue"].asString();
		if(!valueTagsTag["TagKey"].isNull())
			tagsObject.tagKey = valueTagsTag["TagKey"].asString();
		auto resourceTypeCountNode = value["ResourceTypeCount"];
		if(!resourceTypeCountNode["Instance"].isNull())
			tagsObject.resourceTypeCount.instance = std::stoi(resourceTypeCountNode["Instance"].asString());
		if(!resourceTypeCountNode["Image"].isNull())
			tagsObject.resourceTypeCount.image = std::stoi(resourceTypeCountNode["Image"].asString());
		if(!resourceTypeCountNode["Ddh"].isNull())
			tagsObject.resourceTypeCount.ddh = std::stoi(resourceTypeCountNode["Ddh"].asString());
		if(!resourceTypeCountNode["SnapshotPolicy"].isNull())
			tagsObject.resourceTypeCount.snapshotPolicy = std::stoi(resourceTypeCountNode["SnapshotPolicy"].asString());
		if(!resourceTypeCountNode["Securitygroup"].isNull())
			tagsObject.resourceTypeCount.securitygroup = std::stoi(resourceTypeCountNode["Securitygroup"].asString());
		if(!resourceTypeCountNode["Snapshot"].isNull())
			tagsObject.resourceTypeCount.snapshot = std::stoi(resourceTypeCountNode["Snapshot"].asString());
		if(!resourceTypeCountNode["ReservedInstance"].isNull())
			tagsObject.resourceTypeCount.reservedInstance = std::stoi(resourceTypeCountNode["ReservedInstance"].asString());
		if(!resourceTypeCountNode["LaunchTemplate"].isNull())
			tagsObject.resourceTypeCount.launchTemplate = std::stoi(resourceTypeCountNode["LaunchTemplate"].asString());
		if(!resourceTypeCountNode["Eni"].isNull())
			tagsObject.resourceTypeCount.eni = std::stoi(resourceTypeCountNode["Eni"].asString());
		if(!resourceTypeCountNode["Disk"].isNull())
			tagsObject.resourceTypeCount.disk = std::stoi(resourceTypeCountNode["Disk"].asString());
		if(!resourceTypeCountNode["KeyPair"].isNull())
			tagsObject.resourceTypeCount.keyPair = std::stoi(resourceTypeCountNode["KeyPair"].asString());
		if(!resourceTypeCountNode["Volume"].isNull())
			tagsObject.resourceTypeCount.volume = std::stoi(resourceTypeCountNode["Volume"].asString());
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

