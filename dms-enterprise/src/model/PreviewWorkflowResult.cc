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

#include <alibabacloud/dms-enterprise/model/PreviewWorkflowResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

PreviewWorkflowResult::PreviewWorkflowResult() :
	ServiceResult()
{}

PreviewWorkflowResult::PreviewWorkflowResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PreviewWorkflowResult::~PreviewWorkflowResult()
{}

void PreviewWorkflowResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto workflowDetailNode = value["WorkflowDetail"];
	if(!workflowDetailNode["WfCateName"].isNull())
		workflowDetail_.wfCateName = workflowDetailNode["WfCateName"].asString();
	if(!workflowDetailNode["Comment"].isNull())
		workflowDetail_.comment = workflowDetailNode["Comment"].asString();
	auto allWorkflowNodeListNode = workflowDetailNode["WorkflowNodeList"]["WorkflowNode"];
	for (auto workflowDetailNodeWorkflowNodeListWorkflowNode : allWorkflowNodeListNode)
	{
		WorkflowDetail::WorkflowNode workflowNodeObject;
		if(!workflowDetailNodeWorkflowNodeListWorkflowNode["NodeName"].isNull())
			workflowNodeObject.nodeName = workflowDetailNodeWorkflowNodeListWorkflowNode["NodeName"].asString();
		if(!workflowDetailNodeWorkflowNodeListWorkflowNode["NodeType"].isNull())
			workflowNodeObject.nodeType = workflowDetailNodeWorkflowNodeListWorkflowNode["NodeType"].asString();
		if(!workflowDetailNodeWorkflowNodeListWorkflowNode["Comment"].isNull())
			workflowNodeObject.comment = workflowDetailNodeWorkflowNodeListWorkflowNode["Comment"].asString();
		auto allAuditUserListNode = workflowDetailNodeWorkflowNodeListWorkflowNode["AuditUserList"]["AuditUser"];
		for (auto workflowDetailNodeWorkflowNodeListWorkflowNodeAuditUserListAuditUser : allAuditUserListNode)
		{
			WorkflowDetail::WorkflowNode::AuditUser auditUserListObject;
			if(!workflowDetailNodeWorkflowNodeListWorkflowNodeAuditUserListAuditUser["UserId"].isNull())
				auditUserListObject.userId = std::stol(workflowDetailNodeWorkflowNodeListWorkflowNodeAuditUserListAuditUser["UserId"].asString());
			if(!workflowDetailNodeWorkflowNodeListWorkflowNodeAuditUserListAuditUser["NickName"].isNull())
				auditUserListObject.nickName = workflowDetailNodeWorkflowNodeListWorkflowNodeAuditUserListAuditUser["NickName"].asString();
			if(!workflowDetailNodeWorkflowNodeListWorkflowNodeAuditUserListAuditUser["RealName"].isNull())
				auditUserListObject.realName = workflowDetailNodeWorkflowNodeListWorkflowNodeAuditUserListAuditUser["RealName"].asString();
			workflowNodeObject.auditUserList.push_back(auditUserListObject);
		}
		workflowDetail_.workflowNodeList.push_back(workflowNodeObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

PreviewWorkflowResult::WorkflowDetail PreviewWorkflowResult::getWorkflowDetail()const
{
	return workflowDetail_;
}

std::string PreviewWorkflowResult::getErrorCode()const
{
	return errorCode_;
}

std::string PreviewWorkflowResult::getErrorMessage()const
{
	return errorMessage_;
}

bool PreviewWorkflowResult::getSuccess()const
{
	return success_;
}

