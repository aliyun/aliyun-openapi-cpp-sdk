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

#include <alibabacloud/cms/model/DescribeMetricRuleListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeMetricRuleListResult::DescribeMetricRuleListResult() :
	ServiceResult()
{}

DescribeMetricRuleListResult::DescribeMetricRuleListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMetricRuleListResult::~DescribeMetricRuleListResult()
{}

void DescribeMetricRuleListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAlarmsNode = value["Alarms"]["Alarm"];
	for (auto valueAlarmsAlarm : allAlarmsNode)
	{
		Alarm alarmsObject;
		if(!valueAlarmsAlarm["SilenceTime"].isNull())
			alarmsObject.silenceTime = std::stoi(valueAlarmsAlarm["SilenceTime"].asString());
		if(!valueAlarmsAlarm["MetricName"].isNull())
			alarmsObject.metricName = valueAlarmsAlarm["MetricName"].asString();
		if(!valueAlarmsAlarm["Webhook"].isNull())
			alarmsObject.webhook = valueAlarmsAlarm["Webhook"].asString();
		if(!valueAlarmsAlarm["ContactGroups"].isNull())
			alarmsObject.contactGroups = valueAlarmsAlarm["ContactGroups"].asString();
		if(!valueAlarmsAlarm["SourceType"].isNull())
			alarmsObject.sourceType = valueAlarmsAlarm["SourceType"].asString();
		if(!valueAlarmsAlarm["Namespace"].isNull())
			alarmsObject._namespace = valueAlarmsAlarm["Namespace"].asString();
		if(!valueAlarmsAlarm["MailSubject"].isNull())
			alarmsObject.mailSubject = valueAlarmsAlarm["MailSubject"].asString();
		if(!valueAlarmsAlarm["NoEffectiveInterval"].isNull())
			alarmsObject.noEffectiveInterval = valueAlarmsAlarm["NoEffectiveInterval"].asString();
		if(!valueAlarmsAlarm["EffectiveInterval"].isNull())
			alarmsObject.effectiveInterval = valueAlarmsAlarm["EffectiveInterval"].asString();
		if(!valueAlarmsAlarm["RuleName"].isNull())
			alarmsObject.ruleName = valueAlarmsAlarm["RuleName"].asString();
		if(!valueAlarmsAlarm["AlertState"].isNull())
			alarmsObject.alertState = valueAlarmsAlarm["AlertState"].asString();
		if(!valueAlarmsAlarm["Period"].isNull())
			alarmsObject.period = valueAlarmsAlarm["Period"].asString();
		if(!valueAlarmsAlarm["RuleId"].isNull())
			alarmsObject.ruleId = valueAlarmsAlarm["RuleId"].asString();
		if(!valueAlarmsAlarm["GroupName"].isNull())
			alarmsObject.groupName = valueAlarmsAlarm["GroupName"].asString();
		if(!valueAlarmsAlarm["GroupId"].isNull())
			alarmsObject.groupId = valueAlarmsAlarm["GroupId"].asString();
		if(!valueAlarmsAlarm["Dimensions"].isNull())
			alarmsObject.dimensions = valueAlarmsAlarm["Dimensions"].asString();
		if(!valueAlarmsAlarm["EnableState"].isNull())
			alarmsObject.enableState = valueAlarmsAlarm["EnableState"].asString() == "true";
		if(!valueAlarmsAlarm["GroupBy"].isNull())
			alarmsObject.groupBy = valueAlarmsAlarm["GroupBy"].asString();
		if(!valueAlarmsAlarm["Resources"].isNull())
			alarmsObject.resources = valueAlarmsAlarm["Resources"].asString();
		if(!valueAlarmsAlarm["NoDataPolicy"].isNull())
			alarmsObject.noDataPolicy = valueAlarmsAlarm["NoDataPolicy"].asString();
		if(!valueAlarmsAlarm["Options"].isNull())
			alarmsObject.options = valueAlarmsAlarm["Options"].asString();
		auto allLabelsNode = valueAlarmsAlarm["Labels"]["LabelsItem"];
		for (auto valueAlarmsAlarmLabelsLabelsItem : allLabelsNode)
		{
			Alarm::LabelsItem labelsObject;
			if(!valueAlarmsAlarmLabelsLabelsItem["Key"].isNull())
				labelsObject.key = valueAlarmsAlarmLabelsLabelsItem["Key"].asString();
			if(!valueAlarmsAlarmLabelsLabelsItem["Value"].isNull())
				labelsObject.value = valueAlarmsAlarmLabelsLabelsItem["Value"].asString();
			alarmsObject.labels.push_back(labelsObject);
		}
		auto escalationsNode = value["Escalations"];
		auto infoNode = escalationsNode["Info"];
		if(!infoNode["ComparisonOperator"].isNull())
			alarmsObject.escalations.info.comparisonOperator = infoNode["ComparisonOperator"].asString();
		if(!infoNode["PreCondition"].isNull())
			alarmsObject.escalations.info.preCondition = infoNode["PreCondition"].asString();
		if(!infoNode["Times"].isNull())
			alarmsObject.escalations.info.times = std::stoi(infoNode["Times"].asString());
		if(!infoNode["Threshold"].isNull())
			alarmsObject.escalations.info.threshold = infoNode["Threshold"].asString();
		if(!infoNode["Statistics"].isNull())
			alarmsObject.escalations.info.statistics = infoNode["Statistics"].asString();
		auto warnNode = escalationsNode["Warn"];
		if(!warnNode["ComparisonOperator"].isNull())
			alarmsObject.escalations.warn.comparisonOperator = warnNode["ComparisonOperator"].asString();
		if(!warnNode["PreCondition"].isNull())
			alarmsObject.escalations.warn.preCondition = warnNode["PreCondition"].asString();
		if(!warnNode["Times"].isNull())
			alarmsObject.escalations.warn.times = std::stoi(warnNode["Times"].asString());
		if(!warnNode["Threshold"].isNull())
			alarmsObject.escalations.warn.threshold = warnNode["Threshold"].asString();
		if(!warnNode["Statistics"].isNull())
			alarmsObject.escalations.warn.statistics = warnNode["Statistics"].asString();
		auto criticalNode = escalationsNode["Critical"];
		if(!criticalNode["ComparisonOperator"].isNull())
			alarmsObject.escalations.critical.comparisonOperator = criticalNode["ComparisonOperator"].asString();
		if(!criticalNode["PreCondition"].isNull())
			alarmsObject.escalations.critical.preCondition = criticalNode["PreCondition"].asString();
		if(!criticalNode["Times"].isNull())
			alarmsObject.escalations.critical.times = std::stoi(criticalNode["Times"].asString());
		if(!criticalNode["Threshold"].isNull())
			alarmsObject.escalations.critical.threshold = criticalNode["Threshold"].asString();
		if(!criticalNode["Statistics"].isNull())
			alarmsObject.escalations.critical.statistics = criticalNode["Statistics"].asString();
		auto compositeExpressionNode = value["CompositeExpression"];
		if(!compositeExpressionNode["Level"].isNull())
			alarmsObject.compositeExpression.level = compositeExpressionNode["Level"].asString();
		if(!compositeExpressionNode["ExpressionListJoin"].isNull())
			alarmsObject.compositeExpression.expressionListJoin = compositeExpressionNode["ExpressionListJoin"].asString();
		if(!compositeExpressionNode["ExpressionRaw"].isNull())
			alarmsObject.compositeExpression.expressionRaw = compositeExpressionNode["ExpressionRaw"].asString();
		if(!compositeExpressionNode["Times"].isNull())
			alarmsObject.compositeExpression.times = std::stoi(compositeExpressionNode["Times"].asString());
		auto allExpressionListNode = compositeExpressionNode["ExpressionList"]["ExpressionListItem"];
		for (auto compositeExpressionNodeExpressionListExpressionListItem : allExpressionListNode)
		{
			Alarm::CompositeExpression::ExpressionListItem expressionListItemObject;
			if(!compositeExpressionNodeExpressionListExpressionListItem["MetricName"].isNull())
				expressionListItemObject.metricName = compositeExpressionNodeExpressionListExpressionListItem["MetricName"].asString();
			if(!compositeExpressionNodeExpressionListExpressionListItem["ComparisonOperator"].isNull())
				expressionListItemObject.comparisonOperator = compositeExpressionNodeExpressionListExpressionListItem["ComparisonOperator"].asString();
			if(!compositeExpressionNodeExpressionListExpressionListItem["Statistics"].isNull())
				expressionListItemObject.statistics = compositeExpressionNodeExpressionListExpressionListItem["Statistics"].asString();
			if(!compositeExpressionNodeExpressionListExpressionListItem["Threshold"].isNull())
				expressionListItemObject.threshold = compositeExpressionNodeExpressionListExpressionListItem["Threshold"].asString();
			if(!compositeExpressionNodeExpressionListExpressionListItem["Period"].isNull())
				expressionListItemObject.period = std::stoi(compositeExpressionNodeExpressionListExpressionListItem["Period"].asString());
			if(!compositeExpressionNodeExpressionListExpressionListItem["Id"].isNull())
				expressionListItemObject.id = compositeExpressionNodeExpressionListExpressionListItem["Id"].asString();
			alarmsObject.compositeExpression.expressionList.push_back(expressionListItemObject);
		}
		auto prometheusNode = value["Prometheus"];
		if(!prometheusNode["PromQL"].isNull())
			alarmsObject.prometheus.promQL = prometheusNode["PromQL"].asString();
		if(!prometheusNode["Level"].isNull())
			alarmsObject.prometheus.level = prometheusNode["Level"].asString();
		if(!prometheusNode["Times"].isNull())
			alarmsObject.prometheus.times = std::stol(prometheusNode["Times"].asString());
		auto allAnnotationsNode = prometheusNode["Annotations"]["AnnotationsItem"];
		for (auto prometheusNodeAnnotationsAnnotationsItem : allAnnotationsNode)
		{
			Alarm::Prometheus::AnnotationsItem annotationsItemObject;
			if(!prometheusNodeAnnotationsAnnotationsItem["Key"].isNull())
				annotationsItemObject.key = prometheusNodeAnnotationsAnnotationsItem["Key"].asString();
			if(!prometheusNodeAnnotationsAnnotationsItem["Value"].isNull())
				annotationsItemObject.value = prometheusNodeAnnotationsAnnotationsItem["Value"].asString();
			alarmsObject.prometheus.annotations.push_back(annotationsItemObject);
		}
		alarms_.push_back(alarmsObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Total"].isNull())
		total_ = value["Total"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeMetricRuleListResult::getMessage()const
{
	return message_;
}

std::string DescribeMetricRuleListResult::getTotal()const
{
	return total_;
}

std::vector<DescribeMetricRuleListResult::Alarm> DescribeMetricRuleListResult::getAlarms()const
{
	return alarms_;
}

int DescribeMetricRuleListResult::getCode()const
{
	return code_;
}

bool DescribeMetricRuleListResult::getSuccess()const
{
	return success_;
}

