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

#include <alibabacloud/dds/model/DescribeDBInstancesOverviewResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dds;
using namespace AlibabaCloud::Dds::Model;

DescribeDBInstancesOverviewResult::DescribeDBInstancesOverviewResult() :
	ServiceResult()
{}

DescribeDBInstancesOverviewResult::DescribeDBInstancesOverviewResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBInstancesOverviewResult::~DescribeDBInstancesOverviewResult()
{}

void DescribeDBInstancesOverviewResult::parse(const std::string &payload)
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
		if(!valueDBInstancesDBInstance["ExpireTime"].isNull())
			dBInstancesObject.expireTime = valueDBInstancesDBInstance["ExpireTime"].asString();
		if(!valueDBInstancesDBInstance["LastDowngradeTime"].isNull())
			dBInstancesObject.lastDowngradeTime = valueDBInstancesDBInstance["LastDowngradeTime"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceType"].isNull())
			dBInstancesObject.dBInstanceType = valueDBInstancesDBInstance["DBInstanceType"].asString();
		if(!valueDBInstancesDBInstance["DestroyTime"].isNull())
			dBInstancesObject.destroyTime = valueDBInstancesDBInstance["DestroyTime"].asString();
		if(!valueDBInstancesDBInstance["ChargeType"].isNull())
			dBInstancesObject.chargeType = valueDBInstancesDBInstance["ChargeType"].asString();
		if(!valueDBInstancesDBInstance["CapacityUnit"].isNull())
			dBInstancesObject.capacityUnit = valueDBInstancesDBInstance["CapacityUnit"].asString();
		if(!valueDBInstancesDBInstance["VpcAuthMode"].isNull())
			dBInstancesObject.vpcAuthMode = valueDBInstancesDBInstance["VpcAuthMode"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceStatus"].isNull())
			dBInstancesObject.dBInstanceStatus = valueDBInstancesDBInstance["DBInstanceStatus"].asString();
		if(!valueDBInstancesDBInstance["NetworkType"].isNull())
			dBInstancesObject.networkType = valueDBInstancesDBInstance["NetworkType"].asString();
		if(!valueDBInstancesDBInstance["LockMode"].isNull())
			dBInstancesObject.lockMode = valueDBInstancesDBInstance["LockMode"].asString();
		if(!valueDBInstancesDBInstance["EngineVersion"].isNull())
			dBInstancesObject.engineVersion = valueDBInstancesDBInstance["EngineVersion"].asString();
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
		if(!valueDBInstancesDBInstance["DBInstanceDescription"].isNull())
			dBInstancesObject.dBInstanceDescription = valueDBInstancesDBInstance["DBInstanceDescription"].asString();
		if(!valueDBInstancesDBInstance["KindCode"].isNull())
			dBInstancesObject.kindCode = valueDBInstancesDBInstance["KindCode"].asString();
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
		dBInstances_.push_back(dBInstancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::string DescribeDBInstancesOverviewResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeDBInstancesOverviewResult::DBInstance> DescribeDBInstancesOverviewResult::getDBInstances()const
{
	return dBInstances_;
}

