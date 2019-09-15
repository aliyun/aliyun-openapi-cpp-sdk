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

#include <alibabacloud/ehpc/model/ListInvocationResultsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListInvocationResultsResult::ListInvocationResultsResult() :
	ServiceResult()
{}

ListInvocationResultsResult::ListInvocationResultsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListInvocationResultsResult::~ListInvocationResultsResult()
{}

void ListInvocationResultsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInvocationResults = value["InvocationResults"]["InvocationResult"];
	for (auto value : allInvocationResults)
	{
		InvocationResult invocationResultsObject;
		if(!value["Success"].isNull())
			invocationResultsObject.success = value["Success"].asString() == "true";
		if(!value["CommandId"].isNull())
			invocationResultsObject.commandId = value["CommandId"].asString();
		if(!value["InstanceId"].isNull())
			invocationResultsObject.instanceId = value["InstanceId"].asString();
		if(!value["InvokeRecordStatus"].isNull())
			invocationResultsObject.invokeRecordStatus = value["InvokeRecordStatus"].asString();
		if(!value["FinishedTime"].isNull())
			invocationResultsObject.finishedTime = value["FinishedTime"].asString();
		if(!value["ExitCode"].isNull())
			invocationResultsObject.exitCode = std::stoi(value["ExitCode"].asString());
		if(!value["Message"].isNull())
			invocationResultsObject.message = value["Message"].asString();
		invocationResults_.push_back(invocationResultsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<ListInvocationResultsResult::InvocationResult> ListInvocationResultsResult::getInvocationResults()const
{
	return invocationResults_;
}

int ListInvocationResultsResult::getTotalCount()const
{
	return totalCount_;
}

int ListInvocationResultsResult::getPageSize()const
{
	return pageSize_;
}

int ListInvocationResultsResult::getPageNumber()const
{
	return pageNumber_;
}

