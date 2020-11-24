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

#include <alibabacloud/ddoscoo/model/DescribePortFlowListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribePortFlowListResult::DescribePortFlowListResult() :
	ServiceResult()
{}

DescribePortFlowListResult::DescribePortFlowListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePortFlowListResult::~DescribePortFlowListResult()
{}

void DescribePortFlowListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPortFlowListNode = value["PortFlowList"]["PortFlow"];
	for (auto valuePortFlowListPortFlow : allPortFlowListNode)
	{
		PortFlow portFlowListObject;
		if(!valuePortFlowListPortFlow["AttackBps"].isNull())
			portFlowListObject.attackBps = std::stol(valuePortFlowListPortFlow["AttackBps"].asString());
		if(!valuePortFlowListPortFlow["AttackPps"].isNull())
			portFlowListObject.attackPps = std::stol(valuePortFlowListPortFlow["AttackPps"].asString());
		if(!valuePortFlowListPortFlow["OutPps"].isNull())
			portFlowListObject.outPps = std::stol(valuePortFlowListPortFlow["OutPps"].asString());
		if(!valuePortFlowListPortFlow["Index"].isNull())
			portFlowListObject.index = std::stol(valuePortFlowListPortFlow["Index"].asString());
		if(!valuePortFlowListPortFlow["Time"].isNull())
			portFlowListObject.time = std::stol(valuePortFlowListPortFlow["Time"].asString());
		if(!valuePortFlowListPortFlow["InBps"].isNull())
			portFlowListObject.inBps = std::stol(valuePortFlowListPortFlow["InBps"].asString());
		if(!valuePortFlowListPortFlow["OutBps"].isNull())
			portFlowListObject.outBps = std::stol(valuePortFlowListPortFlow["OutBps"].asString());
		if(!valuePortFlowListPortFlow["InPps"].isNull())
			portFlowListObject.inPps = std::stol(valuePortFlowListPortFlow["InPps"].asString());
		if(!valuePortFlowListPortFlow["Region"].isNull())
			portFlowListObject.region = valuePortFlowListPortFlow["Region"].asString();
		portFlowList_.push_back(portFlowListObject);
	}

}

std::vector<DescribePortFlowListResult::PortFlow> DescribePortFlowListResult::getPortFlowList()const
{
	return portFlowList_;
}

