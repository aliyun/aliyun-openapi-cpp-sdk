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

#include <alibabacloud/oos/model/StartExecutionResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Oos;
using namespace AlibabaCloud::Oos::Model;

StartExecutionResult::StartExecutionResult() :
	ServiceResult()
{}

StartExecutionResult::StartExecutionResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

StartExecutionResult::~StartExecutionResult()
{}

void StartExecutionResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto executionNode = value["Execution"];
	if(!executionNode["Outputs"].isNull())
		execution_.outputs = executionNode["Outputs"].asString();
	if(!executionNode["Status"].isNull())
		execution_.status = executionNode["Status"].asString();
	if(!executionNode["EndDate"].isNull())
		execution_.endDate = executionNode["EndDate"].asString();
	if(!executionNode["ExecutedBy"].isNull())
		execution_.executedBy = executionNode["ExecutedBy"].asString();
	if(!executionNode["IsParent"].isNull())
		execution_.isParent = executionNode["IsParent"].asString() == "true";
	if(!executionNode["Tags"].isNull())
		execution_.tags = executionNode["Tags"].asString();
	if(!executionNode["StartDate"].isNull())
		execution_.startDate = executionNode["StartDate"].asString();
	if(!executionNode["SafetyCheck"].isNull())
		execution_.safetyCheck = executionNode["SafetyCheck"].asString();
	if(!executionNode["Mode"].isNull())
		execution_.mode = executionNode["Mode"].asString();
	if(!executionNode["TemplateName"].isNull())
		execution_.templateName = executionNode["TemplateName"].asString();
	if(!executionNode["CreateDate"].isNull())
		execution_.createDate = executionNode["CreateDate"].asString();
	if(!executionNode["TemplateVersion"].isNull())
		execution_.templateVersion = executionNode["TemplateVersion"].asString();
	if(!executionNode["ExecutionId"].isNull())
		execution_.executionId = executionNode["ExecutionId"].asString();
	if(!executionNode["Parameters"].isNull())
		execution_.parameters = executionNode["Parameters"].asString();
	if(!executionNode["Description"].isNull())
		execution_.description = executionNode["Description"].asString();
	if(!executionNode["Counters"].isNull())
		execution_.counters = executionNode["Counters"].asString();
	if(!executionNode["UpdateDate"].isNull())
		execution_.updateDate = executionNode["UpdateDate"].asString();
	if(!executionNode["ResourceGroupId"].isNull())
		execution_.resourceGroupId = executionNode["ResourceGroupId"].asString();
	if(!executionNode["ParentExecutionId"].isNull())
		execution_.parentExecutionId = executionNode["ParentExecutionId"].asString();
	if(!executionNode["RamRole"].isNull())
		execution_.ramRole = executionNode["RamRole"].asString();
	if(!executionNode["TemplateId"].isNull())
		execution_.templateId = executionNode["TemplateId"].asString();
	if(!executionNode["StatusMessage"].isNull())
		execution_.statusMessage = executionNode["StatusMessage"].asString();
	if(!executionNode["LoopMode"].isNull())
		execution_.loopMode = executionNode["LoopMode"].asString();
	auto allCurrentTasksNode = executionNode["CurrentTasks"]["CurrentTask"];
	for (auto executionNodeCurrentTasksCurrentTask : allCurrentTasksNode)
	{
		Execution::CurrentTask currentTaskObject;
		if(!executionNodeCurrentTasksCurrentTask["TaskExecutionId"].isNull())
			currentTaskObject.taskExecutionId = executionNodeCurrentTasksCurrentTask["TaskExecutionId"].asString();
		if(!executionNodeCurrentTasksCurrentTask["TaskName"].isNull())
			currentTaskObject.taskName = executionNodeCurrentTasksCurrentTask["TaskName"].asString();
		if(!executionNodeCurrentTasksCurrentTask["TaskAction"].isNull())
			currentTaskObject.taskAction = executionNodeCurrentTasksCurrentTask["TaskAction"].asString();
		execution_.currentTasks.push_back(currentTaskObject);
	}

}

StartExecutionResult::Execution StartExecutionResult::getExecution()const
{
	return execution_;
}

