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

#include <alibabacloud/alidns/model/DescribeDnsGtmAccessStrategyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeDnsGtmAccessStrategyResult::DescribeDnsGtmAccessStrategyResult() :
	ServiceResult()
{}

DescribeDnsGtmAccessStrategyResult::DescribeDnsGtmAccessStrategyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDnsGtmAccessStrategyResult::~DescribeDnsGtmAccessStrategyResult()
{}

void DescribeDnsGtmAccessStrategyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFailoverAddrPoolsNode = value["FailoverAddrPools"]["FailoverAddrPool"];
	for (auto valueFailoverAddrPoolsFailoverAddrPool : allFailoverAddrPoolsNode)
	{
		FailoverAddrPool failoverAddrPoolsObject;
		if(!valueFailoverAddrPoolsFailoverAddrPool["LbaWeight"].isNull())
			failoverAddrPoolsObject.lbaWeight = std::stoi(valueFailoverAddrPoolsFailoverAddrPool["LbaWeight"].asString());
		if(!valueFailoverAddrPoolsFailoverAddrPool["Name"].isNull())
			failoverAddrPoolsObject.name = valueFailoverAddrPoolsFailoverAddrPool["Name"].asString();
		if(!valueFailoverAddrPoolsFailoverAddrPool["AddrCount"].isNull())
			failoverAddrPoolsObject.addrCount = std::stoi(valueFailoverAddrPoolsFailoverAddrPool["AddrCount"].asString());
		if(!valueFailoverAddrPoolsFailoverAddrPool["Id"].isNull())
			failoverAddrPoolsObject.id = valueFailoverAddrPoolsFailoverAddrPool["Id"].asString();
		failoverAddrPools_.push_back(failoverAddrPoolsObject);
	}
	auto allDefaultAddrPoolsNode = value["DefaultAddrPools"]["DefaultAddrPool"];
	for (auto valueDefaultAddrPoolsDefaultAddrPool : allDefaultAddrPoolsNode)
	{
		DefaultAddrPool defaultAddrPoolsObject;
		if(!valueDefaultAddrPoolsDefaultAddrPool["LbaWeight"].isNull())
			defaultAddrPoolsObject.lbaWeight = std::stoi(valueDefaultAddrPoolsDefaultAddrPool["LbaWeight"].asString());
		if(!valueDefaultAddrPoolsDefaultAddrPool["Name"].isNull())
			defaultAddrPoolsObject.name = valueDefaultAddrPoolsDefaultAddrPool["Name"].asString();
		if(!valueDefaultAddrPoolsDefaultAddrPool["AddrCount"].isNull())
			defaultAddrPoolsObject.addrCount = std::stoi(valueDefaultAddrPoolsDefaultAddrPool["AddrCount"].asString());
		if(!valueDefaultAddrPoolsDefaultAddrPool["Id"].isNull())
			defaultAddrPoolsObject.id = valueDefaultAddrPoolsDefaultAddrPool["Id"].asString();
		defaultAddrPools_.push_back(defaultAddrPoolsObject);
	}
	auto allLinesNode = value["Lines"]["Line"];
	for (auto valueLinesLine : allLinesNode)
	{
		Line linesObject;
		if(!valueLinesLine["GroupName"].isNull())
			linesObject.groupName = valueLinesLine["GroupName"].asString();
		if(!valueLinesLine["LineCode"].isNull())
			linesObject.lineCode = valueLinesLine["LineCode"].asString();
		if(!valueLinesLine["LineName"].isNull())
			linesObject.lineName = valueLinesLine["LineName"].asString();
		if(!valueLinesLine["GroupCode"].isNull())
			linesObject.groupCode = valueLinesLine["GroupCode"].asString();
		lines_.push_back(linesObject);
	}
	if(!value["FailoverMinAvailableAddrNum"].isNull())
		failoverMinAvailableAddrNum_ = std::stoi(value["FailoverMinAvailableAddrNum"].asString());
	if(!value["DefaultAddrPoolType"].isNull())
		defaultAddrPoolType_ = value["DefaultAddrPoolType"].asString();
	if(!value["DefaultAvailableAddrNum"].isNull())
		defaultAvailableAddrNum_ = std::stoi(value["DefaultAvailableAddrNum"].asString());
	if(!value["StrategyId"].isNull())
		strategyId_ = value["StrategyId"].asString();
	if(!value["FailoverAddrPoolGroupStatus"].isNull())
		failoverAddrPoolGroupStatus_ = value["FailoverAddrPoolGroupStatus"].asString();
	if(!value["FailoverAvailableAddrNum"].isNull())
		failoverAvailableAddrNum_ = std::stoi(value["FailoverAvailableAddrNum"].asString());
	if(!value["FailoverLbaStrategy"].isNull())
		failoverLbaStrategy_ = value["FailoverLbaStrategy"].asString();
	if(!value["DefaultMaxReturnAddrNum"].isNull())
		defaultMaxReturnAddrNum_ = std::stoi(value["DefaultMaxReturnAddrNum"].asString());
	if(!value["StrategyMode"].isNull())
		strategyMode_ = value["StrategyMode"].asString();
	if(!value["CreateTimestamp"].isNull())
		createTimestamp_ = std::stol(value["CreateTimestamp"].asString());
	if(!value["DefaultLbaStrategy"].isNull())
		defaultLbaStrategy_ = value["DefaultLbaStrategy"].asString();
	if(!value["DefaultAddrPoolGroupStatus"].isNull())
		defaultAddrPoolGroupStatus_ = value["DefaultAddrPoolGroupStatus"].asString();
	if(!value["FailoverAddrPoolType"].isNull())
		failoverAddrPoolType_ = value["FailoverAddrPoolType"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["DefaultLatencyOptimization"].isNull())
		defaultLatencyOptimization_ = value["DefaultLatencyOptimization"].asString();
	if(!value["EffectiveAddrPoolGroupType"].isNull())
		effectiveAddrPoolGroupType_ = value["EffectiveAddrPoolGroupType"].asString();
	if(!value["CreateTime"].isNull())
		createTime_ = value["CreateTime"].asString();
	if(!value["DefaultMinAvailableAddrNum"].isNull())
		defaultMinAvailableAddrNum_ = std::stoi(value["DefaultMinAvailableAddrNum"].asString());
	if(!value["FailoverLatencyOptimization"].isNull())
		failoverLatencyOptimization_ = value["FailoverLatencyOptimization"].asString();
	if(!value["StrategyName"].isNull())
		strategyName_ = value["StrategyName"].asString();
	if(!value["FailoverMaxReturnAddrNum"].isNull())
		failoverMaxReturnAddrNum_ = std::stoi(value["FailoverMaxReturnAddrNum"].asString());
	if(!value["AccessMode"].isNull())
		accessMode_ = value["AccessMode"].asString();

}

int DescribeDnsGtmAccessStrategyResult::getFailoverMinAvailableAddrNum()const
{
	return failoverMinAvailableAddrNum_;
}

std::string DescribeDnsGtmAccessStrategyResult::getDefaultAddrPoolType()const
{
	return defaultAddrPoolType_;
}

int DescribeDnsGtmAccessStrategyResult::getDefaultAvailableAddrNum()const
{
	return defaultAvailableAddrNum_;
}

std::string DescribeDnsGtmAccessStrategyResult::getStrategyId()const
{
	return strategyId_;
}

std::string DescribeDnsGtmAccessStrategyResult::getFailoverAddrPoolGroupStatus()const
{
	return failoverAddrPoolGroupStatus_;
}

int DescribeDnsGtmAccessStrategyResult::getFailoverAvailableAddrNum()const
{
	return failoverAvailableAddrNum_;
}

std::string DescribeDnsGtmAccessStrategyResult::getFailoverLbaStrategy()const
{
	return failoverLbaStrategy_;
}

int DescribeDnsGtmAccessStrategyResult::getDefaultMaxReturnAddrNum()const
{
	return defaultMaxReturnAddrNum_;
}

std::string DescribeDnsGtmAccessStrategyResult::getStrategyMode()const
{
	return strategyMode_;
}

long DescribeDnsGtmAccessStrategyResult::getCreateTimestamp()const
{
	return createTimestamp_;
}

std::string DescribeDnsGtmAccessStrategyResult::getDefaultLbaStrategy()const
{
	return defaultLbaStrategy_;
}

std::string DescribeDnsGtmAccessStrategyResult::getDefaultAddrPoolGroupStatus()const
{
	return defaultAddrPoolGroupStatus_;
}

std::string DescribeDnsGtmAccessStrategyResult::getFailoverAddrPoolType()const
{
	return failoverAddrPoolType_;
}

std::vector<DescribeDnsGtmAccessStrategyResult::FailoverAddrPool> DescribeDnsGtmAccessStrategyResult::getFailoverAddrPools()const
{
	return failoverAddrPools_;
}

std::string DescribeDnsGtmAccessStrategyResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeDnsGtmAccessStrategyResult::getDefaultLatencyOptimization()const
{
	return defaultLatencyOptimization_;
}

std::string DescribeDnsGtmAccessStrategyResult::getEffectiveAddrPoolGroupType()const
{
	return effectiveAddrPoolGroupType_;
}

std::string DescribeDnsGtmAccessStrategyResult::getCreateTime()const
{
	return createTime_;
}

std::vector<DescribeDnsGtmAccessStrategyResult::DefaultAddrPool> DescribeDnsGtmAccessStrategyResult::getDefaultAddrPools()const
{
	return defaultAddrPools_;
}

int DescribeDnsGtmAccessStrategyResult::getDefaultMinAvailableAddrNum()const
{
	return defaultMinAvailableAddrNum_;
}

std::string DescribeDnsGtmAccessStrategyResult::getFailoverLatencyOptimization()const
{
	return failoverLatencyOptimization_;
}

std::string DescribeDnsGtmAccessStrategyResult::getStrategyName()const
{
	return strategyName_;
}

int DescribeDnsGtmAccessStrategyResult::getFailoverMaxReturnAddrNum()const
{
	return failoverMaxReturnAddrNum_;
}

std::string DescribeDnsGtmAccessStrategyResult::getAccessMode()const
{
	return accessMode_;
}

std::vector<DescribeDnsGtmAccessStrategyResult::Line> DescribeDnsGtmAccessStrategyResult::getLines()const
{
	return lines_;
}

