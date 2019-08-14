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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allItems = value["Items"]["DBInstanceAttribute"];
	for (auto value : allItems)
	{
		DBInstanceAttribute itemsObject;
		if(!value["IPType"].isNull())
			itemsObject.iPType = value["IPType"].asString();
		if(!value["DBInstanceDiskUsed"].isNull())
			itemsObject.dBInstanceDiskUsed = value["DBInstanceDiskUsed"].asString();
		if(!value["GuardDBInstanceName"].isNull())
			itemsObject.guardDBInstanceName = value["GuardDBInstanceName"].asString();
		if(!value["CanTempUpgrade"].isNull())
			itemsObject.canTempUpgrade = value["CanTempUpgrade"].asString() == "true";
		if(!value["TempUpgradeTimeStart"].isNull())
			itemsObject.tempUpgradeTimeStart = value["TempUpgradeTimeStart"].asString();
		if(!value["TempUpgradeTimeEnd"].isNull())
			itemsObject.tempUpgradeTimeEnd = value["TempUpgradeTimeEnd"].asString();
		if(!value["TempUpgradeRecoveryTime"].isNull())
			itemsObject.tempUpgradeRecoveryTime = value["TempUpgradeRecoveryTime"].asString();
		if(!value["TempUpgradeRecoveryClass"].isNull())
			itemsObject.tempUpgradeRecoveryClass = value["TempUpgradeRecoveryClass"].asString();
		if(!value["TempUpgradeRecoveryCpu"].isNull())
			itemsObject.tempUpgradeRecoveryCpu = std::stoi(value["TempUpgradeRecoveryCpu"].asString());
		if(!value["TempUpgradeRecoveryMemory"].isNull())
			itemsObject.tempUpgradeRecoveryMemory = std::stoi(value["TempUpgradeRecoveryMemory"].asString());
		if(!value["TempUpgradeRecoveryMaxIOPS"].isNull())
			itemsObject.tempUpgradeRecoveryMaxIOPS = value["TempUpgradeRecoveryMaxIOPS"].asString();
		if(!value["TempUpgradeRecoveryMaxConnections"].isNull())
			itemsObject.tempUpgradeRecoveryMaxConnections = value["TempUpgradeRecoveryMaxConnections"].asString();
		if(!value["InsId"].isNull())
			itemsObject.insId = std::stoi(value["InsId"].asString());
		if(!value["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = value["DBInstanceId"].asString();
		if(!value["PayType"].isNull())
			itemsObject.payType = value["PayType"].asString();
		if(!value["DBInstanceClassType"].isNull())
			itemsObject.dBInstanceClassType = value["DBInstanceClassType"].asString();
		if(!value["DBInstanceType"].isNull())
			itemsObject.dBInstanceType = value["DBInstanceType"].asString();
		if(!value["RegionId"].isNull())
			itemsObject.regionId = value["RegionId"].asString();
		if(!value["ConnectionString"].isNull())
			itemsObject.connectionString = value["ConnectionString"].asString();
		if(!value["Port"].isNull())
			itemsObject.port = value["Port"].asString();
		if(!value["Engine"].isNull())
			itemsObject.engine = value["Engine"].asString();
		if(!value["EngineVersion"].isNull())
			itemsObject.engineVersion = value["EngineVersion"].asString();
		if(!value["DBInstanceClass"].isNull())
			itemsObject.dBInstanceClass = value["DBInstanceClass"].asString();
		if(!value["DBInstanceMemory"].isNull())
			itemsObject.dBInstanceMemory = std::stol(value["DBInstanceMemory"].asString());
		if(!value["DBInstanceStorage"].isNull())
			itemsObject.dBInstanceStorage = std::stoi(value["DBInstanceStorage"].asString());
		if(!value["VpcCloudInstanceId"].isNull())
			itemsObject.vpcCloudInstanceId = value["VpcCloudInstanceId"].asString();
		if(!value["DBInstanceNetType"].isNull())
			itemsObject.dBInstanceNetType = value["DBInstanceNetType"].asString();
		if(!value["DBInstanceStatus"].isNull())
			itemsObject.dBInstanceStatus = value["DBInstanceStatus"].asString();
		if(!value["DBInstanceDescription"].isNull())
			itemsObject.dBInstanceDescription = value["DBInstanceDescription"].asString();
		if(!value["LockMode"].isNull())
			itemsObject.lockMode = value["LockMode"].asString();
		if(!value["LockReason"].isNull())
			itemsObject.lockReason = value["LockReason"].asString();
		if(!value["ReadDelayTime"].isNull())
			itemsObject.readDelayTime = value["ReadDelayTime"].asString();
		if(!value["DBMaxQuantity"].isNull())
			itemsObject.dBMaxQuantity = std::stoi(value["DBMaxQuantity"].asString());
		if(!value["AccountMaxQuantity"].isNull())
			itemsObject.accountMaxQuantity = std::stoi(value["AccountMaxQuantity"].asString());
		if(!value["CreationTime"].isNull())
			itemsObject.creationTime = value["CreationTime"].asString();
		if(!value["ExpireTime"].isNull())
			itemsObject.expireTime = value["ExpireTime"].asString();
		if(!value["MaintainTime"].isNull())
			itemsObject.maintainTime = value["MaintainTime"].asString();
		if(!value["AvailabilityValue"].isNull())
			itemsObject.availabilityValue = value["AvailabilityValue"].asString();
		if(!value["MaxIOPS"].isNull())
			itemsObject.maxIOPS = std::stoi(value["MaxIOPS"].asString());
		if(!value["MaxConnections"].isNull())
			itemsObject.maxConnections = std::stoi(value["MaxConnections"].asString());
		if(!value["MasterInstanceId"].isNull())
			itemsObject.masterInstanceId = value["MasterInstanceId"].asString();
		if(!value["DBInstanceCPU"].isNull())
			itemsObject.dBInstanceCPU = value["DBInstanceCPU"].asString();
		if(!value["IncrementSourceDBInstanceId"].isNull())
			itemsObject.incrementSourceDBInstanceId = value["IncrementSourceDBInstanceId"].asString();
		if(!value["GuardDBInstanceId"].isNull())
			itemsObject.guardDBInstanceId = value["GuardDBInstanceId"].asString();
		if(!value["ReplicateId"].isNull())
			itemsObject.replicateId = value["ReplicateId"].asString();
		if(!value["TempDBInstanceId"].isNull())
			itemsObject.tempDBInstanceId = value["TempDBInstanceId"].asString();
		if(!value["SecurityIPList"].isNull())
			itemsObject.securityIPList = value["SecurityIPList"].asString();
		if(!value["ZoneId"].isNull())
			itemsObject.zoneId = value["ZoneId"].asString();
		if(!value["InstanceNetworkType"].isNull())
			itemsObject.instanceNetworkType = value["InstanceNetworkType"].asString();
		if(!value["DBInstanceStorageType"].isNull())
			itemsObject.dBInstanceStorageType = value["DBInstanceStorageType"].asString();
		if(!value["AdvancedFeatures"].isNull())
			itemsObject.advancedFeatures = value["AdvancedFeatures"].asString();
		if(!value["Category"].isNull())
			itemsObject.category = value["Category"].asString();
		if(!value["AccountType"].isNull())
			itemsObject.accountType = value["AccountType"].asString();
		if(!value["SupportUpgradeAccountType"].isNull())
			itemsObject.supportUpgradeAccountType = value["SupportUpgradeAccountType"].asString();
		if(!value["SupportCreateSuperAccount"].isNull())
			itemsObject.supportCreateSuperAccount = value["SupportCreateSuperAccount"].asString();
		if(!value["VpcId"].isNull())
			itemsObject.vpcId = value["VpcId"].asString();
		if(!value["VSwitchId"].isNull())
			itemsObject.vSwitchId = value["VSwitchId"].asString();
		if(!value["ConnectionMode"].isNull())
			itemsObject.connectionMode = value["ConnectionMode"].asString();
		if(!value["CurrentKernelVersion"].isNull())
			itemsObject.currentKernelVersion = value["CurrentKernelVersion"].asString();
		if(!value["LatestKernelVersion"].isNull())
			itemsObject.latestKernelVersion = value["LatestKernelVersion"].asString();
		if(!value["ResourceGroupId"].isNull())
			itemsObject.resourceGroupId = value["ResourceGroupId"].asString();
		if(!value["ReadonlyInstanceSQLDelayedTime"].isNull())
			itemsObject.readonlyInstanceSQLDelayedTime = value["ReadonlyInstanceSQLDelayedTime"].asString();
		if(!value["SecurityIPMode"].isNull())
			itemsObject.securityIPMode = value["SecurityIPMode"].asString();
		if(!value["TimeZone"].isNull())
			itemsObject.timeZone = value["TimeZone"].asString();
		if(!value["Collation"].isNull())
			itemsObject.collation = value["Collation"].asString();
		if(!value["DispenseMode"].isNull())
			itemsObject.dispenseMode = value["DispenseMode"].asString();
		if(!value["MasterZone"].isNull())
			itemsObject.masterZone = value["MasterZone"].asString();
		if(!value["AutoUpgradeMinorVersion"].isNull())
			itemsObject.autoUpgradeMinorVersion = value["AutoUpgradeMinorVersion"].asString();
		auto allSlaveZones = value["SlaveZones"]["SlaveZone"];
		for (auto value : allSlaveZones)
		{
			DBInstanceAttribute::SlaveZone slaveZonesObject;
			if(!value["ZoneId"].isNull())
				slaveZonesObject.zoneId = value["ZoneId"].asString();
			itemsObject.slaveZones.push_back(slaveZonesObject);
		}
		auto allReadOnlyDBInstanceIds = value["ReadOnlyDBInstanceIds"]["ReadOnlyDBInstanceId"];
		for (auto value : allReadOnlyDBInstanceIds)
		{
			DBInstanceAttribute::ReadOnlyDBInstanceId readOnlyDBInstanceIdsObject;
			if(!value["DBInstanceId"].isNull())
				readOnlyDBInstanceIdsObject.dBInstanceId = value["DBInstanceId"].asString();
			itemsObject.readOnlyDBInstanceIds.push_back(readOnlyDBInstanceIdsObject);
		}
		auto extraNode = value["Extra"];
		if(!extraNode["ReplicaGroupID"].isNull())
			itemsObject.extra.replicaGroupID = extraNode["ReplicaGroupID"].asString();
		if(!extraNode["ReplicaGroupStatus"].isNull())
			itemsObject.extra.replicaGroupStatus = extraNode["ReplicaGroupStatus"].asString();
		if(!extraNode["ActiveReplicaDBInstanceID"].isNull())
			itemsObject.extra.activeReplicaDBInstanceID = extraNode["ActiveReplicaDBInstanceID"].asString();
			auto allDBInstanceId = extraNode["DBInstanceId"]["DBInstanceId"];
			for (auto value : allDBInstanceId)
				itemsObject.extra.dBInstanceId.push_back(value.asString());
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeDBInstanceAttributeResult::DBInstanceAttribute> DescribeDBInstanceAttributeResult::getItems()const
{
	return items_;
}

