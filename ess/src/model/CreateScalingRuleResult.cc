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

#include <alibabacloud/ess/model/CreateScalingRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

CreateScalingRuleResult::CreateScalingRuleResult() :
	ServiceResult()
{}

CreateScalingRuleResult::CreateScalingRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateScalingRuleResult::~CreateScalingRuleResult()
{}

void CreateScalingRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ScalingRuleAri"].isNull())
		scalingRuleAri_ = value["ScalingRuleAri"].asString();
	if(!value["ScalingRuleId"].isNull())
		scalingRuleId_ = value["ScalingRuleId"].asString();

}

std::string CreateScalingRuleResult::getScalingRuleAri()const
{
	return scalingRuleAri_;
}

std::string CreateScalingRuleResult::getScalingRuleId()const
{
	return scalingRuleId_;
}

