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
	auto allDBInstances = value["DBInstances"]["DBInstance"];
	for (auto value : allDBInstances)
	{
		DBInstance dBInstancesObject;
		if(!value["ResourceGroupId"].isNull())
			dBInstancesObject.resourceGroupId = value["ResourceGroupId"].asString();
		if(!value["DBInstanceId"].isNull())
			dBInstancesObject.dBInstanceId = value["DBInstanceId"].asString();
		if(!value["DBInstanceDescription"].isNull())
			dBInstancesObject.dBInstanceDescription = value["DBInstanceDescription"].asString();
		if(!value["RegionId"].isNull())
			dBInstancesObject.regionId = value["RegionId"].asString();
		if(!value["ZoneId"].isNull())
			dBInstancesObject.zoneId = value["ZoneId"].asString();
		if(!value["Engine"].isNull())
			dBInstancesObject.engine = value["Engine"].asString();
		if(!value["EngineVersion"].isNull())
			dBInstancesObject.engineVersion = value["EngineVersion"].asString();
		if(!value["DBInstanceClass"].isNull())
			dBInstancesObject.dBInstanceClass = value["DBInstanceClass"].asString();
		if(!value["DBInstanceStorage"].isNull())
			dBInstancesObject.dBInstanceStorage = std::stoi(value["DBInstanceStorage"].asString());
		if(!value["DBInstanceStatus"].isNull())
			dBInstancesObject.dBInstanceStatus = value["DBInstanceStatus"].asString();
		if(!value["LockMode"].isNull())
			dBInstancesObject.lockMode = value["LockMode"].asString();
		if(!value["ChargeType"].isNull())
			dBInstancesObject.chargeType = value["ChargeType"].asString();
		if(!value["NetworkType"].isNull())
			dBInstancesObject.networkType = value["NetworkType"].asString();
		if(!value["CreationTime"].isNull())
			dBInstancesObject.creationTime = value["CreationTime"].asString();
		if(!value["ExpireTime"].isNull())
			dBInstancesObject.expireTime = value["ExpireTime"].asString();
		if(!value["DBInstanceType"].isNull())
			dBInstancesObject.dBInstanceType = value["DBInstanceType"].asString();
		if(!value["LastDowngradeTime"].isNull())
			dBInstancesObject.lastDowngradeTime = value["LastDowngradeTime"].asString();
		if(!value["ReplicationFactor"].isNull())
			dBInstancesObject.replicationFactor = value["ReplicationFactor"].asString();
		if(!value["DestroyTime"].isNull())
			dBInstancesObject.destroyTime = value["DestroyTime"].asString();
		auto allMongosList = value["MongosList"]["MongosAttribute"];
		for (auto value : allMongosList)
		{
			DBInstance::MongosAttribute mongosListObject;
			if(!value["NodeId"].isNull())
				mongosListObject.nodeId = value["NodeId"].asString();
			if(!value["NodeDescription"].isNull())
				mongosListObject.nodeDescription = value["NodeDescription"].asString();
			if(!value["NodeClass"].isNull())
				mongosListObject.nodeClass = value["NodeClass"].asString();
			if(!value["ConnectSting"].isNull())
				mongosListObject.connectSting = value["ConnectSting"].asString();
			if(!value["Port"].isNull())
				mongosListObject.port = std::stoi(value["Port"].asString());
			dBInstancesObject.mongosList.push_back(mongosListObject);
		}
		auto allShardList = value["ShardList"]["ShardAttribute"];
		for (auto value : allShardList)
		{
			DBInstance::ShardAttribute shardListObject;
			if(!value["NodeId"].isNull())
				shardListObject.nodeId = value["NodeId"].asString();
			if(!value["NodeDescription"].isNull())
				shardListObject.nodeDescription = value["NodeDescription"].asString();
			if(!value["NodeClass"].isNull())
				shardListObject.nodeClass = value["NodeClass"].asString();
			if(!value["NodeStorage"].isNull())
				shardListObject.nodeStorage = std::stoi(value["NodeStorage"].asString());
			dBInstancesObject.shardList.push_back(shardListObject);
		}
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			DBInstance::Tag tagsObject;
			if(!value["Key"].isNull())
				tagsObject.key = value["Key"].asString();
			if(!value["Value"].isNull())
				tagsObject.value = value["Value"].asString();
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

