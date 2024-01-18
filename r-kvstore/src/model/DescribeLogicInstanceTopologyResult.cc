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

#include <alibabacloud/r-kvstore/model/DescribeLogicInstanceTopologyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::R_kvstore;
using namespace AlibabaCloud::R_kvstore::Model;

DescribeLogicInstanceTopologyResult::DescribeLogicInstanceTopologyResult() :
	ServiceResult()
{}

DescribeLogicInstanceTopologyResult::DescribeLogicInstanceTopologyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeLogicInstanceTopologyResult::~DescribeLogicInstanceTopologyResult()
{}

void DescribeLogicInstanceTopologyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRedisProxyListNode = value["RedisProxyList"]["NodeInfo"];
	for (auto valueRedisProxyListNodeInfo : allRedisProxyListNode)
	{
		NodeInfo redisProxyListObject;
		if(!valueRedisProxyListNodeInfo["Capacity"].isNull())
			redisProxyListObject.capacity = valueRedisProxyListNodeInfo["Capacity"].asString();
		if(!valueRedisProxyListNodeInfo["Connection"].isNull())
			redisProxyListObject.connection = valueRedisProxyListNodeInfo["Connection"].asString();
		if(!valueRedisProxyListNodeInfo["NodeType"].isNull())
			redisProxyListObject.nodeType = valueRedisProxyListNodeInfo["NodeType"].asString();
		if(!valueRedisProxyListNodeInfo["Bandwidth"].isNull())
			redisProxyListObject.bandwidth = valueRedisProxyListNodeInfo["Bandwidth"].asString();
		if(!valueRedisProxyListNodeInfo["NodeId"].isNull())
			redisProxyListObject.nodeId = valueRedisProxyListNodeInfo["NodeId"].asString();
		redisProxyList_.push_back(redisProxyListObject);
	}
	auto allRedisShardListNode = value["RedisShardList"]["NodeInfo"];
	for (auto valueRedisShardListNodeInfo : allRedisShardListNode)
	{
		NodeInfo1 redisShardListObject;
		if(!valueRedisShardListNodeInfo["Capacity"].isNull())
			redisShardListObject.capacity = valueRedisShardListNodeInfo["Capacity"].asString();
		if(!valueRedisShardListNodeInfo["Connection"].isNull())
			redisShardListObject.connection = valueRedisShardListNodeInfo["Connection"].asString();
		if(!valueRedisShardListNodeInfo["NodeType"].isNull())
			redisShardListObject.nodeType = valueRedisShardListNodeInfo["NodeType"].asString();
		if(!valueRedisShardListNodeInfo["Bandwidth"].isNull())
			redisShardListObject.bandwidth = valueRedisShardListNodeInfo["Bandwidth"].asString();
		if(!valueRedisShardListNodeInfo["NodeId"].isNull())
			redisShardListObject.nodeId = valueRedisShardListNodeInfo["NodeId"].asString();
		if(!valueRedisShardListNodeInfo["SubInstanceType"].isNull())
			redisShardListObject.subInstanceType = valueRedisShardListNodeInfo["SubInstanceType"].asString();
		redisShardList_.push_back(redisShardListObject);
	}
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();

}

std::vector<DescribeLogicInstanceTopologyResult::NodeInfo1> DescribeLogicInstanceTopologyResult::getRedisShardList()const
{
	return redisShardList_;
}

std::string DescribeLogicInstanceTopologyResult::getInstanceId()const
{
	return instanceId_;
}

std::vector<DescribeLogicInstanceTopologyResult::NodeInfo> DescribeLogicInstanceTopologyResult::getRedisProxyList()const
{
	return redisProxyList_;
}

