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
		if(!valueItemsDBInstanceAttribute["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = valueItemsDBInstanceAttribute["DBInstanceId"].asString();
		if(!valueItemsDBInstanceAttribute["PayType"].isNull())
			itemsObject.payType = valueItemsDBInstanceAttribute["PayType"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceClassType"].isNull())
			itemsObject.dBInstanceClassType = valueItemsDBInstanceAttribute["DBInstanceClassType"].asString();
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
		if(!valueItemsDBInstanceAttribute["DBInstanceCpuCores"].isNull())
			itemsObject.dBInstanceCpuCores = std::stoi(valueItemsDBInstanceAttribute["DBInstanceCpuCores"].asString());
		if(!valueItemsDBInstanceAttribute["DBInstanceMemory"].isNull())
			itemsObject.dBInstanceMemory = std::stol(valueItemsDBInstanceAttribute["DBInstanceMemory"].asString());
		if(!valueItemsDBInstanceAttribute["DBInstanceStorage"].isNull())
			itemsObject.dBInstanceStorage = std::stol(valueItemsDBInstanceAttribute["DBInstanceStorage"].asString());
		if(!valueItemsDBInstanceAttribute["DBInstanceDiskMBPS"].isNull())
			itemsObject.dBInstanceDiskMBPS = std::stol(valueItemsDBInstanceAttribute["DBInstanceDiskMBPS"].asString());
		if(!valueItemsDBInstanceAttribute["HostType"].isNull())
			itemsObject.hostType = valueItemsDBInstanceAttribute["HostType"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceGroupCount"].isNull())
			itemsObject.dBInstanceGroupCount = valueItemsDBInstanceAttribute["DBInstanceGroupCount"].asString();
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
		if(!valueItemsDBInstanceAttribute["CreationTime"].isNull())
			itemsObject.creationTime = valueItemsDBInstanceAttribute["CreationTime"].asString();
		if(!valueItemsDBInstanceAttribute["ExpireTime"].isNull())
			itemsObject.expireTime = valueItemsDBInstanceAttribute["ExpireTime"].asString();
		if(!valueItemsDBInstanceAttribute["MaintainStartTime"].isNull())
			itemsObject.maintainStartTime = valueItemsDBInstanceAttribute["MaintainStartTime"].asString();
		if(!valueItemsDBInstanceAttribute["MaintainEndTime"].isNull())
			itemsObject.maintainEndTime = valueItemsDBInstanceAttribute["MaintainEndTime"].asString();
		if(!valueItemsDBInstanceAttribute["AvailabilityValue"].isNull())
			itemsObject.availabilityValue = valueItemsDBInstanceAttribute["AvailabilityValue"].asString();
		if(!valueItemsDBInstanceAttribute["MaxConnections"].isNull())
			itemsObject.maxConnections = std::stoi(valueItemsDBInstanceAttribute["MaxConnections"].asString());
		if(!valueItemsDBInstanceAttribute["SecurityIPList"].isNull())
			itemsObject.securityIPList = valueItemsDBInstanceAttribute["SecurityIPList"].asString();
		if(!valueItemsDBInstanceAttribute["ZoneId"].isNull())
			itemsObject.zoneId = valueItemsDBInstanceAttribute["ZoneId"].asString();
		if(!valueItemsDBInstanceAttribute["InstanceNetworkType"].isNull())
			itemsObject.instanceNetworkType = valueItemsDBInstanceAttribute["InstanceNetworkType"].asString();
		if(!valueItemsDBInstanceAttribute["VpcId"].isNull())
			itemsObject.vpcId = valueItemsDBInstanceAttribute["VpcId"].asString();
		if(!valueItemsDBInstanceAttribute["ConnectionMode"].isNull())
			itemsObject.connectionMode = valueItemsDBInstanceAttribute["ConnectionMode"].asString();
		if(!valueItemsDBInstanceAttribute["StorageType"].isNull())
			itemsObject.storageType = valueItemsDBInstanceAttribute["StorageType"].asString();
		if(!valueItemsDBInstanceAttribute["CpuCoresPerNode"].isNull())
			itemsObject.cpuCoresPerNode = std::stoi(valueItemsDBInstanceAttribute["CpuCoresPerNode"].asString());
		if(!valueItemsDBInstanceAttribute["SegmentCounts"].isNull())
			itemsObject.segmentCounts = std::stoi(valueItemsDBInstanceAttribute["SegmentCounts"].asString());
		if(!valueItemsDBInstanceAttribute["StoragePerNode"].isNull())
			itemsObject.storagePerNode = std::stoi(valueItemsDBInstanceAttribute["StoragePerNode"].asString());
		if(!valueItemsDBInstanceAttribute["MemoryPerNode"].isNull())
			itemsObject.memoryPerNode = std::stoi(valueItemsDBInstanceAttribute["MemoryPerNode"].asString());
		if(!valueItemsDBInstanceAttribute["StorageUnit"].isNull())
			itemsObject.storageUnit = valueItemsDBInstanceAttribute["StorageUnit"].asString();
		if(!valueItemsDBInstanceAttribute["MemoryUnit"].isNull())
			itemsObject.memoryUnit = valueItemsDBInstanceAttribute["MemoryUnit"].asString();
		auto allTagsNode = allItemsNode["Tags"]["Tag"];
		for (auto allItemsNodeTagsTag : allTagsNode)
		{
			DBInstanceAttribute::Tag tagsObject;
			if(!allItemsNodeTagsTag["Key"].isNull())
				tagsObject.key = allItemsNodeTagsTag["Key"].asString();
			if(!allItemsNodeTagsTag["Value"].isNull())
				tagsObject.value = allItemsNodeTagsTag["Value"].asString();
			itemsObject.tags.push_back(tagsObject);
		}
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeDBInstanceAttributeResult::DBInstanceAttribute> DescribeDBInstanceAttributeResult::getItems()const
{
	return items_;
}

