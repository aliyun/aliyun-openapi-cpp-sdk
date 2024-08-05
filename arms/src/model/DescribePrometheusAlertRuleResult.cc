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

#include <alibabacloud/arms/model/DescribePrometheusAlertRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

DescribePrometheusAlertRuleResult::DescribePrometheusAlertRuleResult() :
	ServiceResult()
{}

DescribePrometheusAlertRuleResult::DescribePrometheusAlertRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePrometheusAlertRuleResult::~DescribePrometheusAlertRuleResult()
{}

void DescribePrometheusAlertRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto prometheusAlertRuleNode = value["PrometheusAlertRule"];
	if(!prometheusAlertRuleNode["Status"].isNull())
		prometheusAlertRule_.status = std::stoi(prometheusAlertRuleNode["Status"].asString());
	if(!prometheusAlertRuleNode["Type"].isNull())
		prometheusAlertRule_.type = prometheusAlertRuleNode["Type"].asString();
	if(!prometheusAlertRuleNode["NotifyType"].isNull())
		prometheusAlertRule_.notifyType = prometheusAlertRuleNode["NotifyType"].asString();
	if(!prometheusAlertRuleNode["Expression"].isNull())
		prometheusAlertRule_.expression = prometheusAlertRuleNode["Expression"].asString();
	if(!prometheusAlertRuleNode["Message"].isNull())
		prometheusAlertRule_.message = prometheusAlertRuleNode["Message"].asString();
	if(!prometheusAlertRuleNode["Duration"].isNull())
		prometheusAlertRule_.duration = prometheusAlertRuleNode["Duration"].asString();
	if(!prometheusAlertRuleNode["DispatchRuleId"].isNull())
		prometheusAlertRule_.dispatchRuleId = std::stol(prometheusAlertRuleNode["DispatchRuleId"].asString());
	if(!prometheusAlertRuleNode["AlertName"].isNull())
		prometheusAlertRule_.alertName = prometheusAlertRuleNode["AlertName"].asString();
	if(!prometheusAlertRuleNode["AlertId"].isNull())
		prometheusAlertRule_.alertId = std::stol(prometheusAlertRuleNode["AlertId"].asString());
	if(!prometheusAlertRuleNode["ClusterId"].isNull())
		prometheusAlertRule_.clusterId = prometheusAlertRuleNode["ClusterId"].asString();
	auto allLabelsNode = prometheusAlertRuleNode["Labels"]["Label"];
	for (auto prometheusAlertRuleNodeLabelsLabel : allLabelsNode)
	{
		PrometheusAlertRule::Label labelObject;
		if(!prometheusAlertRuleNodeLabelsLabel["Name"].isNull())
			labelObject.name = prometheusAlertRuleNodeLabelsLabel["Name"].asString();
		if(!prometheusAlertRuleNodeLabelsLabel["Value"].isNull())
			labelObject.value = prometheusAlertRuleNodeLabelsLabel["Value"].asString();
		prometheusAlertRule_.labels.push_back(labelObject);
	}
	auto allAnnotationsNode = prometheusAlertRuleNode["Annotations"]["Annotation"];
	for (auto prometheusAlertRuleNodeAnnotationsAnnotation : allAnnotationsNode)
	{
		PrometheusAlertRule::Annotation annotationObject;
		if(!prometheusAlertRuleNodeAnnotationsAnnotation["Name"].isNull())
			annotationObject.name = prometheusAlertRuleNodeAnnotationsAnnotation["Name"].asString();
		if(!prometheusAlertRuleNodeAnnotationsAnnotation["Value"].isNull())
			annotationObject.value = prometheusAlertRuleNodeAnnotationsAnnotation["Value"].asString();
		prometheusAlertRule_.annotations.push_back(annotationObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stol(value["Code"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DescribePrometheusAlertRuleResult::getMessage()const
{
	return message_;
}

DescribePrometheusAlertRuleResult::PrometheusAlertRule DescribePrometheusAlertRuleResult::getPrometheusAlertRule()const
{
	return prometheusAlertRule_;
}

long DescribePrometheusAlertRuleResult::getCode()const
{
	return code_;
}

bool DescribePrometheusAlertRuleResult::getSuccess()const
{
	return success_;
}

