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

#include <alibabacloud/rds/model/DescribeDBInstancesOverviewResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBInstancesOverviewResult::DescribeDBInstancesOverviewResult() :
	ServiceResult()
{}

DescribeDBInstancesOverviewResult::DescribeDBInstancesOverviewResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstancesOverviewResult::~DescribeDBInstancesOverviewResult()
{}

void DescribeDBInstancesOverviewResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRegionsNode = value["Regions"]["RegionModel"];
	for (auto valueRegionsRegionModel : allRegionsNode)
	{
		RegionModel regionsObject;
		if(!valueRegionsRegionModel["Region"].isNull())
			regionsObject.region = valueRegionsRegionModel["Region"].asString();
		if(!valueRegionsRegionModel["EngineCount"].isNull())
			regionsObject.engineCount = valueRegionsRegionModel["EngineCount"].asString();
		if(!valueRegionsRegionModel["TotalCount"].isNull())
			regionsObject.totalCount = std::stoi(valueRegionsRegionModel["TotalCount"].asString());
		auto allTypeModelsNode = allRegionsNode["TypeModels"]["TypeModel"];
		for (auto allRegionsNodeTypeModelsTypeModel : allTypeModelsNode)
		{
			RegionModel::TypeModel typeModelsObject;
			if(!allRegionsNodeTypeModelsTypeModel["InstanceDateType"].isNull())
				typeModelsObject.instanceDateType = allRegionsNodeTypeModelsTypeModel["InstanceDateType"].asString();
			if(!allRegionsNodeTypeModelsTypeModel["Count"].isNull())
				typeModelsObject.count = std::stoi(allRegionsNodeTypeModelsTypeModel["Count"].asString());
			auto allInstanceModelsNode = allTypeModelsNode["InstanceModels"]["InstanceModel"];
			for (auto allTypeModelsNodeInstanceModelsInstanceModel : allInstanceModelsNode)
			{
				RegionModel::TypeModel::InstanceModel instanceModelsObject;
				if(!allTypeModelsNodeInstanceModelsInstanceModel["DBInstanceId"].isNull())
					instanceModelsObject.dBInstanceId = allTypeModelsNodeInstanceModelsInstanceModel["DBInstanceId"].asString();
				if(!allTypeModelsNodeInstanceModelsInstanceModel["Region"].isNull())
					instanceModelsObject.region = allTypeModelsNodeInstanceModelsInstanceModel["Region"].asString();
				if(!allTypeModelsNodeInstanceModelsInstanceModel["ZoneId"].isNull())
					instanceModelsObject.zoneId = allTypeModelsNodeInstanceModelsInstanceModel["ZoneId"].asString();
				if(!allTypeModelsNodeInstanceModelsInstanceModel["Engine"].isNull())
					instanceModelsObject.engine = allTypeModelsNodeInstanceModelsInstanceModel["Engine"].asString();
				if(!allTypeModelsNodeInstanceModelsInstanceModel["PayType"].isNull())
					instanceModelsObject.payType = allTypeModelsNodeInstanceModelsInstanceModel["PayType"].asString();
				if(!allTypeModelsNodeInstanceModelsInstanceModel["CreatedTime"].isNull())
					instanceModelsObject.createdTime = allTypeModelsNodeInstanceModelsInstanceModel["CreatedTime"].asString();
				if(!allTypeModelsNodeInstanceModelsInstanceModel["ExpireTime"].isNull())
					instanceModelsObject.expireTime = allTypeModelsNodeInstanceModelsInstanceModel["ExpireTime"].asString();
				if(!allTypeModelsNodeInstanceModelsInstanceModel["LockMode"].isNull())
					instanceModelsObject.lockMode = allTypeModelsNodeInstanceModelsInstanceModel["LockMode"].asString();
				if(!allTypeModelsNodeInstanceModelsInstanceModel["DBInstanceStatus"].isNull())
					instanceModelsObject.dBInstanceStatus = allTypeModelsNodeInstanceModelsInstanceModel["DBInstanceStatus"].asString();
				typeModelsObject.instanceModels.push_back(instanceModelsObject);
			}
			regionsObject.typeModels.push_back(typeModelsObject);
		}
		regions_.push_back(regionsObject);
	}

}

std::vector<DescribeDBInstancesOverviewResult::RegionModel> DescribeDBInstancesOverviewResult::getRegions()const
{
	return regions_;
}

