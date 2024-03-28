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

#include <alibabacloud/devops/model/GetWorkItemWorkFlowInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Devops;
using namespace AlibabaCloud::Devops::Model;

GetWorkItemWorkFlowInfoResult::GetWorkItemWorkFlowInfoResult() :
	ServiceResult()
{}

GetWorkItemWorkFlowInfoResult::GetWorkItemWorkFlowInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetWorkItemWorkFlowInfoResult::~GetWorkItemWorkFlowInfoResult()
{}

void GetWorkItemWorkFlowInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto workflowNode = value["workflow"];
	if(!workflowNode["identifier"].isNull())
		workflow_.identifier = workflowNode["identifier"].asString();
	if(!workflowNode["name"].isNull())
		workflow_.name = workflowNode["name"].asString();
	if(!workflowNode["description"].isNull())
		workflow_.description = workflowNode["description"].asString();
	if(!workflowNode["ownerSpaceIdentifier"].isNull())
		workflow_.ownerSpaceIdentifier = workflowNode["ownerSpaceIdentifier"].asString();
	if(!workflowNode["ownerSpaceType"].isNull())
		workflow_.ownerSpaceType = workflowNode["ownerSpaceType"].asString();
	if(!workflowNode["defaultStatusIdentifier"].isNull())
		workflow_.defaultStatusIdentifier = workflowNode["defaultStatusIdentifier"].asString();
	if(!workflowNode["statusOrder"].isNull())
		workflow_.statusOrder = workflowNode["statusOrder"].asString();
	if(!workflowNode["resourceType"].isNull())
		workflow_.resourceType = workflowNode["resourceType"].asString();
	if(!workflowNode["source"].isNull())
		workflow_.source = workflowNode["source"].asString();
	if(!workflowNode["gmtCreate"].isNull())
		workflow_.gmtCreate = std::stol(workflowNode["gmtCreate"].asString());
	if(!workflowNode["gmtModified"].isNull())
		workflow_.gmtModified = std::stol(workflowNode["gmtModified"].asString());
	if(!workflowNode["creator"].isNull())
		workflow_.creator = workflowNode["creator"].asString();
	if(!workflowNode["modifier"].isNull())
		workflow_.modifier = workflowNode["modifier"].asString();
	auto allworkflowActionsNode = workflowNode["workflowActions"]["workflowAction"];
	for (auto workflowNodeworkflowActionsworkflowAction : allworkflowActionsNode)
	{
		Workflow::WorkflowAction workflowActionObject;
		if(!workflowNodeworkflowActionsworkflowAction["id"].isNull())
			workflowActionObject.id = std::stol(workflowNodeworkflowActionsworkflowAction["id"].asString());
		if(!workflowNodeworkflowActionsworkflowAction["name"].isNull())
			workflowActionObject.name = workflowNodeworkflowActionsworkflowAction["name"].asString();
		if(!workflowNodeworkflowActionsworkflowAction["workflowIdentifier"].isNull())
			workflowActionObject.workflowIdentifier = workflowNodeworkflowActionsworkflowAction["workflowIdentifier"].asString();
		if(!workflowNodeworkflowActionsworkflowAction["workflowStatusIdentifier"].isNull())
			workflowActionObject.workflowStatusIdentifier = workflowNodeworkflowActionsworkflowAction["workflowStatusIdentifier"].asString();
		if(!workflowNodeworkflowActionsworkflowAction["nextWorkflowStatusIdentifier"].isNull())
			workflowActionObject.nextWorkflowStatusIdentifier = workflowNodeworkflowActionsworkflowAction["nextWorkflowStatusIdentifier"].asString();
		workflow_.workflowActions.push_back(workflowActionObject);
	}
	auto allstatusesNode = workflowNode["statuses"]["statuse"];
	for (auto workflowNodestatusesstatuse : allstatusesNode)
	{
		Workflow::Statuse statuseObject;
		if(!workflowNodestatusesstatuse["identifier"].isNull())
			statuseObject.identifier = workflowNodestatusesstatuse["identifier"].asString();
		if(!workflowNodestatusesstatuse["name"].isNull())
			statuseObject.name = workflowNodestatusesstatuse["name"].asString();
		if(!workflowNodestatusesstatuse["workflowStageName"].isNull())
			statuseObject.workflowStageName = workflowNodestatusesstatuse["workflowStageName"].asString();
		if(!workflowNodestatusesstatuse["workflowStageIdentifier"].isNull())
			statuseObject.workflowStageIdentifier = workflowNodestatusesstatuse["workflowStageIdentifier"].asString();
		if(!workflowNodestatusesstatuse["source"].isNull())
			statuseObject.source = workflowNodestatusesstatuse["source"].asString();
		if(!workflowNodestatusesstatuse["gmtCreate"].isNull())
			statuseObject.gmtCreate = std::stol(workflowNodestatusesstatuse["gmtCreate"].asString());
		if(!workflowNodestatusesstatuse["gmtModified"].isNull())
			statuseObject.gmtModified = std::stol(workflowNodestatusesstatuse["gmtModified"].asString());
		if(!workflowNodestatusesstatuse["creator"].isNull())
			statuseObject.creator = workflowNodestatusesstatuse["creator"].asString();
		if(!workflowNodestatusesstatuse["modifier"].isNull())
			statuseObject.modifier = workflowNodestatusesstatuse["modifier"].asString();
		if(!workflowNodestatusesstatuse["description"].isNull())
			statuseObject.description = workflowNodestatusesstatuse["description"].asString();
		if(!workflowNodestatusesstatuse["resourceType"].isNull())
			statuseObject.resourceType = workflowNodestatusesstatuse["resourceType"].asString();
		workflow_.statuses.push_back(statuseObject);
	}
	if(!value["requestId"].isNull())
		requestId_ = value["requestId"].asString();
	if(!value["errorCode"].isNull())
		errorCode_ = value["errorCode"].asString();
	if(!value["errorMessage"].isNull())
		errorMessage_ = value["errorMessage"].asString();
	if(!value["success"].isNull())
		success_ = value["success"].asString() == "true";

}

std::string GetWorkItemWorkFlowInfoResult::getRequestId()const
{
	return requestId_;
}

GetWorkItemWorkFlowInfoResult::Workflow GetWorkItemWorkFlowInfoResult::getWorkflow()const
{
	return workflow_;
}

std::string GetWorkItemWorkFlowInfoResult::getErrorCode()const
{
	return errorCode_;
}

std::string GetWorkItemWorkFlowInfoResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetWorkItemWorkFlowInfoResult::getSuccess()const
{
	return success_;
}

