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

#include <alibabacloud/dataworks-public/model/GetPermissionApplyOrderDetailResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetPermissionApplyOrderDetailResult::GetPermissionApplyOrderDetailResult() :
	ServiceResult()
{}

GetPermissionApplyOrderDetailResult::GetPermissionApplyOrderDetailResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetPermissionApplyOrderDetailResult::~GetPermissionApplyOrderDetailResult()
{}

void GetPermissionApplyOrderDetailResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto applyOrderDetailNode = value["ApplyOrderDetail"];
	if(!applyOrderDetailNode["ApplyBaseId"].isNull())
		applyOrderDetail_.applyBaseId = applyOrderDetailNode["ApplyBaseId"].asString();
	if(!applyOrderDetailNode["ApplyTimestamp"].isNull())
		applyOrderDetail_.applyTimestamp = std::stol(applyOrderDetailNode["ApplyTimestamp"].asString());
	if(!applyOrderDetailNode["FlowId"].isNull())
		applyOrderDetail_.flowId = applyOrderDetailNode["FlowId"].asString();
	if(!applyOrderDetailNode["FlowStatus"].isNull())
		applyOrderDetail_.flowStatus = std::stoi(applyOrderDetailNode["FlowStatus"].asString());
	auto allApproveAccountListNode = applyOrderDetailNode["ApproveAccountList"]["ApproveAccountListItem"];
	for (auto applyOrderDetailNodeApproveAccountListApproveAccountListItem : allApproveAccountListNode)
	{
		ApplyOrderDetail::ApproveAccountListItem approveAccountListItemObject;
		if(!applyOrderDetailNodeApproveAccountListApproveAccountListItem["BaseId"].isNull())
			approveAccountListItemObject.baseId = applyOrderDetailNodeApproveAccountListApproveAccountListItem["BaseId"].asString();
		applyOrderDetail_.approveAccountList.push_back(approveAccountListItemObject);
	}
	auto allGranteeObjectListNode = applyOrderDetailNode["GranteeObjectList"]["GranteeObjectListItem"];
	for (auto applyOrderDetailNodeGranteeObjectListGranteeObjectListItem : allGranteeObjectListNode)
	{
		ApplyOrderDetail::GranteeObjectListItem granteeObjectListItemObject;
		if(!applyOrderDetailNodeGranteeObjectListGranteeObjectListItem["GranteeType"].isNull())
			granteeObjectListItemObject.granteeType = std::stoi(applyOrderDetailNodeGranteeObjectListGranteeObjectListItem["GranteeType"].asString());
		if(!applyOrderDetailNodeGranteeObjectListGranteeObjectListItem["GranteeTypeSub"].isNull())
			granteeObjectListItemObject.granteeTypeSub = std::stoi(applyOrderDetailNodeGranteeObjectListGranteeObjectListItem["GranteeTypeSub"].asString());
		if(!applyOrderDetailNodeGranteeObjectListGranteeObjectListItem["GranteeName"].isNull())
			granteeObjectListItemObject.granteeName = applyOrderDetailNodeGranteeObjectListGranteeObjectListItem["GranteeName"].asString();
		if(!applyOrderDetailNodeGranteeObjectListGranteeObjectListItem["GranteeId"].isNull())
			granteeObjectListItemObject.granteeId = applyOrderDetailNodeGranteeObjectListGranteeObjectListItem["GranteeId"].asString();
		applyOrderDetail_.granteeObjectList.push_back(granteeObjectListItemObject);
	}
	auto approveContentNode = applyOrderDetailNode["ApproveContent"];
	if(!approveContentNode["ApplyReason"].isNull())
		applyOrderDetail_.approveContent.applyReason = approveContentNode["ApplyReason"].asString();
	if(!approveContentNode["Deadline"].isNull())
		applyOrderDetail_.approveContent.deadline = std::stol(approveContentNode["Deadline"].asString());
	if(!approveContentNode["OrderType"].isNull())
		applyOrderDetail_.approveContent.orderType = std::stoi(approveContentNode["OrderType"].asString());
	auto projectMetaNode = approveContentNode["ProjectMeta"];
	if(!projectMetaNode["MaxComputeProjectName"].isNull())
		applyOrderDetail_.approveContent.projectMeta.maxComputeProjectName = projectMetaNode["MaxComputeProjectName"].asString();
	if(!projectMetaNode["WorkspaceId"].isNull())
		applyOrderDetail_.approveContent.projectMeta.workspaceId = std::stoi(projectMetaNode["WorkspaceId"].asString());
	auto allObjectMetaListNode = projectMetaNode["ObjectMetaList"]["ObjectMetaListItem"];
	for (auto projectMetaNodeObjectMetaListObjectMetaListItem : allObjectMetaListNode)
	{
		ApplyOrderDetail::ApproveContent::ProjectMeta::ObjectMetaListItem objectMetaListItemObject;
		if(!projectMetaNodeObjectMetaListObjectMetaListItem["ObjectName"].isNull())
			objectMetaListItemObject.objectName = projectMetaNodeObjectMetaListObjectMetaListItem["ObjectName"].asString();
		auto allColumnMetaListNode = projectMetaNodeObjectMetaListObjectMetaListItem["ColumnMetaList"]["ColumnMetaListItem"];
		for (auto projectMetaNodeObjectMetaListObjectMetaListItemColumnMetaListColumnMetaListItem : allColumnMetaListNode)
		{
			ApplyOrderDetail::ApproveContent::ProjectMeta::ObjectMetaListItem::ColumnMetaListItem columnMetaListObject;
			if(!projectMetaNodeObjectMetaListObjectMetaListItemColumnMetaListColumnMetaListItem["ColumnName"].isNull())
				columnMetaListObject.columnName = projectMetaNodeObjectMetaListObjectMetaListItemColumnMetaListColumnMetaListItem["ColumnName"].asString();
			if(!projectMetaNodeObjectMetaListObjectMetaListItemColumnMetaListColumnMetaListItem["ColumnComment"].isNull())
				columnMetaListObject.columnComment = projectMetaNodeObjectMetaListObjectMetaListItemColumnMetaListColumnMetaListItem["ColumnComment"].asString();
			if(!projectMetaNodeObjectMetaListObjectMetaListItemColumnMetaListColumnMetaListItem["SecurityLevel"].isNull())
				columnMetaListObject.securityLevel = projectMetaNodeObjectMetaListObjectMetaListItemColumnMetaListColumnMetaListItem["SecurityLevel"].asString();
			auto allColumnActions = value["ColumnActions"]["ColumnActions"];
			for (auto value : allColumnActions)
				columnMetaListObject.columnActions.push_back(value.asString());
			objectMetaListItemObject.columnMetaList.push_back(columnMetaListObject);
		}
		auto allActions = value["Actions"]["Actions"];
		for (auto value : allActions)
			objectMetaListItemObject.actions.push_back(value.asString());
		applyOrderDetail_.approveContent.projectMeta.objectMetaList.push_back(objectMetaListItemObject);
	}

}

GetPermissionApplyOrderDetailResult::ApplyOrderDetail GetPermissionApplyOrderDetailResult::getApplyOrderDetail()const
{
	return applyOrderDetail_;
}

