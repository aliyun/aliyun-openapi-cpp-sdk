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

#include <alibabacloud/dataworks-public/model/ListPermissionApplyOrdersResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListPermissionApplyOrdersResult::ListPermissionApplyOrdersResult() :
	ServiceResult()
{}

ListPermissionApplyOrdersResult::ListPermissionApplyOrdersResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListPermissionApplyOrdersResult::~ListPermissionApplyOrdersResult()
{}

void ListPermissionApplyOrdersResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto applyOrdersNode = value["ApplyOrders"];
	if(!applyOrdersNode["PageSize"].isNull())
		applyOrders_.pageSize = std::stoi(applyOrdersNode["PageSize"].asString());
	if(!applyOrdersNode["PageNumber"].isNull())
		applyOrders_.pageNumber = std::stoi(applyOrdersNode["PageNumber"].asString());
	if(!applyOrdersNode["TotalCount"].isNull())
		applyOrders_.totalCount = std::stoi(applyOrdersNode["TotalCount"].asString());
	auto allApplyOrderNode = applyOrdersNode["ApplyOrder"]["Orders"];
	for (auto applyOrdersNodeApplyOrderOrders : allApplyOrderNode)
	{
		ApplyOrders::Orders ordersObject;
		if(!applyOrdersNodeApplyOrderOrders["ApplyBaseId"].isNull())
			ordersObject.applyBaseId = applyOrdersNodeApplyOrderOrders["ApplyBaseId"].asString();
		if(!applyOrdersNodeApplyOrderOrders["ApplyTimestamp"].isNull())
			ordersObject.applyTimestamp = std::stol(applyOrdersNodeApplyOrderOrders["ApplyTimestamp"].asString());
		if(!applyOrdersNodeApplyOrderOrders["FlowId"].isNull())
			ordersObject.flowId = applyOrdersNodeApplyOrderOrders["FlowId"].asString();
		if(!applyOrdersNodeApplyOrderOrders["FlowStatus"].isNull())
			ordersObject.flowStatus = std::stoi(applyOrdersNodeApplyOrderOrders["FlowStatus"].asString());
		auto approveContentNode = value["ApproveContent"];
		if(!approveContentNode["ApplyReason"].isNull())
			ordersObject.approveContent.applyReason = approveContentNode["ApplyReason"].asString();
		if(!approveContentNode["OrderType"].isNull())
			ordersObject.approveContent.orderType = std::stoi(approveContentNode["OrderType"].asString());
		auto projectMetaNode = approveContentNode["ProjectMeta"];
		if(!projectMetaNode["WorkspaceName"].isNull())
			ordersObject.approveContent.projectMeta.workspaceName = projectMetaNode["WorkspaceName"].asString();
		auto allObjectMetaListNode = projectMetaNode["ObjectMetaList"]["ObjectMetaListItem"];
		for (auto projectMetaNodeObjectMetaListObjectMetaListItem : allObjectMetaListNode)
		{
			ApplyOrders::Orders::ApproveContent::ProjectMeta::ObjectMetaListItem objectMetaListItemObject;
			if(!projectMetaNodeObjectMetaListObjectMetaListItem["ObjectName"].isNull())
				objectMetaListItemObject.objectName = projectMetaNodeObjectMetaListObjectMetaListItem["ObjectName"].asString();
			auto allActions = value["Actions"]["Actions"];
			for (auto value : allActions)
				objectMetaListItemObject.actions.push_back(value.asString());
			ordersObject.approveContent.projectMeta.objectMetaList.push_back(objectMetaListItemObject);
		}
		applyOrders_.applyOrder.push_back(ordersObject);
	}

}

ListPermissionApplyOrdersResult::ApplyOrders ListPermissionApplyOrdersResult::getApplyOrders()const
{
	return applyOrders_;
}

