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

#include <alibabacloud/adb/model/DescribeDBResourcePoolResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeDBResourcePoolResult::DescribeDBResourcePoolResult() :
	ServiceResult()
{}

DescribeDBResourcePoolResult::DescribeDBResourcePoolResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBResourcePoolResult::~DescribeDBResourcePoolResult()
{}

void DescribeDBResourcePoolResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPoolsInfoNode = value["PoolsInfo"]["PoolInfo"];
	for (auto valuePoolsInfoPoolInfo : allPoolsInfoNode)
	{
		PoolInfo poolsInfoObject;
		if(!valuePoolsInfoPoolInfo["QueryType"].isNull())
			poolsInfoObject.queryType = valuePoolsInfoPoolInfo["QueryType"].asString();
		if(!valuePoolsInfoPoolInfo["UpdateTime"].isNull())
			poolsInfoObject.updateTime = valuePoolsInfoPoolInfo["UpdateTime"].asString();
		if(!valuePoolsInfoPoolInfo["PoolName"].isNull())
			poolsInfoObject.poolName = valuePoolsInfoPoolInfo["PoolName"].asString();
		if(!valuePoolsInfoPoolInfo["CreateTime"].isNull())
			poolsInfoObject.createTime = valuePoolsInfoPoolInfo["CreateTime"].asString();
		if(!valuePoolsInfoPoolInfo["PoolUsers"].isNull())
			poolsInfoObject.poolUsers = valuePoolsInfoPoolInfo["PoolUsers"].asString();
		if(!valuePoolsInfoPoolInfo["NodeNum"].isNull())
			poolsInfoObject.nodeNum = std::stoi(valuePoolsInfoPoolInfo["NodeNum"].asString());
		poolsInfo_.push_back(poolsInfoObject);
	}
	if(!value["DBClusterId"].isNull())
		dBClusterId_ = value["DBClusterId"].asString();

}

std::string DescribeDBResourcePoolResult::getDBClusterId()const
{
	return dBClusterId_;
}

std::vector<DescribeDBResourcePoolResult::PoolInfo> DescribeDBResourcePoolResult::getPoolsInfo()const
{
	return poolsInfo_;
}

