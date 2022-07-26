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

#include <alibabacloud/oos/model/ListExecutionLogsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

ListExecutionLogsResult::ListExecutionLogsResult() :
	ServiceResult()
{}

ListExecutionLogsResult::ListExecutionLogsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListExecutionLogsResult::~ListExecutionLogsResult()
{}

void ListExecutionLogsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allExecutionLogsNode = value["ExecutionLogs"]["ExecutionLog"];
	for (auto valueExecutionLogsExecutionLog : allExecutionLogsNode)
	{
		ExecutionLog executionLogsObject;
		if(!valueExecutionLogsExecutionLog["TaskExecutionId"].isNull())
			executionLogsObject.taskExecutionId = valueExecutionLogsExecutionLog["TaskExecutionId"].asString();
		if(!valueExecutionLogsExecutionLog["Message"].isNull())
			executionLogsObject.message = valueExecutionLogsExecutionLog["Message"].asString();
		if(!valueExecutionLogsExecutionLog["LogType"].isNull())
			executionLogsObject.logType = valueExecutionLogsExecutionLog["LogType"].asString();
		if(!valueExecutionLogsExecutionLog["Timestamp"].isNull())
			executionLogsObject.timestamp = valueExecutionLogsExecutionLog["Timestamp"].asString();
		executionLogs_.push_back(executionLogsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["IsTruncated"].isNull())
		isTruncated_ = value["IsTruncated"].asString() == "true";
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::string ListExecutionLogsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<ListExecutionLogsResult::ExecutionLog> ListExecutionLogsResult::getExecutionLogs()const
{
	return executionLogs_;
}

int ListExecutionLogsResult::getMaxResults()const
{
	return maxResults_;
}

bool ListExecutionLogsResult::getIsTruncated()const
{
	return isTruncated_;
}

