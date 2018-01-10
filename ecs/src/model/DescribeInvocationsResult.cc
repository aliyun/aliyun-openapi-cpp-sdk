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

#include <alibabacloud/ecs/model/DescribeInvocationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeInvocationsResult::DescribeInvocationsResult() :
	ServiceResult()
{}

DescribeInvocationsResult::DescribeInvocationsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInvocationsResult::~DescribeInvocationsResult()
{}

void DescribeInvocationsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allInvocations = value["Invocations"]["Invocation"];
	for (auto value : allInvocations)
	{
		Invocation invocationObject;
		invocationObject.invokeId = value["InvokeId"].asString();
		invocationObject.commandId = value["CommandId"].asString();
		invocationObject.commandType = value["CommandType"].asString();
		invocationObject.commandName = value["CommandName"].asString();
		invocationObject.frequency = value["Frequency"].asString();
		invocationObject.timed = std::stoi(value["Timed"].asString());
		invocationObject.invokeStatus = value["InvokeStatus"].asString();
		auto allInvokeInstances = value["InvokeInstances"]["InvokeInstance"];
		for (auto value : allInvokeInstances)
		{
			Invocation::InvokeInstance invokeInstanceObject;
			invokeInstanceObject.instanceId = value["InstanceId"].asString();
			invokeInstanceObject.instanceInvokeStatus = value["InstanceInvokeStatus"].asString();
			invocationObject.invokeInstances.push_back(invokeInstanceObject);
		}
		invocations_.push_back(invocationObject);
	}
	totalCount_ = std::stol(value["TotalCount"].asString());
	pageNumber_ = std::stol(value["PageNumber"].asString());
	pageSize_ = std::stol(value["PageSize"].asString());

}

long DescribeInvocationsResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeInvocationsResult::setTotalCount(long totalCount)
{
	totalCount_ = totalCount;
}

long DescribeInvocationsResult::getPageSize()const
{
	return pageSize_;
}

void DescribeInvocationsResult::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
}

long DescribeInvocationsResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInvocationsResult::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
}

