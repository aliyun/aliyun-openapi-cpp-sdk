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

#include <alibabacloud/gpdb/model/DescribeDBInstanceAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

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
		if(!valueItemsDBInstanceAttribute["VpcId"].isNull())
			itemsObject.vpcId = valueItemsDBInstanceAttribute["VpcId"].asString();
		if(!valueItemsDBInstanceAttribute["CreationTime"].isNull())
			itemsObject.creationTime = valueItemsDBInstanceAttribute["CreationTime"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceCpuCores"].isNull())
			itemsObject.dBInstanceCpuCores = std::stoi(valueItemsDBInstanceAttribute["DBInstanceCpuCores"].asString());
		if(!valueItemsDBInstanceAttribute["SegmentCounts"].isNull())
			itemsObject.segmentCounts = std::stoi(valueItemsDBInstanceAttribute["SegmentCounts"].asString());
		if(!valueItemsDBInstanceAttribute["StoragePerNode"].isNull())
			itemsObject.storagePerNode = std::stoi(valueItemsDBInstanceAttribute["StoragePerNode"].asString());
		if(!valueItemsDBInstanceAttribute["DBInstanceMemory"].isNull())
			itemsObject.dBInstanceMemory = std::stol(valueItemsDBInstanceAttribute["DBInstanceMemory"].asString());
		if(!valueItemsDBInstanceAttribute["HostType"].isNull())
			itemsObject.hostType = valueItemsDBInstanceAttribute["HostType"].asString();
		if(!valueItemsDBInstanceAttribute["PayType"].isNull())
			itemsObject.payType = valueItemsDBInstanceAttribute["PayType"].asString();
		if(!valueItemsDBInstanceAttribute["StorageType"].isNull())
			itemsObject.storageType = valueItemsDBInstanceAttribute["StorageType"].asString();
		if(!valueItemsDBInstanceAttribute["AvailabilityValue"].isNull())
			itemsObject.availabilityValue = valueItemsDBInstanceAttribute["AvailabilityValue"].asString();
		if(!valueItemsDBInstanceAttribute["ReadDelayTime"].isNull())
			itemsObject.readDelayTime = valueItemsDBInstanceAttribute["ReadDelayTime"].asString();
		if(!valueItemsDBInstanceAttribute["CpuCoresPerNode"].isNull())
			itemsObject.cpuCoresPerNode = std::stoi(valueItemsDBInstanceAttribute["CpuCoresPerNode"].asString());
		if(!valueItemsDBInstanceAttribute["Port"].isNull())
			itemsObject.port = valueItemsDBInstanceAttribute["Port"].asString();
		if(!valueItemsDBInstanceAttribute["ConnectionMode"].isNull())
			itemsObject.connectionMode = valueItemsDBInstanceAttribute["ConnectionMode"].asString();
		if(!valueItemsDBInstanceAttribute["LockMode"].isNull())
			itemsObject.lockMode = valueItemsDBInstanceAttribute["LockMode"].asString();
		if(!valueItemsDBInstanceAttribute["EngineVersion"].isNull())
			itemsObject.engineVersion = valueItemsDBInstanceAttribute["EngineVersion"].asString();
		if(!valueItemsDBInstanceAttribute["StorageUnit"].isNull())
			itemsObject.storageUnit = valueItemsDBInstanceAttribute["StorageUnit"].asString();
		if(!valueItemsDBInstanceAttribute["MemoryPerNode"].isNull())
			itemsObject.memoryPerNode = std::stoi(valueItemsDBInstanceAttribute["MemoryPerNode"].asString());
		if(!valueItemsDBInstanceAttribute["ConnectionString"].isNull())
			itemsObject.connectionString = valueItemsDBInstanceAttribute["ConnectionString"].asString();
		if(!valueItemsDBInstanceAttribute["InstanceNetworkType"].isNull())
			itemsObject.instanceNetworkType = valueItemsDBInstanceAttribute["InstanceNetworkType"].asString();
		if(!valueItemsDBInstanceAttribute["SecurityIPList"].isNull())
			itemsObject.securityIPList = valueItemsDBInstanceAttribute["SecurityIPList"].asString();
		if(!valueItemsDBInstanceAttribute["MemoryUnit"].isNull())
			itemsObject.memoryUnit = valueItemsDBInstanceAttribute["MemoryUnit"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceClassType"].isNull())
			itemsObject.dBInstanceClassType = valueItemsDBInstanceAttribute["DBInstanceClassType"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceDescription"].isNull())
			itemsObject.dBInstanceDescription = valueItemsDBInstanceAttribute["DBInstanceDescription"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceGroupCount"].isNull())
			itemsObject.dBInstanceGroupCount = valueItemsDBInstanceAttribute["DBInstanceGroupCount"].asString();
		if(!valueItemsDBInstanceAttribute["ExpireTime"].isNull())
			itemsObject.expireTime = valueItemsDBInstanceAttribute["ExpireTime"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceNetType"].isNull())
			itemsObject.dBInstanceNetType = valueItemsDBInstanceAttribute["DBInstanceNetType"].asString();
		if(!valueItemsDBInstanceAttribute["MaintainStartTime"].isNull())
			itemsObject.maintainStartTime = valueItemsDBInstanceAttribute["MaintainStartTime"].asString();
		if(!valueItemsDBInstanceAttribute["MaintainEndTime"].isNull())
			itemsObject.maintainEndTime = valueItemsDBInstanceAttribute["MaintainEndTime"].asString();
		if(!valueItemsDBInstanceAttribute["LockReason"].isNull())
			itemsObject.lockReason = valueItemsDBInstanceAttribute["LockReason"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceStatus"].isNull())
			itemsObject.dBInstanceStatus = valueItemsDBInstanceAttribute["DBInstanceStatus"].asString();
		if(!valueItemsDBInstanceAttribute["RegionId"].isNull())
			itemsObject.regionId = valueItemsDBInstanceAttribute["RegionId"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceDiskMBPS"].isNull())
			itemsObject.dBInstanceDiskMBPS = std::stol(valueItemsDBInstanceAttribute["DBInstanceDiskMBPS"].asString());
		if(!valueItemsDBInstanceAttribute["DBInstanceStorage"].isNull())
			itemsObject.dBInstanceStorage = std::stol(valueItemsDBInstanceAttribute["DBInstanceStorage"].asString());
		if(!valueItemsDBInstanceAttribute["ZoneId"].isNull())
			itemsObject.zoneId = valueItemsDBInstanceAttribute["ZoneId"].asString();
		if(!valueItemsDBInstanceAttribute["MaxConnections"].isNull())
			itemsObject.maxConnections = std::stoi(valueItemsDBInstanceAttribute["MaxConnections"].asString());
		if(!valueItemsDBInstanceAttribute["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = valueItemsDBInstanceAttribute["DBInstanceId"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceClass"].isNull())
			itemsObject.dBInstanceClass = valueItemsDBInstanceAttribute["DBInstanceClass"].asString();
		if(!valueItemsDBInstanceAttribute["Engine"].isNull())
			itemsObject.engine = valueItemsDBInstanceAttribute["Engine"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceCategory"].isNull())
			itemsObject.dBInstanceCategory = valueItemsDBInstanceAttribute["DBInstanceCategory"].asString();
		if(!valueItemsDBInstanceAttribute["CpuCores"].isNull())
			itemsObject.cpuCores = std::stoi(valueItemsDBInstanceAttribute["CpuCores"].asString());
		if(!valueItemsDBInstanceAttribute["MemorySize"].isNull())
			itemsObject.memorySize = std::stol(valueItemsDBInstanceAttribute["MemorySize"].asString());
		if(!valueItemsDBInstanceAttribute["StorageSize"].isNull())
			itemsObject.storageSize = std::stol(valueItemsDBInstanceAttribute["StorageSize"].asString());
		if(!valueItemsDBInstanceAttribute["SegNodeNum"].isNull())
			itemsObject.segNodeNum = std::stoi(valueItemsDBInstanceAttribute["SegNodeNum"].asString());
		if(!valueItemsDBInstanceAttribute["MasterNodeNum"].isNull())
			itemsObject.masterNodeNum = std::stoi(valueItemsDBInstanceAttribute["MasterNodeNum"].asString());
		if(!valueItemsDBInstanceAttribute["DBInstanceMode"].isNull())
			itemsObject.dBInstanceMode = valueItemsDBInstanceAttribute["DBInstanceMode"].asString();
		if(!valueItemsDBInstanceAttribute["MinorVersion"].isNull())
			itemsObject.minorVersion = valueItemsDBInstanceAttribute["MinorVersion"].asString();
		if(!valueItemsDBInstanceAttribute["SupportRestore"].isNull())
			itemsObject.supportRestore = valueItemsDBInstanceAttribute["SupportRestore"].asString() == "true";
		if(!valueItemsDBInstanceAttribute["VSwitchId"].isNull())
			itemsObject.vSwitchId = valueItemsDBInstanceAttribute["VSwitchId"].asString();
		if(!valueItemsDBInstanceAttribute["EncryptionKey"].isNull())
			itemsObject.encryptionKey = valueItemsDBInstanceAttribute["EncryptionKey"].asString();
		if(!valueItemsDBInstanceAttribute["EncryptionType"].isNull())
			itemsObject.encryptionType = valueItemsDBInstanceAttribute["EncryptionType"].asString();
		if(!valueItemsDBInstanceAttribute["CoreVersion"].isNull())
			itemsObject.coreVersion = valueItemsDBInstanceAttribute["CoreVersion"].asString();
		if(!valueItemsDBInstanceAttribute["RunningTime"].isNull())
			itemsObject.runningTime = valueItemsDBInstanceAttribute["RunningTime"].asString();
		if(!valueItemsDBInstanceAttribute["StartTime"].isNull())
			itemsObject.startTime = valueItemsDBInstanceAttribute["StartTime"].asString();
		if(!valueItemsDBInstanceAttribute["ResourceGroupId"].isNull())
			itemsObject.resourceGroupId = valueItemsDBInstanceAttribute["ResourceGroupId"].asString();
		if(!valueItemsDBInstanceAttribute["ServerlessResource"].isNull())
			itemsObject.serverlessResource = std::stoi(valueItemsDBInstanceAttribute["ServerlessResource"].asString());
		if(!valueItemsDBInstanceAttribute["IdleTime"].isNull())
			itemsObject.idleTime = std::stoi(valueItemsDBInstanceAttribute["IdleTime"].asString());
		if(!valueItemsDBInstanceAttribute["ServerlessMode"].isNull())
			itemsObject.serverlessMode = valueItemsDBInstanceAttribute["ServerlessMode"].asString();
		if(!valueItemsDBInstanceAttribute["SegDiskPerformanceLevel"].isNull())
			itemsObject.segDiskPerformanceLevel = valueItemsDBInstanceAttribute["SegDiskPerformanceLevel"].asString();
		if(!valueItemsDBInstanceAttribute["VectorConfigurationStatus"].isNull())
			itemsObject.vectorConfigurationStatus = valueItemsDBInstanceAttribute["VectorConfigurationStatus"].asString();
		auto allTagsNode = valueItemsDBInstanceAttribute["Tags"]["Tag"];
		for (auto valueItemsDBInstanceAttributeTagsTag : allTagsNode)
		{
			DBInstanceAttribute::Tag tagsObject;
			if(!valueItemsDBInstanceAttributeTagsTag["Key"].isNull())
				tagsObject.key = valueItemsDBInstanceAttributeTagsTag["Key"].asString();
			if(!valueItemsDBInstanceAttributeTagsTag["Value"].isNull())
				tagsObject.value = valueItemsDBInstanceAttributeTagsTag["Value"].asString();
			itemsObject.tags.push_back(tagsObject);
		}
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeDBInstanceAttributeResult::DBInstanceAttribute> DescribeDBInstanceAttributeResult::getItems()const
{
	return items_;
}

