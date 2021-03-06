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

#include <alibabacloud/ga/model/CreateForwardingRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

CreateForwardingRulesResult::CreateForwardingRulesResult() :
	ServiceResult()
{}

CreateForwardingRulesResult::CreateForwardingRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateForwardingRulesResult::~CreateForwardingRulesResult()
{}

void CreateForwardingRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allForwardingRulesNode = value["ForwardingRules"]["ForwardingRulesItem"];
	for (auto valueForwardingRulesForwardingRulesItem : allForwardingRulesNode)
	{
		ForwardingRulesItem forwardingRulesObject;
		if(!valueForwardingRulesForwardingRulesItem["ForwardingRuleId"].isNull())
			forwardingRulesObject.forwardingRuleId = valueForwardingRulesForwardingRulesItem["ForwardingRuleId"].asString();
		forwardingRules_.push_back(forwardingRulesObject);
	}

}

std::vector<CreateForwardingRulesResult::ForwardingRulesItem> CreateForwardingRulesResult::getForwardingRules()const
{
	return forwardingRules_;
}

