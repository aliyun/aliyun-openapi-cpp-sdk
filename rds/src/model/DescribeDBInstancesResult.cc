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

#include <alibabacloud/rds/model/DescribeDBInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDBInstancesResult::DescribeDBInstancesResult() :
	ServiceResult()
{}

DescribeDBInstancesResult::DescribeDBInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstancesResult::~DescribeDBInstancesResult()
{}

void DescribeDBInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DBInstance"];
	for (auto valueItemsDBInstance : allItemsNode)
	{
		DBInstance itemsObject;
		if(!valueItemsDBInstance["InsId"].isNull())
			itemsObject.insId = std::stoi(valueItemsDBInstance["InsId"].asString());
		if(!valueItemsDBInstance["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = valueItemsDBInstance["DBInstanceId"].asString();
		if(!valueItemsDBInstance["DBInstanceDescription"].isNull())
			itemsObject.dBInstanceDescription = valueItemsDBInstance["DBInstanceDescription"].asString();
		if(!valueItemsDBInstance["PayType"].isNull())
			itemsObject.payType = valueItemsDBInstance["PayType"].asString();
		if(!valueItemsDBInstance["DBInstanceType"].isNull())
			itemsObject.dBInstanceType = valueItemsDBInstance["DBInstanceType"].asString();
		if(!valueItemsDBInstance["RegionId"].isNull())
			itemsObject.regionId = valueItemsDBInstance["RegionId"].asString();
		if(!valueItemsDBInstance["ExpireTime"].isNull())
			itemsObject.expireTime = valueItemsDBInstance["ExpireTime"].asString();
		if(!valueItemsDBInstance["DestroyTime"].isNull())
			itemsObject.destroyTime = valueItemsDBInstance["DestroyTime"].asString();
		if(!valueItemsDBInstance["DBInstanceStatus"].isNull())
			itemsObject.dBInstanceStatus = valueItemsDBInstance["DBInstanceStatus"].asString();
		if(!valueItemsDBInstance["Engine"].isNull())
			itemsObject.engine = valueItemsDBInstance["Engine"].asString();
		if(!valueItemsDBInstance["DBInstanceNetType"].isNull())
			itemsObject.dBInstanceNetType = valueItemsDBInstance["DBInstanceNetType"].asString();
		if(!valueItemsDBInstance["ConnectionMode"].isNull())
			itemsObject.connectionMode = valueItemsDBInstance["ConnectionMode"].asString();
		if(!valueItemsDBInstance["LockMode"].isNull())
			itemsObject.lockMode = valueItemsDBInstance["LockMode"].asString();
		if(!valueItemsDBInstance["Category"].isNull())
			itemsObject.category = valueItemsDBInstance["Category"].asString();
		if(!valueItemsDBInstance["DBInstanceStorageType"].isNull())
			itemsObject.dBInstanceStorageType = valueItemsDBInstance["DBInstanceStorageType"].asString();
		if(!valueItemsDBInstance["DBInstanceClass"].isNull())
			itemsObject.dBInstanceClass = valueItemsDBInstance["DBInstanceClass"].asString();
		if(!valueItemsDBInstance["InstanceNetworkType"].isNull())
			itemsObject.instanceNetworkType = valueItemsDBInstance["InstanceNetworkType"].asString();
		if(!valueItemsDBInstance["VpcCloudInstanceId"].isNull())
			itemsObject.vpcCloudInstanceId = valueItemsDBInstance["VpcCloudInstanceId"].asString();
		if(!valueItemsDBInstance["LockReason"].isNull())
			itemsObject.lockReason = valueItemsDBInstance["LockReason"].asString();
		if(!valueItemsDBInstance["ZoneId"].isNull())
			itemsObject.zoneId = valueItemsDBInstance["ZoneId"].asString();
		if(!valueItemsDBInstance["MutriORsignle"].isNull())
			itemsObject.mutriORsignle = valueItemsDBInstance["MutriORsignle"].asString() == "true";
		if(!valueItemsDBInstance["CreateTime"].isNull())
			itemsObject.createTime = valueItemsDBInstance["CreateTime"].asString();
		if(!valueItemsDBInstance["EngineVersion"].isNull())
			itemsObject.engineVersion = valueItemsDBInstance["EngineVersion"].asString();
		if(!valueItemsDBInstance["GuardDBInstanceId"].isNull())
			itemsObject.guardDBInstanceId = valueItemsDBInstance["GuardDBInstanceId"].asString();
		if(!valueItemsDBInstance["TempDBInstanceId"].isNull())
			itemsObject.tempDBInstanceId = valueItemsDBInstance["TempDBInstanceId"].asString();
		if(!valueItemsDBInstance["MasterInstanceId"].isNull())
			itemsObject.masterInstanceId = valueItemsDBInstance["MasterInstanceId"].asString();
		if(!valueItemsDBInstance["VpcId"].isNull())
			itemsObject.vpcId = valueItemsDBInstance["VpcId"].asString();
		if(!valueItemsDBInstance["VSwitchId"].isNull())
			itemsObject.vSwitchId = valueItemsDBInstance["VSwitchId"].asString();
		if(!valueItemsDBInstance["ReplicateId"].isNull())
			itemsObject.replicateId = valueItemsDBInstance["ReplicateId"].asString();
		if(!valueItemsDBInstance["ResourceGroupId"].isNull())
			itemsObject.resourceGroupId = valueItemsDBInstance["ResourceGroupId"].asString();
		if(!valueItemsDBInstance["AutoUpgradeMinorVersion"].isNull())
			itemsObject.autoUpgradeMinorVersion = valueItemsDBInstance["AutoUpgradeMinorVersion"].asString();
		if(!valueItemsDBInstance["DedicatedHostGroupId"].isNull())
			itemsObject.dedicatedHostGroupId = valueItemsDBInstance["DedicatedHostGroupId"].asString();
		if(!valueItemsDBInstance["DedicatedHostIdForMaster"].isNull())
			itemsObject.dedicatedHostIdForMaster = valueItemsDBInstance["DedicatedHostIdForMaster"].asString();
		if(!valueItemsDBInstance["DedicatedHostIdForSlave"].isNull())
			itemsObject.dedicatedHostIdForSlave = valueItemsDBInstance["DedicatedHostIdForSlave"].asString();
		if(!valueItemsDBInstance["DedicatedHostIdForLog"].isNull())
			itemsObject.dedicatedHostIdForLog = valueItemsDBInstance["DedicatedHostIdForLog"].asString();
		if(!valueItemsDBInstance["DedicatedHostNameForMaster"].isNull())
			itemsObject.dedicatedHostNameForMaster = valueItemsDBInstance["DedicatedHostNameForMaster"].asString();
		if(!valueItemsDBInstance["DedicatedHostNameForSlave"].isNull())
			itemsObject.dedicatedHostNameForSlave = valueItemsDBInstance["DedicatedHostNameForSlave"].asString();
		if(!valueItemsDBInstance["DedicatedHostNameForLog"].isNull())
			itemsObject.dedicatedHostNameForLog = valueItemsDBInstance["DedicatedHostNameForLog"].asString();
		if(!valueItemsDBInstance["DedicatedHostZoneIdForMaster"].isNull())
			itemsObject.dedicatedHostZoneIdForMaster = valueItemsDBInstance["DedicatedHostZoneIdForMaster"].asString();
		if(!valueItemsDBInstance["DedicatedHostZoneIdForSlave"].isNull())
			itemsObject.dedicatedHostZoneIdForSlave = valueItemsDBInstance["DedicatedHostZoneIdForSlave"].asString();
		if(!valueItemsDBInstance["DedicatedHostZoneIdForLog"].isNull())
			itemsObject.dedicatedHostZoneIdForLog = valueItemsDBInstance["DedicatedHostZoneIdForLog"].asString();
		auto allReadOnlyDBInstanceIdsNode = allItemsNode["ReadOnlyDBInstanceIds"]["ReadOnlyDBInstanceId"];
		for (auto allItemsNodeReadOnlyDBInstanceIdsReadOnlyDBInstanceId : allReadOnlyDBInstanceIdsNode)
		{
			DBInstance::ReadOnlyDBInstanceId readOnlyDBInstanceIdsObject;
			if(!allItemsNodeReadOnlyDBInstanceIdsReadOnlyDBInstanceId["DBInstanceId"].isNull())
				readOnlyDBInstanceIdsObject.dBInstanceId = allItemsNodeReadOnlyDBInstanceIdsReadOnlyDBInstanceId["DBInstanceId"].asString();
			itemsObject.readOnlyDBInstanceIds.push_back(readOnlyDBInstanceIdsObject);
		}
		items_.push_back(itemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageRecordCount"].isNull())
		pageRecordCount_ = std::stoi(value["PageRecordCount"].asString());

}

int DescribeDBInstancesResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

int DescribeDBInstancesResult::getPageRecordCount()const
{
	return pageRecordCount_;
}

int DescribeDBInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDBInstancesResult::DBInstance> DescribeDBInstancesResult::getItems()const
{
	return items_;
}

