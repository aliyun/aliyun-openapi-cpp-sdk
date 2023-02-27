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

#include <alibabacloud/ice/model/GetWorkflowTaskResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ICE;
using namespace AlibabaCloud::ICE::Model;

GetWorkflowTaskResult::GetWorkflowTaskResult() :
	ServiceResult()
{}

GetWorkflowTaskResult::GetWorkflowTaskResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetWorkflowTaskResult::~GetWorkflowTaskResult()
{}

void GetWorkflowTaskResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto workflowTaskNode = value["WorkflowTask"];
	if(!workflowTaskNode["TaskId"].isNull())
		workflowTask_.taskId = workflowTaskNode["TaskId"].asString();
	if(!workflowTaskNode["Status"].isNull())
		workflowTask_.status = workflowTaskNode["Status"].asString();
	if(!workflowTaskNode["TaskInput"].isNull())
		workflowTask_.taskInput = workflowTaskNode["TaskInput"].asString();
	if(!workflowTaskNode["CreateTime"].isNull())
		workflowTask_.createTime = workflowTaskNode["CreateTime"].asString();
	if(!workflowTaskNode["FinishTime"].isNull())
		workflowTask_.finishTime = workflowTaskNode["FinishTime"].asString();
	if(!workflowTaskNode["ActivityResults"].isNull())
		workflowTask_.activityResults = workflowTaskNode["ActivityResults"].asString();
	if(!workflowTaskNode["UserData"].isNull())
		workflowTask_.userData = workflowTaskNode["UserData"].asString();
	auto workflowNode = workflowTaskNode["Workflow"];
	if(!workflowNode["WorkflowId"].isNull())
		workflowTask_.workflow.workflowId = workflowNode["WorkflowId"].asString();
	if(!workflowNode["Name"].isNull())
		workflowTask_.workflow.name = workflowNode["Name"].asString();
	if(!workflowNode["Status"].isNull())
		workflowTask_.workflow.status = workflowNode["Status"].asString();
	if(!workflowNode["Type"].isNull())
		workflowTask_.workflow.type = workflowNode["Type"].asString();
	if(!workflowNode["CreateTime"].isNull())
		workflowTask_.workflow.createTime = workflowNode["CreateTime"].asString();
	if(!workflowNode["ModifiedTime"].isNull())
		workflowTask_.workflow.modifiedTime = workflowNode["ModifiedTime"].asString();

}

GetWorkflowTaskResult::WorkflowTask GetWorkflowTaskResult::getWorkflowTask()const
{
	return workflowTask_;
}

