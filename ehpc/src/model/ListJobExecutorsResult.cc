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

#include <alibabacloud/ehpc/model/ListJobExecutorsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

ListJobExecutorsResult::ListJobExecutorsResult() :
	ServiceResult()
{}

ListJobExecutorsResult::ListJobExecutorsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListJobExecutorsResult::~ListJobExecutorsResult()
{}

void ListJobExecutorsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allExecutorsNode = value["Executors"]["Executor"];
	for (auto valueExecutorsExecutor : allExecutorsNode)
	{
		Executor executorsObject;
		if(!valueExecutorsExecutor["ExecutorId"].isNull())
			executorsObject.executorId = valueExecutorsExecutor["ExecutorId"].asString();
		if(!valueExecutorsExecutor["ArrayIndex"].isNull())
			executorsObject.arrayIndex = std::stoi(valueExecutorsExecutor["ArrayIndex"].asString());
		if(!valueExecutorsExecutor["CreateTime"].isNull())
			executorsObject.createTime = valueExecutorsExecutor["CreateTime"].asString();
		if(!valueExecutorsExecutor["EndTime"].isNull())
			executorsObject.endTime = valueExecutorsExecutor["EndTime"].asString();
		if(!valueExecutorsExecutor["Status"].isNull())
			executorsObject.status = valueExecutorsExecutor["Status"].asString();
		if(!valueExecutorsExecutor["StatusReason"].isNull())
			executorsObject.statusReason = valueExecutorsExecutor["StatusReason"].asString();
		auto allIpAddress = value["IpAddress"]["IpAddress"];
		for (auto value : allIpAddress)
			executorsObject.ipAddress.push_back(value.asString());
		auto allHostName = value["HostName"]["HostName"];
		for (auto value : allHostName)
			executorsObject.hostName.push_back(value.asString());
		executors_.push_back(executorsObject);
	}
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();
	if(!value["TaskName"].isNull())
		taskName_ = value["TaskName"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();

}

std::string ListJobExecutorsResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListJobExecutorsResult::getPageSize()const
{
	return pageSize_;
}

std::string ListJobExecutorsResult::getTaskName()const
{
	return taskName_;
}

std::string ListJobExecutorsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListJobExecutorsResult::Executor> ListJobExecutorsResult::getExecutors()const
{
	return executors_;
}

std::string ListJobExecutorsResult::getJobId()const
{
	return jobId_;
}

