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
	auto allAddrPools = value["AddrPools"]["AddrPool"];
	for (auto value : allAddrPools)
	{
		AddrPool addrPoolsObject;
		if(!value["AddrPoolId"].isNull())
			addrPoolsObject.addrPoolId = value["AddrPoolId"].asString();
		if(!value["AddrPoolName"].isNull())
			addrPoolsObject.addrPoolName = value["AddrPoolName"].asString();
		addrPools_.push_back(addrPoolsObject);
	}
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
		if(!value["Status"].isNull())
			linesObject.status = value["Status"].asString();
		lines_.push_back(linesObject);
	}

}

std::vector<DescribeGtmAccessStrategyAvailableConfigResult::AddrPool> DescribeGtmAccessStrategyAvailableConfigResult::getAddrPools()const
{
	return addrPools_;
}

std::vector<DescribeGtmAccessStrategyAvailableConfigResult::Line> DescribeGtmAccessStrategyAvailableConfigResult::getLines()const
{
	return lines_;
}

