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

#include <alibabacloud/r-kvstore/model/CreateShardingInstanceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

CreateShardingInstanceResult::CreateShardingInstanceResult() :
	ServiceResult()
{}

CreateShardingInstanceResult::CreateShardingInstanceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateShardingInstanceResult::~CreateShardingInstanceResult()
{}

void CreateShardingInstanceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allShardListNode = value["ShardList"]["Shard"];
	for (auto valueShardListShard : allShardListNode)
	{
		Shard shardListObject;
		if(!valueShardListShard["ShardId"].isNull())
			shardListObject.shardId = valueShardListShard["ShardId"].asString();
		if(!valueShardListShard["ReplicaClass"].isNull())
			shardListObject.replicaClass = valueShardListShard["ReplicaClass"].asString();
		if(!valueShardListShard["StorageQuantity"].isNull())
			shardListObject.storageQuantity = valueShardListShard["StorageQuantity"].asString();
		if(!valueShardListShard["ReplicaQuantity"].isNull())
			shardListObject.replicaQuantity = valueShardListShard["ReplicaQuantity"].asString();
		shardList_.push_back(shardListObject);
	}
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["OrderId"].isNull())
		orderId_ = value["OrderId"].asString();

}

std::string CreateShardingInstanceResult::getInstanceId()const
{
	return instanceId_;
}

std::vector<CreateShardingInstanceResult::Shard> CreateShardingInstanceResult::getShardList()const
{
	return shardList_;
}

std::string CreateShardingInstanceResult::getOrderId()const
{
	return orderId_;
}

