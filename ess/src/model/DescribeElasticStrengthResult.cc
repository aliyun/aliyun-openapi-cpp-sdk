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

#include <alibabacloud/ess/model/DescribeElasticStrengthResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DescribeElasticStrengthResult::DescribeElasticStrengthResult() :
	ServiceResult()
{}

DescribeElasticStrengthResult::DescribeElasticStrengthResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeElasticStrengthResult::~DescribeElasticStrengthResult()
{}

void DescribeElasticStrengthResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allResourcePoolsNode = value["ResourcePools"]["ResourcePool"];
	for (auto valueResourcePoolsResourcePool : allResourcePoolsNode)
	{
		ResourcePool resourcePoolsObject;
		if(!valueResourcePoolsResourcePool["Strength"].isNull())
			resourcePoolsObject.strength = valueResourcePoolsResourcePool["Strength"].asString();
		if(!valueResourcePoolsResourcePool["InstanceType"].isNull())
			resourcePoolsObject.instanceType = valueResourcePoolsResourcePool["InstanceType"].asString();
		if(!valueResourcePoolsResourcePool["ZoneId"].isNull())
			resourcePoolsObject.zoneId = valueResourcePoolsResourcePool["ZoneId"].asString();
		if(!valueResourcePoolsResourcePool["Code"].isNull())
			resourcePoolsObject.code = valueResourcePoolsResourcePool["Code"].asString();
		if(!valueResourcePoolsResourcePool["Msg"].isNull())
			resourcePoolsObject.msg = valueResourcePoolsResourcePool["Msg"].asString();
		if(!valueResourcePoolsResourcePool["Status"].isNull())
			resourcePoolsObject.status = valueResourcePoolsResourcePool["Status"].asString();
		auto inventoryHealthNode = value["InventoryHealth"];
		if(!inventoryHealthNode["HealthScore"].isNull())
			resourcePoolsObject.inventoryHealth.healthScore = std::stoi(inventoryHealthNode["HealthScore"].asString());
		if(!inventoryHealthNode["AdequacyScore"].isNull())
			resourcePoolsObject.inventoryHealth.adequacyScore = std::stoi(inventoryHealthNode["AdequacyScore"].asString());
		if(!inventoryHealthNode["SupplyScore"].isNull())
			resourcePoolsObject.inventoryHealth.supplyScore = std::stoi(inventoryHealthNode["SupplyScore"].asString());
		if(!inventoryHealthNode["HotScore"].isNull())
			resourcePoolsObject.inventoryHealth.hotScore = std::stoi(inventoryHealthNode["HotScore"].asString());
		auto allVSwitchIds = value["VSwitchIds"]["VSwitchId"];
		for (auto value : allVSwitchIds)
			resourcePoolsObject.vSwitchIds.push_back(value.asString());
		resourcePools_.push_back(resourcePoolsObject);
	}
	auto allElasticStrengthModelsNode = value["ElasticStrengthModels"]["ElasticStrengthModel"];
	for (auto valueElasticStrengthModelsElasticStrengthModel : allElasticStrengthModelsNode)
	{
		ElasticStrengthModel elasticStrengthModelsObject;
		if(!valueElasticStrengthModelsElasticStrengthModel["ScalingGroupId"].isNull())
			elasticStrengthModelsObject.scalingGroupId = valueElasticStrengthModelsElasticStrengthModel["ScalingGroupId"].asString();
		if(!valueElasticStrengthModelsElasticStrengthModel["ElasticStrength"].isNull())
			elasticStrengthModelsObject.elasticStrength = valueElasticStrengthModelsElasticStrengthModel["ElasticStrength"].asString();
		if(!valueElasticStrengthModelsElasticStrengthModel["TotalStrength"].isNull())
			elasticStrengthModelsObject.totalStrength = valueElasticStrengthModelsElasticStrengthModel["TotalStrength"].asString();
		auto allResourcePools1Node = valueElasticStrengthModelsElasticStrengthModel["ResourcePools"]["ResourcePool"];
		for (auto valueElasticStrengthModelsElasticStrengthModelResourcePoolsResourcePool : allResourcePools1Node)
		{
			ElasticStrengthModel::ResourcePool2 resourcePools1Object;
			if(!valueElasticStrengthModelsElasticStrengthModelResourcePoolsResourcePool["InstanceType"].isNull())
				resourcePools1Object.instanceType = valueElasticStrengthModelsElasticStrengthModelResourcePoolsResourcePool["InstanceType"].asString();
			if(!valueElasticStrengthModelsElasticStrengthModelResourcePoolsResourcePool["Strength"].isNull())
				resourcePools1Object.strength = valueElasticStrengthModelsElasticStrengthModelResourcePoolsResourcePool["Strength"].asString();
			if(!valueElasticStrengthModelsElasticStrengthModelResourcePoolsResourcePool["ZoneId"].isNull())
				resourcePools1Object.zoneId = valueElasticStrengthModelsElasticStrengthModelResourcePoolsResourcePool["ZoneId"].asString();
			if(!valueElasticStrengthModelsElasticStrengthModelResourcePoolsResourcePool["Code"].isNull())
				resourcePools1Object.code = valueElasticStrengthModelsElasticStrengthModelResourcePoolsResourcePool["Code"].asString();
			if(!valueElasticStrengthModelsElasticStrengthModelResourcePoolsResourcePool["Msg"].isNull())
				resourcePools1Object.msg = valueElasticStrengthModelsElasticStrengthModelResourcePoolsResourcePool["Msg"].asString();
			if(!valueElasticStrengthModelsElasticStrengthModelResourcePoolsResourcePool["Status"].isNull())
				resourcePools1Object.status = valueElasticStrengthModelsElasticStrengthModelResourcePoolsResourcePool["Status"].asString();
			auto inventoryHealth4Node = value["InventoryHealth"];
			if(!inventoryHealth4Node["HealthScore"].isNull())
				resourcePools1Object.inventoryHealth4.healthScore = std::stoi(inventoryHealth4Node["HealthScore"].asString());
			if(!inventoryHealth4Node["AdequacyScore"].isNull())
				resourcePools1Object.inventoryHealth4.adequacyScore = std::stoi(inventoryHealth4Node["AdequacyScore"].asString());
			if(!inventoryHealth4Node["SupplyScore"].isNull())
				resourcePools1Object.inventoryHealth4.supplyScore = std::stoi(inventoryHealth4Node["SupplyScore"].asString());
			if(!inventoryHealth4Node["HotScore"].isNull())
				resourcePools1Object.inventoryHealth4.hotScore = std::stoi(inventoryHealth4Node["HotScore"].asString());
			auto allVSwitchIds3 = value["VSwitchIds"]["VSwitchId"];
			for (auto value : allVSwitchIds3)
				resourcePools1Object.vSwitchIds3.push_back(value.asString());
			elasticStrengthModelsObject.resourcePools1.push_back(resourcePools1Object);
		}
		elasticStrengthModels_.push_back(elasticStrengthModelsObject);
	}
	if(!value["TotalStrength"].isNull())
		totalStrength_ = value["TotalStrength"].asString();
	if(!value["ElasticStrength"].isNull())
		elasticStrength_ = value["ElasticStrength"].asString();

}

std::vector<DescribeElasticStrengthResult::ResourcePool> DescribeElasticStrengthResult::getResourcePools()const
{
	return resourcePools_;
}

std::vector<DescribeElasticStrengthResult::ElasticStrengthModel> DescribeElasticStrengthResult::getElasticStrengthModels()const
{
	return elasticStrengthModels_;
}

std::string DescribeElasticStrengthResult::getElasticStrength()const
{
	return elasticStrength_;
}

double DescribeElasticStrengthResult::getTotalStrength()const
{
	return totalStrength_;
}

