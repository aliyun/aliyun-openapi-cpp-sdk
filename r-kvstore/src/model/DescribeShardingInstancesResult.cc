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

#include <alibabacloud/r-kvstore/model/DescribeShardingInstancesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeShardingInstancesResult::DescribeShardingInstancesResult() :
	ServiceResult()
{}

DescribeShardingInstancesResult::DescribeShardingInstancesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeShardingInstancesResult::~DescribeShardingInstancesResult()
{}

void DescribeShardingInstancesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstancesNode = value["Instances"]["Instance"];
	for (auto valueInstancesInstance : allInstancesNode)
	{
		Instance instancesObject;
		if(!valueInstancesInstance["InstanceId"].isNull())
			instancesObject.instanceId = valueInstancesInstance["InstanceId"].asString();
		auto allShardListNode = allInstancesNode["ShardList"]["Shard"];
		for (auto allInstancesNodeShardListShard : allShardListNode)
		{
			Instance::Shard shardListObject;
			if(!allInstancesNodeShardListShard["NodeId"].isNull())
				shardListObject.nodeId = allInstancesNodeShardListShard["NodeId"].asString();
			if(!allInstancesNodeShardListShard["ShardReplicaClass"].isNull())
				shardListObject.shardReplicaClass = allInstancesNodeShardListShard["ShardReplicaClass"].asString();
			if(!allInstancesNodeShardListShard["ShardStorageQuantity"].isNull())
				shardListObject.shardStorageQuantity = allInstancesNodeShardListShard["ShardStorageQuantity"].asString();
			instancesObject.shardList.push_back(shardListObject);
		}
		instances_.push_back(instancesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

std::vector<DescribeShardingInstancesResult::Instance> DescribeShardingInstancesResult::getInstances()const
{
	return instances_;
}

int DescribeShardingInstancesResult::getTotalCount()const
{
	return totalCount_;
}

