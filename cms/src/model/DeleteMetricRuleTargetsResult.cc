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

#include <alibabacloud/cms/model/DeleteMetricRuleTargetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

DeleteMetricRuleTargetsResult::DeleteMetricRuleTargetsResult() :
	ServiceResult()
{}

DeleteMetricRuleTargetsResult::DeleteMetricRuleTargetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DeleteMetricRuleTargetsResult::~DeleteMetricRuleTargetsResult()
{}

void DeleteMetricRuleTargetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto failIdsNode = value["FailIds"];
		auto allTargetIds = failIdsNode["TargetIds"]["TargetId"];
		for (auto value : allTargetIds)
			failIds_.targetIds.push_back(value.asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();

}

std::string DeleteMetricRuleTargetsResult::getMessage()const
{
	return message_;
}

std::string DeleteMetricRuleTargetsResult::getCode()const
{
	return code_;
}

DeleteMetricRuleTargetsResult::FailIds DeleteMetricRuleTargetsResult::getFailIds()const
{
	return failIds_;
}

bool DeleteMetricRuleTargetsResult::getSuccess()const
{
	return success_;
}

