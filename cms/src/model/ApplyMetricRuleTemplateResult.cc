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

#include <alibabacloud/cms/model/ApplyMetricRuleTemplateResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

ApplyMetricRuleTemplateResult::ApplyMetricRuleTemplateResult() :
	ServiceResult()
{}

ApplyMetricRuleTemplateResult::ApplyMetricRuleTemplateResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ApplyMetricRuleTemplateResult::~ApplyMetricRuleTemplateResult()
{}

void ApplyMetricRuleTemplateResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto resourceNode = value["Resource"];
	if(!resourceNode["GroupId"].isNull())
		resource_.groupId = std::stol(resourceNode["GroupId"].asString());
	auto allAlertResultsNode = resourceNode["AlertResults"]["Result"];
	for (auto resourceNodeAlertResultsResult : allAlertResultsNode)
	{
		Resource::Result resultObject;
		if(!resourceNodeAlertResultsResult["Code"].isNull())
			resultObject.code = resourceNodeAlertResultsResult["Code"].asString();
		if(!resourceNodeAlertResultsResult["Message"].isNull())
			resultObject.message = resourceNodeAlertResultsResult["Message"].asString();
		if(!resourceNodeAlertResultsResult["Success"].isNull())
			resultObject.success = resourceNodeAlertResultsResult["Success"].asString() == "true";
		if(!resourceNodeAlertResultsResult["RuleName"].isNull())
			resultObject.ruleName = resourceNodeAlertResultsResult["RuleName"].asString();
		if(!resourceNodeAlertResultsResult["RuleId"].isNull())
			resultObject.ruleId = resourceNodeAlertResultsResult["RuleId"].asString();
		resource_.alertResults.push_back(resultObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string ApplyMetricRuleTemplateResult::getMessage()const
{
	return message_;
}

ApplyMetricRuleTemplateResult::Resource ApplyMetricRuleTemplateResult::getResource()const
{
	return resource_;
}

int ApplyMetricRuleTemplateResult::getCode()const
{
	return code_;
}

bool ApplyMetricRuleTemplateResult::getSuccess()const
{
	return success_;
}

