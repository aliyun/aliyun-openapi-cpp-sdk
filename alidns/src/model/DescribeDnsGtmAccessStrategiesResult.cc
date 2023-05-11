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

#include <alibabacloud/alidns/model/DescribeDnsGtmAccessStrategiesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDnsGtmAccessStrategiesResult::DescribeDnsGtmAccessStrategiesResult() :
	ServiceResult()
{}

DescribeDnsGtmAccessStrategiesResult::DescribeDnsGtmAccessStrategiesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDnsGtmAccessStrategiesResult::~DescribeDnsGtmAccessStrategiesResult()
{}

void DescribeDnsGtmAccessStrategiesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStrategiesNode = value["Strategies"]["Strategy"];
	for (auto valueStrategiesStrategy : allStrategiesNode)
	{
		Strategy strategiesObject;
		if(!valueStrategiesStrategy["EffectiveLbaStrategy"].isNull())
			strategiesObject.effectiveLbaStrategy = valueStrategiesStrategy["EffectiveLbaStrategy"].asString();
		if(!valueStrategiesStrategy["StrategyId"].isNull())
			strategiesObject.strategyId = valueStrategiesStrategy["StrategyId"].asString();
		if(!valueStrategiesStrategy["StrategyName"].isNull())
			strategiesObject.strategyName = valueStrategiesStrategy["StrategyName"].asString();
		if(!valueStrategiesStrategy["EffectiveAddrPoolGroupType"].isNull())
			strategiesObject.effectiveAddrPoolGroupType = valueStrategiesStrategy["EffectiveAddrPoolGroupType"].asString();
		if(!valueStrategiesStrategy["CreateTime"].isNull())
			strategiesObject.createTime = valueStrategiesStrategy["CreateTime"].asString();
		if(!valueStrategiesStrategy["CreateTimestamp"].isNull())
			strategiesObject.createTimestamp = std::stol(valueStrategiesStrategy["CreateTimestamp"].asString());
		if(!valueStrategiesStrategy["EffectiveAddrPoolType"].isNull())
			strategiesObject.effectiveAddrPoolType = valueStrategiesStrategy["EffectiveAddrPoolType"].asString();
		auto allEffectiveAddrPoolsNode = valueStrategiesStrategy["EffectiveAddrPools"]["EffectiveAddrPool"];
		for (auto valueStrategiesStrategyEffectiveAddrPoolsEffectiveAddrPool : allEffectiveAddrPoolsNode)
		{
			Strategy::EffectiveAddrPool effectiveAddrPoolsObject;
			if(!valueStrategiesStrategyEffectiveAddrPoolsEffectiveAddrPool["LbaWeight"].isNull())
				effectiveAddrPoolsObject.lbaWeight = std::stoi(valueStrategiesStrategyEffectiveAddrPoolsEffectiveAddrPool["LbaWeight"].asString());
			if(!valueStrategiesStrategyEffectiveAddrPoolsEffectiveAddrPool["Name"].isNull())
				effectiveAddrPoolsObject.name = valueStrategiesStrategyEffectiveAddrPoolsEffectiveAddrPool["Name"].asString();
			if(!valueStrategiesStrategyEffectiveAddrPoolsEffectiveAddrPool["AddrCount"].isNull())
				effectiveAddrPoolsObject.addrCount = std::stoi(valueStrategiesStrategyEffectiveAddrPoolsEffectiveAddrPool["AddrCount"].asString());
			if(!valueStrategiesStrategyEffectiveAddrPoolsEffectiveAddrPool["Id"].isNull())
				effectiveAddrPoolsObject.id = valueStrategiesStrategyEffectiveAddrPoolsEffectiveAddrPool["Id"].asString();
			strategiesObject.effectiveAddrPools.push_back(effectiveAddrPoolsObject);
		}
		auto allLinesNode = valueStrategiesStrategy["Lines"]["Line"];
		for (auto valueStrategiesStrategyLinesLine : allLinesNode)
		{
			Strategy::Line linesObject;
			if(!valueStrategiesStrategyLinesLine["GroupName"].isNull())
				linesObject.groupName = valueStrategiesStrategyLinesLine["GroupName"].asString();
			if(!valueStrategiesStrategyLinesLine["LineCode"].isNull())
				linesObject.lineCode = valueStrategiesStrategyLinesLine["LineCode"].asString();
			if(!valueStrategiesStrategyLinesLine["LineName"].isNull())
				linesObject.lineName = valueStrategiesStrategyLinesLine["LineName"].asString();
			if(!valueStrategiesStrategyLinesLine["GroupCode"].isNull())
				linesObject.groupCode = valueStrategiesStrategyLinesLine["GroupCode"].asString();
			strategiesObject.lines.push_back(linesObject);
		}
		strategies_.push_back(strategiesObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stoi(value["TotalPages"].asString());
	if(!value["TotalItems"].isNull())
		totalItems_ = std::stoi(value["TotalItems"].asString());

}

int DescribeDnsGtmAccessStrategiesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDnsGtmAccessStrategiesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDnsGtmAccessStrategiesResult::Strategy> DescribeDnsGtmAccessStrategiesResult::getStrategies()const
{
	return strategies_;
}

int DescribeDnsGtmAccessStrategiesResult::getTotalPages()const
{
	return totalPages_;
}

int DescribeDnsGtmAccessStrategiesResult::getTotalItems()const
{
	return totalItems_;
}

