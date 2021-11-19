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
		if(!valueMetricRulesMetricRule["MetricName"].isNull())
			metricRulesObject.metricName = valueMetricRulesMetricRule["MetricName"].asString();
		if(!valueMetricRulesMetricRule["EvaluationCount"].isNull())
			metricRulesObject.evaluationCount = valueMetricRulesMetricRule["EvaluationCount"].asString();
		if(!valueMetricRulesMetricRule["Namespace"].isNull())
			metricRulesObject._namespace = valueMetricRulesMetricRule["Namespace"].asString();
		if(!valueMetricRulesMetricRule["OkActions"].isNull())
			metricRulesObject.okActions = valueMetricRulesMetricRule["OkActions"].asString();
		if(!valueMetricRulesMetricRule["AlarmActions"].isNull())
			metricRulesObject.alarmActions = valueMetricRulesMetricRule["AlarmActions"].asString();
		if(!valueMetricRulesMetricRule["RuleId"].isNull())
			metricRulesObject.ruleId = valueMetricRulesMetricRule["RuleId"].asString();
		if(!valueMetricRulesMetricRule["RuleName"].isNull())
			metricRulesObject.ruleName = valueMetricRulesMetricRule["RuleName"].asString();
		if(!valueMetricRulesMetricRule["Period"].isNull())
			metricRulesObject.period = valueMetricRulesMetricRule["Period"].asString();
		if(!valueMetricRulesMetricRule["ComparisonOperator"].isNull())
			metricRulesObject.comparisonOperator = valueMetricRulesMetricRule["ComparisonOperator"].asString();
		if(!valueMetricRulesMetricRule["Expression"].isNull())
			metricRulesObject.expression = valueMetricRulesMetricRule["Expression"].asString();
		if(!valueMetricRulesMetricRule["Dimensions"].isNull())
			metricRulesObject.dimensions = valueMetricRulesMetricRule["Dimensions"].asString();
		if(!valueMetricRulesMetricRule["StateValue"].isNull())
			metricRulesObject.stateValue = valueMetricRulesMetricRule["StateValue"].asString();
		if(!valueMetricRulesMetricRule["ActionEnable"].isNull())
			metricRulesObject.actionEnable = valueMetricRulesMetricRule["ActionEnable"].asString();
		if(!valueMetricRulesMetricRule["Level"].isNull())
			metricRulesObject.level = valueMetricRulesMetricRule["Level"].asString();
		if(!valueMetricRulesMetricRule["Threshold"].isNull())
			metricRulesObject.threshold = valueMetricRulesMetricRule["Threshold"].asString();
		if(!valueMetricRulesMetricRule["Statistics"].isNull())
			metricRulesObject.statistics = valueMetricRulesMetricRule["Statistics"].asString();
		metricRules_.push_back(metricRulesObject);
	}
	auto siteMonitorsNode = value["SiteMonitors"];
	if(!siteMonitorsNode["EndTime"].isNull())
		siteMonitors_.endTime = siteMonitorsNode["EndTime"].asString();
	if(!siteMonitorsNode["TaskType"].isNull())
		siteMonitors_.taskType = siteMonitorsNode["TaskType"].asString();
	if(!siteMonitorsNode["Interval"].isNull())
		siteMonitors_.interval = siteMonitorsNode["Interval"].asString();
	if(!siteMonitorsNode["TaskState"].isNull())
		siteMonitors_.taskState = siteMonitorsNode["TaskState"].asString();
	if(!siteMonitorsNode["TaskName"].isNull())
		siteMonitors_.taskName = siteMonitorsNode["TaskName"].asString();
	if(!siteMonitorsNode["Address"].isNull())
		siteMonitors_.address = siteMonitorsNode["Address"].asString();
	if(!siteMonitorsNode["TaskId"].isNull())
		siteMonitors_.taskId = siteMonitorsNode["TaskId"].asString();
	auto allIspCitiesNode = siteMonitorsNode["IspCities"]["IspCity"];
	for (auto siteMonitorsNodeIspCitiesIspCity : allIspCitiesNode)
	{
		SiteMonitors::IspCity ispCityObject;
		if(!siteMonitorsNodeIspCitiesIspCity["City"].isNull())
			ispCityObject.city = siteMonitorsNodeIspCitiesIspCity["City"].asString();
		if(!siteMonitorsNodeIspCitiesIspCity["IspName"].isNull())
			ispCityObject.ispName = siteMonitorsNodeIspCitiesIspCity["IspName"].asString();
		if(!siteMonitorsNodeIspCitiesIspCity["Isp"].isNull())
			ispCityObject.isp = siteMonitorsNodeIspCitiesIspCity["Isp"].asString();
		if(!siteMonitorsNodeIspCitiesIspCity["CityName"].isNull())
			ispCityObject.cityName = siteMonitorsNodeIspCitiesIspCity["CityName"].asString();
		siteMonitors_.ispCities.push_back(ispCityObject);
	}
	auto optionJsonNode = siteMonitorsNode["OptionJson"];
	if(!optionJsonNode["request_format"].isNull())
		siteMonitors_.optionJson.request_format = optionJsonNode["request_format"].asString();
	if(!optionJsonNode["response_content"].isNull())
		siteMonitors_.optionJson.response_content = optionJsonNode["response_content"].asString();
	if(!optionJsonNode["port"].isNull())
		siteMonitors_.optionJson.port = std::stoi(optionJsonNode["port"].asString());
	if(!optionJsonNode["proxy_protocol"].isNull())
		siteMonitors_.optionJson.proxy_protocol = optionJsonNode["proxy_protocol"].asString() == "true";
	if(!optionJsonNode["authentication"].isNull())
		siteMonitors_.optionJson.authentication = std::stoi(optionJsonNode["authentication"].asString());
	if(!optionJsonNode["match_rule"].isNull())
		siteMonitors_.optionJson.match_rule = std::stoi(optionJsonNode["match_rule"].asString());
	if(!optionJsonNode["dns_match_rule"].isNull())
		siteMonitors_.optionJson.dns_match_rule = optionJsonNode["dns_match_rule"].asString();
	if(!optionJsonNode["ipv6_task"].isNull())
		siteMonitors_.optionJson.ipv6_task = optionJsonNode["ipv6_task"].asString();
	if(!optionJsonNode["request_content"].isNull())
		siteMonitors_.optionJson.request_content = optionJsonNode["request_content"].asString();
	if(!optionJsonNode["acceptable_response_code"].isNull())
		siteMonitors_.optionJson.acceptable_response_code = optionJsonNode["acceptable_response_code"].asString();
	if(!optionJsonNode["username"].isNull())
		siteMonitors_.optionJson.username = optionJsonNode["username"].asString();
	if(!optionJsonNode["traceroute"].isNull())
		siteMonitors_.optionJson.traceroute = std::stol(optionJsonNode["traceroute"].asString());
	if(!optionJsonNode["dns_type"].isNull())
		siteMonitors_.optionJson.dns_type = optionJsonNode["dns_type"].asString();
	if(!optionJsonNode["response_format"].isNull())
		siteMonitors_.optionJson.response_format = optionJsonNode["response_format"].asString();
	if(!optionJsonNode["password"].isNull())
		siteMonitors_.optionJson.password = optionJsonNode["password"].asString();
	if(!optionJsonNode["expect_value"].isNull())
		siteMonitors_.optionJson.expect_value = optionJsonNode["expect_value"].asString();
	if(!optionJsonNode["time_out"].isNull())
		siteMonitors_.optionJson.time_out = std::stol(optionJsonNode["time_out"].asString());
	if(!optionJsonNode["failure_rate"].isNull())
		siteMonitors_.optionJson.failure_rate = std::stof(optionJsonNode["failure_rate"].asString());
	if(!optionJsonNode["header"].isNull())
		siteMonitors_.optionJson.header = optionJsonNode["header"].asString();
	if(!optionJsonNode["cookie"].isNull())
		siteMonitors_.optionJson.cookie = optionJsonNode["cookie"].asString();
	if(!optionJsonNode["ping_num"].isNull())
		siteMonitors_.optionJson.ping_num = std::stoi(optionJsonNode["ping_num"].asString());
	if(!optionJsonNode["http_method"].isNull())
		siteMonitors_.optionJson.http_method = optionJsonNode["http_method"].asString();
	if(!optionJsonNode["unfollow_redirect"].isNull())
		siteMonitors_.optionJson.unfollow_redirect = optionJsonNode["unfollow_redirect"].asString() == "true";
	if(!optionJsonNode["cert_verify"].isNull())
		siteMonitors_.optionJson.cert_verify = optionJsonNode["cert_verify"].asString() == "true";
	if(!optionJsonNode["dns_server"].isNull())
		siteMonitors_.optionJson.dns_server = optionJsonNode["dns_server"].asString();
	if(!optionJsonNode["enable_operator_dns"].isNull())
		siteMonitors_.optionJson.enable_operator_dns = optionJsonNode["enable_operator_dns"].asString() == "true";
	if(!optionJsonNode["attempts"].isNull())
		siteMonitors_.optionJson.attempts = std::stol(optionJsonNode["attempts"].asString());
	if(!optionJsonNode["protocol"].isNull())
		siteMonitors_.optionJson.protocol = optionJsonNode["protocol"].asString();
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

