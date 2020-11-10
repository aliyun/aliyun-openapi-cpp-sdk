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
		auto allTypeModelsNode = valueRegionsRegionModel["TypeModels"]["TypeModel"];
		for (auto valueRegionsRegionModelTypeModelsTypeModel : allTypeModelsNode)
		{
			RegionModel::TypeModel typeModelsObject;
			if(!valueRegionsRegionModelTypeModelsTypeModel["InstanceDateType"].isNull())
				typeModelsObject.instanceDateType = valueRegionsRegionModelTypeModelsTypeModel["InstanceDateType"].asString();
			if(!valueRegionsRegionModelTypeModelsTypeModel["Count"].isNull())
				typeModelsObject.count = std::stoi(valueRegionsRegionModelTypeModelsTypeModel["Count"].asString());
			auto allInstanceModelsNode = valueRegionsRegionModelTypeModelsTypeModel["InstanceModels"]["InstanceModel"];
			for (auto valueRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel : allInstanceModelsNode)
			{
				RegionModel::TypeModel::InstanceModel instanceModelsObject;
				if(!valueRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel["DBInstanceId"].isNull())
					instanceModelsObject.dBInstanceId = valueRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel["DBInstanceId"].asString();
				if(!valueRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel["Region"].isNull())
					instanceModelsObject.region = valueRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel["Region"].asString();
				if(!valueRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel["ZoneId"].isNull())
					instanceModelsObject.zoneId = valueRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel["ZoneId"].asString();
				if(!valueRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel["Engine"].isNull())
					instanceModelsObject.engine = valueRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel["Engine"].asString();
				if(!valueRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel["PayType"].isNull())
					instanceModelsObject.payType = valueRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel["PayType"].asString();
				if(!valueRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel["CreatedTime"].isNull())
					instanceModelsObject.createdTime = valueRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel["CreatedTime"].asString();
				if(!valueRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel["ExpireTime"].isNull())
					instanceModelsObject.expireTime = valueRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel["ExpireTime"].asString();
				if(!valueRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel["LockMode"].isNull())
					instanceModelsObject.lockMode = valueRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel["LockMode"].asString();
				if(!valueRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel["DBInstanceStatus"].isNull())
					instanceModelsObject.dBInstanceStatus = valueRegionsRegionModelTypeModelsTypeModelInstanceModelsInstanceModel["DBInstanceStatus"].asString();
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

