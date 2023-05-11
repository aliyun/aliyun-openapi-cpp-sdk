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

#include <alibabacloud/alidns/model/DescribeGtmAccessStrategiesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeGtmAccessStrategiesResult::DescribeGtmAccessStrategiesResult() :
	ServiceResult()
{}

DescribeGtmAccessStrategiesResult::DescribeGtmAccessStrategiesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGtmAccessStrategiesResult::~DescribeGtmAccessStrategiesResult()
{}

void DescribeGtmAccessStrategiesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allStrategiesNode = value["Strategies"]["Strategy"];
	for (auto valueStrategiesStrategy : allStrategiesNode)
	{
		Strategy strategiesObject;
		if(!valueStrategiesStrategy["AccessMode"].isNull())
			strategiesObject.accessMode = valueStrategiesStrategy["AccessMode"].asString();
		if(!valueStrategiesStrategy["StrategyName"].isNull())
			strategiesObject.strategyName = valueStrategiesStrategy["StrategyName"].asString();
		if(!valueStrategiesStrategy["DefaultAddrPoolMonitorStatus"].isNull())
			strategiesObject.defaultAddrPoolMonitorStatus = valueStrategiesStrategy["DefaultAddrPoolMonitorStatus"].asString();
		if(!valueStrategiesStrategy["StrategyMode"].isNull())
			strategiesObject.strategyMode = valueStrategiesStrategy["StrategyMode"].asString();
		if(!valueStrategiesStrategy["CreateTime"].isNull())
			strategiesObject.createTime = valueStrategiesStrategy["CreateTime"].asString();
		if(!valueStrategiesStrategy["DefaultAddrPoolStatus"].isNull())
			strategiesObject.defaultAddrPoolStatus = valueStrategiesStrategy["DefaultAddrPoolStatus"].asString();
		if(!valueStrategiesStrategy["InstanceId"].isNull())
			strategiesObject.instanceId = valueStrategiesStrategy["InstanceId"].asString();
		if(!valueStrategiesStrategy["FailoverAddrPoolId"].isNull())
			strategiesObject.failoverAddrPoolId = valueStrategiesStrategy["FailoverAddrPoolId"].asString();
		if(!valueStrategiesStrategy["DefaultAddrPoolId"].isNull())
			strategiesObject.defaultAddrPoolId = valueStrategiesStrategy["DefaultAddrPoolId"].asString();
		if(!valueStrategiesStrategy["StrategyId"].isNull())
			strategiesObject.strategyId = valueStrategiesStrategy["StrategyId"].asString();
		if(!valueStrategiesStrategy["FailoverAddrPoolStatus"].isNull())
			strategiesObject.failoverAddrPoolStatus = valueStrategiesStrategy["FailoverAddrPoolStatus"].asString();
		if(!valueStrategiesStrategy["AccessStatus"].isNull())
			strategiesObject.accessStatus = valueStrategiesStrategy["AccessStatus"].asString();
		if(!valueStrategiesStrategy["FailoverAddrPoolMonitorStatus"].isNull())
			strategiesObject.failoverAddrPoolMonitorStatus = valueStrategiesStrategy["FailoverAddrPoolMonitorStatus"].asString();
		if(!valueStrategiesStrategy["DefaultAddrPoolName"].isNull())
			strategiesObject.defaultAddrPoolName = valueStrategiesStrategy["DefaultAddrPoolName"].asString();
		if(!valueStrategiesStrategy["FailoverAddrPoolName"].isNull())
			strategiesObject.failoverAddrPoolName = valueStrategiesStrategy["FailoverAddrPoolName"].asString();
		if(!valueStrategiesStrategy["CreateTimestamp"].isNull())
			strategiesObject.createTimestamp = std::stol(valueStrategiesStrategy["CreateTimestamp"].asString());
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

int DescribeGtmAccessStrategiesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeGtmAccessStrategiesResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeGtmAccessStrategiesResult::Strategy> DescribeGtmAccessStrategiesResult::getStrategies()const
{
	return strategies_;
}

int DescribeGtmAccessStrategiesResult::getTotalPages()const
{
	return totalPages_;
}

int DescribeGtmAccessStrategiesResult::getTotalItems()const
{
	return totalItems_;
}

