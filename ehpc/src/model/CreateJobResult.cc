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

#include <alibabacloud/ehpc/model/CreateJobResult.h>
#include <json/json.h>

using namespace AlibabaCloud::EHPC;
using namespace AlibabaCloud::EHPC::Model;

CreateJobResult::CreateJobResult() :
	ServiceResult()
{}

CreateJobResult::CreateJobResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateJobResult::~CreateJobResult()
{}

void CreateJobResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTasksNode = value["Tasks"]["TasksItem"];
	for (auto valueTasksTasksItem : allTasksNode)
	{
		TasksItem tasksObject;
		if(!valueTasksTasksItem["TaskName"].isNull())
			tasksObject.taskName = valueTasksTasksItem["TaskName"].asString();
		auto allExecutorIds = value["ExecutorIds"]["ExecutorIds"];
		for (auto value : allExecutorIds)
			tasksObject.executorIds.push_back(value.asString());
		tasks_.push_back(tasksObject);
	}
	if(!value["JobId"].isNull())
		jobId_ = value["JobId"].asString();

}

std::vector<CreateJobResult::TasksItem> CreateJobResult::getTasks()const
{
	return tasks_;
}

std::string CreateJobResult::getJobId()const
{
	return jobId_;
}

