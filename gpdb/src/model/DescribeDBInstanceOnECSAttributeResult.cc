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

#include <alibabacloud/gpdb/model/DescribeDBInstanceOnECSAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Gpdb;
using namespace AlibabaCloud::Gpdb::Model;

DescribeDBInstanceOnECSAttributeResult::DescribeDBInstanceOnECSAttributeResult() :
	ServiceResult()
{}

DescribeDBInstanceOnECSAttributeResult::DescribeDBInstanceOnECSAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstanceOnECSAttributeResult::~DescribeDBInstanceOnECSAttributeResult()
{}

void DescribeDBInstanceOnECSAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allItemsNode = value["Items"]["DBInstanceAttribute"];
	for (auto valueItemsDBInstanceAttribute : allItemsNode)
	{
		DBInstanceAttribute itemsObject;
		if(!valueItemsDBInstanceAttribute["CreationTime"].isNull())
			itemsObject.creationTime = valueItemsDBInstanceAttribute["CreationTime"].asString();
		if(!valueItemsDBInstanceAttribute["VpcId"].isNull())
			itemsObject.vpcId = valueItemsDBInstanceAttribute["VpcId"].asString();
		if(!valueItemsDBInstanceAttribute["EncryptionType"].isNull())
			itemsObject.encryptionType = valueItemsDBInstanceAttribute["EncryptionType"].asString();
		if(!valueItemsDBInstanceAttribute["InstanceDeployType"].isNull())
			itemsObject.instanceDeployType = valueItemsDBInstanceAttribute["InstanceDeployType"].asString();
		if(!valueItemsDBInstanceAttribute["PayType"].isNull())
			itemsObject.payType = valueItemsDBInstanceAttribute["PayType"].asString();
		if(!valueItemsDBInstanceAttribute["StorageType"].isNull())
			itemsObject.storageType = valueItemsDBInstanceAttribute["StorageType"].asString();
		if(!valueItemsDBInstanceAttribute["ConnectionMode"].isNull())
			itemsObject.connectionMode = valueItemsDBInstanceAttribute["ConnectionMode"].asString();
		if(!valueItemsDBInstanceAttribute["Port"].isNull())
			itemsObject.port = valueItemsDBInstanceAttribute["Port"].asString();
		if(!valueItemsDBInstanceAttribute["LockMode"].isNull())
			itemsObject.lockMode = valueItemsDBInstanceAttribute["LockMode"].asString();
		if(!valueItemsDBInstanceAttribute["EngineVersion"].isNull())
			itemsObject.engineVersion = valueItemsDBInstanceAttribute["EngineVersion"].asString();
		if(!valueItemsDBInstanceAttribute["MemorySize"].isNull())
			itemsObject.memorySize = std::stoi(valueItemsDBInstanceAttribute["MemorySize"].asString());
		if(!valueItemsDBInstanceAttribute["SegNodeNum"].isNull())
			itemsObject.segNodeNum = std::stoi(valueItemsDBInstanceAttribute["SegNodeNum"].asString());
		if(!valueItemsDBInstanceAttribute["ConnectionString"].isNull())
			itemsObject.connectionString = valueItemsDBInstanceAttribute["ConnectionString"].asString();
		if(!valueItemsDBInstanceAttribute["InstanceNetworkType"].isNull())
			itemsObject.instanceNetworkType = valueItemsDBInstanceAttribute["InstanceNetworkType"].asString();
		if(!valueItemsDBInstanceAttribute["EncryptionKey"].isNull())
			itemsObject.encryptionKey = valueItemsDBInstanceAttribute["EncryptionKey"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceDescription"].isNull())
			itemsObject.dBInstanceDescription = valueItemsDBInstanceAttribute["DBInstanceDescription"].asString();
		if(!valueItemsDBInstanceAttribute["CpuCores"].isNull())
			itemsObject.cpuCores = std::stoi(valueItemsDBInstanceAttribute["CpuCores"].asString());
		if(!valueItemsDBInstanceAttribute["ExpireTime"].isNull())
			itemsObject.expireTime = valueItemsDBInstanceAttribute["ExpireTime"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceStatus"].isNull())
			itemsObject.dBInstanceStatus = valueItemsDBInstanceAttribute["DBInstanceStatus"].asString();
		if(!valueItemsDBInstanceAttribute["StorageSize"].isNull())
			itemsObject.storageSize = std::stoi(valueItemsDBInstanceAttribute["StorageSize"].asString());
		if(!valueItemsDBInstanceAttribute["RegionId"].isNull())
			itemsObject.regionId = valueItemsDBInstanceAttribute["RegionId"].asString();
		if(!valueItemsDBInstanceAttribute["VSwitchId"].isNull())
			itemsObject.vSwitchId = valueItemsDBInstanceAttribute["VSwitchId"].asString();
		if(!valueItemsDBInstanceAttribute["ZoneId"].isNull())
			itemsObject.zoneId = valueItemsDBInstanceAttribute["ZoneId"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = valueItemsDBInstanceAttribute["DBInstanceId"].asString();
		if(!valueItemsDBInstanceAttribute["Engine"].isNull())
			itemsObject.engine = valueItemsDBInstanceAttribute["Engine"].asString();
		if(!valueItemsDBInstanceAttribute["DBInstanceClass"].isNull())
			itemsObject.dBInstanceClass = valueItemsDBInstanceAttribute["DBInstanceClass"].asString();
		if(!valueItemsDBInstanceAttribute["SupportRestore"].isNull())
			itemsObject.supportRestore = valueItemsDBInstanceAttribute["SupportRestore"].asString() == "true";
		if(!valueItemsDBInstanceAttribute["MinorVersion"].isNull())
			itemsObject.minorVersion = valueItemsDBInstanceAttribute["MinorVersion"].asString();
		if(!valueItemsDBInstanceAttribute["MasterNodeNum"].isNull())
			itemsObject.masterNodeNum = std::stoi(valueItemsDBInstanceAttribute["MasterNodeNum"].asString());
		if(!valueItemsDBInstanceAttribute["DBInstanceCategory"].isNull())
			itemsObject.dBInstanceCategory = valueItemsDBInstanceAttribute["DBInstanceCategory"].asString();
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

std::vector<DescribeDBInstanceOnECSAttributeResult::DBInstanceAttribute> DescribeDBInstanceOnECSAttributeResult::getItems()const
{
	return items_;
}

