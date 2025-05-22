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

#include <alibabacloud/rds/model/DescribeDBInstanceAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

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
	auto allItemsNode = value["Items"]["DBInstanceAttribute"];
	for (auto valueItemsDBInstanceAttribute : allItemsNode)
	{
		DBInstanceAttribute itemsObject;
		if(!valueItemsDBInstanceAttribute["AccountMaxQuantity"].isNull())
			itemsObject.accountMaxQuantity = std::stoi(valueItemsDBInstanceAttribute["AccountMaxQuantity"].asString());
		if(!valueItemsDBInstanceAttribute["AccountType"].isNull())
			itemsObject.accountType = valueItemsDBInstanceAttribute["AccountType"].asString();
		if(!valueItemsDBInstanceAttribute["AdvancedFeatures"].isNull())
			itemsObject.advancedFeatures = valueItemsDBInstanceAttribute["AdvancedFeatures"].asString();
		if(!valueItemsDBInstanceAttribute["AutoUpgradeMinorVersion"].isNull())
			itemsObject.autoUpgradeMinorVersion = valueItemsDBInstanceAttribute["AutoUpgradeMinorVersion"].asString();
		if(!valueItemsDBInstanceAttribute["AvailabilityValue"].isNull())
			itemsObject.availabilityValue = valueItemsDBInstanceAttribute["AvailabilityValue"].asString();
		if(!valueItemsDBInstanceAttribute["BpeEnabled"].isNull())
			itemsObject.bpeEnabled = valueItemsDBInstanceAttribute["BpeEnabled"].asString();
		if(!valueItemsDBInstanceAttribute["BurstingEnabled"].isNull())
			itemsObject.burstingEnabled = valueItemsDBInstanceAttribute["BurstingEnabled"].asString() == "true";
		if(!valueItemsDBInstanceAttribute["CanTempUpgrade"].isNull())
			itemsObject.canTempUpgrade = valueItemsDBInstanceAttribute["CanTempUpgrade"].asString() == "true";
		if(!valueItemsDBInstanceAttribute["Category"].isNull())
			itemsObject.category = valueItemsDBInstanceAttribute["Category"].asString();
		if(!valueItemsDBInstanceAttribute["ColdDataEnabled"].isNull())
			itemsObject.coldDataEnabled = valueItemsDBInstanceAttribute["ColdDataEnabled"].asString() == "true";
		if(!valueItemsDBInstanceAttribute["Collation"].isNull())
			itemsObject.collation = valueItemsDBInstanceAttribute["Collation"].asString();
		if(!valueItemsDBInstanceAttribute["ConnectionMode"].isNull())
			itemsObject.connectionMode = valueItemsDBInstanceAttribute["ConnectionMode"].asString();
		if(!valueItemsDBInstanceAttribute["ConnectionString"].isNull())
			itemsObject.connectionString = valueItemsDBInstanceAttribute["ConnectionString"].asString();
		if(!valueItemsDBInstanceAttribute["ConsoleVersion"].isNull())
			itemsObject.consoleVersion = valueItemsDBInstanceAttribute["ConsoleVersion"].asString();
		if(!valueItemsDBInstanceAttribute["CreationTime"].isNull())
			itemsObject.creationTime = valueItemsDBInstanceAttribute["CreationTime"].asString();
		if(!valueItemsDBInstanceAttribute["CurrentKernelVersion"].isNull())
			itemsObject.currentKernelVersion = valueItemsDBInstanceAttribute["CurrentKernelVersion"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceCPU"].isNull())
			itemsObject.dBInstanceCPU = valueItemsDBInstanceAttribute["DBInstanceCPU"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceClass"].isNull())
			itemsObject.dBInstanceClass = valueItemsDBInstanceAttribute["DBInstanceClass"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceClassType"].isNull())
			itemsObject.dBInstanceClassType = valueItemsDBInstanceAttribute["DBInstanceClassType"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceDescription"].isNull())
			itemsObject.dBInstanceDescription = valueItemsDBInstanceAttribute["DBInstanceDescription"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceDiskUsed"].isNull())
			itemsObject.dBInstanceDiskUsed = valueItemsDBInstanceAttribute["DBInstanceDiskUsed"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = valueItemsDBInstanceAttribute["DBInstanceId"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceMemory"].isNull())
			itemsObject.dBInstanceMemory = std::stol(valueItemsDBInstanceAttribute["DBInstanceMemory"].asString());
		if(!valueItemsDBInstanceAttribute["DBInstanceNetType"].isNull())
			itemsObject.dBInstanceNetType = valueItemsDBInstanceAttribute["DBInstanceNetType"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceStatus"].isNull())
			itemsObject.dBInstanceStatus = valueItemsDBInstanceAttribute["DBInstanceStatus"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceStorage"].isNull())
			itemsObject.dBInstanceStorage = std::stoi(valueItemsDBInstanceAttribute["DBInstanceStorage"].asString());
		if(!valueItemsDBInstanceAttribute["DBInstanceStorageType"].isNull())
			itemsObject.dBInstanceStorageType = valueItemsDBInstanceAttribute["DBInstanceStorageType"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceType"].isNull())
			itemsObject.dBInstanceType = valueItemsDBInstanceAttribute["DBInstanceType"].asString();
		if(!valueItemsDBInstanceAttribute["DBMaxQuantity"].isNull())
			itemsObject.dBMaxQuantity = std::stoi(valueItemsDBInstanceAttribute["DBMaxQuantity"].asString());
		if(!valueItemsDBInstanceAttribute["DedicatedHostGroupId"].isNull())
			itemsObject.dedicatedHostGroupId = valueItemsDBInstanceAttribute["DedicatedHostGroupId"].asString();
		if(!valueItemsDBInstanceAttribute["DeletionProtection"].isNull())
			itemsObject.deletionProtection = valueItemsDBInstanceAttribute["DeletionProtection"].asString() == "true";
		if(!valueItemsDBInstanceAttribute["DisasterRecoveryInfo"].isNull())
			itemsObject.disasterRecoveryInfo = valueItemsDBInstanceAttribute["DisasterRecoveryInfo"].asString();
		if(!valueItemsDBInstanceAttribute["DisasterRecoveryInstances"].isNull())
			itemsObject.disasterRecoveryInstances = valueItemsDBInstanceAttribute["DisasterRecoveryInstances"].asString();
		if(!valueItemsDBInstanceAttribute["DispenseMode"].isNull())
			itemsObject.dispenseMode = valueItemsDBInstanceAttribute["DispenseMode"].asString();
		if(!valueItemsDBInstanceAttribute["Engine"].isNull())
			itemsObject.engine = valueItemsDBInstanceAttribute["Engine"].asString();
		if(!valueItemsDBInstanceAttribute["EngineVersion"].isNull())
			itemsObject.engineVersion = valueItemsDBInstanceAttribute["EngineVersion"].asString();
		if(!valueItemsDBInstanceAttribute["ExpireTime"].isNull())
			itemsObject.expireTime = valueItemsDBInstanceAttribute["ExpireTime"].asString();
		if(!valueItemsDBInstanceAttribute["GeneralGroupName"].isNull())
			itemsObject.generalGroupName = valueItemsDBInstanceAttribute["GeneralGroupName"].asString();
		if(!valueItemsDBInstanceAttribute["GuardDBInstanceId"].isNull())
			itemsObject.guardDBInstanceId = valueItemsDBInstanceAttribute["GuardDBInstanceId"].asString();
		if(!valueItemsDBInstanceAttribute["GuardDBInstanceName"].isNull())
			itemsObject.guardDBInstanceName = valueItemsDBInstanceAttribute["GuardDBInstanceName"].asString();
		if(!valueItemsDBInstanceAttribute["IPType"].isNull())
			itemsObject.iPType = valueItemsDBInstanceAttribute["IPType"].asString();
		if(!valueItemsDBInstanceAttribute["IncrementSourceDBInstanceId"].isNull())
			itemsObject.incrementSourceDBInstanceId = valueItemsDBInstanceAttribute["IncrementSourceDBInstanceId"].asString();
		if(!valueItemsDBInstanceAttribute["InsId"].isNull())
			itemsObject.insId = std::stoi(valueItemsDBInstanceAttribute["InsId"].asString());
		if(!valueItemsDBInstanceAttribute["InstanceNetworkType"].isNull())
			itemsObject.instanceNetworkType = valueItemsDBInstanceAttribute["InstanceNetworkType"].asString();
		if(!valueItemsDBInstanceAttribute["InstructionSetArch"].isNull())
			itemsObject.instructionSetArch = valueItemsDBInstanceAttribute["InstructionSetArch"].asString();
		if(!valueItemsDBInstanceAttribute["IoAccelerationEnabled"].isNull())
			itemsObject.ioAccelerationEnabled = valueItemsDBInstanceAttribute["IoAccelerationEnabled"].asString();
		if(!valueItemsDBInstanceAttribute["LatestKernelVersion"].isNull())
			itemsObject.latestKernelVersion = valueItemsDBInstanceAttribute["LatestKernelVersion"].asString();
		if(!valueItemsDBInstanceAttribute["LockMode"].isNull())
			itemsObject.lockMode = valueItemsDBInstanceAttribute["LockMode"].asString();
		if(!valueItemsDBInstanceAttribute["LockReason"].isNull())
			itemsObject.lockReason = valueItemsDBInstanceAttribute["LockReason"].asString();
		if(!valueItemsDBInstanceAttribute["MaintainTime"].isNull())
			itemsObject.maintainTime = valueItemsDBInstanceAttribute["MaintainTime"].asString();
		if(!valueItemsDBInstanceAttribute["MasterInstanceId"].isNull())
			itemsObject.masterInstanceId = valueItemsDBInstanceAttribute["MasterInstanceId"].asString();
		if(!valueItemsDBInstanceAttribute["MasterZone"].isNull())
			itemsObject.masterZone = valueItemsDBInstanceAttribute["MasterZone"].asString();
		if(!valueItemsDBInstanceAttribute["MaxConnections"].isNull())
			itemsObject.maxConnections = std::stoi(valueItemsDBInstanceAttribute["MaxConnections"].asString());
		if(!valueItemsDBInstanceAttribute["MaxIOMBPS"].isNull())
			itemsObject.maxIOMBPS = std::stoi(valueItemsDBInstanceAttribute["MaxIOMBPS"].asString());
		if(!valueItemsDBInstanceAttribute["MaxIOPS"].isNull())
			itemsObject.maxIOPS = std::stoi(valueItemsDBInstanceAttribute["MaxIOPS"].asString());
		if(!valueItemsDBInstanceAttribute["MultipleTempUpgrade"].isNull())
			itemsObject.multipleTempUpgrade = valueItemsDBInstanceAttribute["MultipleTempUpgrade"].asString() == "true";
		if(!valueItemsDBInstanceAttribute["OriginConfiguration"].isNull())
			itemsObject.originConfiguration = valueItemsDBInstanceAttribute["OriginConfiguration"].asString();
		if(!valueItemsDBInstanceAttribute["PGBouncerEnabled"].isNull())
			itemsObject.pGBouncerEnabled = valueItemsDBInstanceAttribute["PGBouncerEnabled"].asString();
		if(!valueItemsDBInstanceAttribute["PayType"].isNull())
			itemsObject.payType = valueItemsDBInstanceAttribute["PayType"].asString();
		if(!valueItemsDBInstanceAttribute["Port"].isNull())
			itemsObject.port = valueItemsDBInstanceAttribute["Port"].asString();
		if(!valueItemsDBInstanceAttribute["ProxyType"].isNull())
			itemsObject.proxyType = std::stoi(valueItemsDBInstanceAttribute["ProxyType"].asString());
		if(!valueItemsDBInstanceAttribute["ReadDelayTime"].isNull())
			itemsObject.readDelayTime = valueItemsDBInstanceAttribute["ReadDelayTime"].asString();
		if(!valueItemsDBInstanceAttribute["ReadonlyInstanceSQLDelayedTime"].isNull())
			itemsObject.readonlyInstanceSQLDelayedTime = valueItemsDBInstanceAttribute["ReadonlyInstanceSQLDelayedTime"].asString();
		if(!valueItemsDBInstanceAttribute["RegionId"].isNull())
			itemsObject.regionId = valueItemsDBInstanceAttribute["RegionId"].asString();
		if(!valueItemsDBInstanceAttribute["ReplicateId"].isNull())
			itemsObject.replicateId = valueItemsDBInstanceAttribute["ReplicateId"].asString();
		if(!valueItemsDBInstanceAttribute["ResourceGroupId"].isNull())
			itemsObject.resourceGroupId = valueItemsDBInstanceAttribute["ResourceGroupId"].asString();
		if(!valueItemsDBInstanceAttribute["SecurityIPList"].isNull())
			itemsObject.securityIPList = valueItemsDBInstanceAttribute["SecurityIPList"].asString();
		if(!valueItemsDBInstanceAttribute["SecurityIPMode"].isNull())
			itemsObject.securityIPMode = valueItemsDBInstanceAttribute["SecurityIPMode"].asString();
		if(!valueItemsDBInstanceAttribute["SuperPermissionMode"].isNull())
			itemsObject.superPermissionMode = valueItemsDBInstanceAttribute["SuperPermissionMode"].asString();
		if(!valueItemsDBInstanceAttribute["SupportCreateSuperAccount"].isNull())
			itemsObject.supportCreateSuperAccount = valueItemsDBInstanceAttribute["SupportCreateSuperAccount"].asString();
		if(!valueItemsDBInstanceAttribute["SupportUpgradeAccountType"].isNull())
			itemsObject.supportUpgradeAccountType = valueItemsDBInstanceAttribute["SupportUpgradeAccountType"].asString();
		if(!valueItemsDBInstanceAttribute["TempDBInstanceId"].isNull())
			itemsObject.tempDBInstanceId = valueItemsDBInstanceAttribute["TempDBInstanceId"].asString();
		if(!valueItemsDBInstanceAttribute["TempUpgradeRecoveryClass"].isNull())
			itemsObject.tempUpgradeRecoveryClass = valueItemsDBInstanceAttribute["TempUpgradeRecoveryClass"].asString();
		if(!valueItemsDBInstanceAttribute["TempUpgradeRecoveryCpu"].isNull())
			itemsObject.tempUpgradeRecoveryCpu = std::stoi(valueItemsDBInstanceAttribute["TempUpgradeRecoveryCpu"].asString());
		if(!valueItemsDBInstanceAttribute["TempUpgradeRecoveryMaxConnections"].isNull())
			itemsObject.tempUpgradeRecoveryMaxConnections = valueItemsDBInstanceAttribute["TempUpgradeRecoveryMaxConnections"].asString();
		if(!valueItemsDBInstanceAttribute["TempUpgradeRecoveryMaxIOPS"].isNull())
			itemsObject.tempUpgradeRecoveryMaxIOPS = valueItemsDBInstanceAttribute["TempUpgradeRecoveryMaxIOPS"].asString();
		if(!valueItemsDBInstanceAttribute["TempUpgradeRecoveryMemory"].isNull())
			itemsObject.tempUpgradeRecoveryMemory = std::stoi(valueItemsDBInstanceAttribute["TempUpgradeRecoveryMemory"].asString());
		if(!valueItemsDBInstanceAttribute["TempUpgradeRecoveryTime"].isNull())
			itemsObject.tempUpgradeRecoveryTime = valueItemsDBInstanceAttribute["TempUpgradeRecoveryTime"].asString();
		if(!valueItemsDBInstanceAttribute["TempUpgradeTimeEnd"].isNull())
			itemsObject.tempUpgradeTimeEnd = valueItemsDBInstanceAttribute["TempUpgradeTimeEnd"].asString();
		if(!valueItemsDBInstanceAttribute["TempUpgradeTimeStart"].isNull())
			itemsObject.tempUpgradeTimeStart = valueItemsDBInstanceAttribute["TempUpgradeTimeStart"].asString();
		if(!valueItemsDBInstanceAttribute["TimeZone"].isNull())
			itemsObject.timeZone = valueItemsDBInstanceAttribute["TimeZone"].asString();
		if(!valueItemsDBInstanceAttribute["Tips"].isNull())
			itemsObject.tips = valueItemsDBInstanceAttribute["Tips"].asString();
		if(!valueItemsDBInstanceAttribute["TipsLevel"].isNull())
			itemsObject.tipsLevel = std::stoi(valueItemsDBInstanceAttribute["TipsLevel"].asString());
		if(!valueItemsDBInstanceAttribute["VSwitchId"].isNull())
			itemsObject.vSwitchId = valueItemsDBInstanceAttribute["VSwitchId"].asString();
		if(!valueItemsDBInstanceAttribute["VpcCloudInstanceId"].isNull())
			itemsObject.vpcCloudInstanceId = valueItemsDBInstanceAttribute["VpcCloudInstanceId"].asString();
		if(!valueItemsDBInstanceAttribute["VpcId"].isNull())
			itemsObject.vpcId = valueItemsDBInstanceAttribute["VpcId"].asString();
		if(!valueItemsDBInstanceAttribute["ZoneId"].isNull())
			itemsObject.zoneId = valueItemsDBInstanceAttribute["ZoneId"].asString();
		if(!valueItemsDBInstanceAttribute["kindCode"].isNull())
			itemsObject.kindCode = valueItemsDBInstanceAttribute["kindCode"].asString();
		if(!valueItemsDBInstanceAttribute["OptimizedWritesInfo"].isNull())
			itemsObject.optimizedWritesInfo = valueItemsDBInstanceAttribute["OptimizedWritesInfo"].asString();
		if(!valueItemsDBInstanceAttribute["CompressionMode"].isNull())
			itemsObject.compressionMode = valueItemsDBInstanceAttribute["CompressionMode"].asString();
		if(!valueItemsDBInstanceAttribute["SupportCompression"].isNull())
			itemsObject.supportCompression = valueItemsDBInstanceAttribute["SupportCompression"].asString() == "true";
		if(!valueItemsDBInstanceAttribute["CompressionRatio"].isNull())
			itemsObject.compressionRatio = valueItemsDBInstanceAttribute["CompressionRatio"].asString();
		if(!valueItemsDBInstanceAttribute["BlueGreenDeploymentName"].isNull())
			itemsObject.blueGreenDeploymentName = valueItemsDBInstanceAttribute["BlueGreenDeploymentName"].asString();
		if(!valueItemsDBInstanceAttribute["GreenInstanceName"].isNull())
			itemsObject.greenInstanceName = valueItemsDBInstanceAttribute["GreenInstanceName"].asString();
		if(!valueItemsDBInstanceAttribute["BlueInstanceName"].isNull())
			itemsObject.blueInstanceName = valueItemsDBInstanceAttribute["BlueInstanceName"].asString();
		if(!valueItemsDBInstanceAttribute["ComputeBurstEnabled"].isNull())
			itemsObject.computeBurstEnabled = valueItemsDBInstanceAttribute["ComputeBurstEnabled"].asString() == "true";
		if(!valueItemsDBInstanceAttribute["ReadOnlyStatus"].isNull())
			itemsObject.readOnlyStatus = valueItemsDBInstanceAttribute["ReadOnlyStatus"].asString();
		auto allDBClusterNodesNode = valueItemsDBInstanceAttribute["DBClusterNodes"]["DBClusterNode"];
		for (auto valueItemsDBInstanceAttributeDBClusterNodesDBClusterNode : allDBClusterNodesNode)
		{
			DBInstanceAttribute::DBClusterNode dBClusterNodesObject;
			if(!valueItemsDBInstanceAttributeDBClusterNodesDBClusterNode["ClassCode"].isNull())
				dBClusterNodesObject.classCode = valueItemsDBInstanceAttributeDBClusterNodesDBClusterNode["ClassCode"].asString();
			if(!valueItemsDBInstanceAttributeDBClusterNodesDBClusterNode["ClassType"].isNull())
				dBClusterNodesObject.classType = valueItemsDBInstanceAttributeDBClusterNodesDBClusterNode["ClassType"].asString();
			if(!valueItemsDBInstanceAttributeDBClusterNodesDBClusterNode["Cpu"].isNull())
				dBClusterNodesObject.cpu = valueItemsDBInstanceAttributeDBClusterNodesDBClusterNode["Cpu"].asString();
			if(!valueItemsDBInstanceAttributeDBClusterNodesDBClusterNode["Memory"].isNull())
				dBClusterNodesObject.memory = valueItemsDBInstanceAttributeDBClusterNodesDBClusterNode["Memory"].asString();
			if(!valueItemsDBInstanceAttributeDBClusterNodesDBClusterNode["NodeId"].isNull())
				dBClusterNodesObject.nodeId = valueItemsDBInstanceAttributeDBClusterNodesDBClusterNode["NodeId"].asString();
			if(!valueItemsDBInstanceAttributeDBClusterNodesDBClusterNode["NodeRegionId"].isNull())
				dBClusterNodesObject.nodeRegionId = valueItemsDBInstanceAttributeDBClusterNodesDBClusterNode["NodeRegionId"].asString();
			if(!valueItemsDBInstanceAttributeDBClusterNodesDBClusterNode["NodeRole"].isNull())
				dBClusterNodesObject.nodeRole = valueItemsDBInstanceAttributeDBClusterNodesDBClusterNode["NodeRole"].asString();
			if(!valueItemsDBInstanceAttributeDBClusterNodesDBClusterNode["NodeZoneId"].isNull())
				dBClusterNodesObject.nodeZoneId = valueItemsDBInstanceAttributeDBClusterNodesDBClusterNode["NodeZoneId"].asString();
			if(!valueItemsDBInstanceAttributeDBClusterNodesDBClusterNode["Status"].isNull())
				dBClusterNodesObject.status = valueItemsDBInstanceAttributeDBClusterNodesDBClusterNode["Status"].asString();
			itemsObject.dBClusterNodes.push_back(dBClusterNodesObject);
		}
		auto allReadOnlyDBInstanceIdsNode = valueItemsDBInstanceAttribute["ReadOnlyDBInstanceIds"]["ReadOnlyDBInstanceId"];
		for (auto valueItemsDBInstanceAttributeReadOnlyDBInstanceIdsReadOnlyDBInstanceId : allReadOnlyDBInstanceIdsNode)
		{
			DBInstanceAttribute::ReadOnlyDBInstanceId readOnlyDBInstanceIdsObject;
			if(!valueItemsDBInstanceAttributeReadOnlyDBInstanceIdsReadOnlyDBInstanceId["DBInstanceId"].isNull())
				readOnlyDBInstanceIdsObject.dBInstanceId = valueItemsDBInstanceAttributeReadOnlyDBInstanceIdsReadOnlyDBInstanceId["DBInstanceId"].asString();
			itemsObject.readOnlyDBInstanceIds.push_back(readOnlyDBInstanceIdsObject);
		}
		auto allSlaveZonesNode = valueItemsDBInstanceAttribute["SlaveZones"]["SlaveZone"];
		for (auto valueItemsDBInstanceAttributeSlaveZonesSlaveZone : allSlaveZonesNode)
		{
			DBInstanceAttribute::SlaveZone slaveZonesObject;
			if(!valueItemsDBInstanceAttributeSlaveZonesSlaveZone["ZoneId"].isNull())
				slaveZonesObject.zoneId = valueItemsDBInstanceAttributeSlaveZonesSlaveZone["ZoneId"].asString();
			itemsObject.slaveZones.push_back(slaveZonesObject);
		}
		auto babelfishConfigNode = value["BabelfishConfig"];
		if(!babelfishConfigNode["BabelfishEnabled"].isNull())
			itemsObject.babelfishConfig.babelfishEnabled = babelfishConfigNode["BabelfishEnabled"].asString();
		if(!babelfishConfigNode["MigrationMode"].isNull())
			itemsObject.babelfishConfig.migrationMode = babelfishConfigNode["MigrationMode"].asString();
		auto extraNode = value["Extra"];
		if(!extraNode["AccountSecurityPolicy"].isNull())
			itemsObject.extra.accountSecurityPolicy = extraNode["AccountSecurityPolicy"].asString();
		if(!extraNode["ActiveReplicaDBInstanceID"].isNull())
			itemsObject.extra.activeReplicaDBInstanceID = extraNode["ActiveReplicaDBInstanceID"].asString();
		if(!extraNode["RecoveryModel"].isNull())
			itemsObject.extra.recoveryModel = extraNode["RecoveryModel"].asString();
		if(!extraNode["ReplicaGroupID"].isNull())
			itemsObject.extra.replicaGroupID = extraNode["ReplicaGroupID"].asString();
		if(!extraNode["ReplicaGroupStatus"].isNull())
			itemsObject.extra.replicaGroupStatus = extraNode["ReplicaGroupStatus"].asString();
			auto allDBInstanceIds = extraNode["DBInstanceIds"]["DBInstanceId"];
			for (auto value : allDBInstanceIds)
				itemsObject.extra.dBInstanceIds.push_back(value.asString());
		auto serverlessConfigNode = value["ServerlessConfig"];
		if(!serverlessConfigNode["AutoPause"].isNull())
			itemsObject.serverlessConfig.autoPause = serverlessConfigNode["AutoPause"].asString() == "true";
		if(!serverlessConfigNode["ScaleMax"].isNull())
			itemsObject.serverlessConfig.scaleMax = serverlessConfigNode["ScaleMax"].asString();
		if(!serverlessConfigNode["ScaleMin"].isNull())
			itemsObject.serverlessConfig.scaleMin = serverlessConfigNode["ScaleMin"].asString();
		if(!serverlessConfigNode["SwitchForce"].isNull())
			itemsObject.serverlessConfig.switchForce = serverlessConfigNode["SwitchForce"].asString() == "true";
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeDBInstanceAttributeResult::DBInstanceAttribute> DescribeDBInstanceAttributeResult::getItems()const
{
	return items_;
}

