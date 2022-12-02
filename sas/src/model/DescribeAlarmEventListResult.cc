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

#include <alibabacloud/sas/model/DescribeAlarmEventListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeAlarmEventListResult::DescribeAlarmEventListResult() :
	ServiceResult()
{}

DescribeAlarmEventListResult::DescribeAlarmEventListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAlarmEventListResult::~DescribeAlarmEventListResult()
{}

void DescribeAlarmEventListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSuspEventsNode = value["SuspEvents"]["SuspEventsItem"];
	for (auto valueSuspEventsSuspEventsItem : allSuspEventsNode)
	{
		SuspEventsItem suspEventsObject;
		if(!valueSuspEventsSuspEventsItem["Dealed"].isNull())
			suspEventsObject.dealed = valueSuspEventsSuspEventsItem["Dealed"].asString() == "true";
		if(!valueSuspEventsSuspEventsItem["Stages"].isNull())
			suspEventsObject.stages = valueSuspEventsSuspEventsItem["Stages"].asString();
		if(!valueSuspEventsSuspEventsItem["InternetIp"].isNull())
			suspEventsObject.internetIp = valueSuspEventsSuspEventsItem["InternetIp"].asString();
		if(!valueSuspEventsSuspEventsItem["SuspiciousEventCount"].isNull())
			suspEventsObject.suspiciousEventCount = std::stoi(valueSuspEventsSuspEventsItem["SuspiciousEventCount"].asString());
		if(!valueSuspEventsSuspEventsItem["K8sClusterName"].isNull())
			suspEventsObject.k8sClusterName = valueSuspEventsSuspEventsItem["K8sClusterName"].asString();
		if(!valueSuspEventsSuspEventsItem["ContainerImageId"].isNull())
			suspEventsObject.containerImageId = valueSuspEventsSuspEventsItem["ContainerImageId"].asString();
		if(!valueSuspEventsSuspEventsItem["GmtModified"].isNull())
			suspEventsObject.gmtModified = std::stol(valueSuspEventsSuspEventsItem["GmtModified"].asString());
		if(!valueSuspEventsSuspEventsItem["AlarmEventNameOriginal"].isNull())
			suspEventsObject.alarmEventNameOriginal = valueSuspEventsSuspEventsItem["AlarmEventNameOriginal"].asString();
		if(!valueSuspEventsSuspEventsItem["AlarmUniqueInfo"].isNull())
			suspEventsObject.alarmUniqueInfo = valueSuspEventsSuspEventsItem["AlarmUniqueInfo"].asString();
		if(!valueSuspEventsSuspEventsItem["CanCancelFault"].isNull())
			suspEventsObject.canCancelFault = valueSuspEventsSuspEventsItem["CanCancelFault"].asString() == "true";
		if(!valueSuspEventsSuspEventsItem["AppName"].isNull())
			suspEventsObject.appName = valueSuspEventsSuspEventsItem["AppName"].asString();
		if(!valueSuspEventsSuspEventsItem["SecurityEventIds"].isNull())
			suspEventsObject.securityEventIds = valueSuspEventsSuspEventsItem["SecurityEventIds"].asString();
		if(!valueSuspEventsSuspEventsItem["K8sClusterId"].isNull())
			suspEventsObject.k8sClusterId = valueSuspEventsSuspEventsItem["K8sClusterId"].asString();
		if(!valueSuspEventsSuspEventsItem["ContainerImageName"].isNull())
			suspEventsObject.containerImageName = valueSuspEventsSuspEventsItem["ContainerImageName"].asString();
		if(!valueSuspEventsSuspEventsItem["CanBeDealOnLine"].isNull())
			suspEventsObject.canBeDealOnLine = valueSuspEventsSuspEventsItem["CanBeDealOnLine"].asString() == "true";
		if(!valueSuspEventsSuspEventsItem["Description"].isNull())
			suspEventsObject.description = valueSuspEventsSuspEventsItem["Description"].asString();
		if(!valueSuspEventsSuspEventsItem["ContainHwMode"].isNull())
			suspEventsObject.containHwMode = valueSuspEventsSuspEventsItem["ContainHwMode"].asString() == "true";
		if(!valueSuspEventsSuspEventsItem["K8sNodeId"].isNull())
			suspEventsObject.k8sNodeId = valueSuspEventsSuspEventsItem["K8sNodeId"].asString();
		if(!valueSuspEventsSuspEventsItem["InstanceName"].isNull())
			suspEventsObject.instanceName = valueSuspEventsSuspEventsItem["InstanceName"].asString();
		if(!valueSuspEventsSuspEventsItem["SaleVersion"].isNull())
			suspEventsObject.saleVersion = valueSuspEventsSuspEventsItem["SaleVersion"].asString();
		if(!valueSuspEventsSuspEventsItem["OperateErrorCode"].isNull())
			suspEventsObject.operateErrorCode = valueSuspEventsSuspEventsItem["OperateErrorCode"].asString();
		if(!valueSuspEventsSuspEventsItem["Solution"].isNull())
			suspEventsObject.solution = valueSuspEventsSuspEventsItem["Solution"].asString();
		if(!valueSuspEventsSuspEventsItem["HasTraceInfo"].isNull())
			suspEventsObject.hasTraceInfo = valueSuspEventsSuspEventsItem["HasTraceInfo"].asString() == "true";
		if(!valueSuspEventsSuspEventsItem["DataSource"].isNull())
			suspEventsObject.dataSource = valueSuspEventsSuspEventsItem["DataSource"].asString();
		if(!valueSuspEventsSuspEventsItem["OperateTime"].isNull())
			suspEventsObject.operateTime = std::stol(valueSuspEventsSuspEventsItem["OperateTime"].asString());
		if(!valueSuspEventsSuspEventsItem["InstanceId"].isNull())
			suspEventsObject.instanceId = valueSuspEventsSuspEventsItem["InstanceId"].asString();
		if(!valueSuspEventsSuspEventsItem["IntranetIp"].isNull())
			suspEventsObject.intranetIp = valueSuspEventsSuspEventsItem["IntranetIp"].asString();
		if(!valueSuspEventsSuspEventsItem["AssetType"].isNull())
			suspEventsObject.assetType = std::stoi(valueSuspEventsSuspEventsItem["AssetType"].asString());
		if(!valueSuspEventsSuspEventsItem["RegionId"].isNull())
			suspEventsObject.regionId = valueSuspEventsSuspEventsItem["RegionId"].asString();
		if(!valueSuspEventsSuspEventsItem["EndTime"].isNull())
			suspEventsObject.endTime = std::stol(valueSuspEventsSuspEventsItem["EndTime"].asString());
		if(!valueSuspEventsSuspEventsItem["Uuid"].isNull())
			suspEventsObject.uuid = valueSuspEventsSuspEventsItem["Uuid"].asString();
		if(!valueSuspEventsSuspEventsItem["StartTime"].isNull())
			suspEventsObject.startTime = std::stol(valueSuspEventsSuspEventsItem["StartTime"].asString());
		if(!valueSuspEventsSuspEventsItem["K8sPodName"].isNull())
			suspEventsObject.k8sPodName = valueSuspEventsSuspEventsItem["K8sPodName"].asString();
		if(!valueSuspEventsSuspEventsItem["ContainerId"].isNull())
			suspEventsObject.containerId = valueSuspEventsSuspEventsItem["ContainerId"].asString();
		if(!valueSuspEventsSuspEventsItem["AlarmEventType"].isNull())
			suspEventsObject.alarmEventType = valueSuspEventsSuspEventsItem["AlarmEventType"].asString();
		if(!valueSuspEventsSuspEventsItem["K8sNamespace"].isNull())
			suspEventsObject.k8sNamespace = valueSuspEventsSuspEventsItem["K8sNamespace"].asString();
		if(!valueSuspEventsSuspEventsItem["AutoBreaking"].isNull())
			suspEventsObject.autoBreaking = valueSuspEventsSuspEventsItem["AutoBreaking"].asString() == "true";
		if(!valueSuspEventsSuspEventsItem["K8sNodeName"].isNull())
			suspEventsObject.k8sNodeName = valueSuspEventsSuspEventsItem["K8sNodeName"].asString();
		if(!valueSuspEventsSuspEventsItem["AlarmEventName"].isNull())
			suspEventsObject.alarmEventName = valueSuspEventsSuspEventsItem["AlarmEventName"].asString();
		if(!valueSuspEventsSuspEventsItem["Level"].isNull())
			suspEventsObject.level = valueSuspEventsSuspEventsItem["Level"].asString();
		auto allTacticItemsNode = valueSuspEventsSuspEventsItem["TacticItems"]["TacticItem"];
		for (auto valueSuspEventsSuspEventsItemTacticItemsTacticItem : allTacticItemsNode)
		{
			SuspEventsItem::TacticItem tacticItemsObject;
			if(!valueSuspEventsSuspEventsItemTacticItemsTacticItem["TacticId"].isNull())
				tacticItemsObject.tacticId = valueSuspEventsSuspEventsItemTacticItemsTacticItem["TacticId"].asString();
			if(!valueSuspEventsSuspEventsItemTacticItemsTacticItem["TacticDisplayName"].isNull())
				tacticItemsObject.tacticDisplayName = valueSuspEventsSuspEventsItemTacticItemsTacticItem["TacticDisplayName"].asString();
			suspEventsObject.tacticItems.push_back(tacticItemsObject);
		}
		auto allTraceBackInfoList = value["TraceBackInfoList"]["StringItem"];
		for (auto value : allTraceBackInfoList)
			suspEventsObject.traceBackInfoList.push_back(value.asString());
		suspEvents_.push_back(suspEventsObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!pageInfoNode["Count"].isNull())
		pageInfo_.count = std::stoi(pageInfoNode["Count"].asString());

}

DescribeAlarmEventListResult::PageInfo DescribeAlarmEventListResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeAlarmEventListResult::SuspEventsItem> DescribeAlarmEventListResult::getSuspEvents()const
{
	return suspEvents_;
}

