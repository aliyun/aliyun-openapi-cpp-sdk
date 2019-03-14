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
	auto allItems = value["Items"]["DBInstanceAttribute"];
	for (auto value : allItems)
	{
		DBInstanceAttribute itemsObject;
		if(!value["DBInstanceId"].isNull())
			itemsObject.dBInstanceId = value["DBInstanceId"].asString();
		if(!value["PayType"].isNull())
			itemsObject.payType = value["PayType"].asString();
		if(!value["DBInstanceClassType"].isNull())
			itemsObject.dBInstanceClassType = value["DBInstanceClassType"].asString();
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
		if(!value["DBInstanceCpuCores"].isNull())
			itemsObject.dBInstanceCpuCores = std::stoi(value["DBInstanceCpuCores"].asString());
		if(!value["DBInstanceMemory"].isNull())
			itemsObject.dBInstanceMemory = std::stol(value["DBInstanceMemory"].asString());
		if(!value["DBInstanceStorage"].isNull())
			itemsObject.dBInstanceStorage = std::stol(value["DBInstanceStorage"].asString());
		if(!value["DBInstanceDiskMBPS"].isNull())
			itemsObject.dBInstanceDiskMBPS = std::stol(value["DBInstanceDiskMBPS"].asString());
		if(!value["HostType"].isNull())
			itemsObject.hostType = value["HostType"].asString();
		if(!value["DBInstanceGroupCount"].isNull())
			itemsObject.dBInstanceGroupCount = value["DBInstanceGroupCount"].asString();
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
		if(!value["CreationTime"].isNull())
			itemsObject.creationTime = value["CreationTime"].asString();
		if(!value["ExpireTime"].isNull())
			itemsObject.expireTime = value["ExpireTime"].asString();
		if(!value["MaintainStartTime"].isNull())
			itemsObject.maintainStartTime = value["MaintainStartTime"].asString();
		if(!value["MaintainEndTime"].isNull())
			itemsObject.maintainEndTime = value["MaintainEndTime"].asString();
		if(!value["AvailabilityValue"].isNull())
			itemsObject.availabilityValue = value["AvailabilityValue"].asString();
		if(!value["MaxConnections"].isNull())
			itemsObject.maxConnections = std::stoi(value["MaxConnections"].asString());
		if(!value["SecurityIPList"].isNull())
			itemsObject.securityIPList = value["SecurityIPList"].asString();
		if(!value["ZoneId"].isNull())
			itemsObject.zoneId = value["ZoneId"].asString();
		if(!value["InstanceNetworkType"].isNull())
			itemsObject.instanceNetworkType = value["InstanceNetworkType"].asString();
		if(!value["VpcId"].isNull())
			itemsObject.vpcId = value["VpcId"].asString();
		if(!value["ConnectionMode"].isNull())
			itemsObject.connectionMode = value["ConnectionMode"].asString();
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			DBInstanceAttribute::Tag tagsObject;
			if(!value["Key"].isNull())
				tagsObject.key = value["Key"].asString();
			if(!value["Value"].isNull())
				tagsObject.value = value["Value"].asString();
			itemsObject.tags.push_back(tagsObject);
		}
		items_.push_back(itemsObject);
	}

}

std::vector<DescribeDBInstanceAttributeResult::DBInstanceAttribute> DescribeDBInstanceAttributeResult::getItems()const
{
	return items_;
}

