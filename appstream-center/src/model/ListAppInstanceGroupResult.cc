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

#include <alibabacloud/appstream-center/model/ListAppInstanceGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Appstream_center;
using namespace AlibabaCloud::Appstream_center::Model;

ListAppInstanceGroupResult::ListAppInstanceGroupResult() :
	ServiceResult()
{}

ListAppInstanceGroupResult::ListAppInstanceGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAppInstanceGroupResult::~ListAppInstanceGroupResult()
{}

void ListAppInstanceGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAppInstanceGroupModelsNode = value["AppInstanceGroupModels"]["data"];
	for (auto valueAppInstanceGroupModelsdata : allAppInstanceGroupModelsNode)
	{
		Data appInstanceGroupModelsObject;
		if(!valueAppInstanceGroupModelsdata["AppCenterImageId"].isNull())
			appInstanceGroupModelsObject.appCenterImageId = valueAppInstanceGroupModelsdata["AppCenterImageId"].asString();
		if(!valueAppInstanceGroupModelsdata["AliyunImageId"].isNull())
			appInstanceGroupModelsObject.aliyunImageId = valueAppInstanceGroupModelsdata["AliyunImageId"].asString();
		if(!valueAppInstanceGroupModelsdata["RegionId"].isNull())
			appInstanceGroupModelsObject.regionId = valueAppInstanceGroupModelsdata["RegionId"].asString();
		if(!valueAppInstanceGroupModelsdata["ProductType"].isNull())
			appInstanceGroupModelsObject.productType = valueAppInstanceGroupModelsdata["ProductType"].asString();
		if(!valueAppInstanceGroupModelsdata["AppInstanceType"].isNull())
			appInstanceGroupModelsObject.appInstanceType = valueAppInstanceGroupModelsdata["AppInstanceType"].asString();
		if(!valueAppInstanceGroupModelsdata["AppInstanceGroupId"].isNull())
			appInstanceGroupModelsObject.appInstanceGroupId = valueAppInstanceGroupModelsdata["AppInstanceGroupId"].asString();
		if(!valueAppInstanceGroupModelsdata["Cpu"].isNull())
			appInstanceGroupModelsObject.cpu = valueAppInstanceGroupModelsdata["Cpu"].asString();
		if(!valueAppInstanceGroupModelsdata["Gpu"].isNull())
			appInstanceGroupModelsObject.gpu = valueAppInstanceGroupModelsdata["Gpu"].asString();
		if(!valueAppInstanceGroupModelsdata["Memory"].isNull())
			appInstanceGroupModelsObject.memory = std::stol(valueAppInstanceGroupModelsdata["Memory"].asString());
		if(!valueAppInstanceGroupModelsdata["Amount"].isNull())
			appInstanceGroupModelsObject.amount = std::stoi(valueAppInstanceGroupModelsdata["Amount"].asString());
		if(!valueAppInstanceGroupModelsdata["MinAmount"].isNull())
			appInstanceGroupModelsObject.minAmount = std::stoi(valueAppInstanceGroupModelsdata["MinAmount"].asString());
		if(!valueAppInstanceGroupModelsdata["MaxAmount"].isNull())
			appInstanceGroupModelsObject.maxAmount = std::stoi(valueAppInstanceGroupModelsdata["MaxAmount"].asString());
		if(!valueAppInstanceGroupModelsdata["ChargeType"].isNull())
			appInstanceGroupModelsObject.chargeType = valueAppInstanceGroupModelsdata["ChargeType"].asString();
		if(!valueAppInstanceGroupModelsdata["GmtCreate"].isNull())
			appInstanceGroupModelsObject.gmtCreate = valueAppInstanceGroupModelsdata["GmtCreate"].asString();
		if(!valueAppInstanceGroupModelsdata["Status"].isNull())
			appInstanceGroupModelsObject.status = valueAppInstanceGroupModelsdata["Status"].asString();
		if(!valueAppInstanceGroupModelsdata["SpecId"].isNull())
			appInstanceGroupModelsObject.specId = valueAppInstanceGroupModelsdata["SpecId"].asString();
		if(!valueAppInstanceGroupModelsdata["SessionTimeout"].isNull())
			appInstanceGroupModelsObject.sessionTimeout = valueAppInstanceGroupModelsdata["SessionTimeout"].asString();
		if(!valueAppInstanceGroupModelsdata["AppInstanceGroupName"].isNull())
			appInstanceGroupModelsObject.appInstanceGroupName = valueAppInstanceGroupModelsdata["AppInstanceGroupName"].asString();
		if(!valueAppInstanceGroupModelsdata["ExpiredTime"].isNull())
			appInstanceGroupModelsObject.expiredTime = valueAppInstanceGroupModelsdata["ExpiredTime"].asString();
		if(!valueAppInstanceGroupModelsdata["OsType"].isNull())
			appInstanceGroupModelsObject.osType = valueAppInstanceGroupModelsdata["OsType"].asString();
		if(!valueAppInstanceGroupModelsdata["ResourceStatus"].isNull())
			appInstanceGroupModelsObject.resourceStatus = valueAppInstanceGroupModelsdata["ResourceStatus"].asString();
		if(!valueAppInstanceGroupModelsdata["AppPolicyId"].isNull())
			appInstanceGroupModelsObject.appPolicyId = valueAppInstanceGroupModelsdata["AppPolicyId"].asString();
		if(!valueAppInstanceGroupModelsdata["ChargeResourceMode"].isNull())
			appInstanceGroupModelsObject.chargeResourceMode = valueAppInstanceGroupModelsdata["ChargeResourceMode"].asString();
		auto allAppsNode = valueAppInstanceGroupModelsdata["Apps"]["appsItem"];
		for (auto valueAppInstanceGroupModelsdataAppsappsItem : allAppsNode)
		{
			Data::AppsItem appsObject;
			if(!valueAppInstanceGroupModelsdataAppsappsItem["AppId"].isNull())
				appsObject.appId = valueAppInstanceGroupModelsdataAppsappsItem["AppId"].asString();
			if(!valueAppInstanceGroupModelsdataAppsappsItem["AppName"].isNull())
				appsObject.appName = valueAppInstanceGroupModelsdataAppsappsItem["AppName"].asString();
			if(!valueAppInstanceGroupModelsdataAppsappsItem["AppVersion"].isNull())
				appsObject.appVersion = valueAppInstanceGroupModelsdataAppsappsItem["AppVersion"].asString();
			if(!valueAppInstanceGroupModelsdataAppsappsItem["AppVersionName"].isNull())
				appsObject.appVersionName = valueAppInstanceGroupModelsdataAppsappsItem["AppVersionName"].asString();
			if(!valueAppInstanceGroupModelsdataAppsappsItem["AppIcon"].isNull())
				appsObject.appIcon = valueAppInstanceGroupModelsdataAppsappsItem["AppIcon"].asString();
			appInstanceGroupModelsObject.apps.push_back(appsObject);
		}
		auto allNodePoolNode = valueAppInstanceGroupModelsdata["NodePool"]["node"];
		for (auto valueAppInstanceGroupModelsdataNodePoolnode : allNodePoolNode)
		{
			Data::Node nodePoolObject;
			if(!valueAppInstanceGroupModelsdataNodePoolnode["NodePoolId"].isNull())
				nodePoolObject.nodePoolId = valueAppInstanceGroupModelsdataNodePoolnode["NodePoolId"].asString();
			if(!valueAppInstanceGroupModelsdataNodePoolnode["NodeInstanceType"].isNull())
				nodePoolObject.nodeInstanceType = valueAppInstanceGroupModelsdataNodePoolnode["NodeInstanceType"].asString();
			if(!valueAppInstanceGroupModelsdataNodePoolnode["NodeAmount"].isNull())
				nodePoolObject.nodeAmount = std::stoi(valueAppInstanceGroupModelsdataNodePoolnode["NodeAmount"].asString());
			if(!valueAppInstanceGroupModelsdataNodePoolnode["NodeUsed"].isNull())
				nodePoolObject.nodeUsed = std::stoi(valueAppInstanceGroupModelsdataNodePoolnode["NodeUsed"].asString());
			if(!valueAppInstanceGroupModelsdataNodePoolnode["NodeCapacity"].isNull())
				nodePoolObject.nodeCapacity = std::stoi(valueAppInstanceGroupModelsdataNodePoolnode["NodeCapacity"].asString());
			if(!valueAppInstanceGroupModelsdataNodePoolnode["ScalingNodeAmount"].isNull())
				nodePoolObject.scalingNodeAmount = std::stoi(valueAppInstanceGroupModelsdataNodePoolnode["ScalingNodeAmount"].asString());
			if(!valueAppInstanceGroupModelsdataNodePoolnode["ScalingNodeUsed"].isNull())
				nodePoolObject.scalingNodeUsed = std::stoi(valueAppInstanceGroupModelsdataNodePoolnode["ScalingNodeUsed"].asString());
			if(!valueAppInstanceGroupModelsdataNodePoolnode["StrategyType"].isNull())
				nodePoolObject.strategyType = valueAppInstanceGroupModelsdataNodePoolnode["StrategyType"].asString();
			if(!valueAppInstanceGroupModelsdataNodePoolnode["Amount"].isNull())
				nodePoolObject.amount = std::stoi(valueAppInstanceGroupModelsdataNodePoolnode["Amount"].asString());
			if(!valueAppInstanceGroupModelsdataNodePoolnode["MaxScalingAmount"].isNull())
				nodePoolObject.maxScalingAmount = std::stoi(valueAppInstanceGroupModelsdataNodePoolnode["MaxScalingAmount"].asString());
			if(!valueAppInstanceGroupModelsdataNodePoolnode["ScalingStep"].isNull())
				nodePoolObject.scalingStep = std::stoi(valueAppInstanceGroupModelsdataNodePoolnode["ScalingStep"].asString());
			if(!valueAppInstanceGroupModelsdataNodePoolnode["ScalingUsageThreshold"].isNull())
				nodePoolObject.scalingUsageThreshold = valueAppInstanceGroupModelsdataNodePoolnode["ScalingUsageThreshold"].asString();
			if(!valueAppInstanceGroupModelsdataNodePoolnode["ScalingDownAfterIdleMinutes"].isNull())
				nodePoolObject.scalingDownAfterIdleMinutes = std::stoi(valueAppInstanceGroupModelsdataNodePoolnode["ScalingDownAfterIdleMinutes"].asString());
			if(!valueAppInstanceGroupModelsdataNodePoolnode["StrategyDisableDate"].isNull())
				nodePoolObject.strategyDisableDate = valueAppInstanceGroupModelsdataNodePoolnode["StrategyDisableDate"].asString();
			if(!valueAppInstanceGroupModelsdataNodePoolnode["StrategyEnableDate"].isNull())
				nodePoolObject.strategyEnableDate = valueAppInstanceGroupModelsdataNodePoolnode["StrategyEnableDate"].asString();
			if(!valueAppInstanceGroupModelsdataNodePoolnode["WarmUp"].isNull())
				nodePoolObject.warmUp = valueAppInstanceGroupModelsdataNodePoolnode["WarmUp"].asString() == "true";
			if(!valueAppInstanceGroupModelsdataNodePoolnode["NodeTypeName"].isNull())
				nodePoolObject.nodeTypeName = valueAppInstanceGroupModelsdataNodePoolnode["NodeTypeName"].asString();
			auto allRecurrenceSchedulesNode = valueAppInstanceGroupModelsdataNodePoolnode["RecurrenceSchedules"]["RecurrenceSchedule"];
			for (auto valueAppInstanceGroupModelsdataNodePoolnodeRecurrenceSchedulesRecurrenceSchedule : allRecurrenceSchedulesNode)
			{
				Data::Node::RecurrenceSchedule recurrenceSchedulesObject;
				if(!valueAppInstanceGroupModelsdataNodePoolnodeRecurrenceSchedulesRecurrenceSchedule["RecurrenceType"].isNull())
					recurrenceSchedulesObject.recurrenceType = valueAppInstanceGroupModelsdataNodePoolnodeRecurrenceSchedulesRecurrenceSchedule["RecurrenceType"].asString();
				auto allTimerPeriodsNode = valueAppInstanceGroupModelsdataNodePoolnodeRecurrenceSchedulesRecurrenceSchedule["TimerPeriods"]["TimerPeriod"];
				for (auto valueAppInstanceGroupModelsdataNodePoolnodeRecurrenceSchedulesRecurrenceScheduleTimerPeriodsTimerPeriod : allTimerPeriodsNode)
				{
					Data::Node::RecurrenceSchedule::TimerPeriod timerPeriodsObject;
					if(!valueAppInstanceGroupModelsdataNodePoolnodeRecurrenceSchedulesRecurrenceScheduleTimerPeriodsTimerPeriod["Amount"].isNull())
						timerPeriodsObject.amount = std::stoi(valueAppInstanceGroupModelsdataNodePoolnodeRecurrenceSchedulesRecurrenceScheduleTimerPeriodsTimerPeriod["Amount"].asString());
					if(!valueAppInstanceGroupModelsdataNodePoolnodeRecurrenceSchedulesRecurrenceScheduleTimerPeriodsTimerPeriod["EndTime"].isNull())
						timerPeriodsObject.endTime = valueAppInstanceGroupModelsdataNodePoolnodeRecurrenceSchedulesRecurrenceScheduleTimerPeriodsTimerPeriod["EndTime"].asString();
					if(!valueAppInstanceGroupModelsdataNodePoolnodeRecurrenceSchedulesRecurrenceScheduleTimerPeriodsTimerPeriod["StartTime"].isNull())
						timerPeriodsObject.startTime = valueAppInstanceGroupModelsdataNodePoolnodeRecurrenceSchedulesRecurrenceScheduleTimerPeriodsTimerPeriod["StartTime"].asString();
					recurrenceSchedulesObject.timerPeriods.push_back(timerPeriodsObject);
				}
				auto allRecurrenceValues = value["RecurrenceValues"]["RecurrenceValue"];
				for (auto value : allRecurrenceValues)
					recurrenceSchedulesObject.recurrenceValues.push_back(value.asString());
				nodePoolObject.recurrenceSchedules.push_back(recurrenceSchedulesObject);
			}
			appInstanceGroupModelsObject.nodePool.push_back(nodePoolObject);
		}
		auto otaInfoNode = value["OtaInfo"];
		if(!otaInfoNode["OtaVersion"].isNull())
			appInstanceGroupModelsObject.otaInfo.otaVersion = otaInfoNode["OtaVersion"].asString();
		if(!otaInfoNode["NewOtaVersion"].isNull())
			appInstanceGroupModelsObject.otaInfo.newOtaVersion = otaInfoNode["NewOtaVersion"].asString();
		if(!otaInfoNode["TaskId"].isNull())
			appInstanceGroupModelsObject.otaInfo.taskId = otaInfoNode["TaskId"].asString();
		appInstanceGroupModels_.push_back(appInstanceGroupModelsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int ListAppInstanceGroupResult::getTotalCount()const
{
	return totalCount_;
}

int ListAppInstanceGroupResult::getPageSize()const
{
	return pageSize_;
}

int ListAppInstanceGroupResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<ListAppInstanceGroupResult::Data> ListAppInstanceGroupResult::getAppInstanceGroupModels()const
{
	return appInstanceGroupModels_;
}

