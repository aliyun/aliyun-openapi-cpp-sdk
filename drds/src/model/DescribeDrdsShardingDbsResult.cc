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

#include <alibabacloud/drds/model/DescribeDrdsShardingDbsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Drds;
using namespace AlibabaCloud::Drds::Model;

DescribeDrdsShardingDbsResult::DescribeDrdsShardingDbsResult() :
	ServiceResult()
{}

DescribeDrdsShardingDbsResult::DescribeDrdsShardingDbsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDrdsShardingDbsResult::~DescribeDrdsShardingDbsResult()
{}

void DescribeDrdsShardingDbsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allShardingDbsNode = value["ShardingDbs"]["ShardingDb"];
	for (auto valueShardingDbsShardingDb : allShardingDbsNode)
	{
		ShardingDb shardingDbsObject;
		if(!valueShardingDbsShardingDb["MinPoolSize"].isNull())
			shardingDbsObject.minPoolSize = std::stoi(valueShardingDbsShardingDb["MinPoolSize"].asString());
		if(!valueShardingDbsShardingDb["MaxPoolSize"].isNull())
			shardingDbsObject.maxPoolSize = std::stoi(valueShardingDbsShardingDb["MaxPoolSize"].asString());
		if(!valueShardingDbsShardingDb["DbInstanceId"].isNull())
			shardingDbsObject.dbInstanceId = valueShardingDbsShardingDb["DbInstanceId"].asString();
		if(!valueShardingDbsShardingDb["ConnectUrl"].isNull())
			shardingDbsObject.connectUrl = valueShardingDbsShardingDb["ConnectUrl"].asString();
		if(!valueShardingDbsShardingDb["GroupName"].isNull())
			shardingDbsObject.groupName = valueShardingDbsShardingDb["GroupName"].asString();
		if(!valueShardingDbsShardingDb["DbType"].isNull())
			shardingDbsObject.dbType = valueShardingDbsShardingDb["DbType"].asString();
		if(!valueShardingDbsShardingDb["IdleTimeOut"].isNull())
			shardingDbsObject.idleTimeOut = std::stoi(valueShardingDbsShardingDb["IdleTimeOut"].asString());
		if(!valueShardingDbsShardingDb["ShardingDbName"].isNull())
			shardingDbsObject.shardingDbName = valueShardingDbsShardingDb["ShardingDbName"].asString();
		if(!valueShardingDbsShardingDb["BlockingTimeout"].isNull())
			shardingDbsObject.blockingTimeout = std::stoi(valueShardingDbsShardingDb["BlockingTimeout"].asString());
		if(!valueShardingDbsShardingDb["PreparedStatementCacheSize"].isNull())
			shardingDbsObject.preparedStatementCacheSize = std::stoi(valueShardingDbsShardingDb["PreparedStatementCacheSize"].asString());
		if(!valueShardingDbsShardingDb["ConnectionProperties"].isNull())
			shardingDbsObject.connectionProperties = valueShardingDbsShardingDb["ConnectionProperties"].asString();
		if(!valueShardingDbsShardingDb["UserName"].isNull())
			shardingDbsObject.userName = valueShardingDbsShardingDb["UserName"].asString();
		if(!valueShardingDbsShardingDb["DbStatus"].isNull())
			shardingDbsObject.dbStatus = valueShardingDbsShardingDb["DbStatus"].asString();
		shardingDbs_.push_back(shardingDbsObject);
	}
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["Total"].isNull())
		total_ = value["Total"].asString();

}

std::string DescribeDrdsShardingDbsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeDrdsShardingDbsResult::getPageNumber()const
{
	return pageNumber_;
}

std::string DescribeDrdsShardingDbsResult::getTotal()const
{
	return total_;
}

std::vector<DescribeDrdsShardingDbsResult::ShardingDb> DescribeDrdsShardingDbsResult::getShardingDbs()const
{
	return shardingDbs_;
}

bool DescribeDrdsShardingDbsResult::getSuccess()const
{
	return success_;
}

