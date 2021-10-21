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
		if(!valueItemsDBInstanceAttribute["IPType"].isNull())
			itemsObject.iPType = valueItemsDBInstanceAttribute["IPType"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceDiskUsed"].isNull())
			itemsObject.dBInstanceDiskUsed = valueItemsDBInstanceAttribute["DBInstanceDiskUsed"].asString();
		if(!valueItemsDBInstanceAttribute["GuardDBInstanceName"].isNull())
			itemsObject.guardDBInstanceName = valueItemsDBInstanceAttribute["GuardDBInstanceName"].asString();
		if(!valueItemsDBInstanceAttribute["CanTempUpgrade"].isNull())
			itemsObject.canTempUpgrade = valueItemsDBInstanceAttribute["CanTempUpgrade"].asString() == "true";
		if(!valueItemsDBInstanceAttribute["TempUpgradeTimeStart"].isNull())
			itemsObject.tempUpgradeTimeStart = valueItemsDBInstanceAttribute["TempUpgradeTimeStart"].asString();
		if(!valueItemsDBInstanceAttribute["TempUpgradeTimeEnd"].isNull())
			itemsObject.tempUpgradeTimeEnd = valueItemsDBInstanceAttribute["TempUpgradeTimeEnd"].asString();
		if(!valueItemsDBInstanceAttribute["TempUpgradeRecoveryTime"].isNull())
			itemsObject.tempUpgradeRecoveryTime = valueItemsDBInstanceAttribute["TempUpgradeRecoveryTime"].asString();
		if(!valueItemsDBInstanceAttribute["TempUpgradeRecoveryClass"].isNull())
			itemsObject.tempUpgradeRecoveryClass = valueItemsDBInstanceAttribute["TempUpgradeRecoveryClass"].asString();
		if(!valueItemsDBInstanceAttribute["TempUpgradeRecoveryCpu"].isNull())
			itemsObject.tempUpgradeRecoveryCpu = std::stoi(valueItemsDBInstanceAttribute["TempUpgradeRecoveryCpu"].asString());
		if(!valueItemsDBInstanceAttribute["TempUpgradeRecoveryMemory"].isNull())
			itemsObject.tempUpgradeRecoveryMemory = std::stoi(valueItemsDBInstanceAttribute["TempUpgradeRecoveryMemory"].asString());
		if(!valueItemsDBInstanceAttribute["TempUpgradeRecoveryMaxIOPS"].isNull())
			itemsObject.tempUpgradeRecoveryMaxIOPS = valueItemsDBInstanceAttribute["TempUpgradeRecoveryMaxIOPS"].asString();
		if(!valueItemsDBInstanceAttribute["TempUpgradeRecoveryMaxConnections"].isNull())
			itemsObject.tempUpgradeRecoveryMaxConnections = valueItemsDBInstanceAttribute["TempUpgradeRecoveryMaxConnections"].asString();
		if(!valueItemsDBInstanceAttribute["InsId"].isNull())
			itemsObject.insId = std::stoi(valueItemsDBInstanceAttribute["InsId"].asString());
		if(!valueItemsDBInstanceAttribute["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = valueItemsDBInstanceAttribute["DBInstanceId"].asString();
		if(!valueItemsDBInstanceAttribute["PayType"].isNull())
			itemsObject.payType = valueItemsDBInstanceAttribute["PayType"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceClassType"].isNull())
			itemsObject.dBInstanceClassType = valueItemsDBInstanceAttribute["DBInstanceClassType"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceType"].isNull())
			itemsObject.dBInstanceType = valueItemsDBInstanceAttribute["DBInstanceType"].asString();
		if(!valueItemsDBInstanceAttribute["RegionId"].isNull())
			itemsObject.regionId = valueItemsDBInstanceAttribute["RegionId"].asString();
		if(!valueItemsDBInstanceAttribute["ConnectionString"].isNull())
			itemsObject.connectionString = valueItemsDBInstanceAttribute["ConnectionString"].asString();
		if(!valueItemsDBInstanceAttribute["Port"].isNull())
			itemsObject.port = valueItemsDBInstanceAttribute["Port"].asString();
		if(!valueItemsDBInstanceAttribute["Engine"].isNull())
			itemsObject.engine = valueItemsDBInstanceAttribute["Engine"].asString();
		if(!valueItemsDBInstanceAttribute["EngineVersion"].isNull())
			itemsObject.engineVersion = valueItemsDBInstanceAttribute["EngineVersion"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceClass"].isNull())
			itemsObject.dBInstanceClass = valueItemsDBInstanceAttribute["DBInstanceClass"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceMemory"].isNull())
			itemsObject.dBInstanceMemory = std::stol(valueItemsDBInstanceAttribute["DBInstanceMemory"].asString());
		if(!valueItemsDBInstanceAttribute["DBInstanceStorage"].isNull())
			itemsObject.dBInstanceStorage = std::stoi(valueItemsDBInstanceAttribute["DBInstanceStorage"].asString());
		if(!valueItemsDBInstanceAttribute["VpcCloudInstanceId"].isNull())
			itemsObject.vpcCloudInstanceId = valueItemsDBInstanceAttribute["VpcCloudInstanceId"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceNetType"].isNull())
			itemsObject.dBInstanceNetType = valueItemsDBInstanceAttribute["DBInstanceNetType"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceStatus"].isNull())
			itemsObject.dBInstanceStatus = valueItemsDBInstanceAttribute["DBInstanceStatus"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceDescription"].isNull())
			itemsObject.dBInstanceDescription = valueItemsDBInstanceAttribute["DBInstanceDescription"].asString();
		if(!valueItemsDBInstanceAttribute["LockMode"].isNull())
			itemsObject.lockMode = valueItemsDBInstanceAttribute["LockMode"].asString();
		if(!valueItemsDBInstanceAttribute["LockReason"].isNull())
			itemsObject.lockReason = valueItemsDBInstanceAttribute["LockReason"].asString();
		if(!valueItemsDBInstanceAttribute["ReadDelayTime"].isNull())
			itemsObject.readDelayTime = valueItemsDBInstanceAttribute["ReadDelayTime"].asString();
		if(!valueItemsDBInstanceAttribute["DBMaxQuantity"].isNull())
			itemsObject.dBMaxQuantity = std::stoi(valueItemsDBInstanceAttribute["DBMaxQuantity"].asString());
		if(!valueItemsDBInstanceAttribute["AccountMaxQuantity"].isNull())
			itemsObject.accountMaxQuantity = std::stoi(valueItemsDBInstanceAttribute["AccountMaxQuantity"].asString());
		if(!valueItemsDBInstanceAttribute["CreationTime"].isNull())
			itemsObject.creationTime = valueItemsDBInstanceAttribute["CreationTime"].asString();
		if(!valueItemsDBInstanceAttribute["ExpireTime"].isNull())
			itemsObject.expireTime = valueItemsDBInstanceAttribute["ExpireTime"].asString();
		if(!valueItemsDBInstanceAttribute["MaintainTime"].isNull())
			itemsObject.maintainTime = valueItemsDBInstanceAttribute["MaintainTime"].asString();
		if(!valueItemsDBInstanceAttribute["AvailabilityValue"].isNull())
			itemsObject.availabilityValue = valueItemsDBInstanceAttribute["AvailabilityValue"].asString();
		if(!valueItemsDBInstanceAttribute["MaxIOPS"].isNull())
			itemsObject.maxIOPS = std::stoi(valueItemsDBInstanceAttribute["MaxIOPS"].asString());
		if(!valueItemsDBInstanceAttribute["MaxConnections"].isNull())
			itemsObject.maxConnections = std::stoi(valueItemsDBInstanceAttribute["MaxConnections"].asString());
		if(!valueItemsDBInstanceAttribute["MasterInstanceId"].isNull())
			itemsObject.masterInstanceId = valueItemsDBInstanceAttribute["MasterInstanceId"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceCPU"].isNull())
			itemsObject.dBInstanceCPU = valueItemsDBInstanceAttribute["DBInstanceCPU"].asString();
		if(!valueItemsDBInstanceAttribute["IncrementSourceDBInstanceId"].isNull())
			itemsObject.incrementSourceDBInstanceId = valueItemsDBInstanceAttribute["IncrementSourceDBInstanceId"].asString();
		if(!valueItemsDBInstanceAttribute["GuardDBInstanceId"].isNull())
			itemsObject.guardDBInstanceId = valueItemsDBInstanceAttribute["GuardDBInstanceId"].asString();
		if(!valueItemsDBInstanceAttribute["ReplicateId"].isNull())
			itemsObject.replicateId = valueItemsDBInstanceAttribute["ReplicateId"].asString();
		if(!valueItemsDBInstanceAttribute["TempDBInstanceId"].isNull())
			itemsObject.tempDBInstanceId = valueItemsDBInstanceAttribute["TempDBInstanceId"].asString();
		if(!valueItemsDBInstanceAttribute["SecurityIPList"].isNull())
			itemsObject.securityIPList = valueItemsDBInstanceAttribute["SecurityIPList"].asString();
		if(!valueItemsDBInstanceAttribute["ZoneId"].isNull())
			itemsObject.zoneId = valueItemsDBInstanceAttribute["ZoneId"].asString();
		if(!valueItemsDBInstanceAttribute["InstanceNetworkType"].isNull())
			itemsObject.instanceNetworkType = valueItemsDBInstanceAttribute["InstanceNetworkType"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceStorageType"].isNull())
			itemsObject.dBInstanceStorageType = valueItemsDBInstanceAttribute["DBInstanceStorageType"].asString();
		if(!valueItemsDBInstanceAttribute["AdvancedFeatures"].isNull())
			itemsObject.advancedFeatures = valueItemsDBInstanceAttribute["AdvancedFeatures"].asString();
		if(!valueItemsDBInstanceAttribute["Category"].isNull())
			itemsObject.category = valueItemsDBInstanceAttribute["Category"].asString();
		if(!valueItemsDBInstanceAttribute["AccountType"].isNull())
			itemsObject.accountType = valueItemsDBInstanceAttribute["AccountType"].asString();
		if(!valueItemsDBInstanceAttribute["SupportUpgradeAccountType"].isNull())
			itemsObject.supportUpgradeAccountType = valueItemsDBInstanceAttribute["SupportUpgradeAccountType"].asString();
		if(!valueItemsDBInstanceAttribute["SupportCreateSuperAccount"].isNull())
			itemsObject.supportCreateSuperAccount = valueItemsDBInstanceAttribute["SupportCreateSuperAccount"].asString();
		if(!valueItemsDBInstanceAttribute["VpcId"].isNull())
			itemsObject.vpcId = valueItemsDBInstanceAttribute["VpcId"].asString();
		if(!valueItemsDBInstanceAttribute["VSwitchId"].isNull())
			itemsObject.vSwitchId = valueItemsDBInstanceAttribute["VSwitchId"].asString();
		if(!valueItemsDBInstanceAttribute["ConnectionMode"].isNull())
			itemsObject.connectionMode = valueItemsDBInstanceAttribute["ConnectionMode"].asString();
		if(!valueItemsDBInstanceAttribute["CurrentKernelVersion"].isNull())
			itemsObject.currentKernelVersion = valueItemsDBInstanceAttribute["CurrentKernelVersion"].asString();
		if(!valueItemsDBInstanceAttribute["LatestKernelVersion"].isNull())
			itemsObject.latestKernelVersion = valueItemsDBInstanceAttribute["LatestKernelVersion"].asString();
		if(!valueItemsDBInstanceAttribute["ResourceGroupId"].isNull())
			itemsObject.resourceGroupId = valueItemsDBInstanceAttribute["ResourceGroupId"].asString();
		if(!valueItemsDBInstanceAttribute["ReadonlyInstanceSQLDelayedTime"].isNull())
			itemsObject.readonlyInstanceSQLDelayedTime = valueItemsDBInstanceAttribute["ReadonlyInstanceSQLDelayedTime"].asString();
		if(!valueItemsDBInstanceAttribute["SecurityIPMode"].isNull())
			itemsObject.securityIPMode = valueItemsDBInstanceAttribute["SecurityIPMode"].asString();
		if(!valueItemsDBInstanceAttribute["TimeZone"].isNull())
			itemsObject.timeZone = valueItemsDBInstanceAttribute["TimeZone"].asString();
		if(!valueItemsDBInstanceAttribute["Collation"].isNull())
			itemsObject.collation = valueItemsDBInstanceAttribute["Collation"].asString();
		if(!valueItemsDBInstanceAttribute["DispenseMode"].isNull())
			itemsObject.dispenseMode = valueItemsDBInstanceAttribute["DispenseMode"].asString();
		if(!valueItemsDBInstanceAttribute["MasterZone"].isNull())
			itemsObject.masterZone = valueItemsDBInstanceAttribute["MasterZone"].asString();
		if(!valueItemsDBInstanceAttribute["AutoUpgradeMinorVersion"].isNull())
			itemsObject.autoUpgradeMinorVersion = valueItemsDBInstanceAttribute["AutoUpgradeMinorVersion"].asString();
		if(!valueItemsDBInstanceAttribute["ProxyType"].isNull())
			itemsObject.proxyType = std::stoi(valueItemsDBInstanceAttribute["ProxyType"].asString());
		if(!valueItemsDBInstanceAttribute["ConsoleVersion"].isNull())
			itemsObject.consoleVersion = valueItemsDBInstanceAttribute["ConsoleVersion"].asString();
		if(!valueItemsDBInstanceAttribute["MultipleTempUpgrade"].isNull())
			itemsObject.multipleTempUpgrade = valueItemsDBInstanceAttribute["MultipleTempUpgrade"].asString() == "true";
		if(!valueItemsDBInstanceAttribute["OriginConfiguration"].isNull())
			itemsObject.originConfiguration = valueItemsDBInstanceAttribute["OriginConfiguration"].asString();
		if(!valueItemsDBInstanceAttribute["DedicatedHostGroupId"].isNull())
			itemsObject.dedicatedHostGroupId = valueItemsDBInstanceAttribute["DedicatedHostGroupId"].asString();
		if(!valueItemsDBInstanceAttribute["SuperPermissionMode"].isNull())
			itemsObject.superPermissionMode = valueItemsDBInstanceAttribute["SuperPermissionMode"].asString();
		if(!valueItemsDBInstanceAttribute["GeneralGroupName"].isNull())
			itemsObject.generalGroupName = valueItemsDBInstanceAttribute["GeneralGroupName"].asString();
		if(!valueItemsDBInstanceAttribute["TipsLevel"].isNull())
			itemsObject.tipsLevel = std::stoi(valueItemsDBInstanceAttribute["TipsLevel"].asString());
		if(!valueItemsDBInstanceAttribute["Tips"].isNull())
			itemsObject.tips = valueItemsDBInstanceAttribute["Tips"].asString();
		auto allSlaveZonesNode = valueItemsDBInstanceAttribute["SlaveZones"]["SlaveZone"];
		for (auto valueItemsDBInstanceAttributeSlaveZonesSlaveZone : allSlaveZonesNode)
		{
			DBInstanceAttribute::SlaveZone slaveZonesObject;
			if(!valueItemsDBInstanceAttributeSlaveZonesSlaveZone["ZoneId"].isNull())
				slaveZonesObject.zoneId = valueItemsDBInstanceAttributeSlaveZonesSlaveZone["ZoneId"].asString();
			itemsObject.slaveZones.push_back(slaveZonesObject);
		}
		auto allReadOnlyDBInstanceIdsNode = valueItemsDBInstanceAttribute["ReadOnlyDBInstanceIds"]["ReadOnlyDBInstanceId"];
		for (auto valueItemsDBInstanceAttributeReadOnlyDBInstanceIdsReadOnlyDBInstanceId : allReadOnlyDBInstanceIdsNode)
		{
			DBInstanceAttribute::ReadOnlyDBInstanceId readOnlyDBInstanceIdsObject;
			if(!valueItemsDBInstanceAttributeReadOnlyDBInstanceIdsReadOnlyDBInstanceId["DBInstanceId"].isNull())
				readOnlyDBInstanceIdsObject.dBInstanceId = valueItemsDBInstanceAttributeReadOnlyDBInstanceIdsReadOnlyDBInstanceId["DBInstanceId"].asString();
			itemsObject.readOnlyDBInstanceIds.push_back(readOnlyDBInstanceIdsObject);
		}
		auto extraNode = value["Extra"];
		if(!extraNode["ReplicaGroupID"].isNull())
			itemsObject.extra.replicaGroupID = extraNode["ReplicaGroupID"].asString();
		if(!extraNode["ReplicaGroupStatus"].isNull())
			itemsObject.extra.replicaGroupStatus = extraNode["ReplicaGroupStatus"].asString();
		if(!extraNode["ActiveReplicaDBInstanceID"].isNull())
			itemsObject.extra.activeReplicaDBInstanceID = extraNode["ActiveReplicaDBInstanceID"].asString();
			auto allDBInstanceIds = extraNode["DBInstanceIds"]["DBInstanceId"];
			for (auto value : allDBInstanceIds)
				itemsObject.extra.dBInstanceIds.push_back(value.asString());
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeDBInstanceAttributeResult::DBInstanceAttribute> DescribeDBInstanceAttributeResult::getItems()const
{
	return items_;
}

