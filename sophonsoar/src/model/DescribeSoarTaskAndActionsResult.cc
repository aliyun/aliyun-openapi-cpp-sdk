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

#include <alibabacloud/sophonsoar/model/DescribeSoarTaskAndActionsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sophonsoar;
using namespace AlibabaCloud::Sophonsoar::Model;

DescribeSoarTaskAndActionsResult::DescribeSoarTaskAndActionsResult() :
	ServiceResult()
{}

DescribeSoarTaskAndActionsResult::DescribeSoarTaskAndActionsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSoarTaskAndActionsResult::~DescribeSoarTaskAndActionsResult()
{}

void DescribeSoarTaskAndActionsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto detailsNode = value["Details"];
	if(!detailsNode["TriggerType"].isNull())
		details_.triggerType = detailsNode["TriggerType"].asString();
	if(!detailsNode["TriggerDataId"].isNull())
		details_.triggerDataId = detailsNode["TriggerDataId"].asString();
	if(!detailsNode["Sao"].isNull())
		details_.sao = detailsNode["Sao"].asString();
	if(!detailsNode["TaskName"].isNull())
		details_.taskName = detailsNode["TaskName"].asString();
	if(!detailsNode["StartTime"].isNull())
		details_.startTime = std::stol(detailsNode["StartTime"].asString());
	if(!detailsNode["EndTime"].isNull())
		details_.endTime = std::stol(detailsNode["EndTime"].asString());
	if(!detailsNode["Status"].isNull())
		details_.status = detailsNode["Status"].asString();
	if(!detailsNode["Success"].isNull())
		details_.success = std::stoi(detailsNode["Success"].asString());
	if(!detailsNode["All"].isNull())
		details_.all = std::stoi(detailsNode["All"].asString());
	if(!detailsNode["RequestUuid"].isNull())
		details_.requestUuid = detailsNode["RequestUuid"].asString();
	if(!detailsNode["TaskUuid"].isNull())
		details_.taskUuid = detailsNode["TaskUuid"].asString();
	if(!detailsNode["TriggerUser"].isNull())
		details_.triggerUser = detailsNode["TriggerUser"].asString();
	if(!detailsNode["ErrorMsg"].isNull())
		details_.errorMsg = detailsNode["ErrorMsg"].asString();
	if(!detailsNode["DataSourceName"].isNull())
		details_.dataSourceName = detailsNode["DataSourceName"].asString();
	if(!detailsNode["RawEventReq"].isNull())
		details_.rawEventReq = detailsNode["RawEventReq"].asString();
	if(!detailsNode["ResultLevel"].isNull())
		details_.resultLevel = detailsNode["ResultLevel"].asString();
	if(!detailsNode["ResultMessage"].isNull())
		details_.resultMessage = detailsNode["ResultMessage"].asString();
	if(!detailsNode["ResultDetailInfo"].isNull())
		details_.resultDetailInfo = detailsNode["ResultDetailInfo"].asString();
	if(!detailsNode["TaskTenantId"].isNull())
		details_.taskTenantId = detailsNode["TaskTenantId"].asString();
	if(!detailsNode["TaskType"].isNull())
		details_.taskType = detailsNode["TaskType"].asString();
	if(!detailsNode["ActionLogNum"].isNull())
		details_.actionLogNum = std::stoi(detailsNode["ActionLogNum"].asString());
	if(!detailsNode["TaskFlowMd5"].isNull())
		details_.taskFlowMd5 = detailsNode["TaskFlowMd5"].asString();
	auto allActionsNode = detailsNode["Actions"]["Action"];
	for (auto detailsNodeActionsAction : allActionsNode)
	{
		Details::Action actionObject;
		if(!detailsNodeActionsAction["TriggerType"].isNull())
			actionObject.triggerType = detailsNodeActionsAction["TriggerType"].asString();
		if(!detailsNodeActionsAction["TriggerDataId"].isNull())
			actionObject.triggerDataId = detailsNodeActionsAction["TriggerDataId"].asString();
		if(!detailsNodeActionsAction["Component"].isNull())
			actionObject.component = detailsNodeActionsAction["Component"].asString();
		if(!detailsNodeActionsAction["Action"].isNull())
			actionObject.action = detailsNodeActionsAction["Action"].asString();
		if(!detailsNodeActionsAction["StartTime"].isNull())
			actionObject.startTime = std::stol(detailsNodeActionsAction["StartTime"].asString());
		if(!detailsNodeActionsAction["EndTime"].isNull())
			actionObject.endTime = std::stol(detailsNodeActionsAction["EndTime"].asString());
		if(!detailsNodeActionsAction["Status"].isNull())
			actionObject.status = detailsNodeActionsAction["Status"].asString();
		if(!detailsNodeActionsAction["RequestUuid"].isNull())
			actionObject.requestUuid = detailsNodeActionsAction["RequestUuid"].asString();
		if(!detailsNodeActionsAction["TaskUuid"].isNull())
			actionObject.taskUuid = detailsNodeActionsAction["TaskUuid"].asString();
		if(!detailsNodeActionsAction["SrcHostName"].isNull())
			actionObject.srcHostName = detailsNodeActionsAction["SrcHostName"].asString();
		if(!detailsNodeActionsAction["TriggerUser"].isNull())
			actionObject.triggerUser = detailsNodeActionsAction["TriggerUser"].asString();
		if(!detailsNodeActionsAction["TaskName"].isNull())
			actionObject.taskName = detailsNodeActionsAction["TaskName"].asString();
		if(!detailsNodeActionsAction["TaskStatus"].isNull())
			actionObject.taskStatus = detailsNodeActionsAction["TaskStatus"].asString();
		if(!detailsNodeActionsAction["ActionUuid"].isNull())
			actionObject.actionUuid = detailsNodeActionsAction["ActionUuid"].asString();
		if(!detailsNodeActionsAction["DataSourceName"].isNull())
			actionObject.dataSourceName = detailsNodeActionsAction["DataSourceName"].asString();
		if(!detailsNodeActionsAction["AssetName"].isNull())
			actionObject.assetName = detailsNodeActionsAction["AssetName"].asString();
		if(!detailsNodeActionsAction["NodeName"].isNull())
			actionObject.nodeName = detailsNodeActionsAction["NodeName"].asString();
		if(!detailsNodeActionsAction["EventId"].isNull())
			actionObject.eventId = detailsNodeActionsAction["EventId"].asString();
		if(!detailsNodeActionsAction["NodeId"].isNull())
			actionObject.nodeId = detailsNodeActionsAction["NodeId"].asString();
		if(!detailsNodeActionsAction["NodeType"].isNull())
			actionObject.nodeType = detailsNodeActionsAction["NodeType"].asString();
		if(!detailsNodeActionsAction["TaskTenantId"].isNull())
			actionObject.taskTenantId = detailsNodeActionsAction["TaskTenantId"].asString();
		if(!detailsNodeActionsAction["TaskType"].isNull())
			actionObject.taskType = detailsNodeActionsAction["TaskType"].asString();
		if(!detailsNodeActionsAction["TenantId"].isNull())
			actionObject.tenantId = detailsNodeActionsAction["TenantId"].asString();
		details_.actions.push_back(actionObject);
	}

}

DescribeSoarTaskAndActionsResult::Details DescribeSoarTaskAndActionsResult::getDetails()const
{
	return details_;
}

