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
		Invocation invocationsObject;
		if(!value["InvokeId"].isNull())
			invocationsObject.invokeId = value["InvokeId"].asString();
		if(!value["CommandId"].isNull())
			invocationsObject.commandId = value["CommandId"].asString();
		if(!value["CommandType"].isNull())
			invocationsObject.commandType = value["CommandType"].asString();
		if(!value["CommandName"].isNull())
			invocationsObject.commandName = value["CommandName"].asString();
		if(!value["Frequency"].isNull())
			invocationsObject.frequency = value["Frequency"].asString();
		if(!value["Timed"].isNull())
			invocationsObject.timed = value["Timed"].asString() == "true";
		if(!value["InvokeStatus"].isNull())
			invocationsObject.invokeStatus = value["InvokeStatus"].asString();
		if(!value["Parameters"].isNull())
			invocationsObject.parameters = value["Parameters"].asString();
		if(!value["CommandContent"].isNull())
			invocationsObject.commandContent = value["CommandContent"].asString();
		auto allInvokeInstances = value["InvokeInstances"]["InvokeInstance"];
		for (auto value : allInvokeInstances)
		{
			Invocation::InvokeInstance invokeInstancesObject;
			if(!value["InstanceId"].isNull())
				invokeInstancesObject.instanceId = value["InstanceId"].asString();
			if(!value["InstanceInvokeStatus"].isNull())
				invokeInstancesObject.instanceInvokeStatus = value["InstanceInvokeStatus"].asString();
			if(!value["CreationTime"].isNull())
				invokeInstancesObject.creationTime = value["CreationTime"].asString();
			if(!value["StartTime"].isNull())
				invokeInstancesObject.startTime = value["StartTime"].asString();
			if(!value["FinishTime"].isNull())
				invokeInstancesObject.finishTime = value["FinishTime"].asString();
			invocationsObject.invokeInstances.push_back(invokeInstancesObject);
		}
		invocations_.push_back(invocationsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stol(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stol(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stol(value["PageSize"].asString());

}

long DescribeInvocationsResult::getTotalCount()const
{
	return totalCount_;
}

long DescribeInvocationsResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeInvocationsResult::Invocation> DescribeInvocationsResult::getInvocations()const
{
	return invocations_;
}

long DescribeInvocationsResult::getPageNumber()const
{
	return pageNumber_;
}

