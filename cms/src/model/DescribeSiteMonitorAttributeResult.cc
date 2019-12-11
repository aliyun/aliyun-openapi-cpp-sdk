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

#include <alibabacloud/cms/model/DescribeSiteMonitorAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeSiteMonitorAttributeResult::DescribeSiteMonitorAttributeResult() :
	ServiceResult()
{}

DescribeSiteMonitorAttributeResult::DescribeSiteMonitorAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSiteMonitorAttributeResult::~DescribeSiteMonitorAttributeResult()
{}

void DescribeSiteMonitorAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allMetricRulesNode = value["MetricRules"]["MetricRule"];
	for (auto valueMetricRulesMetricRule : allMetricRulesNode)
	{
		MetricRule metricRulesObject;
		if(!valueMetricRulesMetricRule["RuleId"].isNull())
			metricRulesObject.ruleId = valueMetricRulesMetricRule["RuleId"].asString();
		if(!valueMetricRulesMetricRule["RuleName"].isNull())
			metricRulesObject.ruleName = valueMetricRulesMetricRule["RuleName"].asString();
		if(!valueMetricRulesMetricRule["Namespace"].isNull())
			metricRulesObject._namespace = valueMetricRulesMetricRule["Namespace"].asString();
		if(!valueMetricRulesMetricRule["MetricName"].isNull())
			metricRulesObject.metricName = valueMetricRulesMetricRule["MetricName"].asString();
		if(!valueMetricRulesMetricRule["OkActions"].isNull())
			metricRulesObject.okActions = valueMetricRulesMetricRule["OkActions"].asString();
		if(!valueMetricRulesMetricRule["AlarmActions"].isNull())
			metricRulesObject.alarmActions = valueMetricRulesMetricRule["AlarmActions"].asString();
		if(!valueMetricRulesMetricRule["Statistics"].isNull())
			metricRulesObject.statistics = valueMetricRulesMetricRule["Statistics"].asString();
		if(!valueMetricRulesMetricRule["ActionEnable"].isNull())
			metricRulesObject.actionEnable = valueMetricRulesMetricRule["ActionEnable"].asString();
		if(!valueMetricRulesMetricRule["Period"].isNull())
			metricRulesObject.period = valueMetricRulesMetricRule["Period"].asString();
		if(!valueMetricRulesMetricRule["ComparisonOperator"].isNull())
			metricRulesObject.comparisonOperator = valueMetricRulesMetricRule["ComparisonOperator"].asString();
		if(!valueMetricRulesMetricRule["Threshold"].isNull())
			metricRulesObject.threshold = valueMetricRulesMetricRule["Threshold"].asString();
		if(!valueMetricRulesMetricRule["EvaluationCount"].isNull())
			metricRulesObject.evaluationCount = valueMetricRulesMetricRule["EvaluationCount"].asString();
		if(!valueMetricRulesMetricRule["Level"].isNull())
			metricRulesObject.level = valueMetricRulesMetricRule["Level"].asString();
		if(!valueMetricRulesMetricRule["Expression"].isNull())
			metricRulesObject.expression = valueMetricRulesMetricRule["Expression"].asString();
		if(!valueMetricRulesMetricRule["StateValue"].isNull())
			metricRulesObject.stateValue = valueMetricRulesMetricRule["StateValue"].asString();
		if(!valueMetricRulesMetricRule["Dimensions"].isNull())
			metricRulesObject.dimensions = valueMetricRulesMetricRule["Dimensions"].asString();
		metricRules_.push_back(metricRulesObject);
	}
	auto siteMonitorsNode = value["SiteMonitors"];
	if(!siteMonitorsNode["TaskType"].isNull())
		siteMonitors_.taskType = siteMonitorsNode["TaskType"].asString();
	if(!siteMonitorsNode["Address"].isNull())
		siteMonitors_.address = siteMonitorsNode["Address"].asString();
	if(!siteMonitorsNode["TaskState"].isNull())
		siteMonitors_.taskState = siteMonitorsNode["TaskState"].asString();
	if(!siteMonitorsNode["TaskName"].isNull())
		siteMonitors_.taskName = siteMonitorsNode["TaskName"].asString();
	if(!siteMonitorsNode["Interval"].isNull())
		siteMonitors_.interval = siteMonitorsNode["Interval"].asString();
	if(!siteMonitorsNode["TaskId"].isNull())
		siteMonitors_.taskId = siteMonitorsNode["TaskId"].asString();
	if(!siteMonitorsNode["OptionJson"].isNull())
		siteMonitors_.optionJson = siteMonitorsNode["OptionJson"].asString();
	auto allIspCitiesNode = siteMonitorsNode["IspCities"]["IspCity"];
	for (auto siteMonitorsNodeIspCitiesIspCity : allIspCitiesNode)
	{
		SiteMonitors::IspCity ispCityObject;
		if(!siteMonitorsNodeIspCitiesIspCity["CityName"].isNull())
			ispCityObject.cityName = siteMonitorsNodeIspCitiesIspCity["CityName"].asString();
		if(!siteMonitorsNodeIspCitiesIspCity["IspName"].isNull())
			ispCityObject.ispName = siteMonitorsNodeIspCitiesIspCity["IspName"].asString();
		if(!siteMonitorsNodeIspCitiesIspCity["City"].isNull())
			ispCityObject.city = siteMonitorsNodeIspCitiesIspCity["City"].asString();
		if(!siteMonitorsNodeIspCitiesIspCity["Isp"].isNull())
			ispCityObject.isp = siteMonitorsNodeIspCitiesIspCity["Isp"].asString();
		siteMonitors_.ispCities.push_back(ispCityObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::vector<DescribeSiteMonitorAttributeResult::MetricRule> DescribeSiteMonitorAttributeResult::getMetricRules()const
{
	return metricRules_;
}

std::string DescribeSiteMonitorAttributeResult::getMessage()const
{
	return message_;
}

std::string DescribeSiteMonitorAttributeResult::getCode()const
{
	return code_;
}

DescribeSiteMonitorAttributeResult::SiteMonitors DescribeSiteMonitorAttributeResult::getSiteMonitors()const
{
	return siteMonitors_;
}

bool DescribeSiteMonitorAttributeResult::getSuccess()const
{
	return success_;
}

