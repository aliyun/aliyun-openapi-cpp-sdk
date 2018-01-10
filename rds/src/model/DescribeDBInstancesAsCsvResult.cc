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
	auto allItems = value["Items"]["DBInstanceAttribute"];
	for (auto value : allItems)
	{
		DBInstanceAttribute dBInstanceAttributeObject;
		dBInstanceAttributeObject.insId = std::stoi(value["InsId"].asString());
		dBInstanceAttributeObject.dBInstanceId = value["DBInstanceId"].asString();
		dBInstanceAttributeObject.dBInstanceName = value["DBInstanceName"].asString();
		dBInstanceAttributeObject.payType = value["PayType"].asString();
		dBInstanceAttributeObject.dBInstanceClassType = value["DBInstanceClassType"].asString();
		dBInstanceAttributeObject.dBInstanceType = value["DBInstanceType"].asString();
		dBInstanceAttributeObject.regionId = value["RegionId"].asString();
		dBInstanceAttributeObject.connectionString = value["ConnectionString"].asString();
		dBInstanceAttributeObject.port = value["Port"].asString();
		dBInstanceAttributeObject.engine = value["Engine"].asString();
		dBInstanceAttributeObject.engineVersion = value["EngineVersion"].asString();
		dBInstanceAttributeObject.dBInstanceClass = value["DBInstanceClass"].asString();
		dBInstanceAttributeObject.dBInstanceMemory = std::stol(value["DBInstanceMemory"].asString());
		dBInstanceAttributeObject.dBInstanceStorage = std::stoi(value["DBInstanceStorage"].asString());
		dBInstanceAttributeObject.dBInstanceNetType = value["DBInstanceNetType"].asString();
		dBInstanceAttributeObject.dBInstanceStatus = value["DBInstanceStatus"].asString();
		dBInstanceAttributeObject.dBInstanceDescription = value["DBInstanceDescription"].asString();
		dBInstanceAttributeObject.lockMode = value["LockMode"].asString();
		dBInstanceAttributeObject.lockReason = value["LockReason"].asString();
		dBInstanceAttributeObject.readDelayTime = value["ReadDelayTime"].asString();
		dBInstanceAttributeObject.dBMaxQuantity = std::stoi(value["DBMaxQuantity"].asString());
		dBInstanceAttributeObject.accountMaxQuantity = std::stoi(value["AccountMaxQuantity"].asString());
		dBInstanceAttributeObject.creationTime = value["CreationTime"].asString();
		dBInstanceAttributeObject.expireTime = value["ExpireTime"].asString();
		dBInstanceAttributeObject.maintainTime = value["MaintainTime"].asString();
		dBInstanceAttributeObject.availabilityValue = value["AvailabilityValue"].asString();
		dBInstanceAttributeObject.maxIOPS = std::stoi(value["MaxIOPS"].asString());
		dBInstanceAttributeObject.maxConnections = std::stoi(value["MaxConnections"].asString());
		dBInstanceAttributeObject.masterInstanceId = value["MasterInstanceId"].asString();
		dBInstanceAttributeObject.dBInstanceCPU = value["DBInstanceCPU"].asString();
		dBInstanceAttributeObject.incrementSourceDBInstanceId = value["IncrementSourceDBInstanceId"].asString();
		dBInstanceAttributeObject.guardDBInstanceId = value["GuardDBInstanceId"].asString();
		dBInstanceAttributeObject.tempDBInstanceId = value["TempDBInstanceId"].asString();
		dBInstanceAttributeObject.securityIPList = value["SecurityIPList"].asString();
		dBInstanceAttributeObject.zoneId = value["ZoneId"].asString();
		dBInstanceAttributeObject.instanceNetworkType = value["InstanceNetworkType"].asString();
		dBInstanceAttributeObject.category = value["Category"].asString();
		dBInstanceAttributeObject.accountType = value["AccountType"].asString();
		dBInstanceAttributeObject.supportUpgradeAccountType = value["SupportUpgradeAccountType"].asString();
		dBInstanceAttributeObject.vpcId = value["VpcId"].asString();
		dBInstanceAttributeObject.vSwitchId = value["VSwitchId"].asString();
		dBInstanceAttributeObject.connectionMode = value["ConnectionMode"].asString();
		dBInstanceAttributeObject.tags = value["Tags"].asString();
		items_.push_back(dBInstanceAttributeObject);
	}

}

