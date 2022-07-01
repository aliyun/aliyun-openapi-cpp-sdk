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

#include <alibabacloud/ddoscoo/model/DescribeAsyncTasksResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeAsyncTasksResult::DescribeAsyncTasksResult() :
	ServiceResult()
{}

DescribeAsyncTasksResult::DescribeAsyncTasksResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAsyncTasksResult::~DescribeAsyncTasksResult()
{}

void DescribeAsyncTasksResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAsyncTasksNode = value["AsyncTasks"]["AsyncTask"];
	for (auto valueAsyncTasksAsyncTask : allAsyncTasksNode)
	{
		AsyncTask asyncTasksObject;
		if(!valueAsyncTasksAsyncTask["EndTime"].isNull())
			asyncTasksObject.endTime = std::stol(valueAsyncTasksAsyncTask["EndTime"].asString());
		if(!valueAsyncTasksAsyncTask["TaskType"].isNull())
			asyncTasksObject.taskType = std::stoi(valueAsyncTasksAsyncTask["TaskType"].asString());
		if(!valueAsyncTasksAsyncTask["StartTime"].isNull())
			asyncTasksObject.startTime = std::stol(valueAsyncTasksAsyncTask["StartTime"].asString());
		if(!valueAsyncTasksAsyncTask["TaskParams"].isNull())
			asyncTasksObject.taskParams = valueAsyncTasksAsyncTask["TaskParams"].asString();
		if(!valueAsyncTasksAsyncTask["TaskStatus"].isNull())
			asyncTasksObject.taskStatus = std::stoi(valueAsyncTasksAsyncTask["TaskStatus"].asString());
		if(!valueAsyncTasksAsyncTask["TaskResult"].isNull())
			asyncTasksObject.taskResult = valueAsyncTasksAsyncTask["TaskResult"].asString();
		if(!valueAsyncTasksAsyncTask["TaskId"].isNull())
			asyncTasksObject.taskId = std::stol(valueAsyncTasksAsyncTask["TaskId"].asString());
		asyncTasks_.push_back(asyncTasksObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeAsyncTasksResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeAsyncTasksResult::AsyncTask> DescribeAsyncTasksResult::getAsyncTasks()const
{
	return asyncTasks_;
}

