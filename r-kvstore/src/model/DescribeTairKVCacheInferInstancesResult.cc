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

#include <alibabacloud/r-kvstore/model/DescribeTairKVCacheInferInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeTairKVCacheInferInstancesResult::DescribeTairKVCacheInferInstancesResult() :
	ServiceResult()
{}

DescribeTairKVCacheInferInstancesResult::DescribeTairKVCacheInferInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTairKVCacheInferInstancesResult::~DescribeTairKVCacheInferInstancesResult()
{}

void DescribeTairKVCacheInferInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["TairInferInstanceDTO"];
	for (auto valueInstancesTairInferInstanceDTO : allInstancesNode)
	{
		TairInferInstanceDTO instancesObject;
		if(!valueInstancesTairInferInstanceDTO["VpcId"].isNull())
			instancesObject.vpcId = valueInstancesTairInferInstanceDTO["VpcId"].asString();
		if(!valueInstancesTairInferInstanceDTO["CreateTime"].isNull())
			instancesObject.createTime = valueInstancesTairInferInstanceDTO["CreateTime"].asString();
		if(!valueInstancesTairInferInstanceDTO["ChargeType"].isNull())
			instancesObject.chargeType = valueInstancesTairInferInstanceDTO["ChargeType"].asString();
		if(!valueInstancesTairInferInstanceDTO["NetworkType"].isNull())
			instancesObject.networkType = valueInstancesTairInferInstanceDTO["NetworkType"].asString();
		if(!valueInstancesTairInferInstanceDTO["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesTairInferInstanceDTO["InstanceName"].asString();
		if(!valueInstancesTairInferInstanceDTO["InstanceClass"].isNull())
			instancesObject.instanceClass = valueInstancesTairInferInstanceDTO["InstanceClass"].asString();
		if(!valueInstancesTairInferInstanceDTO["DestroyTime"].isNull())
			instancesObject.destroyTime = valueInstancesTairInferInstanceDTO["DestroyTime"].asString();
		if(!valueInstancesTairInferInstanceDTO["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesTairInferInstanceDTO["InstanceId"].asString();
		if(!valueInstancesTairInferInstanceDTO["InstanceType"].isNull())
			instancesObject.instanceType = valueInstancesTairInferInstanceDTO["InstanceType"].asString();
		if(!valueInstancesTairInferInstanceDTO["RegionId"].isNull())
			instancesObject.regionId = valueInstancesTairInferInstanceDTO["RegionId"].asString();
		if(!valueInstancesTairInferInstanceDTO["EndTime"].isNull())
			instancesObject.endTime = valueInstancesTairInferInstanceDTO["EndTime"].asString();
		if(!valueInstancesTairInferInstanceDTO["VSwitchId"].isNull())
			instancesObject.vSwitchId = valueInstancesTairInferInstanceDTO["VSwitchId"].asString();
		if(!valueInstancesTairInferInstanceDTO["ResourceGroupId"].isNull())
			instancesObject.resourceGroupId = valueInstancesTairInferInstanceDTO["ResourceGroupId"].asString();
		if(!valueInstancesTairInferInstanceDTO["ZoneId"].isNull())
			instancesObject.zoneId = valueInstancesTairInferInstanceDTO["ZoneId"].asString();
		if(!valueInstancesTairInferInstanceDTO["InstanceStatus"].isNull())
			instancesObject.instanceStatus = valueInstancesTairInferInstanceDTO["InstanceStatus"].asString();
		if(!valueInstancesTairInferInstanceDTO["PrivateIp"].isNull())
			instancesObject.privateIp = valueInstancesTairInferInstanceDTO["PrivateIp"].asString();
		if(!valueInstancesTairInferInstanceDTO["Capacity"].isNull())
			instancesObject.capacity = std::stol(valueInstancesTairInferInstanceDTO["Capacity"].asString());
		if(!valueInstancesTairInferInstanceDTO["Model"].isNull())
			instancesObject.model = valueInstancesTairInferInstanceDTO["Model"].asString();
		if(!valueInstancesTairInferInstanceDTO["ModelServiceNum"].isNull())
			instancesObject.modelServiceNum = std::stoi(valueInstancesTairInferInstanceDTO["ModelServiceNum"].asString());
		if(!valueInstancesTairInferInstanceDTO["ComputeUnitNum"].isNull())
			instancesObject.computeUnitNum = std::stoi(valueInstancesTairInferInstanceDTO["ComputeUnitNum"].asString());
		if(!valueInstancesTairInferInstanceDTO["VNodeName"].isNull())
			instancesObject.vNodeName = valueInstancesTairInferInstanceDTO["VNodeName"].asString();
		auto allTagsNode = valueInstancesTairInferInstanceDTO["Tags"]["Tag"];
		for (auto valueInstancesTairInferInstanceDTOTagsTag : allTagsNode)
		{
			TairInferInstanceDTO::Tag tagsObject;
			if(!valueInstancesTairInferInstanceDTOTagsTag["Key"].isNull())
				tagsObject.key = valueInstancesTairInferInstanceDTOTagsTag["Key"].asString();
			if(!valueInstancesTairInferInstanceDTOTagsTag["Value"].isNull())
				tagsObject.value = valueInstancesTairInferInstanceDTOTagsTag["Value"].asString();
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

std::vector<DescribeTairKVCacheInferInstancesResult::TairInferInstanceDTO> DescribeTairKVCacheInferInstancesResult::getInstances()const
{
	return instances_;
}

int DescribeTairKVCacheInferInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeTairKVCacheInferInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeTairKVCacheInferInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

