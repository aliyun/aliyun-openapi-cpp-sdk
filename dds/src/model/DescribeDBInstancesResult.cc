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

#include <alibabacloud/dds/model/DescribeDBInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

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
	auto allDBInstancesNode = value["DBInstances"]["DBInstance"];
	for (auto valueDBInstancesDBInstance : allDBInstancesNode)
	{
		DBInstance dBInstancesObject;
		if(!valueDBInstancesDBInstance["CreationTime"].isNull())
			dBInstancesObject.creationTime = valueDBInstancesDBInstance["CreationTime"].asString();
		if(!valueDBInstancesDBInstance["ChargeType"].isNull())
			dBInstancesObject.chargeType = valueDBInstancesDBInstance["ChargeType"].asString();
		if(!valueDBInstancesDBInstance["VpcAuthMode"].isNull())
			dBInstancesObject.vpcAuthMode = valueDBInstancesDBInstance["VpcAuthMode"].asString();
		if(!valueDBInstancesDBInstance["NetworkType"].isNull())
			dBInstancesObject.networkType = valueDBInstancesDBInstance["NetworkType"].asString();
		if(!valueDBInstancesDBInstance["LockMode"].isNull())
			dBInstancesObject.lockMode = valueDBInstancesDBInstance["LockMode"].asString();
		if(!valueDBInstancesDBInstance["EngineVersion"].isNull())
			dBInstancesObject.engineVersion = valueDBInstancesDBInstance["EngineVersion"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceDescription"].isNull())
			dBInstancesObject.dBInstanceDescription = valueDBInstancesDBInstance["DBInstanceDescription"].asString();
		if(!valueDBInstancesDBInstance["ExpireTime"].isNull())
			dBInstancesObject.expireTime = valueDBInstancesDBInstance["ExpireTime"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceType"].isNull())
			dBInstancesObject.dBInstanceType = valueDBInstancesDBInstance["DBInstanceType"].asString();
		if(!valueDBInstancesDBInstance["LastDowngradeTime"].isNull())
			dBInstancesObject.lastDowngradeTime = valueDBInstancesDBInstance["LastDowngradeTime"].asString();
		if(!valueDBInstancesDBInstance["DestroyTime"].isNull())
			dBInstancesObject.destroyTime = valueDBInstancesDBInstance["DestroyTime"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceStatus"].isNull())
			dBInstancesObject.dBInstanceStatus = valueDBInstancesDBInstance["DBInstanceStatus"].asString();
		if(!valueDBInstancesDBInstance["RegionId"].isNull())
			dBInstancesObject.regionId = valueDBInstancesDBInstance["RegionId"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceStorage"].isNull())
			dBInstancesObject.dBInstanceStorage = std::stoi(valueDBInstancesDBInstance["DBInstanceStorage"].asString());
		if(!valueDBInstancesDBInstance["ResourceGroupId"].isNull())
			dBInstancesObject.resourceGroupId = valueDBInstancesDBInstance["ResourceGroupId"].asString();
		if(!valueDBInstancesDBInstance["ZoneId"].isNull())
			dBInstancesObject.zoneId = valueDBInstancesDBInstance["ZoneId"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceId"].isNull())
			dBInstancesObject.dBInstanceId = valueDBInstancesDBInstance["DBInstanceId"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceClass"].isNull())
			dBInstancesObject.dBInstanceClass = valueDBInstancesDBInstance["DBInstanceClass"].asString();
		if(!valueDBInstancesDBInstance["Engine"].isNull())
			dBInstancesObject.engine = valueDBInstancesDBInstance["Engine"].asString();
		if(!valueDBInstancesDBInstance["ReplicationFactor"].isNull())
			dBInstancesObject.replicationFactor = valueDBInstancesDBInstance["ReplicationFactor"].asString();
		if(!valueDBInstancesDBInstance["KindCode"].isNull())
			dBInstancesObject.kindCode = valueDBInstancesDBInstance["KindCode"].asString();
		if(!valueDBInstancesDBInstance["CloudType"].isNull())
			dBInstancesObject.cloudType = valueDBInstancesDBInstance["CloudType"].asString();
		if(!valueDBInstancesDBInstance["CapacityUnit"].isNull())
			dBInstancesObject.capacityUnit = valueDBInstancesDBInstance["CapacityUnit"].asString();
		if(!valueDBInstancesDBInstance["StorageType"].isNull())
			dBInstancesObject.storageType = valueDBInstancesDBInstance["StorageType"].asString();
		if(!valueDBInstancesDBInstance["SecondaryZoneId"].isNull())
			dBInstancesObject.secondaryZoneId = valueDBInstancesDBInstance["SecondaryZoneId"].asString();
		if(!valueDBInstancesDBInstance["HiddenZoneId"].isNull())
			dBInstancesObject.hiddenZoneId = valueDBInstancesDBInstance["HiddenZoneId"].asString();
		if(!valueDBInstancesDBInstance["BackupRetentionPolicy"].isNull())
			dBInstancesObject.backupRetentionPolicy = std::stoi(valueDBInstancesDBInstance["BackupRetentionPolicy"].asString());
		if(!valueDBInstancesDBInstance["ReleaseTime"].isNull())
			dBInstancesObject.releaseTime = valueDBInstancesDBInstance["ReleaseTime"].asString();
		auto allTagsNode = valueDBInstancesDBInstance["Tags"]["Tag"];
		for (auto valueDBInstancesDBInstanceTagsTag : allTagsNode)
		{
			DBInstance::Tag tagsObject;
			if(!valueDBInstancesDBInstanceTagsTag["Key"].isNull())
				tagsObject.key = valueDBInstancesDBInstanceTagsTag["Key"].asString();
			if(!valueDBInstancesDBInstanceTagsTag["Value"].isNull())
				tagsObject.value = valueDBInstancesDBInstanceTagsTag["Value"].asString();
			dBInstancesObject.tags.push_back(tagsObject);
		}
		auto allMongosListNode = valueDBInstancesDBInstance["MongosList"]["MongosAttribute"];
		for (auto valueDBInstancesDBInstanceMongosListMongosAttribute : allMongosListNode)
		{
			DBInstance::MongosAttribute mongosListObject;
			if(!valueDBInstancesDBInstanceMongosListMongosAttribute["NodeClass"].isNull())
				mongosListObject.nodeClass = valueDBInstancesDBInstanceMongosListMongosAttribute["NodeClass"].asString();
			if(!valueDBInstancesDBInstanceMongosListMongosAttribute["NodeDescription"].isNull())
				mongosListObject.nodeDescription = valueDBInstancesDBInstanceMongosListMongosAttribute["NodeDescription"].asString();
			if(!valueDBInstancesDBInstanceMongosListMongosAttribute["NodeId"].isNull())
				mongosListObject.nodeId = valueDBInstancesDBInstanceMongosListMongosAttribute["NodeId"].asString();
			dBInstancesObject.mongosList.push_back(mongosListObject);
		}
		auto allShardListNode = valueDBInstancesDBInstance["ShardList"]["ShardAttribute"];
		for (auto valueDBInstancesDBInstanceShardListShardAttribute : allShardListNode)
		{
			DBInstance::ShardAttribute shardListObject;
			if(!valueDBInstancesDBInstanceShardListShardAttribute["NodeClass"].isNull())
				shardListObject.nodeClass = valueDBInstancesDBInstanceShardListShardAttribute["NodeClass"].asString();
			if(!valueDBInstancesDBInstanceShardListShardAttribute["NodeDescription"].isNull())
				shardListObject.nodeDescription = valueDBInstancesDBInstanceShardListShardAttribute["NodeDescription"].asString();
			if(!valueDBInstancesDBInstanceShardListShardAttribute["NodeStorage"].isNull())
				shardListObject.nodeStorage = std::stoi(valueDBInstancesDBInstanceShardListShardAttribute["NodeStorage"].asString());
			if(!valueDBInstancesDBInstanceShardListShardAttribute["NodeId"].isNull())
				shardListObject.nodeId = valueDBInstancesDBInstanceShardListShardAttribute["NodeId"].asString();
			if(!valueDBInstancesDBInstanceShardListShardAttribute["ReadonlyReplicas"].isNull())
				shardListObject.readonlyReplicas = std::stoi(valueDBInstancesDBInstanceShardListShardAttribute["ReadonlyReplicas"].asString());
			dBInstancesObject.shardList.push_back(shardListObject);
		}
		dBInstances_.push_back(dBInstancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeDBInstancesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDBInstancesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDBInstancesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDBInstancesResult::DBInstance> DescribeDBInstancesResult::getDBInstances()const
{
	return dBInstances_;
}

