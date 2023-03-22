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

#include <alibabacloud/appstream-center/model/GetAppInstanceGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Appstream_center;
using namespace AlibabaCloud::Appstream_center::Model;

GetAppInstanceGroupResult::GetAppInstanceGroupResult() :
	ServiceResult()
{}

GetAppInstanceGroupResult::GetAppInstanceGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAppInstanceGroupResult::~GetAppInstanceGroupResult()
{}

void GetAppInstanceGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto appInstanceGroupModelsNode = value["AppInstanceGroupModels"];
	if(!appInstanceGroupModelsNode["AppCenterImageId"].isNull())
		appInstanceGroupModels_.appCenterImageId = appInstanceGroupModelsNode["AppCenterImageId"].asString();
	if(!appInstanceGroupModelsNode["AliyunImageId"].isNull())
		appInstanceGroupModels_.aliyunImageId = appInstanceGroupModelsNode["AliyunImageId"].asString();
	if(!appInstanceGroupModelsNode["RegionId"].isNull())
		appInstanceGroupModels_.regionId = appInstanceGroupModelsNode["RegionId"].asString();
	if(!appInstanceGroupModelsNode["ProductType"].isNull())
		appInstanceGroupModels_.productType = appInstanceGroupModelsNode["ProductType"].asString();
	if(!appInstanceGroupModelsNode["AppInstanceType"].isNull())
		appInstanceGroupModels_.appInstanceType = appInstanceGroupModelsNode["AppInstanceType"].asString();
	if(!appInstanceGroupModelsNode["AppInstanceGroupId"].isNull())
		appInstanceGroupModels_.appInstanceGroupId = appInstanceGroupModelsNode["AppInstanceGroupId"].asString();
	if(!appInstanceGroupModelsNode["Cpu"].isNull())
		appInstanceGroupModels_.cpu = appInstanceGroupModelsNode["Cpu"].asString();
	if(!appInstanceGroupModelsNode["Gpu"].isNull())
		appInstanceGroupModels_.gpu = appInstanceGroupModelsNode["Gpu"].asString();
	if(!appInstanceGroupModelsNode["Memory"].isNull())
		appInstanceGroupModels_.memory = std::stol(appInstanceGroupModelsNode["Memory"].asString());
	if(!appInstanceGroupModelsNode["Amount"].isNull())
		appInstanceGroupModels_.amount = std::stoi(appInstanceGroupModelsNode["Amount"].asString());
	if(!appInstanceGroupModelsNode["MinAmount"].isNull())
		appInstanceGroupModels_.minAmount = std::stoi(appInstanceGroupModelsNode["MinAmount"].asString());
	if(!appInstanceGroupModelsNode["MaxAmount"].isNull())
		appInstanceGroupModels_.maxAmount = std::stoi(appInstanceGroupModelsNode["MaxAmount"].asString());
	if(!appInstanceGroupModelsNode["ChargeType"].isNull())
		appInstanceGroupModels_.chargeType = appInstanceGroupModelsNode["ChargeType"].asString();
	if(!appInstanceGroupModelsNode["GmtCreate"].isNull())
		appInstanceGroupModels_.gmtCreate = appInstanceGroupModelsNode["GmtCreate"].asString();
	if(!appInstanceGroupModelsNode["Status"].isNull())
		appInstanceGroupModels_.status = appInstanceGroupModelsNode["Status"].asString();
	if(!appInstanceGroupModelsNode["SpecId"].isNull())
		appInstanceGroupModels_.specId = appInstanceGroupModelsNode["SpecId"].asString();
	if(!appInstanceGroupModelsNode["SessionTimeout"].isNull())
		appInstanceGroupModels_.sessionTimeout = appInstanceGroupModelsNode["SessionTimeout"].asString();
	if(!appInstanceGroupModelsNode["AppInstanceGroupName"].isNull())
		appInstanceGroupModels_.appInstanceGroupName = appInstanceGroupModelsNode["AppInstanceGroupName"].asString();
	if(!appInstanceGroupModelsNode["ExpiredTime"].isNull())
		appInstanceGroupModels_.expiredTime = appInstanceGroupModelsNode["ExpiredTime"].asString();
	if(!appInstanceGroupModelsNode["OsType"].isNull())
		appInstanceGroupModels_.osType = appInstanceGroupModelsNode["OsType"].asString();
	if(!appInstanceGroupModelsNode["AppCenterImageName"].isNull())
		appInstanceGroupModels_.appCenterImageName = appInstanceGroupModelsNode["AppCenterImageName"].asString();
	if(!appInstanceGroupModelsNode["ResourceStatus"].isNull())
		appInstanceGroupModels_.resourceStatus = appInstanceGroupModelsNode["ResourceStatus"].asString();
	auto allAppsNode = appInstanceGroupModelsNode["Apps"]["appsItem"];
	for (auto appInstanceGroupModelsNodeAppsappsItem : allAppsNode)
	{
		AppInstanceGroupModels::AppsItem appsItemObject;
		if(!appInstanceGroupModelsNodeAppsappsItem["AppId"].isNull())
			appsItemObject.appId = appInstanceGroupModelsNodeAppsappsItem["AppId"].asString();
		if(!appInstanceGroupModelsNodeAppsappsItem["AppName"].isNull())
			appsItemObject.appName = appInstanceGroupModelsNodeAppsappsItem["AppName"].asString();
		appInstanceGroupModels_.apps.push_back(appsItemObject);
	}
	auto allNodePoolNode = appInstanceGroupModelsNode["NodePool"]["node"];
	for (auto appInstanceGroupModelsNodeNodePoolnode : allNodePoolNode)
	{
		AppInstanceGroupModels::Node nodeObject;
		if(!appInstanceGroupModelsNodeNodePoolnode["NodePoolId"].isNull())
			nodeObject.nodePoolId = appInstanceGroupModelsNodeNodePoolnode["NodePoolId"].asString();
		if(!appInstanceGroupModelsNodeNodePoolnode["NodeInstanceType"].isNull())
			nodeObject.nodeInstanceType = appInstanceGroupModelsNodeNodePoolnode["NodeInstanceType"].asString();
		if(!appInstanceGroupModelsNodeNodePoolnode["NodeAmount"].isNull())
			nodeObject.nodeAmount = std::stoi(appInstanceGroupModelsNodeNodePoolnode["NodeAmount"].asString());
		if(!appInstanceGroupModelsNodeNodePoolnode["NodeUsed"].isNull())
			nodeObject.nodeUsed = std::stoi(appInstanceGroupModelsNodeNodePoolnode["NodeUsed"].asString());
		if(!appInstanceGroupModelsNodeNodePoolnode["NodeCapacity"].isNull())
			nodeObject.nodeCapacity = std::stoi(appInstanceGroupModelsNodeNodePoolnode["NodeCapacity"].asString());
		if(!appInstanceGroupModelsNodeNodePoolnode["ScalingNodeAmount"].isNull())
			nodeObject.scalingNodeAmount = std::stoi(appInstanceGroupModelsNodeNodePoolnode["ScalingNodeAmount"].asString());
		if(!appInstanceGroupModelsNodeNodePoolnode["ScalingNodeUsed"].isNull())
			nodeObject.scalingNodeUsed = std::stoi(appInstanceGroupModelsNodeNodePoolnode["ScalingNodeUsed"].asString());
		if(!appInstanceGroupModelsNodeNodePoolnode["StrategyType"].isNull())
			nodeObject.strategyType = appInstanceGroupModelsNodeNodePoolnode["StrategyType"].asString();
		if(!appInstanceGroupModelsNodeNodePoolnode["Amount"].isNull())
			nodeObject.amount = std::stoi(appInstanceGroupModelsNodeNodePoolnode["Amount"].asString());
		if(!appInstanceGroupModelsNodeNodePoolnode["MaxScalingAmount"].isNull())
			nodeObject.maxScalingAmount = std::stoi(appInstanceGroupModelsNodeNodePoolnode["MaxScalingAmount"].asString());
		if(!appInstanceGroupModelsNodeNodePoolnode["ScalingStep"].isNull())
			nodeObject.scalingStep = std::stoi(appInstanceGroupModelsNodeNodePoolnode["ScalingStep"].asString());
		if(!appInstanceGroupModelsNodeNodePoolnode["ScalingUsageThreshold"].isNull())
			nodeObject.scalingUsageThreshold = appInstanceGroupModelsNodeNodePoolnode["ScalingUsageThreshold"].asString();
		if(!appInstanceGroupModelsNodeNodePoolnode["ScalingDownAfterIdleMinutes"].isNull())
			nodeObject.scalingDownAfterIdleMinutes = std::stoi(appInstanceGroupModelsNodeNodePoolnode["ScalingDownAfterIdleMinutes"].asString());
		if(!appInstanceGroupModelsNodeNodePoolnode["StrategyDisableDate"].isNull())
			nodeObject.strategyDisableDate = appInstanceGroupModelsNodeNodePoolnode["StrategyDisableDate"].asString();
		if(!appInstanceGroupModelsNodeNodePoolnode["StrategyEnableDate"].isNull())
			nodeObject.strategyEnableDate = appInstanceGroupModelsNodeNodePoolnode["StrategyEnableDate"].asString();
		if(!appInstanceGroupModelsNodeNodePoolnode["WarmUp"].isNull())
			nodeObject.warmUp = appInstanceGroupModelsNodeNodePoolnode["WarmUp"].asString() == "true";
		if(!appInstanceGroupModelsNodeNodePoolnode["NodeTypeName"].isNull())
			nodeObject.nodeTypeName = appInstanceGroupModelsNodeNodePoolnode["NodeTypeName"].asString();
		auto allRecurrenceSchedulesNode = appInstanceGroupModelsNodeNodePoolnode["RecurrenceSchedules"]["RecurrenceSchedule"];
		for (auto appInstanceGroupModelsNodeNodePoolnodeRecurrenceSchedulesRecurrenceSchedule : allRecurrenceSchedulesNode)
		{
			AppInstanceGroupModels::Node::RecurrenceSchedule recurrenceSchedulesObject;
			if(!appInstanceGroupModelsNodeNodePoolnodeRecurrenceSchedulesRecurrenceSchedule["RecurrenceType"].isNull())
				recurrenceSchedulesObject.recurrenceType = appInstanceGroupModelsNodeNodePoolnodeRecurrenceSchedulesRecurrenceSchedule["RecurrenceType"].asString();
			auto allTimerPeriodsNode = appInstanceGroupModelsNodeNodePoolnodeRecurrenceSchedulesRecurrenceSchedule["TimerPeriods"]["TimerPeriod"];
			for (auto appInstanceGroupModelsNodeNodePoolnodeRecurrenceSchedulesRecurrenceScheduleTimerPeriodsTimerPeriod : allTimerPeriodsNode)
			{
				AppInstanceGroupModels::Node::RecurrenceSchedule::TimerPeriod timerPeriodsObject;
				if(!appInstanceGroupModelsNodeNodePoolnodeRecurrenceSchedulesRecurrenceScheduleTimerPeriodsTimerPeriod["Amount"].isNull())
					timerPeriodsObject.amount = std::stoi(appInstanceGroupModelsNodeNodePoolnodeRecurrenceSchedulesRecurrenceScheduleTimerPeriodsTimerPeriod["Amount"].asString());
				if(!appInstanceGroupModelsNodeNodePoolnodeRecurrenceSchedulesRecurrenceScheduleTimerPeriodsTimerPeriod["EndTime"].isNull())
					timerPeriodsObject.endTime = appInstanceGroupModelsNodeNodePoolnodeRecurrenceSchedulesRecurrenceScheduleTimerPeriodsTimerPeriod["EndTime"].asString();
				if(!appInstanceGroupModelsNodeNodePoolnodeRecurrenceSchedulesRecurrenceScheduleTimerPeriodsTimerPeriod["StartTime"].isNull())
					timerPeriodsObject.startTime = appInstanceGroupModelsNodeNodePoolnodeRecurrenceSchedulesRecurrenceScheduleTimerPeriodsTimerPeriod["StartTime"].asString();
				recurrenceSchedulesObject.timerPeriods.push_back(timerPeriodsObject);
			}
			auto allRecurrenceValues = value["RecurrenceValues"]["RecurrenceValue"];
			for (auto value : allRecurrenceValues)
				recurrenceSchedulesObject.recurrenceValues.push_back(value.asString());
			nodeObject.recurrenceSchedules.push_back(recurrenceSchedulesObject);
		}
		appInstanceGroupModels_.nodePool.push_back(nodeObject);
	}
	auto otaInfoNode = appInstanceGroupModelsNode["OtaInfo"];
	if(!otaInfoNode["OtaVersion"].isNull())
		appInstanceGroupModels_.otaInfo.otaVersion = otaInfoNode["OtaVersion"].asString();
	if(!otaInfoNode["NewOtaVersion"].isNull())
		appInstanceGroupModels_.otaInfo.newOtaVersion = otaInfoNode["NewOtaVersion"].asString();
	if(!otaInfoNode["TaskId"].isNull())
		appInstanceGroupModels_.otaInfo.taskId = otaInfoNode["TaskId"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int GetAppInstanceGroupResult::getTotalCount()const
{
	return totalCount_;
}

int GetAppInstanceGroupResult::getPageSize()const
{
	return pageSize_;
}

int GetAppInstanceGroupResult::getPageNumber()const
{
	return pageNumber_;
}

GetAppInstanceGroupResult::AppInstanceGroupModels GetAppInstanceGroupResult::getAppInstanceGroupModels()const
{
	return appInstanceGroupModels_;
}

