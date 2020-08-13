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
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDBInstancesNode = value["DBInstances"]["DBInstance"];
	for (auto valueDBInstancesDBInstance : allDBInstancesNode)
	{
		DBInstance dBInstancesObject;
		if(!valueDBInstancesDBInstance["ResourceGroupId"].isNull())
			dBInstancesObject.resourceGroupId = valueDBInstancesDBInstance["ResourceGroupId"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceId"].isNull())
			dBInstancesObject.dBInstanceId = valueDBInstancesDBInstance["DBInstanceId"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceDescription"].isNull())
			dBInstancesObject.dBInstanceDescription = valueDBInstancesDBInstance["DBInstanceDescription"].asString();
		if(!valueDBInstancesDBInstance["RegionId"].isNull())
			dBInstancesObject.regionId = valueDBInstancesDBInstance["RegionId"].asString();
		if(!valueDBInstancesDBInstance["ZoneId"].isNull())
			dBInstancesObject.zoneId = valueDBInstancesDBInstance["ZoneId"].asString();
		if(!valueDBInstancesDBInstance["Engine"].isNull())
			dBInstancesObject.engine = valueDBInstancesDBInstance["Engine"].asString();
		if(!valueDBInstancesDBInstance["EngineVersion"].isNull())
			dBInstancesObject.engineVersion = valueDBInstancesDBInstance["EngineVersion"].asString();
		if(!valueDBInstancesDBInstance["StorageEngine"].isNull())
			dBInstancesObject.storageEngine = valueDBInstancesDBInstance["StorageEngine"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceClass"].isNull())
			dBInstancesObject.dBInstanceClass = valueDBInstancesDBInstance["DBInstanceClass"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceStorage"].isNull())
			dBInstancesObject.dBInstanceStorage = std::stoi(valueDBInstancesDBInstance["DBInstanceStorage"].asString());
		if(!valueDBInstancesDBInstance["ReplacateId"].isNull())
			dBInstancesObject.replacateId = valueDBInstancesDBInstance["ReplacateId"].asString();
		if(!valueDBInstancesDBInstance["VPCId"].isNull())
			dBInstancesObject.vPCId = valueDBInstancesDBInstance["VPCId"].asString();
		if(!valueDBInstancesDBInstance["VSwitchId"].isNull())
			dBInstancesObject.vSwitchId = valueDBInstancesDBInstance["VSwitchId"].asString();
		if(!valueDBInstancesDBInstance["VPCCloudInstanceIds"].isNull())
			dBInstancesObject.vPCCloudInstanceIds = valueDBInstancesDBInstance["VPCCloudInstanceIds"].asString();
		if(!valueDBInstancesDBInstance["KindCode"].isNull())
			dBInstancesObject.kindCode = valueDBInstancesDBInstance["KindCode"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceStatus"].isNull())
			dBInstancesObject.dBInstanceStatus = valueDBInstancesDBInstance["DBInstanceStatus"].asString();
		if(!valueDBInstancesDBInstance["LockMode"].isNull())
			dBInstancesObject.lockMode = valueDBInstancesDBInstance["LockMode"].asString();
		if(!valueDBInstancesDBInstance["ChargeType"].isNull())
			dBInstancesObject.chargeType = valueDBInstancesDBInstance["ChargeType"].asString();
		if(!valueDBInstancesDBInstance["CreationTime"].isNull())
			dBInstancesObject.creationTime = valueDBInstancesDBInstance["CreationTime"].asString();
		if(!valueDBInstancesDBInstance["ReplicaSetName"].isNull())
			dBInstancesObject.replicaSetName = valueDBInstancesDBInstance["ReplicaSetName"].asString();
		if(!valueDBInstancesDBInstance["NetworkType"].isNull())
			dBInstancesObject.networkType = valueDBInstancesDBInstance["NetworkType"].asString();
		if(!valueDBInstancesDBInstance["ExpireTime"].isNull())
			dBInstancesObject.expireTime = valueDBInstancesDBInstance["ExpireTime"].asString();
		if(!valueDBInstancesDBInstance["MaintainStartTime"].isNull())
			dBInstancesObject.maintainStartTime = valueDBInstancesDBInstance["MaintainStartTime"].asString();
		if(!valueDBInstancesDBInstance["MaintainEndTime"].isNull())
			dBInstancesObject.maintainEndTime = valueDBInstancesDBInstance["MaintainEndTime"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceType"].isNull())
			dBInstancesObject.dBInstanceType = valueDBInstancesDBInstance["DBInstanceType"].asString();
		if(!valueDBInstancesDBInstance["LastDowngradeTime"].isNull())
			dBInstancesObject.lastDowngradeTime = valueDBInstancesDBInstance["LastDowngradeTime"].asString();
		if(!valueDBInstancesDBInstance["ReplicationFactor"].isNull())
			dBInstancesObject.replicationFactor = valueDBInstancesDBInstance["ReplicationFactor"].asString();
		if(!valueDBInstancesDBInstance["ReadonlyReplicas"].isNull())
			dBInstancesObject.readonlyReplicas = valueDBInstancesDBInstance["ReadonlyReplicas"].asString();
		if(!valueDBInstancesDBInstance["MaxIOPS"].isNull())
			dBInstancesObject.maxIOPS = std::stoi(valueDBInstancesDBInstance["MaxIOPS"].asString());
		if(!valueDBInstancesDBInstance["MaxConnections"].isNull())
			dBInstancesObject.maxConnections = std::stoi(valueDBInstancesDBInstance["MaxConnections"].asString());
		if(!valueDBInstancesDBInstance["CurrentKernelVersion"].isNull())
			dBInstancesObject.currentKernelVersion = valueDBInstancesDBInstance["CurrentKernelVersion"].asString();
		if(!valueDBInstancesDBInstance["ProtocolType"].isNull())
			dBInstancesObject.protocolType = valueDBInstancesDBInstance["ProtocolType"].asString();
		if(!valueDBInstancesDBInstance["VpcAuthMode"].isNull())
			dBInstancesObject.vpcAuthMode = valueDBInstancesDBInstance["VpcAuthMode"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceReleaseProtection"].isNull())
			dBInstancesObject.dBInstanceReleaseProtection = valueDBInstancesDBInstance["DBInstanceReleaseProtection"].asString() == "true";
		auto allMongosListNode = allDBInstancesNode["MongosList"]["MongosAttribute"];
		for (auto allDBInstancesNodeMongosListMongosAttribute : allMongosListNode)
		{
			DBInstance::MongosAttribute mongosListObject;
			if(!allDBInstancesNodeMongosListMongosAttribute["NodeId"].isNull())
				mongosListObject.nodeId = allDBInstancesNodeMongosListMongosAttribute["NodeId"].asString();
			if(!allDBInstancesNodeMongosListMongosAttribute["NodeDescription"].isNull())
				mongosListObject.nodeDescription = allDBInstancesNodeMongosListMongosAttribute["NodeDescription"].asString();
			if(!allDBInstancesNodeMongosListMongosAttribute["NodeClass"].isNull())
				mongosListObject.nodeClass = allDBInstancesNodeMongosListMongosAttribute["NodeClass"].asString();
			if(!allDBInstancesNodeMongosListMongosAttribute["ConnectSting"].isNull())
				mongosListObject.connectSting = allDBInstancesNodeMongosListMongosAttribute["ConnectSting"].asString();
			if(!allDBInstancesNodeMongosListMongosAttribute["MaxIOPS"].isNull())
				mongosListObject.maxIOPS = std::stoi(allDBInstancesNodeMongosListMongosAttribute["MaxIOPS"].asString());
			if(!allDBInstancesNodeMongosListMongosAttribute["MaxConnections"].isNull())
				mongosListObject.maxConnections = std::stoi(allDBInstancesNodeMongosListMongosAttribute["MaxConnections"].asString());
			if(!allDBInstancesNodeMongosListMongosAttribute["Port"].isNull())
				mongosListObject.port = std::stoi(allDBInstancesNodeMongosListMongosAttribute["Port"].asString());
			if(!allDBInstancesNodeMongosListMongosAttribute["VpcCloudInstanceId"].isNull())
				mongosListObject.vpcCloudInstanceId = allDBInstancesNodeMongosListMongosAttribute["VpcCloudInstanceId"].asString();
			if(!allDBInstancesNodeMongosListMongosAttribute["VPCId"].isNull())
				mongosListObject.vPCId = allDBInstancesNodeMongosListMongosAttribute["VPCId"].asString();
			if(!allDBInstancesNodeMongosListMongosAttribute["VSwitchId"].isNull())
				mongosListObject.vSwitchId = allDBInstancesNodeMongosListMongosAttribute["VSwitchId"].asString();
			dBInstancesObject.mongosList.push_back(mongosListObject);
		}
		auto allShardListNode = allDBInstancesNode["ShardList"]["ShardAttribute"];
		for (auto allDBInstancesNodeShardListShardAttribute : allShardListNode)
		{
			DBInstance::ShardAttribute shardListObject;
			if(!allDBInstancesNodeShardListShardAttribute["NodeId"].isNull())
				shardListObject.nodeId = allDBInstancesNodeShardListShardAttribute["NodeId"].asString();
			if(!allDBInstancesNodeShardListShardAttribute["NodeDescription"].isNull())
				shardListObject.nodeDescription = allDBInstancesNodeShardListShardAttribute["NodeDescription"].asString();
			if(!allDBInstancesNodeShardListShardAttribute["NodeClass"].isNull())
				shardListObject.nodeClass = allDBInstancesNodeShardListShardAttribute["NodeClass"].asString();
			if(!allDBInstancesNodeShardListShardAttribute["NodeStorage"].isNull())
				shardListObject.nodeStorage = std::stoi(allDBInstancesNodeShardListShardAttribute["NodeStorage"].asString());
			if(!allDBInstancesNodeShardListShardAttribute["MaxIOPS"].isNull())
				shardListObject.maxIOPS = std::stoi(allDBInstancesNodeShardListShardAttribute["MaxIOPS"].asString());
			if(!allDBInstancesNodeShardListShardAttribute["MaxConnections"].isNull())
				shardListObject.maxConnections = std::stoi(allDBInstancesNodeShardListShardAttribute["MaxConnections"].asString());
			if(!allDBInstancesNodeShardListShardAttribute["ConnectString"].isNull())
				shardListObject.connectString = allDBInstancesNodeShardListShardAttribute["ConnectString"].asString();
			if(!allDBInstancesNodeShardListShardAttribute["Port"].isNull())
				shardListObject.port = std::stoi(allDBInstancesNodeShardListShardAttribute["Port"].asString());
			dBInstancesObject.shardList.push_back(shardListObject);
		}
		auto allConfigserverListNode = allDBInstancesNode["ConfigserverList"]["ConfigserverAttribute"];
		for (auto allDBInstancesNodeConfigserverListConfigserverAttribute : allConfigserverListNode)
		{
			DBInstance::ConfigserverAttribute configserverListObject;
			if(!allDBInstancesNodeConfigserverListConfigserverAttribute["NodeId"].isNull())
				configserverListObject.nodeId = allDBInstancesNodeConfigserverListConfigserverAttribute["NodeId"].asString();
			if(!allDBInstancesNodeConfigserverListConfigserverAttribute["NodeDescription"].isNull())
				configserverListObject.nodeDescription = allDBInstancesNodeConfigserverListConfigserverAttribute["NodeDescription"].asString();
			if(!allDBInstancesNodeConfigserverListConfigserverAttribute["NodeClass"].isNull())
				configserverListObject.nodeClass = allDBInstancesNodeConfigserverListConfigserverAttribute["NodeClass"].asString();
			if(!allDBInstancesNodeConfigserverListConfigserverAttribute["NodeStorage"].isNull())
				configserverListObject.nodeStorage = std::stoi(allDBInstancesNodeConfigserverListConfigserverAttribute["NodeStorage"].asString());
			if(!allDBInstancesNodeConfigserverListConfigserverAttribute["MaxIOPS"].isNull())
				configserverListObject.maxIOPS = std::stoi(allDBInstancesNodeConfigserverListConfigserverAttribute["MaxIOPS"].asString());
			if(!allDBInstancesNodeConfigserverListConfigserverAttribute["MaxConnections"].isNull())
				configserverListObject.maxConnections = std::stoi(allDBInstancesNodeConfigserverListConfigserverAttribute["MaxConnections"].asString());
			if(!allDBInstancesNodeConfigserverListConfigserverAttribute["ConnectString"].isNull())
				configserverListObject.connectString = allDBInstancesNodeConfigserverListConfigserverAttribute["ConnectString"].asString();
			if(!allDBInstancesNodeConfigserverListConfigserverAttribute["Port"].isNull())
				configserverListObject.port = std::stoi(allDBInstancesNodeConfigserverListConfigserverAttribute["Port"].asString());
			dBInstancesObject.configserverList.push_back(configserverListObject);
		}
		auto allReplicaSetsNode = allDBInstancesNode["ReplicaSets"]["ReplicaSet"];
		for (auto allDBInstancesNodeReplicaSetsReplicaSet : allReplicaSetsNode)
		{
			DBInstance::ReplicaSet replicaSetsObject;
			if(!allDBInstancesNodeReplicaSetsReplicaSet["ReplicaSetRole"].isNull())
				replicaSetsObject.replicaSetRole = allDBInstancesNodeReplicaSetsReplicaSet["ReplicaSetRole"].asString();
			if(!allDBInstancesNodeReplicaSetsReplicaSet["ConnectionDomain"].isNull())
				replicaSetsObject.connectionDomain = allDBInstancesNodeReplicaSetsReplicaSet["ConnectionDomain"].asString();
			if(!allDBInstancesNodeReplicaSetsReplicaSet["ConnectionPort"].isNull())
				replicaSetsObject.connectionPort = allDBInstancesNodeReplicaSetsReplicaSet["ConnectionPort"].asString();
			if(!allDBInstancesNodeReplicaSetsReplicaSet["VPCCloudInstanceId"].isNull())
				replicaSetsObject.vPCCloudInstanceId = allDBInstancesNodeReplicaSetsReplicaSet["VPCCloudInstanceId"].asString();
			if(!allDBInstancesNodeReplicaSetsReplicaSet["VPCId"].isNull())
				replicaSetsObject.vPCId = allDBInstancesNodeReplicaSetsReplicaSet["VPCId"].asString();
			if(!allDBInstancesNodeReplicaSetsReplicaSet["VSwitchId"].isNull())
				replicaSetsObject.vSwitchId = allDBInstancesNodeReplicaSetsReplicaSet["VSwitchId"].asString();
			if(!allDBInstancesNodeReplicaSetsReplicaSet["NetworkType"].isNull())
				replicaSetsObject.networkType = allDBInstancesNodeReplicaSetsReplicaSet["NetworkType"].asString();
			dBInstancesObject.replicaSets.push_back(replicaSetsObject);
		}
		auto allTagsNode = allDBInstancesNode["Tags"]["Tag"];
		for (auto allDBInstancesNodeTagsTag : allTagsNode)
		{
			DBInstance::Tag tagsObject;
			if(!allDBInstancesNodeTagsTag["Key"].isNull())
				tagsObject.key = allDBInstancesNodeTagsTag["Key"].asString();
			if(!allDBInstancesNodeTagsTag["Value"].isNull())
				tagsObject.value = allDBInstancesNodeTagsTag["Value"].asString();
			dBInstancesObject.tags.push_back(tagsObject);
		}
		dBInstances_.push_back(dBInstancesObject);
	}

}

std::vector<DescribeDBInstanceAttributeResult::DBInstance> DescribeDBInstanceAttributeResult::getDBInstances()const
{
	return dBInstances_;
}

