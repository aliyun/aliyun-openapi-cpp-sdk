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

#include <alibabacloud/emr/model/ListScalingTaskGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

ListScalingTaskGroupResult::ListScalingTaskGroupResult() :
	ServiceResult()
{}

ListScalingTaskGroupResult::ListScalingTaskGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListScalingTaskGroupResult::~ListScalingTaskGroupResult()
{}

void ListScalingTaskGroupResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), value, errs);
	setRequestId((*value)["RequestId"].asString());
	auto allGroupList = value["GroupList"]["Group"];
	for (auto value : allGroupList)
	{
		Group groupListObject;
		if(!value["ScalingGroupId"].isNull())
			groupListObject.scalingGroupId = value["ScalingGroupId"].asString();
		if(!value["HostGroupId"].isNull())
			groupListObject.hostGroupId = value["HostGroupId"].asString();
		if(!value["MinSize"].isNull())
			groupListObject.minSize = std::stoi(value["MinSize"].asString());
		if(!value["MaxSize"].isNull())
			groupListObject.maxSize = std::stoi(value["MaxSize"].asString());
		if(!value["DefaultCooldown"].isNull())
			groupListObject.defaultCooldown = std::stoi(value["DefaultCooldown"].asString());
		if(!value["ActiveRuleCategory"].isNull())
			groupListObject.activeRuleCategory = value["ActiveRuleCategory"].asString();
		if(!value["Status"].isNull())
			groupListObject.status = value["Status"].asString();
		if(!value["PayType"].isNull())
			groupListObject.payType = value["PayType"].asString();
		if(!value["DataDiskCategory"].isNull())
			groupListObject.dataDiskCategory = value["DataDiskCategory"].asString();
		if(!value["DataDiskSize"].isNull())
			groupListObject.dataDiskSize = std::stoi(value["DataDiskSize"].asString());
		if(!value["DataDiskCount"].isNull())
			groupListObject.dataDiskCount = std::stoi(value["DataDiskCount"].asString());
		if(!value["SysDiskCategory"].isNull())
			groupListObject.sysDiskCategory = value["SysDiskCategory"].asString();
		if(!value["SysDiskSize"].isNull())
			groupListObject.sysDiskSize = std::stoi(value["SysDiskSize"].asString());
		if(!value["CpuCount"].isNull())
			groupListObject.cpuCount = std::stoi(value["CpuCount"].asString());
		if(!value["MemSize"].isNull())
			groupListObject.memSize = std::stoi(value["MemSize"].asString());
		if(!value["SpotStrategy"].isNull())
			groupListObject.spotStrategy = value["SpotStrategy"].asString();
		auto allSpotPriceLimits = value["SpotPriceLimits"]["SpotPriceLimit"];
		for (auto value : allSpotPriceLimits)
		{
			Group::SpotPriceLimit spotPriceLimitsObject;
			if(!value["InstanceType"].isNull())
				spotPriceLimitsObject.instanceType = value["InstanceType"].asString();
			if(!value["PriceLimit"].isNull())
				spotPriceLimitsObject.priceLimit = std::stof(value["PriceLimit"].asString());
			groupListObject.spotPriceLimits.push_back(spotPriceLimitsObject);
		}
		auto allScalingRuleList = value["ScalingRuleList"]["ScalingRule"];
		for (auto value : allScalingRuleList)
		{
			Group::ScalingRule scalingRuleListObject;
			if(!value["Id"].isNull())
				scalingRuleListObject.id = value["Id"].asString();
			if(!value["RuleCategory"].isNull())
				scalingRuleListObject.ruleCategory = value["RuleCategory"].asString();
			if(!value["RuleName"].isNull())
				scalingRuleListObject.ruleName = value["RuleName"].asString();
			if(!value["AdjustmentType"].isNull())
				scalingRuleListObject.adjustmentType = value["AdjustmentType"].asString();
			if(!value["AdjustmentValue"].isNull())
				scalingRuleListObject.adjustmentValue = std::stoi(value["AdjustmentValue"].asString());
			if(!value["Cooldown"].isNull())
				scalingRuleListObject.cooldown = std::stoi(value["Cooldown"].asString());
			if(!value["Status"].isNull())
				scalingRuleListObject.status = value["Status"].asString();
			if(!value["LaunchTime"].isNull())
				scalingRuleListObject.launchTime = value["LaunchTime"].asString();
			if(!value["LaunchExpirationTime"].isNull())
				scalingRuleListObject.launchExpirationTime = std::stoi(value["LaunchExpirationTime"].asString());
			if(!value["RecurrenceType"].isNull())
				scalingRuleListObject.recurrenceType = value["RecurrenceType"].asString();
			if(!value["RecurrenceValue"].isNull())
				scalingRuleListObject.recurrenceValue = value["RecurrenceValue"].asString();
			if(!value["RecurrenceEndTime"].isNull())
				scalingRuleListObject.recurrenceEndTime = value["RecurrenceEndTime"].asString();
			auto schedulerTriggerNode = value["SchedulerTrigger"];
			if(!schedulerTriggerNode["LaunchTime"].isNull())
				scalingRuleListObject.schedulerTrigger.launchTime = std::stol(schedulerTriggerNode["LaunchTime"].asString());
			if(!schedulerTriggerNode["LaunchExpirationTime"].isNull())
				scalingRuleListObject.schedulerTrigger.launchExpirationTime = std::stoi(schedulerTriggerNode["LaunchExpirationTime"].asString());
			if(!schedulerTriggerNode["RecurrenceType"].isNull())
				scalingRuleListObject.schedulerTrigger.recurrenceType = schedulerTriggerNode["RecurrenceType"].asString();
			if(!schedulerTriggerNode["RecurrenceValue"].isNull())
				scalingRuleListObject.schedulerTrigger.recurrenceValue = schedulerTriggerNode["RecurrenceValue"].asString();
			if(!schedulerTriggerNode["RecurrenceEndTime"].isNull())
				scalingRuleListObject.schedulerTrigger.recurrenceEndTime = std::stol(schedulerTriggerNode["RecurrenceEndTime"].asString());
			auto cloudWatchTriggerNode = value["CloudWatchTrigger"];
			if(!cloudWatchTriggerNode["MetricName"].isNull())
				scalingRuleListObject.cloudWatchTrigger.metricName = cloudWatchTriggerNode["MetricName"].asString();
			if(!cloudWatchTriggerNode["Period"].isNull())
				scalingRuleListObject.cloudWatchTrigger.period = std::stoi(cloudWatchTriggerNode["Period"].asString());
			if(!cloudWatchTriggerNode["Statistics"].isNull())
				scalingRuleListObject.cloudWatchTrigger.statistics = cloudWatchTriggerNode["Statistics"].asString();
			if(!cloudWatchTriggerNode["ComparisonOperator"].isNull())
				scalingRuleListObject.cloudWatchTrigger.comparisonOperator = cloudWatchTriggerNode["ComparisonOperator"].asString();
			if(!cloudWatchTriggerNode["Threshold"].isNull())
				scalingRuleListObject.cloudWatchTrigger.threshold = cloudWatchTriggerNode["Threshold"].asString();
			if(!cloudWatchTriggerNode["EvaluationCount"].isNull())
				scalingRuleListObject.cloudWatchTrigger.evaluationCount = cloudWatchTriggerNode["EvaluationCount"].asString();
			if(!cloudWatchTriggerNode["Unit"].isNull())
				scalingRuleListObject.cloudWatchTrigger.unit = cloudWatchTriggerNode["Unit"].asString();
			if(!cloudWatchTriggerNode["MetricDisplayName"].isNull())
				scalingRuleListObject.cloudWatchTrigger.metricDisplayName = cloudWatchTriggerNode["MetricDisplayName"].asString();
			groupListObject.scalingRuleList.push_back(scalingRuleListObject);
		}
		auto scalingConfigNode = value["ScalingConfig"];
		if(!scalingConfigNode["PayType"].isNull())
			groupListObject.scalingConfig.payType = scalingConfigNode["PayType"].asString();
		if(!scalingConfigNode["DataDiskCategory"].isNull())
			groupListObject.scalingConfig.dataDiskCategory = scalingConfigNode["DataDiskCategory"].asString();
		if(!scalingConfigNode["DataDiskSize"].isNull())
			groupListObject.scalingConfig.dataDiskSize = std::stoi(scalingConfigNode["DataDiskSize"].asString());
		if(!scalingConfigNode["DataDiskCount"].isNull())
			groupListObject.scalingConfig.dataDiskCount = std::stoi(scalingConfigNode["DataDiskCount"].asString());
		if(!scalingConfigNode["SysDiskCategory"].isNull())
			groupListObject.scalingConfig.sysDiskCategory = scalingConfigNode["SysDiskCategory"].asString();
		if(!scalingConfigNode["SysDiskSize"].isNull())
			groupListObject.scalingConfig.sysDiskSize = std::stoi(scalingConfigNode["SysDiskSize"].asString());
		if(!scalingConfigNode["CpuCount"].isNull())
			groupListObject.scalingConfig.cpuCount = std::stoi(scalingConfigNode["CpuCount"].asString());
		if(!scalingConfigNode["MemSize"].isNull())
			groupListObject.scalingConfig.memSize = std::stoi(scalingConfigNode["MemSize"].asString());
		if(!scalingConfigNode["SpotStrategy"].isNull())
			groupListObject.scalingConfig.spotStrategy = scalingConfigNode["SpotStrategy"].asString();
		auto allSpotPriceLimits2 = value["SpotPriceLimits"]["SpotPriceLimit"];
		for (auto value : allSpotPriceLimits2)
		{
			Group::ScalingConfig::SpotPriceLimit3 spotPriceLimit3Object;
			if(!value["InstanceType"].isNull())
				spotPriceLimit3Object.instanceType = value["InstanceType"].asString();
			if(!value["PriceLimit"].isNull())
				spotPriceLimit3Object.priceLimit = std::stof(value["PriceLimit"].asString());
			groupListObject.scalingConfig.spotPriceLimits2.push_back(spotPriceLimit3Object);
		}
			auto allInstanceTypeList1 = scalingConfigNode["InstanceTypeList"]["InstanceType"];
			for (auto value : allInstanceTypeList1)
				groupListObject.scalingConfig.instanceTypeList1.push_back(value.asString());
		auto allInstanceTypeList = value["InstanceTypeList"]["InstanceType"];
		for (auto value : allInstanceTypeList)
			groupListObject.instanceTypeList.push_back(value.asString());
		groupList_.push_back(groupListObject);
	}

}

std::vector<ListScalingTaskGroupResult::Group> ListScalingTaskGroupResult::getGroupList()const
{
	return groupList_;
}

