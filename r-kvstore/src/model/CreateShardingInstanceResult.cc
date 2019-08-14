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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allShardList = value["ShardList"]["Shard"];
	for (auto value : allShardList)
	{
		Shard shardListObject;
		if(!value["ShardId"].isNull())
			shardListObject.shardId = value["ShardId"].asString();
		if(!value["ReplicaClass"].isNull())
			shardListObject.replicaClass = value["ReplicaClass"].asString();
		if(!value["StorageQuantity"].isNull())
			shardListObject.storageQuantity = value["StorageQuantity"].asString();
		if(!value["ReplicaQuantity"].isNull())
			shardListObject.replicaQuantity = value["ReplicaQuantity"].asString();
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

