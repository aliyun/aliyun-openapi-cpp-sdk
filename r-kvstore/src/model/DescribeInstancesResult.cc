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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allInstances = value["Instances"]["KVStoreInstance"];
	for (auto value : allInstances)
	{
		KVStoreInstance instancesObject;
		if(!value["ReplacateId"].isNull())
			instancesObject.replacateId = value["ReplacateId"].asString();
		if(!value["InstanceId"].isNull())
			instancesObject.instanceId = value["InstanceId"].asString();
		if(!value["InstanceName"].isNull())
			instancesObject.instanceName = value["InstanceName"].asString();
		if(!value["SearchKey"].isNull())
			instancesObject.searchKey = value["SearchKey"].asString();
		if(!value["ConnectionDomain"].isNull())
			instancesObject.connectionDomain = value["ConnectionDomain"].asString();
		if(!value["Port"].isNull())
			instancesObject.port = std::stol(value["Port"].asString());
		if(!value["UserName"].isNull())
			instancesObject.userName = value["UserName"].asString();
		if(!value["InstanceStatus"].isNull())
			instancesObject.instanceStatus = value["InstanceStatus"].asString();
		if(!value["RegionId"].isNull())
			instancesObject.regionId = value["RegionId"].asString();
		if(!value["Capacity"].isNull())
			instancesObject.capacity = std::stol(value["Capacity"].asString());
		if(!value["InstanceClass"].isNull())
			instancesObject.instanceClass = value["InstanceClass"].asString();
		if(!value["QPS"].isNull())
			instancesObject.qPS = std::stol(value["QPS"].asString());
		if(!value["Bandwidth"].isNull())
			instancesObject.bandwidth = std::stol(value["Bandwidth"].asString());
		if(!value["Connections"].isNull())
			instancesObject.connections = std::stol(value["Connections"].asString());
		if(!value["ZoneId"].isNull())
			instancesObject.zoneId = value["ZoneId"].asString();
		if(!value["Config"].isNull())
			instancesObject.config = value["Config"].asString();
		if(!value["ChargeType"].isNull())
			instancesObject.chargeType = value["ChargeType"].asString();
		if(!value["NetworkType"].isNull())
			instancesObject.networkType = value["NetworkType"].asString();
		if(!value["VpcId"].isNull())
			instancesObject.vpcId = value["VpcId"].asString();
		if(!value["VSwitchId"].isNull())
			instancesObject.vSwitchId = value["VSwitchId"].asString();
		if(!value["PrivateIp"].isNull())
			instancesObject.privateIp = value["PrivateIp"].asString();
		if(!value["CreateTime"].isNull())
			instancesObject.createTime = value["CreateTime"].asString();
		if(!value["EndTime"].isNull())
			instancesObject.endTime = value["EndTime"].asString();
		if(!value["HasRenewChangeOrder"].isNull())
			instancesObject.hasRenewChangeOrder = value["HasRenewChangeOrder"].asString();
		if(!value["IsRds"].isNull())
			instancesObject.isRds = value["IsRds"].asString() == "true";
		if(!value["InstanceType"].isNull())
			instancesObject.instanceType = value["InstanceType"].asString();
		if(!value["ArchitectureType"].isNull())
			instancesObject.architectureType = value["ArchitectureType"].asString();
		if(!value["NodeType"].isNull())
			instancesObject.nodeType = value["NodeType"].asString();
		if(!value["PackageType"].isNull())
			instancesObject.packageType = value["PackageType"].asString();
		if(!value["EngineVersion"].isNull())
			instancesObject.engineVersion = value["EngineVersion"].asString();
		if(!value["DestroyTime"].isNull())
			instancesObject.destroyTime = value["DestroyTime"].asString();
		if(!value["ConnectionMode"].isNull())
			instancesObject.connectionMode = value["ConnectionMode"].asString();
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			KVStoreInstance::Tag tagsObject;
			if(!value["Key"].isNull())
				tagsObject.key = value["Key"].asString();
			if(!value["Value"].isNull())
				tagsObject.value = value["Value"].asString();
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

