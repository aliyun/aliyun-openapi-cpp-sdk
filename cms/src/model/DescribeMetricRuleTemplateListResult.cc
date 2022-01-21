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

#include <alibabacloud/cms/model/DescribeMetricRuleTemplateListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeMetricRuleTemplateListResult::DescribeMetricRuleTemplateListResult() :
	ServiceResult()
{}

DescribeMetricRuleTemplateListResult::DescribeMetricRuleTemplateListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMetricRuleTemplateListResult::~DescribeMetricRuleTemplateListResult()
{}

void DescribeMetricRuleTemplateListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTemplatesNode = value["Templates"]["Template"];
	for (auto valueTemplatesTemplate : allTemplatesNode)
	{
		_Template templatesObject;
		if(!valueTemplatesTemplate["Description"].isNull())
			templatesObject.description = valueTemplatesTemplate["Description"].asString();
		if(!valueTemplatesTemplate["GmtCreate"].isNull())
			templatesObject.gmtCreate = std::stol(valueTemplatesTemplate["GmtCreate"].asString());
		if(!valueTemplatesTemplate["Name"].isNull())
			templatesObject.name = valueTemplatesTemplate["Name"].asString();
		if(!valueTemplatesTemplate["RestVersion"].isNull())
			templatesObject.restVersion = std::stol(valueTemplatesTemplate["RestVersion"].asString());
		if(!valueTemplatesTemplate["GmtModified"].isNull())
			templatesObject.gmtModified = std::stol(valueTemplatesTemplate["GmtModified"].asString());
		if(!valueTemplatesTemplate["TemplateId"].isNull())
			templatesObject.templateId = std::stol(valueTemplatesTemplate["TemplateId"].asString());
		auto allApplyHistoriesNode = valueTemplatesTemplate["ApplyHistories"]["ApplyHistory"];
		for (auto valueTemplatesTemplateApplyHistoriesApplyHistory : allApplyHistoriesNode)
		{
			_Template::ApplyHistory applyHistoriesObject;
			if(!valueTemplatesTemplateApplyHistoriesApplyHistory["GroupId"].isNull())
				applyHistoriesObject.groupId = std::stol(valueTemplatesTemplateApplyHistoriesApplyHistory["GroupId"].asString());
			if(!valueTemplatesTemplateApplyHistoriesApplyHistory["GroupName"].isNull())
				applyHistoriesObject.groupName = valueTemplatesTemplateApplyHistoriesApplyHistory["GroupName"].asString();
			if(!valueTemplatesTemplateApplyHistoriesApplyHistory["ApplyTime"].isNull())
				applyHistoriesObject.applyTime = std::stol(valueTemplatesTemplateApplyHistoriesApplyHistory["ApplyTime"].asString());
			templatesObject.applyHistories.push_back(applyHistoriesObject);
		}
		templates_.push_back(templatesObject);
	}
	if(!value["Code"].isNull())
		code_ = std::stoi(value["Code"].asString());
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeMetricRuleTemplateListResult::getMessage()const
{
	return message_;
}

long DescribeMetricRuleTemplateListResult::getTotal()const
{
	return total_;
}

std::vector<DescribeMetricRuleTemplateListResult::_Template> DescribeMetricRuleTemplateListResult::getTemplates()const
{
	return templates_;
}

int DescribeMetricRuleTemplateListResult::getCode()const
{
	return code_;
}

bool DescribeMetricRuleTemplateListResult::getSuccess()const
{
	return success_;
}

