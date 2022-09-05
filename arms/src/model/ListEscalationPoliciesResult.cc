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

#include <alibabacloud/arms/model/ListEscalationPoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListEscalationPoliciesResult::ListEscalationPoliciesResult() :
	ServiceResult()
{}

ListEscalationPoliciesResult::ListEscalationPoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListEscalationPoliciesResult::~ListEscalationPoliciesResult()
{}

void ListEscalationPoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pageBeanNode = value["PageBean"];
	if(!pageBeanNode["Total"].isNull())
		pageBean_.total = std::stol(pageBeanNode["Total"].asString());
	if(!pageBeanNode["Page"].isNull())
		pageBean_.page = std::stol(pageBeanNode["Page"].asString());
	if(!pageBeanNode["Size"].isNull())
		pageBean_.size = std::stol(pageBeanNode["Size"].asString());
	auto allEscalationPoliciesNode = pageBeanNode["EscalationPolicies"]["escalationPoliciesItem"];
	for (auto pageBeanNodeEscalationPoliciesescalationPoliciesItem : allEscalationPoliciesNode)
	{
		PageBean::EscalationPoliciesItem escalationPoliciesItemObject;
		if(!pageBeanNodeEscalationPoliciesescalationPoliciesItem["Id"].isNull())
			escalationPoliciesItemObject.id = std::stol(pageBeanNodeEscalationPoliciesescalationPoliciesItem["Id"].asString());
		if(!pageBeanNodeEscalationPoliciesescalationPoliciesItem["Name"].isNull())
			escalationPoliciesItemObject.name = pageBeanNodeEscalationPoliciesescalationPoliciesItem["Name"].asString();
		pageBean_.escalationPolicies.push_back(escalationPoliciesItemObject);
	}

}

ListEscalationPoliciesResult::PageBean ListEscalationPoliciesResult::getPageBean()const
{
	return pageBean_;
}

