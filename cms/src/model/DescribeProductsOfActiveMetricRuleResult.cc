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

#include <alibabacloud/cms/model/DescribeProductsOfActiveMetricRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeProductsOfActiveMetricRuleResult::DescribeProductsOfActiveMetricRuleResult() :
	ServiceResult()
{}

DescribeProductsOfActiveMetricRuleResult::DescribeProductsOfActiveMetricRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeProductsOfActiveMetricRuleResult::~DescribeProductsOfActiveMetricRuleResult()
{}

void DescribeProductsOfActiveMetricRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAllProductInitMetricRuleListNode = value["AllProductInitMetricRuleList"]["AllProductInitMetricRule"];
	for (auto valueAllProductInitMetricRuleListAllProductInitMetricRule : allAllProductInitMetricRuleListNode)
	{
		AllProductInitMetricRule allProductInitMetricRuleListObject;
		if(!valueAllProductInitMetricRuleListAllProductInitMetricRule["Product"].isNull())
			allProductInitMetricRuleListObject.product = valueAllProductInitMetricRuleListAllProductInitMetricRule["Product"].asString();
		auto allAlertInitConfigListNode = valueAllProductInitMetricRuleListAllProductInitMetricRule["AlertInitConfigList"]["AlertInitConfig"];
		for (auto valueAllProductInitMetricRuleListAllProductInitMetricRuleAlertInitConfigListAlertInitConfig : allAlertInitConfigListNode)
		{
			AllProductInitMetricRule::AlertInitConfig alertInitConfigListObject;
			if(!valueAllProductInitMetricRuleListAllProductInitMetricRuleAlertInitConfigListAlertInitConfig["MetricName"].isNull())
				alertInitConfigListObject.metricName = valueAllProductInitMetricRuleListAllProductInitMetricRuleAlertInitConfigListAlertInitConfig["MetricName"].asString();
			if(!valueAllProductInitMetricRuleListAllProductInitMetricRuleAlertInitConfigListAlertInitConfig["EvaluationCount"].isNull())
				alertInitConfigListObject.evaluationCount = valueAllProductInitMetricRuleListAllProductInitMetricRuleAlertInitConfigListAlertInitConfig["EvaluationCount"].asString();
			if(!valueAllProductInitMetricRuleListAllProductInitMetricRuleAlertInitConfigListAlertInitConfig["Namespace"].isNull())
				alertInitConfigListObject._namespace = valueAllProductInitMetricRuleListAllProductInitMetricRuleAlertInitConfigListAlertInitConfig["Namespace"].asString();
			if(!valueAllProductInitMetricRuleListAllProductInitMetricRuleAlertInitConfigListAlertInitConfig["Threshold"].isNull())
				alertInitConfigListObject.threshold = valueAllProductInitMetricRuleListAllProductInitMetricRuleAlertInitConfigListAlertInitConfig["Threshold"].asString();
			if(!valueAllProductInitMetricRuleListAllProductInitMetricRuleAlertInitConfigListAlertInitConfig["Statistics"].isNull())
				alertInitConfigListObject.statistics = valueAllProductInitMetricRuleListAllProductInitMetricRuleAlertInitConfigListAlertInitConfig["Statistics"].asString();
			if(!valueAllProductInitMetricRuleListAllProductInitMetricRuleAlertInitConfigListAlertInitConfig["Period"].isNull())
				alertInitConfigListObject.period = valueAllProductInitMetricRuleListAllProductInitMetricRuleAlertInitConfigListAlertInitConfig["Period"].asString();
			allProductInitMetricRuleListObject.alertInitConfigList.push_back(alertInitConfigListObject);
		}
		allProductInitMetricRuleList_.push_back(allProductInitMetricRuleListObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Datapoints"].isNull())
		datapoints_ = value["Datapoints"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeProductsOfActiveMetricRuleResult::getMessage()const
{
	return message_;
}

std::vector<DescribeProductsOfActiveMetricRuleResult::AllProductInitMetricRule> DescribeProductsOfActiveMetricRuleResult::getAllProductInitMetricRuleList()const
{
	return allProductInitMetricRuleList_;
}

std::string DescribeProductsOfActiveMetricRuleResult::getDatapoints()const
{
	return datapoints_;
}

int DescribeProductsOfActiveMetricRuleResult::getCode()const
{
	return code_;
}

bool DescribeProductsOfActiveMetricRuleResult::getSuccess()const
{
	return success_;
}

