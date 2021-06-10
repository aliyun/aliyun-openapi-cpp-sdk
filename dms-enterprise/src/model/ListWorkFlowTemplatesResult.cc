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

#include <alibabacloud/dms-enterprise/model/ListWorkFlowTemplatesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListWorkFlowTemplatesResult::ListWorkFlowTemplatesResult() :
	ServiceResult()
{}

ListWorkFlowTemplatesResult::ListWorkFlowTemplatesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListWorkFlowTemplatesResult::~ListWorkFlowTemplatesResult()
{}

void ListWorkFlowTemplatesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWorkFlowTemplatesNode = value["WorkFlowTemplates"]["WorkFlowTemplate"];
	for (auto valueWorkFlowTemplatesWorkFlowTemplate : allWorkFlowTemplatesNode)
	{
		WorkFlowTemplate workFlowTemplatesObject;
		if(!valueWorkFlowTemplatesWorkFlowTemplate["IsSystem"].isNull())
			workFlowTemplatesObject.isSystem = std::stoi(valueWorkFlowTemplatesWorkFlowTemplate["IsSystem"].asString());
		if(!valueWorkFlowTemplatesWorkFlowTemplate["Comment"].isNull())
			workFlowTemplatesObject.comment = valueWorkFlowTemplatesWorkFlowTemplate["Comment"].asString();
		if(!valueWorkFlowTemplatesWorkFlowTemplate["Enabled"].isNull())
			workFlowTemplatesObject.enabled = valueWorkFlowTemplatesWorkFlowTemplate["Enabled"].asString();
		if(!valueWorkFlowTemplatesWorkFlowTemplate["TemplateName"].isNull())
			workFlowTemplatesObject.templateName = valueWorkFlowTemplatesWorkFlowTemplate["TemplateName"].asString();
		if(!valueWorkFlowTemplatesWorkFlowTemplate["TemplateId"].isNull())
			workFlowTemplatesObject.templateId = std::stol(valueWorkFlowTemplatesWorkFlowTemplate["TemplateId"].asString());
		if(!valueWorkFlowTemplatesWorkFlowTemplate["CreateUserId"].isNull())
			workFlowTemplatesObject.createUserId = std::stol(valueWorkFlowTemplatesWorkFlowTemplate["CreateUserId"].asString());
		auto allWorkflowNodesNode = valueWorkFlowTemplatesWorkFlowTemplate["WorkflowNodes"]["WorkflowNode"];
		for (auto valueWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode : allWorkflowNodesNode)
		{
			WorkFlowTemplate::WorkflowNode workflowNodesObject;
			if(!valueWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode["Comment"].isNull())
				workflowNodesObject.comment = valueWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode["Comment"].asString();
			if(!valueWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode["NodeType"].isNull())
				workflowNodesObject.nodeType = valueWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode["NodeType"].asString();
			if(!valueWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode["NodeName"].isNull())
				workflowNodesObject.nodeName = valueWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode["NodeName"].asString();
			if(!valueWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode["Position"].isNull())
				workflowNodesObject.position = std::stoi(valueWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode["Position"].asString());
			if(!valueWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode["CreateUserId"].isNull())
				workflowNodesObject.createUserId = std::stol(valueWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode["CreateUserId"].asString());
			if(!valueWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode["TemplateId"].isNull())
				workflowNodesObject.templateId = std::stol(valueWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode["TemplateId"].asString());
			if(!valueWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode["NodeId"].isNull())
				workflowNodesObject.nodeId = std::stol(valueWorkFlowTemplatesWorkFlowTemplateWorkflowNodesWorkflowNode["NodeId"].asString());
			workFlowTemplatesObject.workflowNodes.push_back(workflowNodesObject);
		}
		workFlowTemplates_.push_back(workFlowTemplatesObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListWorkFlowTemplatesResult::getErrorCode()const
{
	return errorCode_;
}

std::string ListWorkFlowTemplatesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListWorkFlowTemplatesResult::getSuccess()const
{
	return success_;
}

std::vector<ListWorkFlowTemplatesResult::WorkFlowTemplate> ListWorkFlowTemplatesResult::getWorkFlowTemplates()const
{
	return workFlowTemplates_;
}

