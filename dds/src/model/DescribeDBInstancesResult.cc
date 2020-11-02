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
		if(!valueDBInstancesDBInstance["ResourceGroupId"].isNull())
			dBInstancesObject.resourceGroupId = valueDBInstancesDBInstance["ResourceGroupId"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceId"].isNull())
			dBInstancesObject.dBInstanceId = valueDBInstancesDBInstance["DBInstanceId"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceDescription"].isNull())
			dBInstancesObject.dBInstanceDescription = valueDBInstancesDBInstance["DBInstanceDescription"].asString();
		if(!valueDBInstancesDBInstance["RegionId"].isNull())
			dBInstancesObject.regionId = valueDBInstancesDBInstance["RegionId"].asString();
		if(!valueDBInstancesDBInstance["ZoneId"].isNull())
			dBInstancesObject.zoneId = valueDBInstancesDBInstance["ZoneId"].asString();
		if(!valueDBInstancesDBInstance["Engine"].isNull())
			dBInstancesObject.engine = valueDBInstancesDBInstance["Engine"].asString();
		if(!valueDBInstancesDBInstance["EngineVersion"].isNull())
			dBInstancesObject.engineVersion = valueDBInstancesDBInstance["EngineVersion"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceClass"].isNull())
			dBInstancesObject.dBInstanceClass = valueDBInstancesDBInstance["DBInstanceClass"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceStorage"].isNull())
			dBInstancesObject.dBInstanceStorage = std::stoi(valueDBInstancesDBInstance["DBInstanceStorage"].asString());
		if(!valueDBInstancesDBInstance["KindCode"].isNull())
			dBInstancesObject.kindCode = valueDBInstancesDBInstance["KindCode"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceStatus"].isNull())
			dBInstancesObject.dBInstanceStatus = valueDBInstancesDBInstance["DBInstanceStatus"].asString();
		if(!valueDBInstancesDBInstance["LockMode"].isNull())
			dBInstancesObject.lockMode = valueDBInstancesDBInstance["LockMode"].asString();
		if(!valueDBInstancesDBInstance["ChargeType"].isNull())
			dBInstancesObject.chargeType = valueDBInstancesDBInstance["ChargeType"].asString();
		if(!valueDBInstancesDBInstance["NetworkType"].isNull())
			dBInstancesObject.networkType = valueDBInstancesDBInstance["NetworkType"].asString();
		if(!valueDBInstancesDBInstance["CreationTime"].isNull())
			dBInstancesObject.creationTime = valueDBInstancesDBInstance["CreationTime"].asString();
		if(!valueDBInstancesDBInstance["ExpireTime"].isNull())
			dBInstancesObject.expireTime = valueDBInstancesDBInstance["ExpireTime"].asString();
		if(!valueDBInstancesDBInstance["DBInstanceType"].isNull())
			dBInstancesObject.dBInstanceType = valueDBInstancesDBInstance["DBInstanceType"].asString();
		if(!valueDBInstancesDBInstance["LastDowngradeTime"].isNull())
			dBInstancesObject.lastDowngradeTime = valueDBInstancesDBInstance["LastDowngradeTime"].asString();
		if(!valueDBInstancesDBInstance["ReplicationFactor"].isNull())
			dBInstancesObject.replicationFactor = valueDBInstancesDBInstance["ReplicationFactor"].asString();
		if(!valueDBInstancesDBInstance["DestroyTime"].isNull())
			dBInstancesObject.destroyTime = valueDBInstancesDBInstance["DestroyTime"].asString();
		if(!valueDBInstancesDBInstance["VpcAuthMode"].isNull())
			dBInstancesObject.vpcAuthMode = valueDBInstancesDBInstance["VpcAuthMode"].asString();
		auto allMongosListNode = allDBInstancesNode["MongosList"]["MongosAttribute"];
		for (auto allDBInstancesNodeMongosListMongosAttribute : allMongosListNode)
		{
			DBInstance::MongosAttribute mongosListObject;
			if(!allDBInstancesNodeMongosListMongosAttribute["NodeId"].isNull())
				mongosListObject.nodeId = allDBInstancesNodeMongosListMongosAttribute["NodeId"].asString();
			if(!allDBInstancesNodeMongosListMongosAttribute["NodeDescription"].isNull())
				mongosListObject.nodeDescription = allDBInstancesNodeMongosListMongosAttribute["NodeDescription"].asString();
			if(!allDBInstancesNodeMongosListMongosAttribute["NodeClass"].isNull())
				mongosListObject.nodeClass = allDBInstancesNodeMongosListMongosAttribute["NodeClass"].asString();
			dBInstancesObject.mongosList.push_back(mongosListObject);
		}
		auto allShardListNode = allDBInstancesNode["ShardList"]["ShardAttribute"];
		for (auto allDBInstancesNodeShardListShardAttribute : allShardListNode)
		{
			DBInstance::ShardAttribute shardListObject;
			if(!allDBInstancesNodeShardListShardAttribute["NodeId"].isNull())
				shardListObject.nodeId = allDBInstancesNodeShardListShardAttribute["NodeId"].asString();
			if(!allDBInstancesNodeShardListShardAttribute["NodeDescription"].isNull())
				shardListObject.nodeDescription = allDBInstancesNodeShardListShardAttribute["NodeDescription"].asString();
			if(!allDBInstancesNodeShardListShardAttribute["NodeClass"].isNull())
				shardListObject.nodeClass = allDBInstancesNodeShardListShardAttribute["NodeClass"].asString();
			if(!allDBInstancesNodeShardListShardAttribute["NodeStorage"].isNull())
				shardListObject.nodeStorage = std::stoi(allDBInstancesNodeShardListShardAttribute["NodeStorage"].asString());
			dBInstancesObject.shardList.push_back(shardListObject);
		}
		auto allTagsNode = allDBInstancesNode["Tags"]["Tag"];
		for (auto allDBInstancesNodeTagsTag : allTagsNode)
		{
			DBInstance::Tag tagsObject;
			if(!allDBInstancesNodeTagsTag["Key"].isNull())
				tagsObject.key = allDBInstancesNodeTagsTag["Key"].asString();
			if(!allDBInstancesNodeTagsTag["Value"].isNull())
				tagsObject.value = allDBInstancesNodeTagsTag["Value"].asString();
			dBInstancesObject.tags.push_back(tagsObject);
		}
		dBInstances_.push_back(dBInstancesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

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

