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
		RecycleBinModel recycleBinModelsObject;
		if(!value["ResourceId"].isNull())
			recycleBinModelsObject.resourceId = value["ResourceId"].asString();
		if(!value["RegionId"].isNull())
			recycleBinModelsObject.regionId = value["RegionId"].asString();
		if(!value["ResourceType"].isNull())
			recycleBinModelsObject.resourceType = value["ResourceType"].asString();
		if(!value["CreationTime"].isNull())
			recycleBinModelsObject.creationTime = value["CreationTime"].asString();
		if(!value["Status"].isNull())
			recycleBinModelsObject.status = value["Status"].asString();
		auto allRelationResources = value["RelationResources"]["relationResource"];
		for (auto value : allRelationResources)
		{
			RecycleBinModel::RelationResource relationResourcesObject;
			if(!value["RelationResourceId"].isNull())
				relationResourcesObject.relationResourceId = value["RelationResourceId"].asString();
			if(!value["RelationResourceType"].isNull())
				relationResourcesObject.relationResourceType = value["RelationResourceType"].asString();
			recycleBinModelsObject.relationResources.push_back(relationResourcesObject);
		}
		recycleBinModels_.push_back(recycleBinModelsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeRecycleBinResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeRecycleBinResult::RecycleBinModel> DescribeRecycleBinResult::getRecycleBinModels()const
{
	return recycleBinModels_;
}

