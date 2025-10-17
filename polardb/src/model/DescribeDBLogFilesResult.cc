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

#include <alibabacloud/polardb/model/DescribeDBLogFilesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Polardb;
using namespace AlibabaCloud::Polardb::Model;

DescribeDBLogFilesResult::DescribeDBLogFilesResult() :
	ServiceResult()
{}

DescribeDBLogFilesResult::DescribeDBLogFilesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDBLogFilesResult::~DescribeDBLogFilesResult()
{}

void DescribeDBLogFilesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allHaLogItemsNode = value["HaLogItems"]["HaSwitchLogItem"];
	for (auto valueHaLogItemsHaSwitchLogItem : allHaLogItemsNode)
	{
		HaSwitchLogItem haLogItemsObject;
		if(!valueHaLogItemsHaSwitchLogItem["SwitchId"].isNull())
			haLogItemsObject.switchId = valueHaLogItemsHaSwitchLogItem["SwitchId"].asString();
		if(!valueHaLogItemsHaSwitchLogItem["FromDBType"].isNull())
			haLogItemsObject.fromDBType = valueHaLogItemsHaSwitchLogItem["FromDBType"].asString();
		if(!valueHaLogItemsHaSwitchLogItem["SwitchCauseCode"].isNull())
			haLogItemsObject.switchCauseCode = valueHaLogItemsHaSwitchLogItem["SwitchCauseCode"].asString();
		if(!valueHaLogItemsHaSwitchLogItem["SwitchCauseDetail"].isNull())
			haLogItemsObject.switchCauseDetail = valueHaLogItemsHaSwitchLogItem["SwitchCauseDetail"].asString();
		if(!valueHaLogItemsHaSwitchLogItem["SwitchStartTime"].isNull())
			haLogItemsObject.switchStartTime = valueHaLogItemsHaSwitchLogItem["SwitchStartTime"].asString();
		if(!valueHaLogItemsHaSwitchLogItem["SwitchFinishTime"].isNull())
			haLogItemsObject.switchFinishTime = valueHaLogItemsHaSwitchLogItem["SwitchFinishTime"].asString();
		if(!valueHaLogItemsHaSwitchLogItem["TotalSessions"].isNull())
			haLogItemsObject.totalSessions = std::stol(valueHaLogItemsHaSwitchLogItem["TotalSessions"].asString());
		if(!valueHaLogItemsHaSwitchLogItem["AffectedSessions"].isNull())
			haLogItemsObject.affectedSessions = std::stol(valueHaLogItemsHaSwitchLogItem["AffectedSessions"].asString());
		if(!valueHaLogItemsHaSwitchLogItem["SwitchType"].isNull())
			haLogItemsObject.switchType = std::stol(valueHaLogItemsHaSwitchLogItem["SwitchType"].asString());
		haLogItems_.push_back(haLogItemsObject);
	}
	auto allSwitchListItemsNode = value["SwitchListItems"]["SwitchListItem"];
	for (auto valueSwitchListItemsSwitchListItem : allSwitchListItemsNode)
	{
		SwitchListItem switchListItemsObject;
		if(!valueSwitchListItemsSwitchListItem["SimulateListId"].isNull())
			switchListItemsObject.simulateListId = valueSwitchListItemsSwitchListItem["SimulateListId"].asString();
		if(!valueSwitchListItemsSwitchListItem["SimulateMode"].isNull())
			switchListItemsObject.simulateMode = valueSwitchListItemsSwitchListItem["SimulateMode"].asString();
		if(!valueSwitchListItemsSwitchListItem["SimulateStatus"].isNull())
			switchListItemsObject.simulateStatus = valueSwitchListItemsSwitchListItem["SimulateStatus"].asString();
		if(!valueSwitchListItemsSwitchListItem["StartTime"].isNull())
			switchListItemsObject.startTime = valueSwitchListItemsSwitchListItem["StartTime"].asString();
		if(!valueSwitchListItemsSwitchListItem["EndTime"].isNull())
			switchListItemsObject.endTime = valueSwitchListItemsSwitchListItem["EndTime"].asString();
		if(!valueSwitchListItemsSwitchListItem["EventStartTime"].isNull())
			switchListItemsObject.eventStartTime = valueSwitchListItemsSwitchListItem["EventStartTime"].asString();
		if(!valueSwitchListItemsSwitchListItem["EventFinishTime"].isNull())
			switchListItemsObject.eventFinishTime = valueSwitchListItemsSwitchListItem["EventFinishTime"].asString();
		if(!valueSwitchListItemsSwitchListItem["SimulateTaskId"].isNull())
			switchListItemsObject.simulateTaskId = valueSwitchListItemsSwitchListItem["SimulateTaskId"].asString();
		if(!valueSwitchListItemsSwitchListItem["PreferredSimulateStartTime"].isNull())
			switchListItemsObject.preferredSimulateStartTime = valueSwitchListItemsSwitchListItem["PreferredSimulateStartTime"].asString();
		if(!valueSwitchListItemsSwitchListItem["PlannedEscapeMode"].isNull())
			switchListItemsObject.plannedEscapeMode = valueSwitchListItemsSwitchListItem["PlannedEscapeMode"].asString();
		if(!valueSwitchListItemsSwitchListItem["PlannedEscapeTime"].isNull())
			switchListItemsObject.plannedEscapeTime = valueSwitchListItemsSwitchListItem["PlannedEscapeTime"].asString();
		if(!valueSwitchListItemsSwitchListItem["FaultInjectionType"].isNull())
			switchListItemsObject.faultInjectionType = valueSwitchListItemsSwitchListItem["FaultInjectionType"].asString();
		auto allSwitchLogItems1Node = valueSwitchListItemsSwitchListItem["SwitchLogItems"]["SwitchLogItem"];
		for (auto valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItem : allSwitchLogItems1Node)
		{
			SwitchListItem::SwitchLogItem switchLogItems1Object;
			if(!valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItem["SimulateListId"].isNull())
				switchLogItems1Object.simulateListId = valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItem["SimulateListId"].asString();
			if(!valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItem["SimulateLogId"].isNull())
				switchLogItems1Object.simulateLogId = valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItem["SimulateLogId"].asString();
			if(!valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItem["DBInstanceId"].isNull())
				switchLogItems1Object.dBInstanceId = valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItem["DBInstanceId"].asString();
			if(!valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItem["SrcIpPort"].isNull())
				switchLogItems1Object.srcIpPort = valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItem["SrcIpPort"].asString();
			if(!valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItem["SrcDbType"].isNull())
				switchLogItems1Object.srcDbType = valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItem["SrcDbType"].asString();
			if(!valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItem["DstIpPort"].isNull())
				switchLogItems1Object.dstIpPort = valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItem["DstIpPort"].asString();
			if(!valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItem["DstDbType"].isNull())
				switchLogItems1Object.dstDbType = valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItem["DstDbType"].asString();
			if(!valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItem["SimulateStatus"].isNull())
				switchLogItems1Object.simulateStatus = valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItem["SimulateStatus"].asString();
			if(!valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItem["EventStartTime"].isNull())
				switchLogItems1Object.eventStartTime = valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItem["EventStartTime"].asString();
			if(!valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItem["EventFinishTime"].isNull())
				switchLogItems1Object.eventFinishTime = valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItem["EventFinishTime"].asString();
			auto allSwitchStepItems2Node = valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItem["SwitchStepItems"]["SwitchDetailItem"];
			for (auto valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchDetailItem : allSwitchStepItems2Node)
			{
				SwitchListItem::SwitchLogItem::SwitchDetailItem switchStepItems2Object;
				if(!valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchDetailItem["StepName"].isNull())
					switchStepItems2Object.stepName = valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchDetailItem["StepName"].asString();
				if(!valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchDetailItem["StartTime"].isNull())
					switchStepItems2Object.startTime = valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchDetailItem["StartTime"].asString();
				if(!valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchDetailItem["SimulatePhase"].isNull())
					switchStepItems2Object.simulatePhase = valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchDetailItem["SimulatePhase"].asString();
				if(!valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchDetailItem["EndTime"].isNull())
					switchStepItems2Object.endTime = valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchDetailItem["EndTime"].asString();
				if(!valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchDetailItem["TimeCost"].isNull())
					switchStepItems2Object.timeCost = valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchDetailItem["TimeCost"].asString();
				if(!valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchDetailItem["IsSuccess"].isNull())
					switchStepItems2Object.isSuccess = valueSwitchListItemsSwitchListItemSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchDetailItem["IsSuccess"].asString();
				switchLogItems1Object.switchStepItems2.push_back(switchStepItems2Object);
			}
			switchListItemsObject.switchLogItems1.push_back(switchLogItems1Object);
		}
		auto allSwitchStepItemsNode = valueSwitchListItemsSwitchListItem["SwitchStepItems"]["SwitchStepItem"];
		for (auto valueSwitchListItemsSwitchListItemSwitchStepItemsSwitchStepItem : allSwitchStepItemsNode)
		{
			SwitchListItem::SwitchStepItem switchStepItemsObject;
			if(!valueSwitchListItemsSwitchListItemSwitchStepItemsSwitchStepItem["SimulatePhase"].isNull())
				switchStepItemsObject.simulatePhase = valueSwitchListItemsSwitchListItemSwitchStepItemsSwitchStepItem["SimulatePhase"].asString();
			if(!valueSwitchListItemsSwitchListItemSwitchStepItemsSwitchStepItem["StepName"].isNull())
				switchStepItemsObject.stepName = valueSwitchListItemsSwitchListItemSwitchStepItemsSwitchStepItem["StepName"].asString();
			if(!valueSwitchListItemsSwitchListItemSwitchStepItemsSwitchStepItem["StartTime"].isNull())
				switchStepItemsObject.startTime = valueSwitchListItemsSwitchListItemSwitchStepItemsSwitchStepItem["StartTime"].asString();
			if(!valueSwitchListItemsSwitchListItemSwitchStepItemsSwitchStepItem["EndTime"].isNull())
				switchStepItemsObject.endTime = valueSwitchListItemsSwitchListItemSwitchStepItemsSwitchStepItem["EndTime"].asString();
			if(!valueSwitchListItemsSwitchListItemSwitchStepItemsSwitchStepItem["TimeCost"].isNull())
				switchStepItemsObject.timeCost = valueSwitchListItemsSwitchListItemSwitchStepItemsSwitchStepItem["TimeCost"].asString();
			if(!valueSwitchListItemsSwitchListItemSwitchStepItemsSwitchStepItem["IsSuccess"].isNull())
				switchStepItemsObject.isSuccess = valueSwitchListItemsSwitchListItemSwitchStepItemsSwitchStepItem["IsSuccess"].asString();
			if(!valueSwitchListItemsSwitchListItemSwitchStepItemsSwitchStepItem["DBNodeId"].isNull())
				switchStepItemsObject.dBNodeId = valueSwitchListItemsSwitchListItemSwitchStepItemsSwitchStepItem["DBNodeId"].asString();
			switchListItemsObject.switchStepItems.push_back(switchStepItemsObject);
		}
		auto allDBNodeCrashList = value["DBNodeCrashList"]["dbNodeCrashList"];
		for (auto value : allDBNodeCrashList)
			switchListItemsObject.dBNodeCrashList.push_back(value.asString());
		switchListItems_.push_back(switchListItemsObject);
	}
	auto allSwitchLogItemsNode = value["SwitchLogItems"]["SwitchLogItem"];
	for (auto valueSwitchLogItemsSwitchLogItem : allSwitchLogItemsNode)
	{
		SwitchLogItem3 switchLogItemsObject;
		if(!valueSwitchLogItemsSwitchLogItem["SimulateListId"].isNull())
			switchLogItemsObject.simulateListId = valueSwitchLogItemsSwitchLogItem["SimulateListId"].asString();
		if(!valueSwitchLogItemsSwitchLogItem["Simulatecode"].isNull())
			switchLogItemsObject.simulatecode = valueSwitchLogItemsSwitchLogItem["Simulatecode"].asString();
		if(!valueSwitchLogItemsSwitchLogItem["DBInstanceId"].isNull())
			switchLogItemsObject.dBInstanceId = valueSwitchLogItemsSwitchLogItem["DBInstanceId"].asString();
		if(!valueSwitchLogItemsSwitchLogItem["SrcIpPort"].isNull())
			switchLogItemsObject.srcIpPort = valueSwitchLogItemsSwitchLogItem["SrcIpPort"].asString();
		if(!valueSwitchLogItemsSwitchLogItem["SrcDbType"].isNull())
			switchLogItemsObject.srcDbType = valueSwitchLogItemsSwitchLogItem["SrcDbType"].asString();
		if(!valueSwitchLogItemsSwitchLogItem["DstIpPort"].isNull())
			switchLogItemsObject.dstIpPort = valueSwitchLogItemsSwitchLogItem["DstIpPort"].asString();
		if(!valueSwitchLogItemsSwitchLogItem["DstDbType"].isNull())
			switchLogItemsObject.dstDbType = valueSwitchLogItemsSwitchLogItem["DstDbType"].asString();
		if(!valueSwitchLogItemsSwitchLogItem["SimulateStatus"].isNull())
			switchLogItemsObject.simulateStatus = valueSwitchLogItemsSwitchLogItem["SimulateStatus"].asString();
		if(!valueSwitchLogItemsSwitchLogItem["EventStartTime"].isNull())
			switchLogItemsObject.eventStartTime = valueSwitchLogItemsSwitchLogItem["EventStartTime"].asString();
		if(!valueSwitchLogItemsSwitchLogItem["EventFinishTime"].isNull())
			switchLogItemsObject.eventFinishTime = valueSwitchLogItemsSwitchLogItem["EventFinishTime"].asString();
		auto allSwitchStepItems4Node = valueSwitchLogItemsSwitchLogItem["SwitchStepItems"]["SwitchStepItem"];
		for (auto valueSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchStepItem : allSwitchStepItems4Node)
		{
			SwitchLogItem3::SwitchStepItem5 switchStepItems4Object;
			if(!valueSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchStepItem["StepName"].isNull())
				switchStepItems4Object.stepName = valueSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchStepItem["StepName"].asString();
			if(!valueSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchStepItem["StepMsg"].isNull())
				switchStepItems4Object.stepMsg = valueSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchStepItem["StepMsg"].asString();
			if(!valueSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchStepItem["StartTime"].isNull())
				switchStepItems4Object.startTime = valueSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchStepItem["StartTime"].asString();
			if(!valueSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchStepItem["EndTime"].isNull())
				switchStepItems4Object.endTime = valueSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchStepItem["EndTime"].asString();
			if(!valueSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchStepItem["TimeCost"].isNull())
				switchStepItems4Object.timeCost = valueSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchStepItem["TimeCost"].asString();
			if(!valueSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchStepItem["IsSuccess"].isNull())
				switchStepItems4Object.isSuccess = valueSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchStepItem["IsSuccess"].asString();
			if(!valueSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchStepItem["SimulatePhase"].isNull())
				switchStepItems4Object.simulatePhase = valueSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchStepItem["SimulatePhase"].asString();
			if(!valueSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchStepItem["DBNodeId"].isNull())
				switchStepItems4Object.dBNodeId = valueSwitchLogItemsSwitchLogItemSwitchStepItemsSwitchStepItem["DBNodeId"].asString();
			switchLogItemsObject.switchStepItems4.push_back(switchStepItems4Object);
		}
		switchLogItems_.push_back(switchLogItemsObject);
	}
	if(!value["TotalRecords"].isNull())
		totalRecords_ = std::stoi(value["TotalRecords"].asString());
	if(!value["ItemsNumbers"].isNull())
		itemsNumbers_ = std::stoi(value["ItemsNumbers"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["DBInstanceName"].isNull())
		dBInstanceName_ = value["DBInstanceName"].asString();
	if(!value["DBInstanceType"].isNull())
		dBInstanceType_ = value["DBInstanceType"].asString();
	if(!value["HaStatus"].isNull())
		haStatus_ = std::stoi(value["HaStatus"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeDBLogFilesResult::getItemsNumbers()const
{
	return itemsNumbers_;
}

std::vector<DescribeDBLogFilesResult::HaSwitchLogItem> DescribeDBLogFilesResult::getHaLogItems()const
{
	return haLogItems_;
}

int DescribeDBLogFilesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDBLogFilesResult::getPageNumber()const
{
	return pageNumber_;
}

int DescribeDBLogFilesResult::getHaStatus()const
{
	return haStatus_;
}

int DescribeDBLogFilesResult::getTotalRecords()const
{
	return totalRecords_;
}

std::string DescribeDBLogFilesResult::getDBInstanceType()const
{
	return dBInstanceType_;
}

std::vector<DescribeDBLogFilesResult::SwitchListItem> DescribeDBLogFilesResult::getSwitchListItems()const
{
	return switchListItems_;
}

std::vector<DescribeDBLogFilesResult::SwitchLogItem3> DescribeDBLogFilesResult::getSwitchLogItems()const
{
	return switchLogItems_;
}

std::string DescribeDBLogFilesResult::getDBInstanceName()const
{
	return dBInstanceName_;
}

