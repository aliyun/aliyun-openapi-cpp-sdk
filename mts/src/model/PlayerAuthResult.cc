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

#include <alibabacloud/mts/model/PlayerAuthResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Mts;
using namespace AlibabaCloud::Mts::Model;

PlayerAuthResult::PlayerAuthResult() :
	ServiceResult()
{}

PlayerAuthResult::PlayerAuthResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

PlayerAuthResult::~PlayerAuthResult()
{}

void PlayerAuthResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSwitchListNode = value["SwitchList"]["Switch"];
	for (auto valueSwitchListSwitch : allSwitchListNode)
	{
		_Switch switchListObject;
		if(!valueSwitchListSwitch["State"].isNull())
			switchListObject.state = valueSwitchListSwitch["State"].asString();
		if(!valueSwitchListSwitch["FunctionId"].isNull())
			switchListObject.functionId = valueSwitchListSwitch["FunctionId"].asString();
		if(!valueSwitchListSwitch["SwitchId"].isNull())
			switchListObject.switchId = valueSwitchListSwitch["SwitchId"].asString();
		if(!valueSwitchListSwitch["FunctionName"].isNull())
			switchListObject.functionName = valueSwitchListSwitch["FunctionName"].asString();
		switchList_.push_back(switchListObject);
	}
	if(!value["LogURL"].isNull())
		logURL_ = value["LogURL"].asString();

}

std::string PlayerAuthResult::getLogURL()const
{
	return logURL_;
}

std::vector<PlayerAuthResult::_Switch> PlayerAuthResult::getSwitchList()const
{
	return switchList_;
}

