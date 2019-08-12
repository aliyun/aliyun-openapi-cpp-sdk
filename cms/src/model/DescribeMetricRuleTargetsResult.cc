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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allTargets = value["Targets"]["Target"];
	for (auto value : allTargets)
	{
		Target targetsObject;
		if(!value["Id"].isNull())
			targetsObject.id = value["Id"].asString();
		if(!value["Arn"].isNull())
			targetsObject.arn = value["Arn"].asString();
		if(!value["Level"].isNull())
			targetsObject.level = value["Level"].asString();
		targets_.push_back(targetsObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

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

