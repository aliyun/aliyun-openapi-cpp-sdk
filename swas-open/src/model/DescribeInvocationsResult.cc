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

#include <alibabacloud/swas-open/model/DescribeInvocationsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::SWAS_OPEN;
using namespace AlibabaCloud::SWAS_OPEN::Model;

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
	auto allInvocationsNode = value["Invocations"]["Invocation"];
	for (auto valueInvocationsInvocation : allInvocationsNode)
	{
		Invocation invocationsObject;
		if(!valueInvocationsInvocation["CreationTime"].isNull())
			invocationsObject.creationTime = valueInvocationsInvocation["CreationTime"].asString();
		if(!valueInvocationsInvocation["InvocationStatus"].isNull())
			invocationsObject.invocationStatus = valueInvocationsInvocation["InvocationStatus"].asString();
		if(!valueInvocationsInvocation["CommandType"].isNull())
			invocationsObject.commandType = valueInvocationsInvocation["CommandType"].asString();
		if(!valueInvocationsInvocation["CommandContent"].isNull())
			invocationsObject.commandContent = valueInvocationsInvocation["CommandContent"].asString();
		if(!valueInvocationsInvocation["Parameters"].isNull())
			invocationsObject.parameters = valueInvocationsInvocation["Parameters"].asString();
		if(!valueInvocationsInvocation["InvokeStatus"].isNull())
			invocationsObject.invokeStatus = valueInvocationsInvocation["InvokeStatus"].asString();
		if(!valueInvocationsInvocation["InvokeId"].isNull())
			invocationsObject.invokeId = valueInvocationsInvocation["InvokeId"].asString();
		if(!valueInvocationsInvocation["CommandName"].isNull())
			invocationsObject.commandName = valueInvocationsInvocation["CommandName"].asString();
		invocations_.push_back(invocationsObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeInvocationsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeInvocationsResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeInvocationsResult::Invocation> DescribeInvocationsResult::getInvocations()const
{
	return invocations_;
}

int DescribeInvocationsResult::getPageNumber()const
{
	return pageNumber_;
}

