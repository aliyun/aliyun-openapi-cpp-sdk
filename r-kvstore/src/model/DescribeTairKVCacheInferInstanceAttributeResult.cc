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

#include <alibabacloud/r-kvstore/model/DescribeTairKVCacheInferInstanceAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeTairKVCacheInferInstanceAttributeResult::DescribeTairKVCacheInferInstanceAttributeResult() :
	ServiceResult()
{}

DescribeTairKVCacheInferInstanceAttributeResult::DescribeTairKVCacheInferInstanceAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTairKVCacheInferInstanceAttributeResult::~DescribeTairKVCacheInferInstanceAttributeResult()
{}

void DescribeTairKVCacheInferInstanceAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["DBInstanceAttribute"];
	for (auto valueInstancesDBInstanceAttribute : allInstancesNode)
	{
		DBInstanceAttribute instancesObject;
		if(!valueInstancesDBInstanceAttribute["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesDBInstanceAttribute["InstanceId"].asString();
		if(!valueInstancesDBInstanceAttribute["VpcId"].isNull())
			instancesObject.vpcId = valueInstancesDBInstanceAttribute["VpcId"].asString();
		if(!valueInstancesDBInstanceAttribute["VSwitchId"].isNull())
			instancesObject.vSwitchId = valueInstancesDBInstanceAttribute["VSwitchId"].asString();
		if(!valueInstancesDBInstanceAttribute["PrivateIp"].isNull())
			instancesObject.privateIp = valueInstancesDBInstanceAttribute["PrivateIp"].asString();
		if(!valueInstancesDBInstanceAttribute["ChargeType"].isNull())
			instancesObject.chargeType = valueInstancesDBInstanceAttribute["ChargeType"].asString();
		if(!valueInstancesDBInstanceAttribute["CreateTime"].isNull())
			instancesObject.createTime = valueInstancesDBInstanceAttribute["CreateTime"].asString();
		if(!valueInstancesDBInstanceAttribute["EndTime"].isNull())
			instancesObject.endTime = valueInstancesDBInstanceAttribute["EndTime"].asString();
		if(!valueInstancesDBInstanceAttribute["ArchitectureType"].isNull())
			instancesObject.architectureType = valueInstancesDBInstanceAttribute["ArchitectureType"].asString();
		if(!valueInstancesDBInstanceAttribute["NetworkType"].isNull())
			instancesObject.networkType = valueInstancesDBInstanceAttribute["NetworkType"].asString();
		if(!valueInstancesDBInstanceAttribute["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesDBInstanceAttribute["InstanceName"].asString();
		if(!valueInstancesDBInstanceAttribute["InstanceClass"].isNull())
			instancesObject.instanceClass = valueInstancesDBInstanceAttribute["InstanceClass"].asString();
		if(!valueInstancesDBInstanceAttribute["InstanceType"].isNull())
			instancesObject.instanceType = valueInstancesDBInstanceAttribute["InstanceType"].asString();
		if(!valueInstancesDBInstanceAttribute["ZoneId"].isNull())
			instancesObject.zoneId = valueInstancesDBInstanceAttribute["ZoneId"].asString();
		if(!valueInstancesDBInstanceAttribute["ZoneType"].isNull())
			instancesObject.zoneType = valueInstancesDBInstanceAttribute["ZoneType"].asString();
		if(!valueInstancesDBInstanceAttribute["RegionId"].isNull())
			instancesObject.regionId = valueInstancesDBInstanceAttribute["RegionId"].asString();
		if(!valueInstancesDBInstanceAttribute["Storage"].isNull())
			instancesObject.storage = std::stol(valueInstancesDBInstanceAttribute["Storage"].asString());
		if(!valueInstancesDBInstanceAttribute["ResourceGroupId"].isNull())
			instancesObject.resourceGroupId = valueInstancesDBInstanceAttribute["ResourceGroupId"].asString();
		if(!valueInstancesDBInstanceAttribute["InstanceStatus"].isNull())
			instancesObject.instanceStatus = valueInstancesDBInstanceAttribute["InstanceStatus"].asString();
		if(!valueInstancesDBInstanceAttribute["IsOrderCompleted"].isNull())
			instancesObject.isOrderCompleted = valueInstancesDBInstanceAttribute["IsOrderCompleted"].asString();
		if(!valueInstancesDBInstanceAttribute["ConnectionString"].isNull())
			instancesObject.connectionString = valueInstancesDBInstanceAttribute["ConnectionString"].asString();
		if(!valueInstancesDBInstanceAttribute["IsDelete"].isNull())
			instancesObject.isDelete = std::stoi(valueInstancesDBInstanceAttribute["IsDelete"].asString());
		if(!valueInstancesDBInstanceAttribute["Model"].isNull())
			instancesObject.model = valueInstancesDBInstanceAttribute["Model"].asString();
		if(!valueInstancesDBInstanceAttribute["ModelServiceNum"].isNull())
			instancesObject.modelServiceNum = std::stoi(valueInstancesDBInstanceAttribute["ModelServiceNum"].asString());
		if(!valueInstancesDBInstanceAttribute["ComputeUnitNum"].isNull())
			instancesObject.computeUnitNum = std::stoi(valueInstancesDBInstanceAttribute["ComputeUnitNum"].asString());
		auto allTagsNode = valueInstancesDBInstanceAttribute["Tags"]["Tag"];
		for (auto valueInstancesDBInstanceAttributeTagsTag : allTagsNode)
		{
			DBInstanceAttribute::Tag tagsObject;
			if(!valueInstancesDBInstanceAttributeTagsTag["Key"].isNull())
				tagsObject.key = valueInstancesDBInstanceAttributeTagsTag["Key"].asString();
			if(!valueInstancesDBInstanceAttributeTagsTag["Value"].isNull())
				tagsObject.value = valueInstancesDBInstanceAttributeTagsTag["Value"].asString();
			instancesObject.tags.push_back(tagsObject);
		}
		instances_.push_back(instancesObject);
	}

}

std::vector<DescribeTairKVCacheInferInstanceAttributeResult::DBInstanceAttribute> DescribeTairKVCacheInferInstanceAttributeResult::getInstances()const
{
	return instances_;
}

