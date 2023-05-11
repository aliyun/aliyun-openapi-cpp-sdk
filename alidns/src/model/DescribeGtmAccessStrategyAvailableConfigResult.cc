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

#include <alibabacloud/alidns/model/DescribeGtmAccessStrategyAvailableConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Alidns;
using namespace AlibabaCloud::Alidns::Model;

DescribeGtmAccessStrategyAvailableConfigResult::DescribeGtmAccessStrategyAvailableConfigResult() :
	ServiceResult()
{}

DescribeGtmAccessStrategyAvailableConfigResult::DescribeGtmAccessStrategyAvailableConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeGtmAccessStrategyAvailableConfigResult::~DescribeGtmAccessStrategyAvailableConfigResult()
{}

void DescribeGtmAccessStrategyAvailableConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAddrPoolsNode = value["AddrPools"]["AddrPool"];
	for (auto valueAddrPoolsAddrPool : allAddrPoolsNode)
	{
		AddrPool addrPoolsObject;
		if(!valueAddrPoolsAddrPool["AddrPoolId"].isNull())
			addrPoolsObject.addrPoolId = valueAddrPoolsAddrPool["AddrPoolId"].asString();
		if(!valueAddrPoolsAddrPool["AddrPoolName"].isNull())
			addrPoolsObject.addrPoolName = valueAddrPoolsAddrPool["AddrPoolName"].asString();
		addrPools_.push_back(addrPoolsObject);
	}
	auto allLinesNode = value["Lines"]["Line"];
	for (auto valueLinesLine : allLinesNode)
	{
		Line linesObject;
		if(!valueLinesLine["Status"].isNull())
			linesObject.status = valueLinesLine["Status"].asString();
		if(!valueLinesLine["FatherCode"].isNull())
			linesObject.fatherCode = valueLinesLine["FatherCode"].asString();
		if(!valueLinesLine["LineCode"].isNull())
			linesObject.lineCode = valueLinesLine["LineCode"].asString();
		if(!valueLinesLine["GroupName"].isNull())
			linesObject.groupName = valueLinesLine["GroupName"].asString();
		if(!valueLinesLine["LineName"].isNull())
			linesObject.lineName = valueLinesLine["LineName"].asString();
		if(!valueLinesLine["GroupCode"].isNull())
			linesObject.groupCode = valueLinesLine["GroupCode"].asString();
		lines_.push_back(linesObject);
	}
	if(!value["SuggestSetDefaultLine"].isNull())
		suggestSetDefaultLine_ = value["SuggestSetDefaultLine"].asString() == "true";

}

std::vector<DescribeGtmAccessStrategyAvailableConfigResult::AddrPool> DescribeGtmAccessStrategyAvailableConfigResult::getAddrPools()const
{
	return addrPools_;
}

std::vector<DescribeGtmAccessStrategyAvailableConfigResult::Line> DescribeGtmAccessStrategyAvailableConfigResult::getLines()const
{
	return lines_;
}

bool DescribeGtmAccessStrategyAvailableConfigResult::getSuggestSetDefaultLine()const
{
	return suggestSetDefaultLine_;
}

