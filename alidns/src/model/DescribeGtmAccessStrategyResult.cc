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

#include <alibabacloud/alidns/model/DescribeGtmAccessStrategyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeGtmAccessStrategyResult::DescribeGtmAccessStrategyResult() :
	ServiceResult()
{}

DescribeGtmAccessStrategyResult::DescribeGtmAccessStrategyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGtmAccessStrategyResult::~DescribeGtmAccessStrategyResult()
{}

void DescribeGtmAccessStrategyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allLines = value["Lines"]["Line"];
	for (auto value : allLines)
	{
		Line linesObject;
		if(!value["LineCode"].isNull())
			linesObject.lineCode = value["LineCode"].asString();
		if(!value["LineName"].isNull())
			linesObject.lineName = value["LineName"].asString();
		if(!value["GroupCode"].isNull())
			linesObject.groupCode = value["GroupCode"].asString();
		if(!value["GroupName"].isNull())
			linesObject.groupName = value["GroupName"].asString();
		lines_.push_back(linesObject);
	}
	if(!value["StrategyId"].isNull())
		strategyId_ = value["StrategyId"].asString();
	if(!value["StrategyName"].isNull())
		strategyName_ = value["StrategyName"].asString();
	if(!value["DefultAddrPoolId"].isNull())
		defultAddrPoolId_ = value["DefultAddrPoolId"].asString();
	if(!value["DefaultAddrPoolName"].isNull())
		defaultAddrPoolName_ = value["DefaultAddrPoolName"].asString();
	if(!value["FailoverAddrPoolId"].isNull())
		failoverAddrPoolId_ = value["FailoverAddrPoolId"].asString();
	if(!value["FailoverAddrPoolName"].isNull())
		failoverAddrPoolName_ = value["FailoverAddrPoolName"].asString();
	if(!value["StrategyMode"].isNull())
		strategyMode_ = value["StrategyMode"].asString();
	if(!value["AccessMode"].isNull())
		accessMode_ = value["AccessMode"].asString();
	if(!value["AccessStatus"].isNull())
		accessStatus_ = value["AccessStatus"].asString();
	if(!value["InstanceId"].isNull())
		instanceId_ = value["InstanceId"].asString();
	if(!value["DefaultAddrPoolStatus"].isNull())
		defaultAddrPoolStatus_ = value["DefaultAddrPoolStatus"].asString();
	if(!value["FailoverAddrPoolStatus"].isNull())
		failoverAddrPoolStatus_ = value["FailoverAddrPoolStatus"].asString();
	if(!value["DefaultAddrPoolMonitorStatus"].isNull())
		defaultAddrPoolMonitorStatus_ = value["DefaultAddrPoolMonitorStatus"].asString();
	if(!value["FailoverAddrPoolMonitorStatus"].isNull())
		failoverAddrPoolMonitorStatus_ = value["FailoverAddrPoolMonitorStatus"].asString();

}

std::string DescribeGtmAccessStrategyResult::getInstanceId()const
{
	return instanceId_;
}

std::string DescribeGtmAccessStrategyResult::getStrategyId()const
{
	return strategyId_;
}

std::string DescribeGtmAccessStrategyResult::getDefaultAddrPoolStatus()const
{
	return defaultAddrPoolStatus_;
}

std::string DescribeGtmAccessStrategyResult::getFailoverAddrPoolId()const
{
	return failoverAddrPoolId_;
}

std::string DescribeGtmAccessStrategyResult::getAccessStatus()const
{
	return accessStatus_;
}

std::string DescribeGtmAccessStrategyResult::getDefaultAddrPoolMonitorStatus()const
{
	return defaultAddrPoolMonitorStatus_;
}

std::string DescribeGtmAccessStrategyResult::getDefaultAddrPoolName()const
{
	return defaultAddrPoolName_;
}

std::string DescribeGtmAccessStrategyResult::getDefultAddrPoolId()const
{
	return defultAddrPoolId_;
}

std::string DescribeGtmAccessStrategyResult::getStrategyName()const
{
	return strategyName_;
}

std::string DescribeGtmAccessStrategyResult::getFailoverAddrPoolStatus()const
{
	return failoverAddrPoolStatus_;
}

std::string DescribeGtmAccessStrategyResult::getAccessMode()const
{
	return accessMode_;
}

std::string DescribeGtmAccessStrategyResult::getStrategyMode()const
{
	return strategyMode_;
}

std::string DescribeGtmAccessStrategyResult::getFailoverAddrPoolName()const
{
	return failoverAddrPoolName_;
}

std::string DescribeGtmAccessStrategyResult::getFailoverAddrPoolMonitorStatus()const
{
	return failoverAddrPoolMonitorStatus_;
}

std::vector<DescribeGtmAccessStrategyResult::Line> DescribeGtmAccessStrategyResult::getLines()const
{
	return lines_;
}

