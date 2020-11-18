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

#include <alibabacloud/dds/model/DescribeDedicatedClusterInstanceListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeDedicatedClusterInstanceListResult::DescribeDedicatedClusterInstanceListResult() :
	ServiceResult()
{}

DescribeDedicatedClusterInstanceListResult::DescribeDedicatedClusterInstanceListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDedicatedClusterInstanceListResult::~DescribeDedicatedClusterInstanceListResult()
{}

void DescribeDedicatedClusterInstanceListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["dbInstance"];
	for (auto valueInstancesdbInstance : allInstancesNode)
	{
		DbInstance instancesObject;
		if(!valueInstancesdbInstance["Region"].isNull())
			instancesObject.region = valueInstancesdbInstance["Region"].asString();
		if(!valueInstancesdbInstance["ClusterId"].isNull())
			instancesObject.clusterId = valueInstancesdbInstance["ClusterId"].asString();
		if(!valueInstancesdbInstance["ClusterName"].isNull())
			instancesObject.clusterName = valueInstancesdbInstance["ClusterName"].asString();
		if(!valueInstancesdbInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesdbInstance["InstanceId"].asString();
		if(!valueInstancesdbInstance["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesdbInstance["InstanceName"].asString();
		if(!valueInstancesdbInstance["InstanceStatus"].isNull())
			instancesObject.instanceStatus = valueInstancesdbInstance["InstanceStatus"].asString();
		if(!valueInstancesdbInstance["EngineVersion"].isNull())
			instancesObject.engineVersion = valueInstancesdbInstance["EngineVersion"].asString();
		if(!valueInstancesdbInstance["CharacterType"].isNull())
			instancesObject.characterType = valueInstancesdbInstance["CharacterType"].asString();
		if(!valueInstancesdbInstance["MaintainStartTime"].isNull())
			instancesObject.maintainStartTime = valueInstancesdbInstance["MaintainStartTime"].asString();
		if(!valueInstancesdbInstance["MaintainEndTime"].isNull())
			instancesObject.maintainEndTime = valueInstancesdbInstance["MaintainEndTime"].asString();
		if(!valueInstancesdbInstance["RegionId"].isNull())
			instancesObject.regionId = valueInstancesdbInstance["RegionId"].asString();
		if(!valueInstancesdbInstance["VpcId"].isNull())
			instancesObject.vpcId = valueInstancesdbInstance["VpcId"].asString();
		if(!valueInstancesdbInstance["VswitchId"].isNull())
			instancesObject.vswitchId = valueInstancesdbInstance["VswitchId"].asString();
		if(!valueInstancesdbInstance["ZoneId"].isNull())
			instancesObject.zoneId = valueInstancesdbInstance["ZoneId"].asString();
		if(!valueInstancesdbInstance["CustomId"].isNull())
			instancesObject.customId = valueInstancesdbInstance["CustomId"].asString();
		if(!valueInstancesdbInstance["InstanceClass"].isNull())
			instancesObject.instanceClass = valueInstancesdbInstance["InstanceClass"].asString();
		if(!valueInstancesdbInstance["Engine"].isNull())
			instancesObject.engine = valueInstancesdbInstance["Engine"].asString();
		if(!valueInstancesdbInstance["StorageType"].isNull())
			instancesObject.storageType = valueInstancesdbInstance["StorageType"].asString();
		if(!valueInstancesdbInstance["ConnectionDomain"].isNull())
			instancesObject.connectionDomain = valueInstancesdbInstance["ConnectionDomain"].asString();
		if(!valueInstancesdbInstance["CreateTime"].isNull())
			instancesObject.createTime = valueInstancesdbInstance["CreateTime"].asString();
		auto allInstanceNodeListNode = valueInstancesdbInstance["InstanceNodeList"]["InstanceNodes"];
		for (auto valueInstancesdbInstanceInstanceNodeListInstanceNodes : allInstanceNodeListNode)
		{
			DbInstance::InstanceNodes instanceNodeListObject;
			if(!valueInstancesdbInstanceInstanceNodeListInstanceNodes["InsName"].isNull())
				instanceNodeListObject.insName = valueInstancesdbInstanceInstanceNodeListInstanceNodes["InsName"].asString();
			if(!valueInstancesdbInstanceInstanceNodeListInstanceNodes["Role"].isNull())
				instanceNodeListObject.role = valueInstancesdbInstanceInstanceNodeListInstanceNodes["Role"].asString();
			if(!valueInstancesdbInstanceInstanceNodeListInstanceNodes["NodeId"].isNull())
				instanceNodeListObject.nodeId = std::stoi(valueInstancesdbInstanceInstanceNodeListInstanceNodes["NodeId"].asString());
			if(!valueInstancesdbInstanceInstanceNodeListInstanceNodes["NodeType"].isNull())
				instanceNodeListObject.nodeType = valueInstancesdbInstanceInstanceNodeListInstanceNodes["NodeType"].asString();
			if(!valueInstancesdbInstanceInstanceNodeListInstanceNodes["NodeIp"].isNull())
				instanceNodeListObject.nodeIp = valueInstancesdbInstanceInstanceNodeListInstanceNodes["NodeIp"].asString();
			if(!valueInstancesdbInstanceInstanceNodeListInstanceNodes["Port"].isNull())
				instanceNodeListObject.port = std::stoi(valueInstancesdbInstanceInstanceNodeListInstanceNodes["Port"].asString());
			if(!valueInstancesdbInstanceInstanceNodeListInstanceNodes["ZoneId"].isNull())
				instanceNodeListObject.zoneId = valueInstancesdbInstanceInstanceNodeListInstanceNodes["ZoneId"].asString();
			if(!valueInstancesdbInstanceInstanceNodeListInstanceNodes["DedicatedHostName"].isNull())
				instanceNodeListObject.dedicatedHostName = valueInstancesdbInstanceInstanceNodeListInstanceNodes["DedicatedHostName"].asString();
			instancesObject.instanceNodeList.push_back(instanceNodeListObject);
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

std::vector<DescribeDedicatedClusterInstanceListResult::DbInstance> DescribeDedicatedClusterInstanceListResult::getInstances()const
{
	return instances_;
}

int DescribeDedicatedClusterInstanceListResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDedicatedClusterInstanceListResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDedicatedClusterInstanceListResult::getPageNumber()const
{
	return pageNumber_;
}

