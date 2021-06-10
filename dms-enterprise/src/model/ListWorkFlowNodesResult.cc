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

#include <alibabacloud/dms-enterprise/model/ListWorkFlowNodesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

ListWorkFlowNodesResult::ListWorkFlowNodesResult() :
	ServiceResult()
{}

ListWorkFlowNodesResult::ListWorkFlowNodesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListWorkFlowNodesResult::~ListWorkFlowNodesResult()
{}

void ListWorkFlowNodesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allWorkflowNodesNode = value["WorkflowNodes"]["WorkflowNode"];
	for (auto valueWorkflowNodesWorkflowNode : allWorkflowNodesNode)
	{
		WorkflowNode workflowNodesObject;
		if(!valueWorkflowNodesWorkflowNode["Comment"].isNull())
			workflowNodesObject.comment = valueWorkflowNodesWorkflowNode["Comment"].asString();
		if(!valueWorkflowNodesWorkflowNode["CreateUserNickName"].isNull())
			workflowNodesObject.createUserNickName = valueWorkflowNodesWorkflowNode["CreateUserNickName"].asString();
		if(!valueWorkflowNodesWorkflowNode["NodeType"].isNull())
			workflowNodesObject.nodeType = valueWorkflowNodesWorkflowNode["NodeType"].asString();
		if(!valueWorkflowNodesWorkflowNode["NodeName"].isNull())
			workflowNodesObject.nodeName = valueWorkflowNodesWorkflowNode["NodeName"].asString();
		if(!valueWorkflowNodesWorkflowNode["CreateUserId"].isNull())
			workflowNodesObject.createUserId = std::stol(valueWorkflowNodesWorkflowNode["CreateUserId"].asString());
		if(!valueWorkflowNodesWorkflowNode["NodeId"].isNull())
			workflowNodesObject.nodeId = std::stol(valueWorkflowNodesWorkflowNode["NodeId"].asString());
		auto allAuditUsersNode = valueWorkflowNodesWorkflowNode["AuditUsers"]["AuditUser"];
		for (auto valueWorkflowNodesWorkflowNodeAuditUsersAuditUser : allAuditUsersNode)
		{
			WorkflowNode::AuditUser auditUsersObject;
			if(!valueWorkflowNodesWorkflowNodeAuditUsersAuditUser["RealName"].isNull())
				auditUsersObject.realName = valueWorkflowNodesWorkflowNodeAuditUsersAuditUser["RealName"].asString();
			if(!valueWorkflowNodesWorkflowNodeAuditUsersAuditUser["UserId"].isNull())
				auditUsersObject.userId = std::stol(valueWorkflowNodesWorkflowNodeAuditUsersAuditUser["UserId"].asString());
			if(!valueWorkflowNodesWorkflowNodeAuditUsersAuditUser["NickName"].isNull())
				auditUsersObject.nickName = valueWorkflowNodesWorkflowNodeAuditUsersAuditUser["NickName"].asString();
			workflowNodesObject.auditUsers.push_back(auditUsersObject);
		}
		workflowNodes_.push_back(workflowNodesObject);
	}
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ListWorkFlowNodesResult::getErrorCode()const
{
	return errorCode_;
}

std::vector<ListWorkFlowNodesResult::WorkflowNode> ListWorkFlowNodesResult::getWorkflowNodes()const
{
	return workflowNodes_;
}

std::string ListWorkFlowNodesResult::getErrorMessage()const
{
	return errorMessage_;
}

bool ListWorkFlowNodesResult::getSuccess()const
{
	return success_;
}

