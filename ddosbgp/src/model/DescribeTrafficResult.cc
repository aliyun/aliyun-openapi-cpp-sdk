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

#include <alibabacloud/ddosbgp/model/DescribeTrafficResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddosbgp;
using namespace AlibabaCloud::Ddosbgp::Model;

DescribeTrafficResult::DescribeTrafficResult() :
	ServiceResult()
{}

DescribeTrafficResult::DescribeTrafficResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeTrafficResult::~DescribeTrafficResult()
{}

void DescribeTrafficResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allFlowListNode = value["FlowList"]["Flow"];
	for (auto valueFlowListFlow : allFlowListNode)
	{
		Flow flowListObject;
		if(!valueFlowListFlow["Time"].isNull())
			flowListObject.time = std::stoi(valueFlowListFlow["Time"].asString());
		if(!valueFlowListFlow["FlowType"].isNull())
			flowListObject.flowType = valueFlowListFlow["FlowType"].asString();
		if(!valueFlowListFlow["AttackPps"].isNull())
			flowListObject.attackPps = std::stol(valueFlowListFlow["AttackPps"].asString());
		if(!valueFlowListFlow["Name"].isNull())
			flowListObject.name = valueFlowListFlow["Name"].asString();
		if(!valueFlowListFlow["Pps"].isNull())
			flowListObject.pps = std::stoi(valueFlowListFlow["Pps"].asString());
		if(!valueFlowListFlow["Kbps"].isNull())
			flowListObject.kbps = std::stoi(valueFlowListFlow["Kbps"].asString());
		if(!valueFlowListFlow["AttackBps"].isNull())
			flowListObject.attackBps = std::stol(valueFlowListFlow["AttackBps"].asString());
		flowList_.push_back(flowListObject);
	}

}

std::vector<DescribeTrafficResult::Flow> DescribeTrafficResult::getFlowList()const
{
	return flowList_;
}

