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

#include <alibabacloud/cms/model/DescribeMetricRuleTargetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DescribeMetricRuleTargetsResult::DescribeMetricRuleTargetsResult() :
	ServiceResult()
{}

DescribeMetricRuleTargetsResult::DescribeMetricRuleTargetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeMetricRuleTargetsResult::~DescribeMetricRuleTargetsResult()
{}

void DescribeMetricRuleTargetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allTargetsNode = value["Targets"]["Target"];
	for (auto valueTargetsTarget : allTargetsNode)
	{
		Target targetsObject;
		if(!valueTargetsTarget["Id"].isNull())
			targetsObject.id = valueTargetsTarget["Id"].asString();
		if(!valueTargetsTarget["Arn"].isNull())
			targetsObject.arn = valueTargetsTarget["Arn"].asString();
		if(!valueTargetsTarget["Level"].isNull())
			targetsObject.level = valueTargetsTarget["Level"].asString();
		targets_.push_back(targetsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string DescribeMetricRuleTargetsResult::getMessage()const
{
	return message_;
}

std::vector<DescribeMetricRuleTargetsResult::Target> DescribeMetricRuleTargetsResult::getTargets()const
{
	return targets_;
}

std::string DescribeMetricRuleTargetsResult::getCode()const
{
	return code_;
}

bool DescribeMetricRuleTargetsResult::getSuccess()const
{
	return success_;
}

