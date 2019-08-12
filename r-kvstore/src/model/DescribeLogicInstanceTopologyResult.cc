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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allRedisProxyList = value["RedisProxyList"]["NodeInfo"];
	for (auto value : allRedisProxyList)
	{
		NodeInfo redisProxyListObject;
		if(!value["NodeId"].isNull())
			redisProxyListObject.nodeId = value["NodeId"].asString();
		if(!value["Connection"].isNull())
			redisProxyListObject.connection = value["Connection"].asString();
		if(!value["Bandwidth"].isNull())
			redisProxyListObject.bandwidth = value["Bandwidth"].asString();
		if(!value["Capacity"].isNull())
			redisProxyListObject.capacity = value["Capacity"].asString();
		if(!value["NodeType"].isNull())
			redisProxyListObject.nodeType = value["NodeType"].asString();
		redisProxyList_.push_back(redisProxyListObject);
	}
	auto allRedisShardList = value["RedisShardList"]["NodeInfo"];
	for (auto value : allRedisShardList)
	{
		NodeInfo redisShardListObject;
		if(!value["NodeId"].isNull())
			redisShardListObject.nodeId = value["NodeId"].asString();
		if(!value["Connection"].isNull())
			redisShardListObject.connection = value["Connection"].asString();
		if(!value["Bandwidth"].isNull())
			redisShardListObject.bandwidth = value["Bandwidth"].asString();
		if(!value["Capacity"].isNull())
			redisShardListObject.capacity = value["Capacity"].asString();
		if(!value["NodeType"].isNull())
			redisShardListObject.nodeType = value["NodeType"].asString();
		redisShardList_.push_back(redisShardListObject);
	}
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();

}

std::vector<DescribeLogicInstanceTopologyResult::NodeInfo> DescribeLogicInstanceTopologyResult::getRedisShardList()const
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

