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

#include <alibabacloud/dms-enterprise/model/GetApprovalDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dms_enterprise;
using namespace AlibabaCloud::Dms_enterprise::Model;

GetApprovalDetailResult::GetApprovalDetailResult() :
	ServiceResult()
{}

GetApprovalDetailResult::GetApprovalDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetApprovalDetailResult::~GetApprovalDetailResult()
{}

void GetApprovalDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto approvalDetailNode = value["ApprovalDetail"];
	if(!approvalDetailNode["Description"].isNull())
		approvalDetail_.description = approvalDetailNode["Description"].asString();
	if(!approvalDetailNode["CreateTime"].isNull())
		approvalDetail_.createTime = approvalDetailNode["CreateTime"].asString();
	if(!approvalDetailNode["OrderType"].isNull())
		approvalDetail_.orderType = approvalDetailNode["OrderType"].asString();
	if(!approvalDetailNode["Title"].isNull())
		approvalDetail_.title = approvalDetailNode["Title"].asString();
	if(!approvalDetailNode["AuditId"].isNull())
		approvalDetail_.auditId = std::stol(approvalDetailNode["AuditId"].asString());
	if(!approvalDetailNode["OrderId"].isNull())
		approvalDetail_.orderId = std::stol(approvalDetailNode["OrderId"].asString());
	if(!approvalDetailNode["WorkflowInsCode"].isNull())
		approvalDetail_.workflowInsCode = approvalDetailNode["WorkflowInsCode"].asString();
	if(!approvalDetailNode["TemplateId"].isNull())
		approvalDetail_.templateId = std::stol(approvalDetailNode["TemplateId"].asString());
	if(!approvalDetailNode["ThirdpartyWorkflowUrl"].isNull())
		approvalDetail_.thirdpartyWorkflowUrl = approvalDetailNode["ThirdpartyWorkflowUrl"].asString();
	if(!approvalDetailNode["ThirdpartyWorkflowComment"].isNull())
		approvalDetail_.thirdpartyWorkflowComment = approvalDetailNode["ThirdpartyWorkflowComment"].asString();
	auto allWorkflowNodesNode = approvalDetailNode["WorkflowNodes"]["WorkflowNode"];
	for (auto approvalDetailNodeWorkflowNodesWorkflowNode : allWorkflowNodesNode)
	{
		ApprovalDetail::WorkflowNode workflowNodeObject;
		if(!approvalDetailNodeWorkflowNodesWorkflowNode["OperateTime"].isNull())
			workflowNodeObject.operateTime = approvalDetailNodeWorkflowNodesWorkflowNode["OperateTime"].asString();
		if(!approvalDetailNodeWorkflowNodesWorkflowNode["OperatorId"].isNull())
			workflowNodeObject.operatorId = std::stol(approvalDetailNodeWorkflowNodesWorkflowNode["OperatorId"].asString());
		if(!approvalDetailNodeWorkflowNodesWorkflowNode["NodeName"].isNull())
			workflowNodeObject.nodeName = approvalDetailNodeWorkflowNodesWorkflowNode["NodeName"].asString();
		if(!approvalDetailNodeWorkflowNodesWorkflowNode["OperateComment"].isNull())
			workflowNodeObject.operateComment = approvalDetailNodeWorkflowNodesWorkflowNode["OperateComment"].asString();
		if(!approvalDetailNodeWorkflowNodesWorkflowNode["WorkflowInsCode"].isNull())
			workflowNodeObject.workflowInsCode = approvalDetailNodeWorkflowNodesWorkflowNode["WorkflowInsCode"].asString();
		auto allAuditUserIdList = value["AuditUserIdList"]["AuditUserIds"];
		for (auto value : allAuditUserIdList)
			workflowNodeObject.auditUserIdList.push_back(value.asString());
		approvalDetail_.workflowNodes.push_back(workflowNodeObject);
	}
	auto allCurrentHandlersNode = approvalDetailNode["CurrentHandlers"]["CurrentHandler"];
	for (auto approvalDetailNodeCurrentHandlersCurrentHandler : allCurrentHandlersNode)
	{
		ApprovalDetail::CurrentHandler currentHandlerObject;
		if(!approvalDetailNodeCurrentHandlersCurrentHandler["NickName"].isNull())
			currentHandlerObject.nickName = approvalDetailNodeCurrentHandlersCurrentHandler["NickName"].asString();
		if(!approvalDetailNodeCurrentHandlersCurrentHandler["Id"].isNull())
			currentHandlerObject.id = std::stol(approvalDetailNodeCurrentHandlersCurrentHandler["Id"].asString());
		approvalDetail_.currentHandlers.push_back(currentHandlerObject);
	}
		auto allReasonList = approvalDetailNode["ReasonList"]["Reasons"];
		for (auto value : allReasonList)
			approvalDetail_.reasonList.push_back(value.asString());
	if(!value["ErrorCode"].isNull())
		errorCode_ = value["ErrorCode"].asString();
	if(!value["ErrorMessage"].isNull())
		errorMessage_ = value["ErrorMessage"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string GetApprovalDetailResult::getErrorCode()const
{
	return errorCode_;
}

GetApprovalDetailResult::ApprovalDetail GetApprovalDetailResult::getApprovalDetail()const
{
	return approvalDetail_;
}

std::string GetApprovalDetailResult::getErrorMessage()const
{
	return errorMessage_;
}

bool GetApprovalDetailResult::getSuccess()const
{
	return success_;
}

