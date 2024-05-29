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

#include <alibabacloud/ddoscoo/model/DescribePortCcAttackTopIPResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribePortCcAttackTopIPResult::DescribePortCcAttackTopIPResult() :
	ServiceResult()
{}

DescribePortCcAttackTopIPResult::DescribePortCcAttackTopIPResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePortCcAttackTopIPResult::~DescribePortCcAttackTopIPResult()
{}

void DescribePortCcAttackTopIPResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTopIpNode = value["TopIp"]["TopIpItem"];
	for (auto valueTopIpTopIpItem : allTopIpNode)
	{
		TopIpItem topIpObject;
		if(!valueTopIpTopIpItem["SrcIp"].isNull())
			topIpObject.srcIp = valueTopIpTopIpItem["SrcIp"].asString();
		if(!valueTopIpTopIpItem["Pv"].isNull())
			topIpObject.pv = std::stol(valueTopIpTopIpItem["Pv"].asString());
		if(!valueTopIpTopIpItem["AreaId"].isNull())
			topIpObject.areaId = valueTopIpTopIpItem["AreaId"].asString();
		topIp_.push_back(topIpObject);
	}

}

std::vector<DescribePortCcAttackTopIPResult::TopIpItem> DescribePortCcAttackTopIPResult::getTopIp()const
{
	return topIp_;
}

