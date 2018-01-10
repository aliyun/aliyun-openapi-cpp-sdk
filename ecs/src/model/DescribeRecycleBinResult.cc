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

#include <alibabacloud/ecs/model/DescribeRecycleBinResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeRecycleBinResult::DescribeRecycleBinResult() :
	ServiceResult()
{}

DescribeRecycleBinResult::DescribeRecycleBinResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRecycleBinResult::~DescribeRecycleBinResult()
{}

void DescribeRecycleBinResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allRecycleBinModels = value["RecycleBinModels"]["RecycleBinModel"];
	for (auto value : allRecycleBinModels)
	{
		RecycleBinModel recycleBinModelObject;
		recycleBinModelObject.resourceId = value["ResourceId"].asString();
		recycleBinModelObject.regionId = value["RegionId"].asString();
		recycleBinModelObject.resourceType = value["ResourceType"].asString();
		recycleBinModelObject.creationTime = value["CreationTime"].asString();
		recycleBinModelObject.status = value["Status"].asString();
		auto allRelationResources = value["RelationResources"]["relationResource"];
		for (auto value : allRelationResources)
		{
			RecycleBinModel::relationResource relationResourceObject;
			relationResourceObject.relationResourceId = value["RelationResourceId"].asString();
			relationResourceObject.relationResourceType = value["RelationResourceType"].asString();
			recycleBinModelObject.relationResources.push_back(relationResourceObject);
		}
		recycleBinModels_.push_back(recycleBinModelObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeRecycleBinResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeRecycleBinResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

