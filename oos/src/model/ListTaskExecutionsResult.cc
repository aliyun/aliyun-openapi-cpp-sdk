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

#include <alibabacloud/oos/model/ListTaskExecutionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

ListTaskExecutionsResult::ListTaskExecutionsResult() :
	ServiceResult()
{}

ListTaskExecutionsResult::ListTaskExecutionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListTaskExecutionsResult::~ListTaskExecutionsResult()
{}

void ListTaskExecutionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTaskExecutionsNode = value["TaskExecutions"]["TaskExecution"];
	for (auto valueTaskExecutionsTaskExecution : allTaskExecutionsNode)
	{
		TaskExecution taskExecutionsObject;
		if(!valueTaskExecutionsTaskExecution["ChildExecutionId"].isNull())
			taskExecutionsObject.childExecutionId = valueTaskExecutionsTaskExecution["ChildExecutionId"].asString();
		if(!valueTaskExecutionsTaskExecution["Outputs"].isNull())
			taskExecutionsObject.outputs = valueTaskExecutionsTaskExecution["Outputs"].asString();
		if(!valueTaskExecutionsTaskExecution["Status"].isNull())
			taskExecutionsObject.status = valueTaskExecutionsTaskExecution["Status"].asString();
		if(!valueTaskExecutionsTaskExecution["EndDate"].isNull())
			taskExecutionsObject.endDate = valueTaskExecutionsTaskExecution["EndDate"].asString();
		if(!valueTaskExecutionsTaskExecution["ParentTaskExecutionId"].isNull())
			taskExecutionsObject.parentTaskExecutionId = valueTaskExecutionsTaskExecution["ParentTaskExecutionId"].asString();
		if(!valueTaskExecutionsTaskExecution["TaskName"].isNull())
			taskExecutionsObject.taskName = valueTaskExecutionsTaskExecution["TaskName"].asString();
		if(!valueTaskExecutionsTaskExecution["StartDate"].isNull())
			taskExecutionsObject.startDate = valueTaskExecutionsTaskExecution["StartDate"].asString();
		if(!valueTaskExecutionsTaskExecution["LoopItem"].isNull())
			taskExecutionsObject.loopItem = valueTaskExecutionsTaskExecution["LoopItem"].asString();
		if(!valueTaskExecutionsTaskExecution["CreateDate"].isNull())
			taskExecutionsObject.createDate = valueTaskExecutionsTaskExecution["CreateDate"].asString();
		if(!valueTaskExecutionsTaskExecution["ExecutionId"].isNull())
			taskExecutionsObject.executionId = valueTaskExecutionsTaskExecution["ExecutionId"].asString();
		if(!valueTaskExecutionsTaskExecution["TaskAction"].isNull())
			taskExecutionsObject.taskAction = valueTaskExecutionsTaskExecution["TaskAction"].asString();
		if(!valueTaskExecutionsTaskExecution["TaskExecutionId"].isNull())
			taskExecutionsObject.taskExecutionId = valueTaskExecutionsTaskExecution["TaskExecutionId"].asString();
		if(!valueTaskExecutionsTaskExecution["UpdateDate"].isNull())
			taskExecutionsObject.updateDate = valueTaskExecutionsTaskExecution["UpdateDate"].asString();
		if(!valueTaskExecutionsTaskExecution["Loop"].isNull())
			taskExecutionsObject.loop = valueTaskExecutionsTaskExecution["Loop"].asString();
		if(!valueTaskExecutionsTaskExecution["TemplateId"].isNull())
			taskExecutionsObject.templateId = valueTaskExecutionsTaskExecution["TemplateId"].asString();
		if(!valueTaskExecutionsTaskExecution["LoopBatchNumber"].isNull())
			taskExecutionsObject.loopBatchNumber = std::stoi(valueTaskExecutionsTaskExecution["LoopBatchNumber"].asString());
		if(!valueTaskExecutionsTaskExecution["StatusMessage"].isNull())
			taskExecutionsObject.statusMessage = valueTaskExecutionsTaskExecution["StatusMessage"].asString();
		if(!valueTaskExecutionsTaskExecution["ExtraData"].isNull())
			taskExecutionsObject.extraData = valueTaskExecutionsTaskExecution["ExtraData"].asString();
		if(!valueTaskExecutionsTaskExecution["Properties"].isNull())
			taskExecutionsObject.properties = valueTaskExecutionsTaskExecution["Properties"].asString();
		taskExecutions_.push_back(taskExecutionsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::string ListTaskExecutionsResult::getNextToken()const
{
	return nextToken_;
}

int ListTaskExecutionsResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListTaskExecutionsResult::TaskExecution> ListTaskExecutionsResult::getTaskExecutions()const
{
	return taskExecutions_;
}

