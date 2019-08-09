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

#include <alibabacloud/dds/model/DescribeDBInstanceAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeDBInstanceAttributeResult::DescribeDBInstanceAttributeResult() :
	ServiceResult()
{}

DescribeDBInstanceAttributeResult::DescribeDBInstanceAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceAttributeResult::~DescribeDBInstanceAttributeResult()
{}

void DescribeDBInstanceAttributeResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allDBInstances = value["DBInstances"]["DBInstance"];
	for (auto value : allDBInstances)
	{
		DBInstance dBInstancesObject;
		if(!value["ResourceGroupId"].isNull())
			dBInstancesObject.resourceGroupId = value["ResourceGroupId"].asString();
		if(!value["DBInstanceId"].isNull())
			dBInstancesObject.dBInstanceId = value["DBInstanceId"].asString();
		if(!value["DBInstanceDescription"].isNull())
			dBInstancesObject.dBInstanceDescription = value["DBInstanceDescription"].asString();
		if(!value["RegionId"].isNull())
			dBInstancesObject.regionId = value["RegionId"].asString();
		if(!value["ZoneId"].isNull())
			dBInstancesObject.zoneId = value["ZoneId"].asString();
		if(!value["Engine"].isNull())
			dBInstancesObject.engine = value["Engine"].asString();
		if(!value["EngineVersion"].isNull())
			dBInstancesObject.engineVersion = value["EngineVersion"].asString();
		if(!value["StorageEngine"].isNull())
			dBInstancesObject.storageEngine = value["StorageEngine"].asString();
		if(!value["DBInstanceClass"].isNull())
			dBInstancesObject.dBInstanceClass = value["DBInstanceClass"].asString();
		if(!value["DBInstanceStorage"].isNull())
			dBInstancesObject.dBInstanceStorage = std::stoi(value["DBInstanceStorage"].asString());
		if(!value["ReplacateId"].isNull())
			dBInstancesObject.replacateId = value["ReplacateId"].asString();
		if(!value["VPCId"].isNull())
			dBInstancesObject.vPCId = value["VPCId"].asString();
		if(!value["VSwitchId"].isNull())
			dBInstancesObject.vSwitchId = value["VSwitchId"].asString();
		if(!value["VPCCloudInstanceIds"].isNull())
			dBInstancesObject.vPCCloudInstanceIds = value["VPCCloudInstanceIds"].asString();
		if(!value["DBInstanceStatus"].isNull())
			dBInstancesObject.dBInstanceStatus = value["DBInstanceStatus"].asString();
		if(!value["LockMode"].isNull())
			dBInstancesObject.lockMode = value["LockMode"].asString();
		if(!value["ChargeType"].isNull())
			dBInstancesObject.chargeType = value["ChargeType"].asString();
		if(!value["CreationTime"].isNull())
			dBInstancesObject.creationTime = value["CreationTime"].asString();
		if(!value["ReplicaSetName"].isNull())
			dBInstancesObject.replicaSetName = value["ReplicaSetName"].asString();
		if(!value["NetworkType"].isNull())
			dBInstancesObject.networkType = value["NetworkType"].asString();
		if(!value["ExpireTime"].isNull())
			dBInstancesObject.expireTime = value["ExpireTime"].asString();
		if(!value["MaintainStartTime"].isNull())
			dBInstancesObject.maintainStartTime = value["MaintainStartTime"].asString();
		if(!value["MaintainEndTime"].isNull())
			dBInstancesObject.maintainEndTime = value["MaintainEndTime"].asString();
		if(!value["DBInstanceType"].isNull())
			dBInstancesObject.dBInstanceType = value["DBInstanceType"].asString();
		if(!value["LastDowngradeTime"].isNull())
			dBInstancesObject.lastDowngradeTime = value["LastDowngradeTime"].asString();
		if(!value["ReplicationFactor"].isNull())
			dBInstancesObject.replicationFactor = value["ReplicationFactor"].asString();
		if(!value["ReadonlyReplicas"].isNull())
			dBInstancesObject.readonlyReplicas = value["ReadonlyReplicas"].asString();
		if(!value["MaxIOPS"].isNull())
			dBInstancesObject.maxIOPS = std::stoi(value["MaxIOPS"].asString());
		if(!value["MaxConnections"].isNull())
			dBInstancesObject.maxConnections = std::stoi(value["MaxConnections"].asString());
		if(!value["CurrentKernelVersion"].isNull())
			dBInstancesObject.currentKernelVersion = value["CurrentKernelVersion"].asString();
		if(!value["VpcAuthMode"].isNull())
			dBInstancesObject.vpcAuthMode = value["VpcAuthMode"].asString();
		auto allMongosList = value["MongosList"]["MongosAttribute"];
		for (auto value : allMongosList)
		{
			DBInstance::MongosAttribute mongosListObject;
			if(!value["NodeId"].isNull())
				mongosListObject.nodeId = value["NodeId"].asString();
			if(!value["NodeDescription"].isNull())
				mongosListObject.nodeDescription = value["NodeDescription"].asString();
			if(!value["NodeClass"].isNull())
				mongosListObject.nodeClass = value["NodeClass"].asString();
			if(!value["ConnectSting"].isNull())
				mongosListObject.connectSting = value["ConnectSting"].asString();
			if(!value["MaxIOPS"].isNull())
				mongosListObject.maxIOPS = std::stoi(value["MaxIOPS"].asString());
			if(!value["MaxConnections"].isNull())
				mongosListObject.maxConnections = std::stoi(value["MaxConnections"].asString());
			if(!value["Port"].isNull())
				mongosListObject.port = std::stoi(value["Port"].asString());
			if(!value["VpcCloudInstanceId"].isNull())
				mongosListObject.vpcCloudInstanceId = value["VpcCloudInstanceId"].asString();
			if(!value["VPCId"].isNull())
				mongosListObject.vPCId = value["VPCId"].asString();
			if(!value["VSwitchId"].isNull())
				mongosListObject.vSwitchId = value["VSwitchId"].asString();
			dBInstancesObject.mongosList.push_back(mongosListObject);
		}
		auto allShardList = value["ShardList"]["ShardAttribute"];
		for (auto value : allShardList)
		{
			DBInstance::ShardAttribute shardListObject;
			if(!value["NodeId"].isNull())
				shardListObject.nodeId = value["NodeId"].asString();
			if(!value["NodeDescription"].isNull())
				shardListObject.nodeDescription = value["NodeDescription"].asString();
			if(!value["NodeClass"].isNull())
				shardListObject.nodeClass = value["NodeClass"].asString();
			if(!value["NodeStorage"].isNull())
				shardListObject.nodeStorage = std::stoi(value["NodeStorage"].asString());
			if(!value["MaxIOPS"].isNull())
				shardListObject.maxIOPS = std::stoi(value["MaxIOPS"].asString());
			if(!value["MaxConnections"].isNull())
				shardListObject.maxConnections = std::stoi(value["MaxConnections"].asString());
			if(!value["ConnectString"].isNull())
				shardListObject.connectString = value["ConnectString"].asString();
			if(!value["Port"].isNull())
				shardListObject.port = std::stoi(value["Port"].asString());
			dBInstancesObject.shardList.push_back(shardListObject);
		}
		auto allConfigserverList = value["ConfigserverList"]["ConfigserverAttribute"];
		for (auto value : allConfigserverList)
		{
			DBInstance::ConfigserverAttribute configserverListObject;
			if(!value["NodeId"].isNull())
				configserverListObject.nodeId = value["NodeId"].asString();
			if(!value["NodeDescription"].isNull())
				configserverListObject.nodeDescription = value["NodeDescription"].asString();
			if(!value["NodeClass"].isNull())
				configserverListObject.nodeClass = value["NodeClass"].asString();
			if(!value["NodeStorage"].isNull())
				configserverListObject.nodeStorage = std::stoi(value["NodeStorage"].asString());
			if(!value["MaxIOPS"].isNull())
				configserverListObject.maxIOPS = std::stoi(value["MaxIOPS"].asString());
			if(!value["MaxConnections"].isNull())
				configserverListObject.maxConnections = std::stoi(value["MaxConnections"].asString());
			if(!value["ConnectString"].isNull())
				configserverListObject.connectString = value["ConnectString"].asString();
			if(!value["Port"].isNull())
				configserverListObject.port = std::stoi(value["Port"].asString());
			dBInstancesObject.configserverList.push_back(configserverListObject);
		}
		auto allReplicaSets = value["ReplicaSets"]["ReplicaSet"];
		for (auto value : allReplicaSets)
		{
			DBInstance::ReplicaSet replicaSetsObject;
			if(!value["ReplicaSetRole"].isNull())
				replicaSetsObject.replicaSetRole = value["ReplicaSetRole"].asString();
			if(!value["ConnectionDomain"].isNull())
				replicaSetsObject.connectionDomain = value["ConnectionDomain"].asString();
			if(!value["ConnectionPort"].isNull())
				replicaSetsObject.connectionPort = value["ConnectionPort"].asString();
			if(!value["VPCCloudInstanceId"].isNull())
				replicaSetsObject.vPCCloudInstanceId = value["VPCCloudInstanceId"].asString();
			if(!value["VPCId"].isNull())
				replicaSetsObject.vPCId = value["VPCId"].asString();
			if(!value["VSwitchId"].isNull())
				replicaSetsObject.vSwitchId = value["VSwitchId"].asString();
			if(!value["NetworkType"].isNull())
				replicaSetsObject.networkType = value["NetworkType"].asString();
			dBInstancesObject.replicaSets.push_back(replicaSetsObject);
		}
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			DBInstance::Tag tagsObject;
			if(!value["Key"].isNull())
				tagsObject.key = value["Key"].asString();
			if(!value["Value"].isNull())
				tagsObject.value = value["Value"].asString();
			dBInstancesObject.tags.push_back(tagsObject);
		}
		dBInstances_.push_back(dBInstancesObject);
	}

}

std::vector<DescribeDBInstanceAttributeResult::DBInstance> DescribeDBInstanceAttributeResult::getDBInstances()const
{
	return dBInstances_;
}

