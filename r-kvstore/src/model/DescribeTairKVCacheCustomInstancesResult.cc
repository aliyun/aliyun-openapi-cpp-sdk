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

#include <alibabacloud/r-kvstore/model/DescribeTairKVCacheCustomInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeTairKVCacheCustomInstancesResult::DescribeTairKVCacheCustomInstancesResult() :
	ServiceResult()
{}

DescribeTairKVCacheCustomInstancesResult::DescribeTairKVCacheCustomInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTairKVCacheCustomInstancesResult::~DescribeTairKVCacheCustomInstancesResult()
{}

void DescribeTairKVCacheCustomInstancesResult::parse(const std::string &payload)
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
		if(!valueInstancesKVStoreInstance["CreateTime"].isNull())
			instancesObject.createTime = valueInstancesKVStoreInstance["CreateTime"].asString();
		if(!valueInstancesKVStoreInstance["ChargeType"].isNull())
			instancesObject.chargeType = valueInstancesKVStoreInstance["ChargeType"].asString();
		if(!valueInstancesKVStoreInstance["NetworkType"].isNull())
			instancesObject.networkType = valueInstancesKVStoreInstance["NetworkType"].asString();
		if(!valueInstancesKVStoreInstance["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesKVStoreInstance["InstanceName"].asString();
		if(!valueInstancesKVStoreInstance["InstanceClass"].isNull())
			instancesObject.instanceClass = valueInstancesKVStoreInstance["InstanceClass"].asString();
		if(!valueInstancesKVStoreInstance["DestroyTime"].isNull())
			instancesObject.destroyTime = valueInstancesKVStoreInstance["DestroyTime"].asString();
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
		if(!valueInstancesKVStoreInstance["Storage"].isNull())
			instancesObject.storage = std::stol(valueInstancesKVStoreInstance["Storage"].asString());
		if(!valueInstancesKVStoreInstance["StorageType"].isNull())
			instancesObject.storageType = valueInstancesKVStoreInstance["StorageType"].asString();
		if(!valueInstancesKVStoreInstance["PrivateIp"].isNull())
			instancesObject.privateIp = valueInstancesKVStoreInstance["PrivateIp"].asString();
		if(!valueInstancesKVStoreInstance["UseEni"].isNull())
			instancesObject.useEni = valueInstancesKVStoreInstance["UseEni"].asString() == "true";
		auto allTagsNode = valueInstancesKVStoreInstance["Tags"]["Tag"];
		for (auto valueInstancesKVStoreInstanceTagsTag : allTagsNode)
		{
			KVStoreInstance::Tag tagsObject;
			if(!valueInstancesKVStoreInstanceTagsTag["Key"].isNull())
				tagsObject.key = valueInstancesKVStoreInstanceTagsTag["Key"].asString();
			if(!valueInstancesKVStoreInstanceTagsTag["Value"].isNull())
				tagsObject.value = valueInstancesKVStoreInstanceTagsTag["Value"].asString();
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

std::vector<DescribeTairKVCacheCustomInstancesResult::KVStoreInstance> DescribeTairKVCacheCustomInstancesResult::getInstances()const
{
	return instances_;
}

int DescribeTairKVCacheCustomInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeTairKVCacheCustomInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeTairKVCacheCustomInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

