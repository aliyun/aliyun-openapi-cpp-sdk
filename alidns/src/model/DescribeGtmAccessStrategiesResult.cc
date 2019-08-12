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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allStrategies = value["Strategies"]["Strategy"];
	for (auto value : allStrategies)
	{
		Strategy strategiesObject;
		if(!value["StrategyId"].isNull())
			strategiesObject.strategyId = value["StrategyId"].asString();
		if(!value["StrategyName"].isNull())
			strategiesObject.strategyName = value["StrategyName"].asString();
		if(!value["CreateTime"].isNull())
			strategiesObject.createTime = value["CreateTime"].asString();
		if(!value["CreateTimestamp"].isNull())
			strategiesObject.createTimestamp = std::stol(value["CreateTimestamp"].asString());
		if(!value["DefaultAddrPoolId"].isNull())
			strategiesObject.defaultAddrPoolId = value["DefaultAddrPoolId"].asString();
		if(!value["DefaultAddrPoolName"].isNull())
			strategiesObject.defaultAddrPoolName = value["DefaultAddrPoolName"].asString();
		if(!value["FailoverAddrPoolId"].isNull())
			strategiesObject.failoverAddrPoolId = value["FailoverAddrPoolId"].asString();
		if(!value["FailoverAddrPoolName"].isNull())
			strategiesObject.failoverAddrPoolName = value["FailoverAddrPoolName"].asString();
		if(!value["AccessMode"].isNull())
			strategiesObject.accessMode = value["AccessMode"].asString();
		if(!value["AccessStatus"].isNull())
			strategiesObject.accessStatus = value["AccessStatus"].asString();
		if(!value["StrategyMode"].isNull())
			strategiesObject.strategyMode = value["StrategyMode"].asString();
		if(!value["InstanceId"].isNull())
			strategiesObject.instanceId = value["InstanceId"].asString();
		auto allLines = value["Lines"]["Line"];
		for (auto value : allLines)
		{
			Strategy::Line linesObject;
			if(!value["LineCode"].isNull())
				linesObject.lineCode = value["LineCode"].asString();
			if(!value["LineName"].isNull())
				linesObject.lineName = value["LineName"].asString();
			if(!value["GroupCode"].isNull())
				linesObject.groupCode = value["GroupCode"].asString();
			if(!value["GroupName"].isNull())
				linesObject.groupName = value["GroupName"].asString();
			strategiesObject.lines.push_back(linesObject);
		}
		strategies_.push_back(strategiesObject);
	}
	if(!value["TotalItems"].isNull())
		totalItems_ = std::stoi(value["TotalItems"].asString());
	if(!value["TotalPages"].isNull())
		totalPages_ = std::stoi(value["TotalPages"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

