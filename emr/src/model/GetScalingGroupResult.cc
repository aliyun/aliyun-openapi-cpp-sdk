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

#include <alibabacloud/emr/model/GetScalingGroupResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Emr;
using namespace AlibabaCloud::Emr::Model;

GetScalingGroupResult::GetScalingGroupResult() :
	ServiceResult()
{}

GetScalingGroupResult::GetScalingGroupResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetScalingGroupResult::~GetScalingGroupResult()
{}

void GetScalingGroupResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto scalingGroupNode = value["ScalingGroup"];
	if(!scalingGroupNode["Name"].isNull())
		scalingGroup_.name = scalingGroupNode["Name"].asString();
	if(!scalingGroupNode["Description"].isNull())
		scalingGroup_.description = scalingGroupNode["Description"].asString();
	if(!scalingGroupNode["ScalingGroupId"].isNull())
		scalingGroup_.scalingGroupId = scalingGroupNode["ScalingGroupId"].asString();
	if(!scalingGroupNode["ClusterId"].isNull())
		scalingGroup_.clusterId = scalingGroupNode["ClusterId"].asString();
	if(!scalingGroupNode["ActiveState"].isNull())
		scalingGroup_.activeState = scalingGroupNode["ActiveState"].asString();
	if(!scalingGroupNode["ConfigState"].isNull())
		scalingGroup_.configState = scalingGroupNode["ConfigState"].asString();
	auto allScalingRulesNode = scalingGroupNode["ScalingRules"]["ScalingRule"];
	for (auto scalingGroupNodeScalingRulesScalingRule : allScalingRulesNode)
	{
		ScalingGroup::ScalingRule scalingRuleObject;
		if(!scalingGroupNodeScalingRulesScalingRule["ScalingConfigBizId"].isNull())
			scalingRuleObject.scalingConfigBizId = scalingGroupNodeScalingRulesScalingRule["ScalingConfigBizId"].asString();
		if(!scalingGroupNodeScalingRulesScalingRule["RuleType"].isNull())
			scalingRuleObject.ruleType = scalingGroupNodeScalingRulesScalingRule["RuleType"].asString();
		if(!scalingGroupNodeScalingRulesScalingRule["RuleName"].isNull())
			scalingRuleObject.ruleName = scalingGroupNodeScalingRulesScalingRule["RuleName"].asString();
		if(!scalingGroupNodeScalingRulesScalingRule["CoolDownTime"].isNull())
			scalingRuleObject.coolDownTime = std::stoi(scalingGroupNodeScalingRulesScalingRule["CoolDownTime"].asString());
		if(!scalingGroupNodeScalingRulesScalingRule["AdjustmentType"].isNull())
			scalingRuleObject.adjustmentType = scalingGroupNodeScalingRulesScalingRule["AdjustmentType"].asString();
		if(!scalingGroupNodeScalingRulesScalingRule["AdjustmentValue"].isNull())
			scalingRuleObject.adjustmentValue = std::stoi(scalingGroupNodeScalingRulesScalingRule["AdjustmentValue"].asString());
		auto ruleParamNode = value["RuleParam"];
		if(!ruleParamNode["MetricName"].isNull())
			scalingRuleObject.ruleParam.metricName = ruleParamNode["MetricName"].asString();
		if(!ruleParamNode["Statistics"].isNull())
			scalingRuleObject.ruleParam.statistics = ruleParamNode["Statistics"].asString();
		if(!ruleParamNode["ComparisonOperator"].isNull())
			scalingRuleObject.ruleParam.comparisonOperator = ruleParamNode["ComparisonOperator"].asString();
		if(!ruleParamNode["Period"].isNull())
			scalingRuleObject.ruleParam.period = std::stoi(ruleParamNode["Period"].asString());
		if(!ruleParamNode["Threshold"].isNull())
			scalingRuleObject.ruleParam.threshold = std::stoi(ruleParamNode["Threshold"].asString());
		if(!ruleParamNode["EvaluationCount"].isNull())
			scalingRuleObject.ruleParam.evaluationCount = std::stoi(ruleParamNode["EvaluationCount"].asString());
		if(!ruleParamNode["RecurrenceType"].isNull())
			scalingRuleObject.ruleParam.recurrenceType = ruleParamNode["RecurrenceType"].asString();
		if(!ruleParamNode["RecurrenceValue"].isNull())
			scalingRuleObject.ruleParam.recurrenceValue = ruleParamNode["RecurrenceValue"].asString();
		if(!ruleParamNode["RecurrenceEndTime"].isNull())
			scalingRuleObject.ruleParam.recurrenceEndTime = ruleParamNode["RecurrenceEndTime"].asString();
		if(!ruleParamNode["LaunchTime"].isNull())
			scalingRuleObject.ruleParam.launchTime = ruleParamNode["LaunchTime"].asString();
		if(!ruleParamNode["LaunchExpirationTime"].isNull())
			scalingRuleObject.ruleParam.launchExpirationTime = std::stoi(ruleParamNode["LaunchExpirationTime"].asString());
		scalingGroup_.scalingRules.push_back(scalingRuleObject);
	}
	auto scalingGroupConfigNode = scalingGroupNode["ScalingGroupConfig"];
	if(!scalingGroupConfigNode["SpotStrategy"].isNull())
		scalingGroup_.scalingGroupConfig.spotStrategy = scalingGroupConfigNode["SpotStrategy"].asString();
	if(!scalingGroupConfigNode["SysDiskCategory"].isNull())
		scalingGroup_.scalingGroupConfig.sysDiskCategory = scalingGroupConfigNode["SysDiskCategory"].asString();
	if(!scalingGroupConfigNode["SysDiskSize"].isNull())
		scalingGroup_.scalingGroupConfig.sysDiskSize = std::stol(scalingGroupConfigNode["SysDiskSize"].asString());
	if(!scalingGroupConfigNode["DataDiskCategory"].isNull())
		scalingGroup_.scalingGroupConfig.dataDiskCategory = scalingGroupConfigNode["DataDiskCategory"].asString();
	if(!scalingGroupConfigNode["DataDiskSize"].isNull())
		scalingGroup_.scalingGroupConfig.dataDiskSize = std::stol(scalingGroupConfigNode["DataDiskSize"].asString());
	if(!scalingGroupConfigNode["DataDiskCount"].isNull())
		scalingGroup_.scalingGroupConfig.dataDiskCount = std::stoi(scalingGroupConfigNode["DataDiskCount"].asString());
	if(!scalingGroupConfigNode["ScalingMaxSize"].isNull())
		scalingGroup_.scalingGroupConfig.scalingMaxSize = std::stoi(scalingGroupConfigNode["ScalingMaxSize"].asString());
	if(!scalingGroupConfigNode["ScalingMinSize"].isNull())
		scalingGroup_.scalingGroupConfig.scalingMinSize = std::stoi(scalingGroupConfigNode["ScalingMinSize"].asString());
	if(!scalingGroupConfigNode["DefaultCoolDownTime"].isNull())
		scalingGroup_.scalingGroupConfig.defaultCoolDownTime = std::stol(scalingGroupConfigNode["DefaultCoolDownTime"].asString());
	if(!scalingGroupConfigNode["TriggerMode"].isNull())
		scalingGroup_.scalingGroupConfig.triggerMode = scalingGroupConfigNode["TriggerMode"].asString();
	auto allInstanceTypeListNode = scalingGroupConfigNode["InstanceTypeList"]["InstanceTypeWithSpotPrice"];
	for (auto scalingGroupConfigNodeInstanceTypeListInstanceTypeWithSpotPrice : allInstanceTypeListNode)
	{
		ScalingGroup::ScalingGroupConfig::InstanceTypeWithSpotPrice instanceTypeWithSpotPriceObject;
		if(!scalingGroupConfigNodeInstanceTypeListInstanceTypeWithSpotPrice["InstanceType"].isNull())
			instanceTypeWithSpotPriceObject.instanceType = scalingGroupConfigNodeInstanceTypeListInstanceTypeWithSpotPrice["InstanceType"].asString();
		if(!scalingGroupConfigNodeInstanceTypeListInstanceTypeWithSpotPrice["SpotPriceLimit"].isNull())
			instanceTypeWithSpotPriceObject.spotPriceLimit = std::stof(scalingGroupConfigNodeInstanceTypeListInstanceTypeWithSpotPrice["SpotPriceLimit"].asString());
		scalingGroup_.scalingGroupConfig.instanceTypeList.push_back(instanceTypeWithSpotPriceObject);
	}
	auto nodeOfflinePolicyNode = scalingGroupConfigNode["NodeOfflinePolicy"];
	if(!nodeOfflinePolicyNode["Mode"].isNull())
		scalingGroup_.scalingGroupConfig.nodeOfflinePolicy.mode = nodeOfflinePolicyNode["Mode"].asString();
	if(!nodeOfflinePolicyNode["TimeoutMs"].isNull())
		scalingGroup_.scalingGroupConfig.nodeOfflinePolicy.timeoutMs = std::stol(nodeOfflinePolicyNode["TimeoutMs"].asString());
	auto multiAvailablePolicyNode = scalingGroupConfigNode["MultiAvailablePolicy"];
	if(!multiAvailablePolicyNode["PolicyType"].isNull())
		scalingGroup_.scalingGroupConfig.multiAvailablePolicy.policyType = multiAvailablePolicyNode["PolicyType"].asString();
	auto policyParamNode = multiAvailablePolicyNode["PolicyParam"];
	if(!policyParamNode["OnDemandBaseCapacity"].isNull())
		scalingGroup_.scalingGroupConfig.multiAvailablePolicy.policyParam.onDemandBaseCapacity = std::stoi(policyParamNode["OnDemandBaseCapacity"].asString());
	if(!policyParamNode["OnDemandPercentageAboveBaseCapacity"].isNull())
		scalingGroup_.scalingGroupConfig.multiAvailablePolicy.policyParam.onDemandPercentageAboveBaseCapacity = std::stoi(policyParamNode["OnDemandPercentageAboveBaseCapacity"].asString());
	if(!policyParamNode["SpotInstanceRemedy"].isNull())
		scalingGroup_.scalingGroupConfig.multiAvailablePolicy.policyParam.spotInstanceRemedy = policyParamNode["SpotInstanceRemedy"].asString() == "true";
	if(!policyParamNode["SpotInstancePools"].isNull())
		scalingGroup_.scalingGroupConfig.multiAvailablePolicy.policyParam.spotInstancePools = std::stoi(policyParamNode["SpotInstancePools"].asString());
	auto privatePoolOptionsNode = scalingGroupConfigNode["PrivatePoolOptions"];
	if(!privatePoolOptionsNode["Id"].isNull())
		scalingGroup_.scalingGroupConfig.privatePoolOptions.id = privatePoolOptionsNode["Id"].asString();
	if(!privatePoolOptionsNode["MatchCriteria"].isNull())
		scalingGroup_.scalingGroupConfig.privatePoolOptions.matchCriteria = privatePoolOptionsNode["MatchCriteria"].asString();

}

GetScalingGroupResult::ScalingGroup GetScalingGroupResult::getScalingGroup()const
{
	return scalingGroup_;
}

