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

#include <alibabacloud/rds/model/DescribeDampPolicyByPolicyNameResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDampPolicyByPolicyNameResult::DescribeDampPolicyByPolicyNameResult() :
	ServiceResult()
{}

DescribeDampPolicyByPolicyNameResult::DescribeDampPolicyByPolicyNameResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDampPolicyByPolicyNameResult::~DescribeDampPolicyByPolicyNameResult()
{}

void DescribeDampPolicyByPolicyNameResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	policy_ = value["Policy"].asString();
	timeRules_ = value["TimeRules"].asString();
	actionRules_ = value["ActionRules"].asString();
	sourceRules_ = value["SourceRules"].asString();
	handler_ = value["Handler"].asString();

}

std::string DescribeDampPolicyByPolicyNameResult::getPolicy()const
{
	return policy_;
}

void DescribeDampPolicyByPolicyNameResult::setPolicy(const std::string& policy)
{
	policy_ = policy;
}

std::string DescribeDampPolicyByPolicyNameResult::getTimeRules()const
{
	return timeRules_;
}

void DescribeDampPolicyByPolicyNameResult::setTimeRules(const std::string& timeRules)
{
	timeRules_ = timeRules;
}

std::string DescribeDampPolicyByPolicyNameResult::getActionRules()const
{
	return actionRules_;
}

void DescribeDampPolicyByPolicyNameResult::setActionRules(const std::string& actionRules)
{
	actionRules_ = actionRules;
}

std::string DescribeDampPolicyByPolicyNameResult::getHandler()const
{
	return handler_;
}

void DescribeDampPolicyByPolicyNameResult::setHandler(const std::string& handler)
{
	handler_ = handler;
}

std::string DescribeDampPolicyByPolicyNameResult::getSourceRules()const
{
	return sourceRules_;
}

void DescribeDampPolicyByPolicyNameResult::setSourceRules(const std::string& sourceRules)
{
	sourceRules_ = sourceRules;
}

