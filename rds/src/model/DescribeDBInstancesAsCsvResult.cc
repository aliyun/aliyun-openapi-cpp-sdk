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

#include <alibabacloud/rds/model/DescribeDBInstancesAsCsvResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBInstancesAsCsvResult::DescribeDBInstancesAsCsvResult() :
	ServiceResult()
{}

DescribeDBInstancesAsCsvResult::DescribeDBInstancesAsCsvResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstancesAsCsvResult::~DescribeDBInstancesAsCsvResult()
{}

void DescribeDBInstancesAsCsvResult::parse(const std::string &payload)
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
		if(!valueItemsDBInstanceAttribute["AvailabilityValue"].isNull())
			itemsObject.availabilityValue = valueItemsDBInstanceAttribute["AvailabilityValue"].asString();
		if(!valueItemsDBInstanceAttribute["Category"].isNull())
			itemsObject.category = valueItemsDBInstanceAttribute["Category"].asString();
		if(!valueItemsDBInstanceAttribute["ConnectionMode"].isNull())
			itemsObject.connectionMode = valueItemsDBInstanceAttribute["ConnectionMode"].asString();
		if(!valueItemsDBInstanceAttribute["ConnectionString"].isNull())
			itemsObject.connectionString = valueItemsDBInstanceAttribute["ConnectionString"].asString();
		if(!valueItemsDBInstanceAttribute["CreationTime"].isNull())
			itemsObject.creationTime = valueItemsDBInstanceAttribute["CreationTime"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceCPU"].isNull())
			itemsObject.dBInstanceCPU = valueItemsDBInstanceAttribute["DBInstanceCPU"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceClass"].isNull())
			itemsObject.dBInstanceClass = valueItemsDBInstanceAttribute["DBInstanceClass"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceClassType"].isNull())
			itemsObject.dBInstanceClassType = valueItemsDBInstanceAttribute["DBInstanceClassType"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceDescription"].isNull())
			itemsObject.dBInstanceDescription = valueItemsDBInstanceAttribute["DBInstanceDescription"].asString();
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
		if(!valueItemsDBInstanceAttribute["DBInstanceType"].isNull())
			itemsObject.dBInstanceType = valueItemsDBInstanceAttribute["DBInstanceType"].asString();
		if(!valueItemsDBInstanceAttribute["DBMaxQuantity"].isNull())
			itemsObject.dBMaxQuantity = std::stoi(valueItemsDBInstanceAttribute["DBMaxQuantity"].asString());
		if(!valueItemsDBInstanceAttribute["Engine"].isNull())
			itemsObject.engine = valueItemsDBInstanceAttribute["Engine"].asString();
		if(!valueItemsDBInstanceAttribute["EngineVersion"].isNull())
			itemsObject.engineVersion = valueItemsDBInstanceAttribute["EngineVersion"].asString();
		if(!valueItemsDBInstanceAttribute["ExpireTime"].isNull())
			itemsObject.expireTime = valueItemsDBInstanceAttribute["ExpireTime"].asString();
		if(!valueItemsDBInstanceAttribute["ExportKey"].isNull())
			itemsObject.exportKey = valueItemsDBInstanceAttribute["ExportKey"].asString();
		if(!valueItemsDBInstanceAttribute["GuardDBInstanceId"].isNull())
			itemsObject.guardDBInstanceId = valueItemsDBInstanceAttribute["GuardDBInstanceId"].asString();
		if(!valueItemsDBInstanceAttribute["IncrementSourceDBInstanceId"].isNull())
			itemsObject.incrementSourceDBInstanceId = valueItemsDBInstanceAttribute["IncrementSourceDBInstanceId"].asString();
		if(!valueItemsDBInstanceAttribute["InstanceNetworkType"].isNull())
			itemsObject.instanceNetworkType = valueItemsDBInstanceAttribute["InstanceNetworkType"].asString();
		if(!valueItemsDBInstanceAttribute["LockMode"].isNull())
			itemsObject.lockMode = valueItemsDBInstanceAttribute["LockMode"].asString();
		if(!valueItemsDBInstanceAttribute["LockReason"].isNull())
			itemsObject.lockReason = valueItemsDBInstanceAttribute["LockReason"].asString();
		if(!valueItemsDBInstanceAttribute["MaintainTime"].isNull())
			itemsObject.maintainTime = valueItemsDBInstanceAttribute["MaintainTime"].asString();
		if(!valueItemsDBInstanceAttribute["MasterInstanceId"].isNull())
			itemsObject.masterInstanceId = valueItemsDBInstanceAttribute["MasterInstanceId"].asString();
		if(!valueItemsDBInstanceAttribute["MaxConnections"].isNull())
			itemsObject.maxConnections = std::stoi(valueItemsDBInstanceAttribute["MaxConnections"].asString());
		if(!valueItemsDBInstanceAttribute["MaxIOPS"].isNull())
			itemsObject.maxIOPS = std::stoi(valueItemsDBInstanceAttribute["MaxIOPS"].asString());
		if(!valueItemsDBInstanceAttribute["PayType"].isNull())
			itemsObject.payType = valueItemsDBInstanceAttribute["PayType"].asString();
		if(!valueItemsDBInstanceAttribute["Port"].isNull())
			itemsObject.port = valueItemsDBInstanceAttribute["Port"].asString();
		if(!valueItemsDBInstanceAttribute["ReadDelayTime"].isNull())
			itemsObject.readDelayTime = valueItemsDBInstanceAttribute["ReadDelayTime"].asString();
		if(!valueItemsDBInstanceAttribute["RegionId"].isNull())
			itemsObject.regionId = valueItemsDBInstanceAttribute["RegionId"].asString();
		if(!valueItemsDBInstanceAttribute["SecurityIPList"].isNull())
			itemsObject.securityIPList = valueItemsDBInstanceAttribute["SecurityIPList"].asString();
		if(!valueItemsDBInstanceAttribute["SupportUpgradeAccountType"].isNull())
			itemsObject.supportUpgradeAccountType = valueItemsDBInstanceAttribute["SupportUpgradeAccountType"].asString();
		if(!valueItemsDBInstanceAttribute["Tags"].isNull())
			itemsObject.tags = valueItemsDBInstanceAttribute["Tags"].asString();
		if(!valueItemsDBInstanceAttribute["TempDBInstanceId"].isNull())
			itemsObject.tempDBInstanceId = valueItemsDBInstanceAttribute["TempDBInstanceId"].asString();
		if(!valueItemsDBInstanceAttribute["VSwitchId"].isNull())
			itemsObject.vSwitchId = valueItemsDBInstanceAttribute["VSwitchId"].asString();
		if(!valueItemsDBInstanceAttribute["VpcId"].isNull())
			itemsObject.vpcId = valueItemsDBInstanceAttribute["VpcId"].asString();
		if(!valueItemsDBInstanceAttribute["ZoneId"].isNull())
			itemsObject.zoneId = valueItemsDBInstanceAttribute["ZoneId"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceStorageType"].isNull())
			itemsObject.dBInstanceStorageType = valueItemsDBInstanceAttribute["DBInstanceStorageType"].asString();
		auto allSlaveZones = value["SlaveZones"]["slaveRegion"];
		for (auto value : allSlaveZones)
			itemsObject.slaveZones.push_back(value.asString());
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeDBInstancesAsCsvResult::DBInstanceAttribute> DescribeDBInstancesAsCsvResult::getItems()const
{
	return items_;
}

