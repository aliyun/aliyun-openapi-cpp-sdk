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

#include <alibabacloud/ecs/model/DescribeVirtualBorderRoutersForPhysicalConnectionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeVirtualBorderRoutersForPhysicalConnectionResult::DescribeVirtualBorderRoutersForPhysicalConnectionResult() :
	ServiceResult()
{}

DescribeVirtualBorderRoutersForPhysicalConnectionResult::DescribeVirtualBorderRoutersForPhysicalConnectionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeVirtualBorderRoutersForPhysicalConnectionResult::~DescribeVirtualBorderRoutersForPhysicalConnectionResult()
{}

void DescribeVirtualBorderRoutersForPhysicalConnectionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allVirtualBorderRouterForPhysicalConnectionSet = value["VirtualBorderRouterForPhysicalConnectionSet"]["VirtualBorderRouterForPhysicalConnectionType"];
	for (auto value : allVirtualBorderRouterForPhysicalConnectionSet)
	{
		VirtualBorderRouterForPhysicalConnectionType virtualBorderRouterForPhysicalConnectionSetObject;
		if(!value["VbrId"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.vbrId = value["VbrId"].asString();
		if(!value["VbrOwnerUid"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.vbrOwnerUid = std::stol(value["VbrOwnerUid"].asString());
		if(!value["CreationTime"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.creationTime = value["CreationTime"].asString();
		if(!value["ActivationTime"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.activationTime = value["ActivationTime"].asString();
		if(!value["TerminationTime"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.terminationTime = value["TerminationTime"].asString();
		if(!value["RecoveryTime"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.recoveryTime = value["RecoveryTime"].asString();
		if(!value["VlanId"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.vlanId = std::stoi(value["VlanId"].asString());
		if(!value["CircuitCode"].isNull())
			virtualBorderRouterForPhysicalConnectionSetObject.circuitCode = value["CircuitCode"].asString();
		virtualBorderRouterForPhysicalConnectionSet_.push_back(virtualBorderRouterForPhysicalConnectionSetObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeVirtualBorderRoutersForPhysicalConnectionResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeVirtualBorderRoutersForPhysicalConnectionResult::getPageSize()const
{
	return pageSize_;
}

int DescribeVirtualBorderRoutersForPhysicalConnectionResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeVirtualBorderRoutersForPhysicalConnectionResult::VirtualBorderRouterForPhysicalConnectionType> DescribeVirtualBorderRoutersForPhysicalConnectionResult::getVirtualBorderRouterForPhysicalConnectionSet()const
{
	return virtualBorderRouterForPhysicalConnectionSet_;
}

