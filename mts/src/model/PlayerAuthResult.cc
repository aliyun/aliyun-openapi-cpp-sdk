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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allSwitchList = value["SwitchList"]["Switch"];
	for (auto value : allSwitchList)
	{
		Switch switchListObject;
		if(!value["State"].isNull())
			switchListObject.state = value["State"].asString();
		if(!value["FunctionId"].isNull())
			switchListObject.functionId = value["FunctionId"].asString();
		if(!value["SwitchId"].isNull())
			switchListObject.switchId = value["SwitchId"].asString();
		if(!value["FunctionName"].isNull())
			switchListObject.functionName = value["FunctionName"].asString();
		switchList_.push_back(switchListObject);
	}
	if(!value["LogURL"].isNull())
		logURL_ = value["LogURL"].asString();

}

std::string PlayerAuthResult::getLogURL()const
{
	return logURL_;
}

std::vector<PlayerAuthResult::Switch> PlayerAuthResult::getSwitchList()const
{
	return switchList_;
}

