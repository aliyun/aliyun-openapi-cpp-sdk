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

#include <alibabacloud/sas/model/DescribeSuspEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeSuspEventsResult::DescribeSuspEventsResult() :
	ServiceResult()
{}

DescribeSuspEventsResult::DescribeSuspEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSuspEventsResult::~DescribeSuspEventsResult()
{}

void DescribeSuspEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSuspEventsNode = value["SuspEvents"]["WarningSummary"];
	for (auto valueSuspEventsWarningSummary : allSuspEventsNode)
	{
		WarningSummary suspEventsObject;
		if(!valueSuspEventsWarningSummary["Stages"].isNull())
			suspEventsObject.stages = valueSuspEventsWarningSummary["Stages"].asString();
		if(!valueSuspEventsWarningSummary["InternetIp"].isNull())
			suspEventsObject.internetIp = valueSuspEventsWarningSummary["InternetIp"].asString();
		if(!valueSuspEventsWarningSummary["K8sClusterName"].isNull())
			suspEventsObject.k8sClusterName = valueSuspEventsWarningSummary["K8sClusterName"].asString();
		if(!valueSuspEventsWarningSummary["ContainerImageId"].isNull())
			suspEventsObject.containerImageId = valueSuspEventsWarningSummary["ContainerImageId"].asString();
		if(!valueSuspEventsWarningSummary["LastTimeStamp"].isNull())
			suspEventsObject.lastTimeStamp = std::stol(valueSuspEventsWarningSummary["LastTimeStamp"].asString());
		if(!valueSuspEventsWarningSummary["OccurrenceTime"].isNull())
			suspEventsObject.occurrenceTime = valueSuspEventsWarningSummary["OccurrenceTime"].asString();
		if(!valueSuspEventsWarningSummary["AlarmUniqueInfo"].isNull())
			suspEventsObject.alarmUniqueInfo = valueSuspEventsWarningSummary["AlarmUniqueInfo"].asString();
		if(!valueSuspEventsWarningSummary["Desc"].isNull())
			suspEventsObject.desc = valueSuspEventsWarningSummary["Desc"].asString();
		if(!valueSuspEventsWarningSummary["CanCancelFault"].isNull())
			suspEventsObject.canCancelFault = valueSuspEventsWarningSummary["CanCancelFault"].asString() == "true";
		if(!valueSuspEventsWarningSummary["AlarmEventNameDisplay"].isNull())
			suspEventsObject.alarmEventNameDisplay = valueSuspEventsWarningSummary["AlarmEventNameDisplay"].asString();
		if(!valueSuspEventsWarningSummary["AppName"].isNull())
			suspEventsObject.appName = valueSuspEventsWarningSummary["AppName"].asString();
		if(!valueSuspEventsWarningSummary["SecurityEventIds"].isNull())
			suspEventsObject.securityEventIds = valueSuspEventsWarningSummary["SecurityEventIds"].asString();
		if(!valueSuspEventsWarningSummary["K8sClusterId"].isNull())
			suspEventsObject.k8sClusterId = valueSuspEventsWarningSummary["K8sClusterId"].asString();
		if(!valueSuspEventsWarningSummary["ContainerImageName"].isNull())
			suspEventsObject.containerImageName = valueSuspEventsWarningSummary["ContainerImageName"].asString();
		if(!valueSuspEventsWarningSummary["MarkMisRules"].isNull())
			suspEventsObject.markMisRules = valueSuspEventsWarningSummary["MarkMisRules"].asString();
		if(!valueSuspEventsWarningSummary["CanBeDealOnLine"].isNull())
			suspEventsObject.canBeDealOnLine = valueSuspEventsWarningSummary["CanBeDealOnLine"].asString() == "true";
		if(!valueSuspEventsWarningSummary["ContainHwMode"].isNull())
			suspEventsObject.containHwMode = valueSuspEventsWarningSummary["ContainHwMode"].asString() == "true";
		if(!valueSuspEventsWarningSummary["K8sNodeId"].isNull())
			suspEventsObject.k8sNodeId = valueSuspEventsWarningSummary["K8sNodeId"].asString();
		if(!valueSuspEventsWarningSummary["InstanceName"].isNull())
			suspEventsObject.instanceName = valueSuspEventsWarningSummary["InstanceName"].asString();
		if(!valueSuspEventsWarningSummary["EventStatus"].isNull())
			suspEventsObject.eventStatus = std::stoi(valueSuspEventsWarningSummary["EventStatus"].asString());
		if(!valueSuspEventsWarningSummary["SaleVersion"].isNull())
			suspEventsObject.saleVersion = valueSuspEventsWarningSummary["SaleVersion"].asString();
		if(!valueSuspEventsWarningSummary["OperateErrorCode"].isNull())
			suspEventsObject.operateErrorCode = valueSuspEventsWarningSummary["OperateErrorCode"].asString();
		if(!valueSuspEventsWarningSummary["Name"].isNull())
			suspEventsObject.name = valueSuspEventsWarningSummary["Name"].asString();
		if(!valueSuspEventsWarningSummary["HasTraceInfo"].isNull())
			suspEventsObject.hasTraceInfo = valueSuspEventsWarningSummary["HasTraceInfo"].asString() == "true";
		if(!valueSuspEventsWarningSummary["DataSource"].isNull())
			suspEventsObject.dataSource = valueSuspEventsWarningSummary["DataSource"].asString();
		if(!valueSuspEventsWarningSummary["OperateTime"].isNull())
			suspEventsObject.operateTime = std::stol(valueSuspEventsWarningSummary["OperateTime"].asString());
		if(!valueSuspEventsWarningSummary["EventSubType"].isNull())
			suspEventsObject.eventSubType = valueSuspEventsWarningSummary["EventSubType"].asString();
		if(!valueSuspEventsWarningSummary["Advanced"].isNull())
			suspEventsObject.advanced = valueSuspEventsWarningSummary["Advanced"].asString() == "true";
		if(!valueSuspEventsWarningSummary["OccurrenceTimeStamp"].isNull())
			suspEventsObject.occurrenceTimeStamp = std::stol(valueSuspEventsWarningSummary["OccurrenceTimeStamp"].asString());
		if(!valueSuspEventsWarningSummary["InstanceId"].isNull())
			suspEventsObject.instanceId = valueSuspEventsWarningSummary["InstanceId"].asString();
		if(!valueSuspEventsWarningSummary["AlarmEventTypeDisplay"].isNull())
			suspEventsObject.alarmEventTypeDisplay = valueSuspEventsWarningSummary["AlarmEventTypeDisplay"].asString();
		if(!valueSuspEventsWarningSummary["IntranetIp"].isNull())
			suspEventsObject.intranetIp = valueSuspEventsWarningSummary["IntranetIp"].asString();
		if(!valueSuspEventsWarningSummary["LastTime"].isNull())
			suspEventsObject.lastTime = valueSuspEventsWarningSummary["LastTime"].asString();
		if(!valueSuspEventsWarningSummary["OperateMsg"].isNull())
			suspEventsObject.operateMsg = valueSuspEventsWarningSummary["OperateMsg"].asString();
		if(!valueSuspEventsWarningSummary["Uuid"].isNull())
			suspEventsObject.uuid = valueSuspEventsWarningSummary["Uuid"].asString();
		if(!valueSuspEventsWarningSummary["K8sPodName"].isNull())
			suspEventsObject.k8sPodName = valueSuspEventsWarningSummary["K8sPodName"].asString();
		if(!valueSuspEventsWarningSummary["ContainerId"].isNull())
			suspEventsObject.containerId = valueSuspEventsWarningSummary["ContainerId"].asString();
		if(!valueSuspEventsWarningSummary["AlarmEventType"].isNull())
			suspEventsObject.alarmEventType = valueSuspEventsWarningSummary["AlarmEventType"].asString();
		if(!valueSuspEventsWarningSummary["K8sNamespace"].isNull())
			suspEventsObject.k8sNamespace = valueSuspEventsWarningSummary["K8sNamespace"].asString();
		if(!valueSuspEventsWarningSummary["AutoBreaking"].isNull())
			suspEventsObject.autoBreaking = valueSuspEventsWarningSummary["AutoBreaking"].asString() == "true";
		if(!valueSuspEventsWarningSummary["K8sNodeName"].isNull())
			suspEventsObject.k8sNodeName = valueSuspEventsWarningSummary["K8sNodeName"].asString();
		if(!valueSuspEventsWarningSummary["AlarmEventName"].isNull())
			suspEventsObject.alarmEventName = valueSuspEventsWarningSummary["AlarmEventName"].asString();
		if(!valueSuspEventsWarningSummary["UniqueInfo"].isNull())
			suspEventsObject.uniqueInfo = valueSuspEventsWarningSummary["UniqueInfo"].asString();
		if(!valueSuspEventsWarningSummary["MaliciousRuleStatus"].isNull())
			suspEventsObject.maliciousRuleStatus = valueSuspEventsWarningSummary["MaliciousRuleStatus"].asString();
		if(!valueSuspEventsWarningSummary["Level"].isNull())
			suspEventsObject.level = valueSuspEventsWarningSummary["Level"].asString();
		if(!valueSuspEventsWarningSummary["Id"].isNull())
			suspEventsObject.id = std::stol(valueSuspEventsWarningSummary["Id"].asString());
		if(!valueSuspEventsWarningSummary["clusterId"].isNull())
			suspEventsObject.clusterId = valueSuspEventsWarningSummary["clusterId"].asString();
		if(!valueSuspEventsWarningSummary["ImageUuid"].isNull())
			suspEventsObject.imageUuid = valueSuspEventsWarningSummary["ImageUuid"].asString();
		if(!valueSuspEventsWarningSummary["DisplaySandboxResult"].isNull())
			suspEventsObject.displaySandboxResult = valueSuspEventsWarningSummary["DisplaySandboxResult"].asString() == "true";
		auto allTacticItemsNode = valueSuspEventsWarningSummary["TacticItems"]["TacticItem"];
		for (auto valueSuspEventsWarningSummaryTacticItemsTacticItem : allTacticItemsNode)
		{
			WarningSummary::TacticItem tacticItemsObject;
			if(!valueSuspEventsWarningSummaryTacticItemsTacticItem["TacticId"].isNull())
				tacticItemsObject.tacticId = valueSuspEventsWarningSummaryTacticItemsTacticItem["TacticId"].asString();
			if(!valueSuspEventsWarningSummaryTacticItemsTacticItem["TacticDisplayName"].isNull())
				tacticItemsObject.tacticDisplayName = valueSuspEventsWarningSummaryTacticItemsTacticItem["TacticDisplayName"].asString();
			suspEventsObject.tacticItems.push_back(tacticItemsObject);
		}
		auto allDetailsNode = valueSuspEventsWarningSummary["Details"]["QuaraFile"];
		for (auto valueSuspEventsWarningSummaryDetailsQuaraFile : allDetailsNode)
		{
			WarningSummary::QuaraFile detailsObject;
			if(!valueSuspEventsWarningSummaryDetailsQuaraFile["Type"].isNull())
				detailsObject.type = valueSuspEventsWarningSummaryDetailsQuaraFile["Type"].asString();
			if(!valueSuspEventsWarningSummaryDetailsQuaraFile["Value"].isNull())
				detailsObject.value = valueSuspEventsWarningSummaryDetailsQuaraFile["Value"].asString();
			if(!valueSuspEventsWarningSummaryDetailsQuaraFile["Name"].isNull())
				detailsObject.name = valueSuspEventsWarningSummaryDetailsQuaraFile["Name"].asString();
			if(!valueSuspEventsWarningSummaryDetailsQuaraFile["NameDisplay"].isNull())
				detailsObject.nameDisplay = valueSuspEventsWarningSummaryDetailsQuaraFile["NameDisplay"].asString();
			if(!valueSuspEventsWarningSummaryDetailsQuaraFile["InfoType"].isNull())
				detailsObject.infoType = valueSuspEventsWarningSummaryDetailsQuaraFile["InfoType"].asString();
			if(!valueSuspEventsWarningSummaryDetailsQuaraFile["ValueDisplay"].isNull())
				detailsObject.valueDisplay = valueSuspEventsWarningSummaryDetailsQuaraFile["ValueDisplay"].asString();
			suspEventsObject.details.push_back(detailsObject);
		}
		auto allEventNotesNode = valueSuspEventsWarningSummary["EventNotes"]["EventNote"];
		for (auto valueSuspEventsWarningSummaryEventNotesEventNote : allEventNotesNode)
		{
			WarningSummary::EventNote eventNotesObject;
			if(!valueSuspEventsWarningSummaryEventNotesEventNote["Note"].isNull())
				eventNotesObject.note = valueSuspEventsWarningSummaryEventNotesEventNote["Note"].asString();
			if(!valueSuspEventsWarningSummaryEventNotesEventNote["NoteId"].isNull())
				eventNotesObject.noteId = std::stol(valueSuspEventsWarningSummaryEventNotesEventNote["NoteId"].asString());
			if(!valueSuspEventsWarningSummaryEventNotesEventNote["NoteTime"].isNull())
				eventNotesObject.noteTime = valueSuspEventsWarningSummaryEventNotesEventNote["NoteTime"].asString();
			suspEventsObject.eventNotes.push_back(eventNotesObject);
		}
		suspEvents_.push_back(suspEventsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["Count"].isNull())
		count_ = std::stoi(value["Count"].asString());

}

int DescribeSuspEventsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeSuspEventsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSuspEventsResult::getCurrentPage()const
{
	return currentPage_;
}

int DescribeSuspEventsResult::getCount()const
{
	return count_;
}

std::vector<DescribeSuspEventsResult::WarningSummary> DescribeSuspEventsResult::getSuspEvents()const
{
	return suspEvents_;
}

