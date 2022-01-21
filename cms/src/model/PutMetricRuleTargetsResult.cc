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

#include <alibabacloud/cms/model/PutMetricRuleTargetsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Cms;
using namespace AlibabaCloud::Cms::Model;

PutMetricRuleTargetsResult::PutMetricRuleTargetsResult() :
	ServiceResult()
{}

PutMetricRuleTargetsResult::PutMetricRuleTargetsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PutMetricRuleTargetsResult::~PutMetricRuleTargetsResult()
{}

void PutMetricRuleTargetsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto failDataNode = value["FailData"];
	auto allTargetsNode = failDataNode["Targets"]["Target"];
	for (auto failDataNodeTargetsTarget : allTargetsNode)
	{
		FailData::Target targetObject;
		if(!failDataNodeTargetsTarget["Id"].isNull())
			targetObject.id = failDataNodeTargetsTarget["Id"].asString();
		if(!failDataNodeTargetsTarget["Arn"].isNull())
			targetObject.arn = failDataNodeTargetsTarget["Arn"].asString();
		if(!failDataNodeTargetsTarget["Level"].isNull())
			targetObject.level = failDataNodeTargetsTarget["Level"].asString();
		failData_.targets.push_back(targetObject);
	}
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string PutMetricRuleTargetsResult::getMessage()const
{
	return message_;
}

PutMetricRuleTargetsResult::FailData PutMetricRuleTargetsResult::getFailData()const
{
	return failData_;
}

std::string PutMetricRuleTargetsResult::getCode()const
{
	return code_;
}

bool PutMetricRuleTargetsResult::getSuccess()const
{
	return success_;
}

