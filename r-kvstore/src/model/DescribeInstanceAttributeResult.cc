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

#include <alibabacloud/r-kvstore/model/DescribeInstanceAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeInstanceAttributeResult::DescribeInstanceAttributeResult() :
	ServiceResult()
{}

DescribeInstanceAttributeResult::DescribeInstanceAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceAttributeResult::~DescribeInstanceAttributeResult()
{}

void DescribeInstanceAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["DBInstanceAttribute"];
	for (auto valueInstancesDBInstanceAttribute : allInstancesNode)
	{
		DBInstanceAttribute instancesObject;
		if(!valueInstancesDBInstanceAttribute["VpcId"].isNull())
			instancesObject.vpcId = valueInstancesDBInstanceAttribute["VpcId"].asString();
		if(!valueInstancesDBInstanceAttribute["PrivateIp"].isNull())
			instancesObject.privateIp = valueInstancesDBInstanceAttribute["PrivateIp"].asString();
		if(!valueInstancesDBInstanceAttribute["Capacity"].isNull())
			instancesObject.capacity = std::stol(valueInstancesDBInstanceAttribute["Capacity"].asString());
		if(!valueInstancesDBInstanceAttribute["CreateTime"].isNull())
			instancesObject.createTime = valueInstancesDBInstanceAttribute["CreateTime"].asString();
		if(!valueInstancesDBInstanceAttribute["ConnectionDomain"].isNull())
			instancesObject.connectionDomain = valueInstancesDBInstanceAttribute["ConnectionDomain"].asString();
		if(!valueInstancesDBInstanceAttribute["IsRds"].isNull())
			instancesObject.isRds = valueInstancesDBInstanceAttribute["IsRds"].asString() == "true";
		if(!valueInstancesDBInstanceAttribute["ChargeType"].isNull())
			instancesObject.chargeType = valueInstancesDBInstanceAttribute["ChargeType"].asString();
		if(!valueInstancesDBInstanceAttribute["StorageType"].isNull())
			instancesObject.storageType = valueInstancesDBInstanceAttribute["StorageType"].asString();
		if(!valueInstancesDBInstanceAttribute["VpcAuthMode"].isNull())
			instancesObject.vpcAuthMode = valueInstancesDBInstanceAttribute["VpcAuthMode"].asString();
		if(!valueInstancesDBInstanceAttribute["ArchitectureType"].isNull())
			instancesObject.architectureType = valueInstancesDBInstanceAttribute["ArchitectureType"].asString();
		if(!valueInstancesDBInstanceAttribute["AvailabilityValue"].isNull())
			instancesObject.availabilityValue = valueInstancesDBInstanceAttribute["AvailabilityValue"].asString();
		if(!valueInstancesDBInstanceAttribute["NetworkType"].isNull())
			instancesObject.networkType = valueInstancesDBInstanceAttribute["NetworkType"].asString();
		if(!valueInstancesDBInstanceAttribute["Port"].isNull())
			instancesObject.port = std::stol(valueInstancesDBInstanceAttribute["Port"].asString());
		if(!valueInstancesDBInstanceAttribute["SecondaryZoneId"].isNull())
			instancesObject.secondaryZoneId = valueInstancesDBInstanceAttribute["SecondaryZoneId"].asString();
		if(!valueInstancesDBInstanceAttribute["PackageType"].isNull())
			instancesObject.packageType = valueInstancesDBInstanceAttribute["PackageType"].asString();
		if(!valueInstancesDBInstanceAttribute["EngineVersion"].isNull())
			instancesObject.engineVersion = valueInstancesDBInstanceAttribute["EngineVersion"].asString();
		if(!valueInstancesDBInstanceAttribute["Config"].isNull())
			instancesObject.config = valueInstancesDBInstanceAttribute["Config"].asString();
		if(!valueInstancesDBInstanceAttribute["VpcCloudInstanceId"].isNull())
			instancesObject.vpcCloudInstanceId = valueInstancesDBInstanceAttribute["VpcCloudInstanceId"].asString();
		if(!valueInstancesDBInstanceAttribute["Bandwidth"].isNull())
			instancesObject.bandwidth = std::stol(valueInstancesDBInstanceAttribute["Bandwidth"].asString());
		if(!valueInstancesDBInstanceAttribute["InstanceName"].isNull())
			instancesObject.instanceName = valueInstancesDBInstanceAttribute["InstanceName"].asString();
		if(!valueInstancesDBInstanceAttribute["SecurityIPList"].isNull())
			instancesObject.securityIPList = valueInstancesDBInstanceAttribute["SecurityIPList"].asString();
		if(!valueInstancesDBInstanceAttribute["ShardCount"].isNull())
			instancesObject.shardCount = std::stoi(valueInstancesDBInstanceAttribute["ShardCount"].asString());
		if(!valueInstancesDBInstanceAttribute["ReplicaCount"].isNull())
			instancesObject.replicaCount = std::stoi(valueInstancesDBInstanceAttribute["ReplicaCount"].asString());
		if(!valueInstancesDBInstanceAttribute["SlaveReplicaCount"].isNull())
			instancesObject.slaveReplicaCount = std::stoi(valueInstancesDBInstanceAttribute["SlaveReplicaCount"].asString());
		if(!valueInstancesDBInstanceAttribute["ReadOnlyCount"].isNull())
			instancesObject.readOnlyCount = std::stoi(valueInstancesDBInstanceAttribute["ReadOnlyCount"].asString());
		if(!valueInstancesDBInstanceAttribute["SlaveReadOnlyCount"].isNull())
			instancesObject.slaveReadOnlyCount = std::stol(valueInstancesDBInstanceAttribute["SlaveReadOnlyCount"].asString());
		if(!valueInstancesDBInstanceAttribute["GlobalInstanceId"].isNull())
			instancesObject.globalInstanceId = valueInstancesDBInstanceAttribute["GlobalInstanceId"].asString();
		if(!valueInstancesDBInstanceAttribute["QPS"].isNull())
			instancesObject.qPS = std::stol(valueInstancesDBInstanceAttribute["QPS"].asString());
		if(!valueInstancesDBInstanceAttribute["AuditLogRetention"].isNull())
			instancesObject.auditLogRetention = valueInstancesDBInstanceAttribute["AuditLogRetention"].asString();
		if(!valueInstancesDBInstanceAttribute["ZoneType"].isNull())
			instancesObject.zoneType = valueInstancesDBInstanceAttribute["ZoneType"].asString();
		if(!valueInstancesDBInstanceAttribute["MaintainStartTime"].isNull())
			instancesObject.maintainStartTime = valueInstancesDBInstanceAttribute["MaintainStartTime"].asString();
		if(!valueInstancesDBInstanceAttribute["MaintainEndTime"].isNull())
			instancesObject.maintainEndTime = valueInstancesDBInstanceAttribute["MaintainEndTime"].asString();
		if(!valueInstancesDBInstanceAttribute["InstanceClass"].isNull())
			instancesObject.instanceClass = valueInstancesDBInstanceAttribute["InstanceClass"].asString();
		if(!valueInstancesDBInstanceAttribute["RealInstanceClass"].isNull())
			instancesObject.realInstanceClass = valueInstancesDBInstanceAttribute["RealInstanceClass"].asString();
		if(!valueInstancesDBInstanceAttribute["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesDBInstanceAttribute["InstanceId"].asString();
		if(!valueInstancesDBInstanceAttribute["InstanceType"].isNull())
			instancesObject.instanceType = valueInstancesDBInstanceAttribute["InstanceType"].asString();
		if(!valueInstancesDBInstanceAttribute["HasRenewChangeOrder"].isNull())
			instancesObject.hasRenewChangeOrder = valueInstancesDBInstanceAttribute["HasRenewChangeOrder"].asString();
		if(!valueInstancesDBInstanceAttribute["InstanceReleaseProtection"].isNull())
			instancesObject.instanceReleaseProtection = valueInstancesDBInstanceAttribute["InstanceReleaseProtection"].asString() == "true";
		if(!valueInstancesDBInstanceAttribute["ReplicationMode"].isNull())
			instancesObject.replicationMode = valueInstancesDBInstanceAttribute["ReplicationMode"].asString();
		if(!valueInstancesDBInstanceAttribute["RegionId"].isNull())
			instancesObject.regionId = valueInstancesDBInstanceAttribute["RegionId"].asString();
		if(!valueInstancesDBInstanceAttribute["EndTime"].isNull())
			instancesObject.endTime = valueInstancesDBInstanceAttribute["EndTime"].asString();
		if(!valueInstancesDBInstanceAttribute["VSwitchId"].isNull())
			instancesObject.vSwitchId = valueInstancesDBInstanceAttribute["VSwitchId"].asString();
		if(!valueInstancesDBInstanceAttribute["ReplicaId"].isNull())
			instancesObject.replicaId = valueInstancesDBInstanceAttribute["ReplicaId"].asString();
		if(!valueInstancesDBInstanceAttribute["NodeType"].isNull())
			instancesObject.nodeType = valueInstancesDBInstanceAttribute["NodeType"].asString();
		if(!valueInstancesDBInstanceAttribute["Connections"].isNull())
			instancesObject.connections = std::stol(valueInstancesDBInstanceAttribute["Connections"].asString());
		if(!valueInstancesDBInstanceAttribute["BackupLogStartTime"].isNull())
			instancesObject.backupLogStartTime = valueInstancesDBInstanceAttribute["BackupLogStartTime"].asString();
		if(!valueInstancesDBInstanceAttribute["ResourceGroupId"].isNull())
			instancesObject.resourceGroupId = valueInstancesDBInstanceAttribute["ResourceGroupId"].asString();
		if(!valueInstancesDBInstanceAttribute["ZoneId"].isNull())
			instancesObject.zoneId = valueInstancesDBInstanceAttribute["ZoneId"].asString();
		if(!valueInstancesDBInstanceAttribute["InstanceStatus"].isNull())
			instancesObject.instanceStatus = valueInstancesDBInstanceAttribute["InstanceStatus"].asString();
		if(!valueInstancesDBInstanceAttribute["Engine"].isNull())
			instancesObject.engine = valueInstancesDBInstanceAttribute["Engine"].asString();
		if(!valueInstancesDBInstanceAttribute["Storage"].isNull())
			instancesObject.storage = valueInstancesDBInstanceAttribute["Storage"].asString();
		if(!valueInstancesDBInstanceAttribute["CloudType"].isNull())
			instancesObject.cloudType = valueInstancesDBInstanceAttribute["CloudType"].asString();
		if(!valueInstancesDBInstanceAttribute["IsOrderCompleted"].isNull())
			instancesObject.isOrderCompleted = valueInstancesDBInstanceAttribute["IsOrderCompleted"].asString() == "true";
		if(!valueInstancesDBInstanceAttribute["IsSupportTDE"].isNull())
			instancesObject.isSupportTDE = valueInstancesDBInstanceAttribute["IsSupportTDE"].asString() == "true";
		if(!valueInstancesDBInstanceAttribute["AutoSecondaryZone"].isNull())
			instancesObject.autoSecondaryZone = valueInstancesDBInstanceAttribute["AutoSecondaryZone"].asString() == "true";
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

std::vector<DescribeInstanceAttributeResult::DBInstanceAttribute> DescribeInstanceAttributeResult::getInstances()const
{
	return instances_;
}

