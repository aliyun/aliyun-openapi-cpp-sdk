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

#include <alibabacloud/r-kvstore/model/DescribeInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeInstancesResult::DescribeInstancesResult() :
	ServiceResult()
{}

DescribeInstancesResult::DescribeInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstancesResult::~DescribeInstancesResult()
{}

void DescribeInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["KVStoreInstance"];
	for (auto valueInstancesKVStoreInstance : allInstancesNode)
	{
		KVStoreInstance instancesObject;
		if(!valueInstancesKVStoreInstance["ReplacateId"].isNull())
			instancesObject.replacateId = valueInstancesKVStoreInstance["ReplacateId"].asString();
		if(!valueInstancesKVStoreInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesKVStoreInstance["InstanceId"].asString();
		if(!valueInstancesKVStoreInstance["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesKVStoreInstance["InstanceName"].asString();
		if(!valueInstancesKVStoreInstance["SearchKey"].isNull())
			instancesObject.searchKey = valueInstancesKVStoreInstance["SearchKey"].asString();
		if(!valueInstancesKVStoreInstance["ConnectionDomain"].isNull())
			instancesObject.connectionDomain = valueInstancesKVStoreInstance["ConnectionDomain"].asString();
		if(!valueInstancesKVStoreInstance["Port"].isNull())
			instancesObject.port = std::stol(valueInstancesKVStoreInstance["Port"].asString());
		if(!valueInstancesKVStoreInstance["UserName"].isNull())
			instancesObject.userName = valueInstancesKVStoreInstance["UserName"].asString();
		if(!valueInstancesKVStoreInstance["InstanceStatus"].isNull())
			instancesObject.instanceStatus = valueInstancesKVStoreInstance["InstanceStatus"].asString();
		if(!valueInstancesKVStoreInstance["RegionId"].isNull())
			instancesObject.regionId = valueInstancesKVStoreInstance["RegionId"].asString();
		if(!valueInstancesKVStoreInstance["Capacity"].isNull())
			instancesObject.capacity = std::stol(valueInstancesKVStoreInstance["Capacity"].asString());
		if(!valueInstancesKVStoreInstance["InstanceClass"].isNull())
			instancesObject.instanceClass = valueInstancesKVStoreInstance["InstanceClass"].asString();
		if(!valueInstancesKVStoreInstance["QPS"].isNull())
			instancesObject.qPS = std::stol(valueInstancesKVStoreInstance["QPS"].asString());
		if(!valueInstancesKVStoreInstance["Bandwidth"].isNull())
			instancesObject.bandwidth = std::stol(valueInstancesKVStoreInstance["Bandwidth"].asString());
		if(!valueInstancesKVStoreInstance["Connections"].isNull())
			instancesObject.connections = std::stol(valueInstancesKVStoreInstance["Connections"].asString());
		if(!valueInstancesKVStoreInstance["ZoneId"].isNull())
			instancesObject.zoneId = valueInstancesKVStoreInstance["ZoneId"].asString();
		if(!valueInstancesKVStoreInstance["Config"].isNull())
			instancesObject.config = valueInstancesKVStoreInstance["Config"].asString();
		if(!valueInstancesKVStoreInstance["ChargeType"].isNull())
			instancesObject.chargeType = valueInstancesKVStoreInstance["ChargeType"].asString();
		if(!valueInstancesKVStoreInstance["NetworkType"].isNull())
			instancesObject.networkType = valueInstancesKVStoreInstance["NetworkType"].asString();
		if(!valueInstancesKVStoreInstance["VpcId"].isNull())
			instancesObject.vpcId = valueInstancesKVStoreInstance["VpcId"].asString();
		if(!valueInstancesKVStoreInstance["VSwitchId"].isNull())
			instancesObject.vSwitchId = valueInstancesKVStoreInstance["VSwitchId"].asString();
		if(!valueInstancesKVStoreInstance["PrivateIp"].isNull())
			instancesObject.privateIp = valueInstancesKVStoreInstance["PrivateIp"].asString();
		if(!valueInstancesKVStoreInstance["CreateTime"].isNull())
			instancesObject.createTime = valueInstancesKVStoreInstance["CreateTime"].asString();
		if(!valueInstancesKVStoreInstance["EndTime"].isNull())
			instancesObject.endTime = valueInstancesKVStoreInstance["EndTime"].asString();
		if(!valueInstancesKVStoreInstance["HasRenewChangeOrder"].isNull())
			instancesObject.hasRenewChangeOrder = valueInstancesKVStoreInstance["HasRenewChangeOrder"].asString();
		if(!valueInstancesKVStoreInstance["IsRds"].isNull())
			instancesObject.isRds = valueInstancesKVStoreInstance["IsRds"].asString() == "true";
		if(!valueInstancesKVStoreInstance["InstanceType"].isNull())
			instancesObject.instanceType = valueInstancesKVStoreInstance["InstanceType"].asString();
		if(!valueInstancesKVStoreInstance["ArchitectureType"].isNull())
			instancesObject.architectureType = valueInstancesKVStoreInstance["ArchitectureType"].asString();
		if(!valueInstancesKVStoreInstance["NodeType"].isNull())
			instancesObject.nodeType = valueInstancesKVStoreInstance["NodeType"].asString();
		if(!valueInstancesKVStoreInstance["PackageType"].isNull())
			instancesObject.packageType = valueInstancesKVStoreInstance["PackageType"].asString();
		if(!valueInstancesKVStoreInstance["EngineVersion"].isNull())
			instancesObject.engineVersion = valueInstancesKVStoreInstance["EngineVersion"].asString();
		if(!valueInstancesKVStoreInstance["DestroyTime"].isNull())
			instancesObject.destroyTime = valueInstancesKVStoreInstance["DestroyTime"].asString();
		if(!valueInstancesKVStoreInstance["ConnectionMode"].isNull())
			instancesObject.connectionMode = valueInstancesKVStoreInstance["ConnectionMode"].asString();
		if(!valueInstancesKVStoreInstance["VpcCloudInstanceId"].isNull())
			instancesObject.vpcCloudInstanceId = valueInstancesKVStoreInstance["VpcCloudInstanceId"].asString();
		if(!valueInstancesKVStoreInstance["ResourceGroupId"].isNull())
			instancesObject.resourceGroupId = valueInstancesKVStoreInstance["ResourceGroupId"].asString();
		auto allTagsNode = allInstancesNode["Tags"]["Tag"];
		for (auto allInstancesNodeTagsTag : allTagsNode)
		{
			KVStoreInstance::Tag tagsObject;
			if(!allInstancesNodeTagsTag["Key"].isNull())
				tagsObject.key = allInstancesNodeTagsTag["Key"].asString();
			if(!allInstancesNodeTagsTag["Value"].isNull())
				tagsObject.value = allInstancesNodeTagsTag["Value"].asString();
			instancesObject.tags.push_back(tagsObject);
		}
		instances_.push_back(instancesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeInstancesResult::KVStoreInstance> DescribeInstancesResult::getInstances()const
{
	return instances_;
}

int DescribeInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

