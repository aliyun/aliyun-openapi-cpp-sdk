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
		if(!valueDBInstancesDBInstance["CreationTime"].isNull())
			dBInstancesObject.creationTime = valueDBInstancesDBInstance["CreationTime"].asString();
		if(!valueDBInstancesDBInstance["ReplacateId"].isNull())
			dBInstancesObject.replacateId = valueDBInstancesDBInstance["ReplacateId"].asString();
		if(!valueDBInstancesDBInstance["ChargeType"].isNull())
			dBInstancesObject.chargeType = valueDBInstancesDBInstance["ChargeType"].asString();
		if(!valueDBInstancesDBInstance["VpcAuthMode"].isNull())
			dBInstancesObject.vpcAuthMode = valueDBInstancesDBInstance["VpcAuthMode"].asString();
		if(!valueDBInstancesDBInstance["NetworkType"].isNull())
			dBInstancesObject.networkType = valueDBInstancesDBInstance["NetworkType"].asString();
		if(!valueDBInstancesDBInstance["LockMode"].isNull())
			dBInstancesObject.lockMode = valueDBInstancesDBInstance["LockMode"].asString();
		if(!valueDBInstancesDBInstance["EngineVersion"].isNull())
			dBInstancesObject.engineVersion = valueDBInstancesDBInstance["EngineVersion"].asString();
		if(!valueDBInstancesDBInstance["MaxIOPS"].isNull())
			dBInstancesObject.maxIOPS = std::stoi(valueDBInstancesDBInstance["MaxIOPS"].asString());
		if(!valueDBInstancesDBInstance["VPCCloudInstanceIds"].isNull())
			dBInstancesObject.vPCCloudInstanceIds = valueDBInstancesDBInstance["VPCCloudInstanceIds"].asString();
		if(!valueDBInstancesDBInstance["ProtocolType"].isNull())
			dBInstancesObject.protocolType = valueDBInstancesDBInstance["ProtocolType"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceDescription"].isNull())
			dBInstancesObject.dBInstanceDescription = valueDBInstancesDBInstance["DBInstanceDescription"].asString();
		if(!valueDBInstancesDBInstance["CurrentKernelVersion"].isNull())
			dBInstancesObject.currentKernelVersion = valueDBInstancesDBInstance["CurrentKernelVersion"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceReleaseProtection"].isNull())
			dBInstancesObject.dBInstanceReleaseProtection = valueDBInstancesDBInstance["DBInstanceReleaseProtection"].asString() == "true";
		if(!valueDBInstancesDBInstance["ExpireTime"].isNull())
			dBInstancesObject.expireTime = valueDBInstancesDBInstance["ExpireTime"].asString();
		if(!valueDBInstancesDBInstance["MaintainStartTime"].isNull())
			dBInstancesObject.maintainStartTime = valueDBInstancesDBInstance["MaintainStartTime"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceType"].isNull())
			dBInstancesObject.dBInstanceType = valueDBInstancesDBInstance["DBInstanceType"].asString();
		if(!valueDBInstancesDBInstance["LastDowngradeTime"].isNull())
			dBInstancesObject.lastDowngradeTime = valueDBInstancesDBInstance["LastDowngradeTime"].asString();
		if(!valueDBInstancesDBInstance["MaintainEndTime"].isNull())
			dBInstancesObject.maintainEndTime = valueDBInstancesDBInstance["MaintainEndTime"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceStatus"].isNull())
			dBInstancesObject.dBInstanceStatus = valueDBInstancesDBInstance["DBInstanceStatus"].asString();
		if(!valueDBInstancesDBInstance["VPCId"].isNull())
			dBInstancesObject.vPCId = valueDBInstancesDBInstance["VPCId"].asString();
		if(!valueDBInstancesDBInstance["RegionId"].isNull())
			dBInstancesObject.regionId = valueDBInstancesDBInstance["RegionId"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceStorage"].isNull())
			dBInstancesObject.dBInstanceStorage = std::stoi(valueDBInstancesDBInstance["DBInstanceStorage"].asString());
		if(!valueDBInstancesDBInstance["ReplicaSetName"].isNull())
			dBInstancesObject.replicaSetName = valueDBInstancesDBInstance["ReplicaSetName"].asString();
		if(!valueDBInstancesDBInstance["VSwitchId"].isNull())
			dBInstancesObject.vSwitchId = valueDBInstancesDBInstance["VSwitchId"].asString();
		if(!valueDBInstancesDBInstance["StorageEngine"].isNull())
			dBInstancesObject.storageEngine = valueDBInstancesDBInstance["StorageEngine"].asString();
		if(!valueDBInstancesDBInstance["ResourceGroupId"].isNull())
			dBInstancesObject.resourceGroupId = valueDBInstancesDBInstance["ResourceGroupId"].asString();
		if(!valueDBInstancesDBInstance["ZoneId"].isNull())
			dBInstancesObject.zoneId = valueDBInstancesDBInstance["ZoneId"].asString();
		if(!valueDBInstancesDBInstance["MaxConnections"].isNull())
			dBInstancesObject.maxConnections = std::stoi(valueDBInstancesDBInstance["MaxConnections"].asString());
		if(!valueDBInstancesDBInstance["DBInstanceId"].isNull())
			dBInstancesObject.dBInstanceId = valueDBInstancesDBInstance["DBInstanceId"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceClass"].isNull())
			dBInstancesObject.dBInstanceClass = valueDBInstancesDBInstance["DBInstanceClass"].asString();
		if(!valueDBInstancesDBInstance["Engine"].isNull())
			dBInstancesObject.engine = valueDBInstancesDBInstance["Engine"].asString();
		if(!valueDBInstancesDBInstance["ReadonlyReplicas"].isNull())
			dBInstancesObject.readonlyReplicas = valueDBInstancesDBInstance["ReadonlyReplicas"].asString();
		if(!valueDBInstancesDBInstance["ReplicationFactor"].isNull())
			dBInstancesObject.replicationFactor = valueDBInstancesDBInstance["ReplicationFactor"].asString();
		if(!valueDBInstancesDBInstance["KindCode"].isNull())
			dBInstancesObject.kindCode = valueDBInstancesDBInstance["KindCode"].asString();
		if(!valueDBInstancesDBInstance["CapacityUnit"].isNull())
			dBInstancesObject.capacityUnit = valueDBInstancesDBInstance["CapacityUnit"].asString();
		auto allReplicaSetsNode = valueDBInstancesDBInstance["ReplicaSets"]["ReplicaSet"];
		for (auto valueDBInstancesDBInstanceReplicaSetsReplicaSet : allReplicaSetsNode)
		{
			DBInstance::ReplicaSet replicaSetsObject;
			if(!valueDBInstancesDBInstanceReplicaSetsReplicaSet["VSwitchId"].isNull())
				replicaSetsObject.vSwitchId = valueDBInstancesDBInstanceReplicaSetsReplicaSet["VSwitchId"].asString();
			if(!valueDBInstancesDBInstanceReplicaSetsReplicaSet["ConnectionPort"].isNull())
				replicaSetsObject.connectionPort = valueDBInstancesDBInstanceReplicaSetsReplicaSet["ConnectionPort"].asString();
			if(!valueDBInstancesDBInstanceReplicaSetsReplicaSet["ReplicaSetRole"].isNull())
				replicaSetsObject.replicaSetRole = valueDBInstancesDBInstanceReplicaSetsReplicaSet["ReplicaSetRole"].asString();
			if(!valueDBInstancesDBInstanceReplicaSetsReplicaSet["ConnectionDomain"].isNull())
				replicaSetsObject.connectionDomain = valueDBInstancesDBInstanceReplicaSetsReplicaSet["ConnectionDomain"].asString();
			if(!valueDBInstancesDBInstanceReplicaSetsReplicaSet["VPCCloudInstanceId"].isNull())
				replicaSetsObject.vPCCloudInstanceId = valueDBInstancesDBInstanceReplicaSetsReplicaSet["VPCCloudInstanceId"].asString();
			if(!valueDBInstancesDBInstanceReplicaSetsReplicaSet["NetworkType"].isNull())
				replicaSetsObject.networkType = valueDBInstancesDBInstanceReplicaSetsReplicaSet["NetworkType"].asString();
			if(!valueDBInstancesDBInstanceReplicaSetsReplicaSet["VPCId"].isNull())
				replicaSetsObject.vPCId = valueDBInstancesDBInstanceReplicaSetsReplicaSet["VPCId"].asString();
			dBInstancesObject.replicaSets.push_back(replicaSetsObject);
		}
		auto allTagsNode = valueDBInstancesDBInstance["Tags"]["Tag"];
		for (auto valueDBInstancesDBInstanceTagsTag : allTagsNode)
		{
			DBInstance::Tag tagsObject;
			if(!valueDBInstancesDBInstanceTagsTag["Key"].isNull())
				tagsObject.key = valueDBInstancesDBInstanceTagsTag["Key"].asString();
			if(!valueDBInstancesDBInstanceTagsTag["Value"].isNull())
				tagsObject.value = valueDBInstancesDBInstanceTagsTag["Value"].asString();
			dBInstancesObject.tags.push_back(tagsObject);
		}
		auto allMongosListNode = valueDBInstancesDBInstance["MongosList"]["MongosAttribute"];
		for (auto valueDBInstancesDBInstanceMongosListMongosAttribute : allMongosListNode)
		{
			DBInstance::MongosAttribute mongosListObject;
			if(!valueDBInstancesDBInstanceMongosListMongosAttribute["VpcCloudInstanceId"].isNull())
				mongosListObject.vpcCloudInstanceId = valueDBInstancesDBInstanceMongosListMongosAttribute["VpcCloudInstanceId"].asString();
			if(!valueDBInstancesDBInstanceMongosListMongosAttribute["MaxIOPS"].isNull())
				mongosListObject.maxIOPS = std::stoi(valueDBInstancesDBInstanceMongosListMongosAttribute["MaxIOPS"].asString());
			if(!valueDBInstancesDBInstanceMongosListMongosAttribute["VSwitchId"].isNull())
				mongosListObject.vSwitchId = valueDBInstancesDBInstanceMongosListMongosAttribute["VSwitchId"].asString();
			if(!valueDBInstancesDBInstanceMongosListMongosAttribute["NodeClass"].isNull())
				mongosListObject.nodeClass = valueDBInstancesDBInstanceMongosListMongosAttribute["NodeClass"].asString();
			if(!valueDBInstancesDBInstanceMongosListMongosAttribute["MaxConnections"].isNull())
				mongosListObject.maxConnections = std::stoi(valueDBInstancesDBInstanceMongosListMongosAttribute["MaxConnections"].asString());
			if(!valueDBInstancesDBInstanceMongosListMongosAttribute["Port"].isNull())
				mongosListObject.port = std::stoi(valueDBInstancesDBInstanceMongosListMongosAttribute["Port"].asString());
			if(!valueDBInstancesDBInstanceMongosListMongosAttribute["VPCId"].isNull())
				mongosListObject.vPCId = valueDBInstancesDBInstanceMongosListMongosAttribute["VPCId"].asString();
			if(!valueDBInstancesDBInstanceMongosListMongosAttribute["ConnectSting"].isNull())
				mongosListObject.connectSting = valueDBInstancesDBInstanceMongosListMongosAttribute["ConnectSting"].asString();
			if(!valueDBInstancesDBInstanceMongosListMongosAttribute["NodeDescription"].isNull())
				mongosListObject.nodeDescription = valueDBInstancesDBInstanceMongosListMongosAttribute["NodeDescription"].asString();
			if(!valueDBInstancesDBInstanceMongosListMongosAttribute["NodeId"].isNull())
				mongosListObject.nodeId = valueDBInstancesDBInstanceMongosListMongosAttribute["NodeId"].asString();
			if(!valueDBInstancesDBInstanceMongosListMongosAttribute["Status"].isNull())
				mongosListObject.status = valueDBInstancesDBInstanceMongosListMongosAttribute["Status"].asString();
			dBInstancesObject.mongosList.push_back(mongosListObject);
		}
		auto allShardListNode = valueDBInstancesDBInstance["ShardList"]["ShardAttribute"];
		for (auto valueDBInstancesDBInstanceShardListShardAttribute : allShardListNode)
		{
			DBInstance::ShardAttribute shardListObject;
			if(!valueDBInstancesDBInstanceShardListShardAttribute["MaxIOPS"].isNull())
				shardListObject.maxIOPS = std::stoi(valueDBInstancesDBInstanceShardListShardAttribute["MaxIOPS"].asString());
			if(!valueDBInstancesDBInstanceShardListShardAttribute["ConnectString"].isNull())
				shardListObject.connectString = valueDBInstancesDBInstanceShardListShardAttribute["ConnectString"].asString();
			if(!valueDBInstancesDBInstanceShardListShardAttribute["NodeClass"].isNull())
				shardListObject.nodeClass = valueDBInstancesDBInstanceShardListShardAttribute["NodeClass"].asString();
			if(!valueDBInstancesDBInstanceShardListShardAttribute["MaxConnections"].isNull())
				shardListObject.maxConnections = std::stoi(valueDBInstancesDBInstanceShardListShardAttribute["MaxConnections"].asString());
			if(!valueDBInstancesDBInstanceShardListShardAttribute["Port"].isNull())
				shardListObject.port = std::stoi(valueDBInstancesDBInstanceShardListShardAttribute["Port"].asString());
			if(!valueDBInstancesDBInstanceShardListShardAttribute["NodeDescription"].isNull())
				shardListObject.nodeDescription = valueDBInstancesDBInstanceShardListShardAttribute["NodeDescription"].asString();
			if(!valueDBInstancesDBInstanceShardListShardAttribute["NodeId"].isNull())
				shardListObject.nodeId = valueDBInstancesDBInstanceShardListShardAttribute["NodeId"].asString();
			if(!valueDBInstancesDBInstanceShardListShardAttribute["NodeStorage"].isNull())
				shardListObject.nodeStorage = std::stoi(valueDBInstancesDBInstanceShardListShardAttribute["NodeStorage"].asString());
			if(!valueDBInstancesDBInstanceShardListShardAttribute["ReadonlyReplicas"].isNull())
				shardListObject.readonlyReplicas = std::stoi(valueDBInstancesDBInstanceShardListShardAttribute["ReadonlyReplicas"].asString());
			if(!valueDBInstancesDBInstanceShardListShardAttribute["Status"].isNull())
				shardListObject.status = valueDBInstancesDBInstanceShardListShardAttribute["Status"].asString();
			dBInstancesObject.shardList.push_back(shardListObject);
		}
		auto allConfigserverListNode = valueDBInstancesDBInstance["ConfigserverList"]["ConfigserverAttribute"];
		for (auto valueDBInstancesDBInstanceConfigserverListConfigserverAttribute : allConfigserverListNode)
		{
			DBInstance::ConfigserverAttribute configserverListObject;
			if(!valueDBInstancesDBInstanceConfigserverListConfigserverAttribute["MaxIOPS"].isNull())
				configserverListObject.maxIOPS = std::stoi(valueDBInstancesDBInstanceConfigserverListConfigserverAttribute["MaxIOPS"].asString());
			if(!valueDBInstancesDBInstanceConfigserverListConfigserverAttribute["ConnectString"].isNull())
				configserverListObject.connectString = valueDBInstancesDBInstanceConfigserverListConfigserverAttribute["ConnectString"].asString();
			if(!valueDBInstancesDBInstanceConfigserverListConfigserverAttribute["NodeClass"].isNull())
				configserverListObject.nodeClass = valueDBInstancesDBInstanceConfigserverListConfigserverAttribute["NodeClass"].asString();
			if(!valueDBInstancesDBInstanceConfigserverListConfigserverAttribute["MaxConnections"].isNull())
				configserverListObject.maxConnections = std::stoi(valueDBInstancesDBInstanceConfigserverListConfigserverAttribute["MaxConnections"].asString());
			if(!valueDBInstancesDBInstanceConfigserverListConfigserverAttribute["Port"].isNull())
				configserverListObject.port = std::stoi(valueDBInstancesDBInstanceConfigserverListConfigserverAttribute["Port"].asString());
			if(!valueDBInstancesDBInstanceConfigserverListConfigserverAttribute["NodeDescription"].isNull())
				configserverListObject.nodeDescription = valueDBInstancesDBInstanceConfigserverListConfigserverAttribute["NodeDescription"].asString();
			if(!valueDBInstancesDBInstanceConfigserverListConfigserverAttribute["NodeId"].isNull())
				configserverListObject.nodeId = valueDBInstancesDBInstanceConfigserverListConfigserverAttribute["NodeId"].asString();
			if(!valueDBInstancesDBInstanceConfigserverListConfigserverAttribute["NodeStorage"].isNull())
				configserverListObject.nodeStorage = std::stoi(valueDBInstancesDBInstanceConfigserverListConfigserverAttribute["NodeStorage"].asString());
			if(!valueDBInstancesDBInstanceConfigserverListConfigserverAttribute["Status"].isNull())
				configserverListObject.status = valueDBInstancesDBInstanceConfigserverListConfigserverAttribute["Status"].asString();
			dBInstancesObject.configserverList.push_back(configserverListObject);
		}
		dBInstances_.push_back(dBInstancesObject);
	}

}

std::vector<DescribeDBInstanceAttributeResult::DBInstance> DescribeDBInstanceAttributeResult::getDBInstances()const
{
	return dBInstances_;
}

