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

#include <alibabacloud/r-kvstore/model/DescribeInstancesOverviewResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeInstancesOverviewResult::DescribeInstancesOverviewResult() :
	ServiceResult()
{}

DescribeInstancesOverviewResult::DescribeInstancesOverviewResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstancesOverviewResult::~DescribeInstancesOverviewResult()
{}

void DescribeInstancesOverviewResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["KVStoreInstance"];
	for (auto valueInstancesKVStoreInstance : allInstancesNode)
	{
		KVStoreInstance instancesObject;
		if(!valueInstancesKVStoreInstance["VpcId"].isNull())
			instancesObject.vpcId = valueInstancesKVStoreInstance["VpcId"].asString();
		if(!valueInstancesKVStoreInstance["PrivateIp"].isNull())
			instancesObject.privateIp = valueInstancesKVStoreInstance["PrivateIp"].asString();
		if(!valueInstancesKVStoreInstance["Capacity"].isNull())
			instancesObject.capacity = std::stol(valueInstancesKVStoreInstance["Capacity"].asString());
		if(!valueInstancesKVStoreInstance["CreateTime"].isNull())
			instancesObject.createTime = valueInstancesKVStoreInstance["CreateTime"].asString();
		if(!valueInstancesKVStoreInstance["ConnectionDomain"].isNull())
			instancesObject.connectionDomain = valueInstancesKVStoreInstance["ConnectionDomain"].asString();
		if(!valueInstancesKVStoreInstance["ChargeType"].isNull())
			instancesObject.chargeType = valueInstancesKVStoreInstance["ChargeType"].asString();
		if(!valueInstancesKVStoreInstance["ArchitectureType"].isNull())
			instancesObject.architectureType = valueInstancesKVStoreInstance["ArchitectureType"].asString();
		if(!valueInstancesKVStoreInstance["NetworkType"].isNull())
			instancesObject.networkType = valueInstancesKVStoreInstance["NetworkType"].asString();
		if(!valueInstancesKVStoreInstance["EngineVersion"].isNull())
			instancesObject.engineVersion = valueInstancesKVStoreInstance["EngineVersion"].asString();
		if(!valueInstancesKVStoreInstance["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesKVStoreInstance["InstanceName"].asString();
		if(!valueInstancesKVStoreInstance["GlobalInstanceId"].isNull())
			instancesObject.globalInstanceId = valueInstancesKVStoreInstance["GlobalInstanceId"].asString();
		if(!valueInstancesKVStoreInstance["InstanceClass"].isNull())
			instancesObject.instanceClass = valueInstancesKVStoreInstance["InstanceClass"].asString();
		if(!valueInstancesKVStoreInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesKVStoreInstance["InstanceId"].asString();
		if(!valueInstancesKVStoreInstance["InstanceType"].isNull())
			instancesObject.instanceType = valueInstancesKVStoreInstance["InstanceType"].asString();
		if(!valueInstancesKVStoreInstance["RegionId"].isNull())
			instancesObject.regionId = valueInstancesKVStoreInstance["RegionId"].asString();
		if(!valueInstancesKVStoreInstance["EndTime"].isNull())
			instancesObject.endTime = valueInstancesKVStoreInstance["EndTime"].asString();
		if(!valueInstancesKVStoreInstance["VSwitchId"].isNull())
			instancesObject.vSwitchId = valueInstancesKVStoreInstance["VSwitchId"].asString();
		if(!valueInstancesKVStoreInstance["ResourceGroupId"].isNull())
			instancesObject.resourceGroupId = valueInstancesKVStoreInstance["ResourceGroupId"].asString();
		if(!valueInstancesKVStoreInstance["ZoneId"].isNull())
			instancesObject.zoneId = valueInstancesKVStoreInstance["ZoneId"].asString();
		if(!valueInstancesKVStoreInstance["InstanceStatus"].isNull())
			instancesObject.instanceStatus = valueInstancesKVStoreInstance["InstanceStatus"].asString();
		if(!valueInstancesKVStoreInstance["SecondaryZoneId"].isNull())
			instancesObject.secondaryZoneId = valueInstancesKVStoreInstance["SecondaryZoneId"].asString();
		instances_.push_back(instancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeInstancesOverviewResult::KVStoreInstance> DescribeInstancesOverviewResult::getInstances()const
{
	return instances_;
}

int DescribeInstancesOverviewResult::getTotalCount()const
{
	return totalCount_;
}

